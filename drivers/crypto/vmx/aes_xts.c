/**
 * AES XTS routines supporting VMX In-core instructions on Power 8
 *
 * Copyright (C) 2015 International Business Machines Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundations; version 2 only.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY of FITNESS FOR A PARTICUPAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * Author: Leonidas S. Barbosa <leosilva@linux.vnet.ibm.com>
 */

#include <linux/types.h>
#include <linux/err.h>
#include <linux/crypto.h>
#include <linux/delay.h>
#include <linux/hardirq.h>
#include <asm/switch_to.h>
#include <crypto/aes.h>
#include <crypto/scatterwalk.h>
#include <crypto/xts.h>

#include "aesp8-ppc.h"

struct p8_aes_xts_ctx
{
	struct crypto_blkcipher *fallback;
	struct aes_key enc_key;
	struct aes_key dec_key;
	struct aes_key tweak_key;
};

static int p8_aes_xts_init(struct crypto_tfm *tfm)
{
	const char *alg;
	struct crypto_blkcipher *fallback;
	struct p8_aes_xts_ctx *ctx = crypto_tfm_ctx(tfm);

	if (!(alg = crypto_tfm_alg_name(tfm)))
	{
		printk(KERN_ERR "Failed to get algorithm name.\n");
		return -ENOENT;
	}

	fallback =
		crypto_alloc_blkcipher(alg, 0, CRYPTO_ALG_NEED_FALLBACK);

	if (IS_ERR(fallback))
	{
		printk(KERN_ERR
			   "Failed to allocate transformation for '%s': %ld\n",
			   alg, PTR_ERR(fallback));
		return PTR_ERR(fallback);
	}

	printk(KERN_INFO "Using '%s' as fallback implementation.\n",
		   crypto_tfm_alg_driver_name((struct crypto_tfm *) fallback));

	crypto_blkcipher_set_flags(
		fallback,
		crypto_blkcipher_get_flags((struct crypto_blkcipher *)tfm));
	ctx->fallback = fallback;

	return 0;
}

static void p8_aes_xts_exit(struct crypto_tfm *tfm)
{
	struct p8_aes_xts_ctx *ctx = crypto_tfm_ctx(tfm);

	if (ctx->fallback)
	{
		crypto_free_blkcipher(ctx->fallback);
		ctx->fallback = NULL;
	}
}

static int p8_aes_xts_setkey(struct crypto_tfm *tfm, const u8 *key,
							 unsigned int keylen)
{
	int ret;
	struct p8_aes_xts_ctx *ctx = crypto_tfm_ctx(tfm);

	ret = xts_check_key(tfm, key, keylen);

	if (ret)
	{
		return ret;
	}

	preempt_disable();
	pagefault_disable();
	enable_kernel_vsx();
	ret = aes_p8_set_encrypt_key(key + keylen / 2, (keylen / 2) * 8, &ctx->tweak_key);
	ret += aes_p8_set_encrypt_key(key, (keylen / 2) * 8, &ctx->enc_key);
	ret += aes_p8_set_decrypt_key(key, (keylen / 2) * 8, &ctx->dec_key);
	disable_kernel_vsx();
	pagefault_enable();
	preempt_enable();

	ret += crypto_blkcipher_setkey(ctx->fallback, key, keylen);
	return ret;
}

static int p8_aes_xts_crypt(struct blkcipher_desc *desc,
							struct scatterlist *dst,
							struct scatterlist *src,
							unsigned int nbytes, int enc)
{
	int ret;
	u8 tweak[AES_BLOCK_SIZE];
	u8 *iv;
	struct blkcipher_walk walk;
	struct p8_aes_xts_ctx *ctx =
		crypto_tfm_ctx(crypto_blkcipher_tfm(desc->tfm));
	struct blkcipher_desc fallback_desc =
	{
		.tfm = ctx->fallback,
		.info = desc->info,
		.flags = desc->flags
	};

	if (in_interrupt())
	{
		ret = enc ? crypto_blkcipher_encrypt(&fallback_desc, dst, src, nbytes) :
			  crypto_blkcipher_decrypt(&fallback_desc, dst, src, nbytes);
	}
	else
	{
		preempt_disable();
		pagefault_disable();
		enable_kernel_vsx();

		blkcipher_walk_init(&walk, dst, src, nbytes);

		ret = blkcipher_walk_virt(desc, &walk);
		iv = walk.iv;
		memset(tweak, 0, AES_BLOCK_SIZE);
		aes_p8_encrypt(iv, tweak, &ctx->tweak_key);

		while ((nbytes = walk.nbytes))
		{
			if (enc)
				aes_p8_xts_encrypt(walk.src.virt.addr, walk.dst.virt.addr,
								   nbytes & AES_BLOCK_MASK, &ctx->enc_key, NULL, tweak);
			else
				aes_p8_xts_decrypt(walk.src.virt.addr, walk.dst.virt.addr,
								   nbytes & AES_BLOCK_MASK, &ctx->dec_key, NULL, tweak);

			nbytes &= AES_BLOCK_SIZE - 1;
			ret = blkcipher_walk_done(desc, &walk, nbytes);
		}

		disable_kernel_vsx();
		pagefault_enable();
		preempt_enable();
	}

	return ret;
}

static int p8_aes_xts_encrypt(struct blkcipher_desc *desc,
							  struct scatterlist *dst,
							  struct scatterlist *src, unsigned int nbytes)
{
	return p8_aes_xts_crypt(desc, dst, src, nbytes, 1);
}

static int p8_aes_xts_decrypt(struct blkcipher_desc *desc,
							  struct scatterlist *dst,
							  struct scatterlist *src, unsigned int nbytes)
{
	return p8_aes_xts_crypt(desc, dst, src, nbytes, 0);
}

struct crypto_alg p8_aes_xts_alg =
{
	.cra_name = "xts(aes)",
	.cra_driver_name = "p8_aes_xts",
	.cra_module = THIS_MODULE,
	.cra_priority = 2000,
	.cra_type = &crypto_blkcipher_type,
	.cra_flags = CRYPTO_ALG_TYPE_BLKCIPHER | CRYPTO_ALG_NEED_FALLBACK,
	.cra_alignmask = 0,
	.cra_blocksize = AES_BLOCK_SIZE,
	.cra_ctxsize = sizeof(struct p8_aes_xts_ctx),
	.cra_init = p8_aes_xts_init,
	.cra_exit = p8_aes_xts_exit,
	.cra_blkcipher = {
		.ivsize = AES_BLOCK_SIZE,
		.min_keysize = 2 * AES_MIN_KEY_SIZE,
		.max_keysize = 2 * AES_MAX_KEY_SIZE,
		.setkey	 = p8_aes_xts_setkey,
		.encrypt = p8_aes_xts_encrypt,
		.decrypt = p8_aes_xts_decrypt,
	}
};
