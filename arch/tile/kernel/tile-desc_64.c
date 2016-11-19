/* TILE-Gx opcode information.
 *
 * Copyright 2011 Tilera Corporation. All Rights Reserved.
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License
 *   as published by the Free Software Foundation, version 2.
 *
 *   This program is distributed in the hope that it will be useful, but
 *   WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, GOOD TITLE or
 *   NON INFRINGEMENT.  See the GNU General Public License for
 *   more details.
 *
 *
 *
 *
 *
 */

/* This define is BFD_RELOC_##x for real bfd, or -1 for everyone else. */
#define BFD_RELOC(x) -1

/* Special registers. */
#define TREG_LR 55
#define TREG_SN 56
#define TREG_ZERO 63

#include <linux/stddef.h>
#include <asm/tile-desc.h>

const struct tilegx_opcode tilegx_opcodes[334] =
{
	{
		"bpt", TILEGX_OPC_BPT, 0x2, 0, TREG_ZERO, 0,
		{ { 0, }, {  }, { 0, }, { 0, }, { 0, } },
	},
	{
		"info", TILEGX_OPC_INFO, 0xf, 1, TREG_ZERO, 1,
		{ { 0 }, { 1 }, { 2 }, { 3 }, { 0, } },
	},
	{
		"infol", TILEGX_OPC_INFOL, 0x3, 1, TREG_ZERO, 1,
		{ { 4 }, { 5 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"move", TILEGX_OPC_MOVE, 0xf, 2, TREG_ZERO, 1,
		{ { 6, 7 }, { 8, 9 }, { 10, 11 }, { 12, 13 }, { 0, } },
	},
	{
		"movei", TILEGX_OPC_MOVEI, 0xf, 2, TREG_ZERO, 1,
		{ { 6, 0 }, { 8, 1 }, { 10, 2 }, { 12, 3 }, { 0, } },
	},
	{
		"moveli", TILEGX_OPC_MOVELI, 0x3, 2, TREG_ZERO, 1,
		{ { 6, 4 }, { 8, 5 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"prefetch", TILEGX_OPC_PREFETCH, 0x12, 1, TREG_ZERO, 1,
		{ { 0, }, { 9 }, { 0, }, { 0, }, { 14 } },
	},
	{
		"prefetch_add_l1", TILEGX_OPC_PREFETCH_ADD_L1, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 15, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"prefetch_add_l1_fault", TILEGX_OPC_PREFETCH_ADD_L1_FAULT, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 15, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"prefetch_add_l2", TILEGX_OPC_PREFETCH_ADD_L2, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 15, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"prefetch_add_l2_fault", TILEGX_OPC_PREFETCH_ADD_L2_FAULT, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 15, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"prefetch_add_l3", TILEGX_OPC_PREFETCH_ADD_L3, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 15, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"prefetch_add_l3_fault", TILEGX_OPC_PREFETCH_ADD_L3_FAULT, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 15, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"prefetch_l1", TILEGX_OPC_PREFETCH_L1, 0x12, 1, TREG_ZERO, 1,
		{ { 0, }, { 9 }, { 0, }, { 0, }, { 14 } },
	},
	{
		"prefetch_l1_fault", TILEGX_OPC_PREFETCH_L1_FAULT, 0x12, 1, TREG_ZERO, 1,
		{ { 0, }, { 9 }, { 0, }, { 0, }, { 14 } },
	},
	{
		"prefetch_l2", TILEGX_OPC_PREFETCH_L2, 0x12, 1, TREG_ZERO, 1,
		{ { 0, }, { 9 }, { 0, }, { 0, }, { 14 } },
	},
	{
		"prefetch_l2_fault", TILEGX_OPC_PREFETCH_L2_FAULT, 0x12, 1, TREG_ZERO, 1,
		{ { 0, }, { 9 }, { 0, }, { 0, }, { 14 } },
	},
	{
		"prefetch_l3", TILEGX_OPC_PREFETCH_L3, 0x12, 1, TREG_ZERO, 1,
		{ { 0, }, { 9 }, { 0, }, { 0, }, { 14 } },
	},
	{
		"prefetch_l3_fault", TILEGX_OPC_PREFETCH_L3_FAULT, 0x12, 1, TREG_ZERO, 1,
		{ { 0, }, { 9 }, { 0, }, { 0, }, { 14 } },
	},
	{
		"raise", TILEGX_OPC_RAISE, 0x2, 0, TREG_ZERO, 1,
		{ { 0, }, {  }, { 0, }, { 0, }, { 0, } },
	},
	{
		"add", TILEGX_OPC_ADD, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"addi", TILEGX_OPC_ADDI, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 0 }, { 8, 9, 1 }, { 10, 11, 2 }, { 12, 13, 3 }, { 0, } },
	},
	{
		"addli", TILEGX_OPC_ADDLI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 4 }, { 8, 9, 5 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"addx", TILEGX_OPC_ADDX, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"addxi", TILEGX_OPC_ADDXI, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 0 }, { 8, 9, 1 }, { 10, 11, 2 }, { 12, 13, 3 }, { 0, } },
	},
	{
		"addxli", TILEGX_OPC_ADDXLI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 4 }, { 8, 9, 5 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"addxsc", TILEGX_OPC_ADDXSC, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"and", TILEGX_OPC_AND, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"andi", TILEGX_OPC_ANDI, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 0 }, { 8, 9, 1 }, { 10, 11, 2 }, { 12, 13, 3 }, { 0, } },
	},
	{
		"beqz", TILEGX_OPC_BEQZ, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 20 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"beqzt", TILEGX_OPC_BEQZT, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 20 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"bfexts", TILEGX_OPC_BFEXTS, 0x1, 4, TREG_ZERO, 1,
		{ { 6, 7, 21, 22 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"bfextu", TILEGX_OPC_BFEXTU, 0x1, 4, TREG_ZERO, 1,
		{ { 6, 7, 21, 22 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"bfins", TILEGX_OPC_BFINS, 0x1, 4, TREG_ZERO, 1,
		{ { 23, 7, 21, 22 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"bgez", TILEGX_OPC_BGEZ, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 20 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"bgezt", TILEGX_OPC_BGEZT, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 20 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"bgtz", TILEGX_OPC_BGTZ, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 20 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"bgtzt", TILEGX_OPC_BGTZT, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 20 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"blbc", TILEGX_OPC_BLBC, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 20 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"blbct", TILEGX_OPC_BLBCT, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 20 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"blbs", TILEGX_OPC_BLBS, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 20 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"blbst", TILEGX_OPC_BLBST, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 20 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"blez", TILEGX_OPC_BLEZ, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 20 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"blezt", TILEGX_OPC_BLEZT, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 20 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"bltz", TILEGX_OPC_BLTZ, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 20 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"bltzt", TILEGX_OPC_BLTZT, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 20 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"bnez", TILEGX_OPC_BNEZ, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 20 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"bnezt", TILEGX_OPC_BNEZT, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 20 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"clz", TILEGX_OPC_CLZ, 0x5, 2, TREG_ZERO, 1,
		{ { 6, 7 }, { 0, }, { 10, 11 }, { 0, }, { 0, } },
	},
	{
		"cmoveqz", TILEGX_OPC_CMOVEQZ, 0x5, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 24, 11, 18 }, { 0, }, { 0, } },
	},
	{
		"cmovnez", TILEGX_OPC_CMOVNEZ, 0x5, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 24, 11, 18 }, { 0, }, { 0, } },
	},
	{
		"cmpeq", TILEGX_OPC_CMPEQ, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"cmpeqi", TILEGX_OPC_CMPEQI, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 0 }, { 8, 9, 1 }, { 10, 11, 2 }, { 12, 13, 3 }, { 0, } },
	},
	{
		"cmpexch", TILEGX_OPC_CMPEXCH, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"cmpexch4", TILEGX_OPC_CMPEXCH4, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"cmples", TILEGX_OPC_CMPLES, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"cmpleu", TILEGX_OPC_CMPLEU, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"cmplts", TILEGX_OPC_CMPLTS, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"cmpltsi", TILEGX_OPC_CMPLTSI, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 0 }, { 8, 9, 1 }, { 10, 11, 2 }, { 12, 13, 3 }, { 0, } },
	},
	{
		"cmpltu", TILEGX_OPC_CMPLTU, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"cmpltui", TILEGX_OPC_CMPLTUI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 0 }, { 8, 9, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"cmpne", TILEGX_OPC_CMPNE, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"cmul", TILEGX_OPC_CMUL, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"cmula", TILEGX_OPC_CMULA, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"cmulaf", TILEGX_OPC_CMULAF, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"cmulf", TILEGX_OPC_CMULF, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"cmulfr", TILEGX_OPC_CMULFR, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"cmulh", TILEGX_OPC_CMULH, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"cmulhr", TILEGX_OPC_CMULHR, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"crc32_32", TILEGX_OPC_CRC32_32, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"crc32_8", TILEGX_OPC_CRC32_8, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ctz", TILEGX_OPC_CTZ, 0x5, 2, TREG_ZERO, 1,
		{ { 6, 7 }, { 0, }, { 10, 11 }, { 0, }, { 0, } },
	},
	{
		"dblalign", TILEGX_OPC_DBLALIGN, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"dblalign2", TILEGX_OPC_DBLALIGN2, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"dblalign4", TILEGX_OPC_DBLALIGN4, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"dblalign6", TILEGX_OPC_DBLALIGN6, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"drain", TILEGX_OPC_DRAIN, 0x2, 0, TREG_ZERO, 0,
		{ { 0, }, {  }, { 0, }, { 0, }, { 0, } },
	},
	{
		"dtlbpr", TILEGX_OPC_DTLBPR, 0x2, 1, TREG_ZERO, 1,
		{ { 0, }, { 9 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"exch", TILEGX_OPC_EXCH, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"exch4", TILEGX_OPC_EXCH4, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fdouble_add_flags", TILEGX_OPC_FDOUBLE_ADD_FLAGS, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fdouble_addsub", TILEGX_OPC_FDOUBLE_ADDSUB, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fdouble_mul_flags", TILEGX_OPC_FDOUBLE_MUL_FLAGS, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fdouble_pack1", TILEGX_OPC_FDOUBLE_PACK1, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fdouble_pack2", TILEGX_OPC_FDOUBLE_PACK2, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fdouble_sub_flags", TILEGX_OPC_FDOUBLE_SUB_FLAGS, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fdouble_unpack_max", TILEGX_OPC_FDOUBLE_UNPACK_MAX, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fdouble_unpack_min", TILEGX_OPC_FDOUBLE_UNPACK_MIN, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fetchadd", TILEGX_OPC_FETCHADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fetchadd4", TILEGX_OPC_FETCHADD4, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fetchaddgez", TILEGX_OPC_FETCHADDGEZ, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fetchaddgez4", TILEGX_OPC_FETCHADDGEZ4, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fetchand", TILEGX_OPC_FETCHAND, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fetchand4", TILEGX_OPC_FETCHAND4, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fetchor", TILEGX_OPC_FETCHOR, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fetchor4", TILEGX_OPC_FETCHOR4, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"finv", TILEGX_OPC_FINV, 0x2, 1, TREG_ZERO, 1,
		{ { 0, }, { 9 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"flush", TILEGX_OPC_FLUSH, 0x2, 1, TREG_ZERO, 1,
		{ { 0, }, { 9 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"flushwb", TILEGX_OPC_FLUSHWB, 0x2, 0, TREG_ZERO, 1,
		{ { 0, }, {  }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fnop", TILEGX_OPC_FNOP, 0xf, 0, TREG_ZERO, 1,
		{ {  }, {  }, {  }, {  }, { 0, } },
	},
	{
		"fsingle_add1", TILEGX_OPC_FSINGLE_ADD1, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fsingle_addsub2", TILEGX_OPC_FSINGLE_ADDSUB2, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fsingle_mul1", TILEGX_OPC_FSINGLE_MUL1, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fsingle_mul2", TILEGX_OPC_FSINGLE_MUL2, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fsingle_pack1", TILEGX_OPC_FSINGLE_PACK1, 0x5, 2, TREG_ZERO, 1,
		{ { 6, 7 }, { 0, }, { 10, 11 }, { 0, }, { 0, } },
	},
	{
		"fsingle_pack2", TILEGX_OPC_FSINGLE_PACK2, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"fsingle_sub1", TILEGX_OPC_FSINGLE_SUB1, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"icoh", TILEGX_OPC_ICOH, 0x2, 1, TREG_ZERO, 1,
		{ { 0, }, { 9 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ill", TILEGX_OPC_ILL, 0xa, 0, TREG_ZERO, 1,
		{ { 0, }, {  }, { 0, }, {  }, { 0, } },
	},
	{
		"inv", TILEGX_OPC_INV, 0x2, 1, TREG_ZERO, 1,
		{ { 0, }, { 9 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"iret", TILEGX_OPC_IRET, 0x2, 0, TREG_ZERO, 1,
		{ { 0, }, {  }, { 0, }, { 0, }, { 0, } },
	},
	{
		"j", TILEGX_OPC_J, 0x2, 1, TREG_ZERO, 1,
		{ { 0, }, { 25 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"jal", TILEGX_OPC_JAL, 0x2, 1, TREG_LR, 1,
		{ { 0, }, { 25 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"jalr", TILEGX_OPC_JALR, 0xa, 1, TREG_LR, 1,
		{ { 0, }, { 9 }, { 0, }, { 13 }, { 0, } },
	},
	{
		"jalrp", TILEGX_OPC_JALRP, 0xa, 1, TREG_LR, 1,
		{ { 0, }, { 9 }, { 0, }, { 13 }, { 0, } },
	},
	{
		"jr", TILEGX_OPC_JR, 0xa, 1, TREG_ZERO, 1,
		{ { 0, }, { 9 }, { 0, }, { 13 }, { 0, } },
	},
	{
		"jrp", TILEGX_OPC_JRP, 0xa, 1, TREG_ZERO, 1,
		{ { 0, }, { 9 }, { 0, }, { 13 }, { 0, } },
	},
	{
		"ld", TILEGX_OPC_LD, 0x12, 2, TREG_ZERO, 1,
		{ { 0, }, { 8, 9 }, { 0, }, { 0, }, { 26, 14 } },
	},
	{
		"ld1s", TILEGX_OPC_LD1S, 0x12, 2, TREG_ZERO, 1,
		{ { 0, }, { 8, 9 }, { 0, }, { 0, }, { 26, 14 } },
	},
	{
		"ld1s_add", TILEGX_OPC_LD1S_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 15, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ld1u", TILEGX_OPC_LD1U, 0x12, 2, TREG_ZERO, 1,
		{ { 0, }, { 8, 9 }, { 0, }, { 0, }, { 26, 14 } },
	},
	{
		"ld1u_add", TILEGX_OPC_LD1U_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 15, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ld2s", TILEGX_OPC_LD2S, 0x12, 2, TREG_ZERO, 1,
		{ { 0, }, { 8, 9 }, { 0, }, { 0, }, { 26, 14 } },
	},
	{
		"ld2s_add", TILEGX_OPC_LD2S_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 15, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ld2u", TILEGX_OPC_LD2U, 0x12, 2, TREG_ZERO, 1,
		{ { 0, }, { 8, 9 }, { 0, }, { 0, }, { 26, 14 } },
	},
	{
		"ld2u_add", TILEGX_OPC_LD2U_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 15, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ld4s", TILEGX_OPC_LD4S, 0x12, 2, TREG_ZERO, 1,
		{ { 0, }, { 8, 9 }, { 0, }, { 0, }, { 26, 14 } },
	},
	{
		"ld4s_add", TILEGX_OPC_LD4S_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 15, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ld4u", TILEGX_OPC_LD4U, 0x12, 2, TREG_ZERO, 1,
		{ { 0, }, { 8, 9 }, { 0, }, { 0, }, { 26, 14 } },
	},
	{
		"ld4u_add", TILEGX_OPC_LD4U_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 15, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ld_add", TILEGX_OPC_LD_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 15, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ldna", TILEGX_OPC_LDNA, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 8, 9 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ldna_add", TILEGX_OPC_LDNA_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 15, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ldnt", TILEGX_OPC_LDNT, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 8, 9 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ldnt1s", TILEGX_OPC_LDNT1S, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 8, 9 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ldnt1s_add", TILEGX_OPC_LDNT1S_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 15, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ldnt1u", TILEGX_OPC_LDNT1U, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 8, 9 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ldnt1u_add", TILEGX_OPC_LDNT1U_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 15, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ldnt2s", TILEGX_OPC_LDNT2S, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 8, 9 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ldnt2s_add", TILEGX_OPC_LDNT2S_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 15, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ldnt2u", TILEGX_OPC_LDNT2U, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 8, 9 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ldnt2u_add", TILEGX_OPC_LDNT2U_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 15, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ldnt4s", TILEGX_OPC_LDNT4S, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 8, 9 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ldnt4s_add", TILEGX_OPC_LDNT4S_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 15, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ldnt4u", TILEGX_OPC_LDNT4U, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 8, 9 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ldnt4u_add", TILEGX_OPC_LDNT4U_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 15, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"ldnt_add", TILEGX_OPC_LDNT_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 8, 15, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"lnk", TILEGX_OPC_LNK, 0xa, 1, TREG_ZERO, 1,
		{ { 0, }, { 8 }, { 0, }, { 12 }, { 0, } },
	},
	{
		"mf", TILEGX_OPC_MF, 0x2, 0, TREG_ZERO, 1,
		{ { 0, }, {  }, { 0, }, { 0, }, { 0, } },
	},
	{
		"mfspr", TILEGX_OPC_MFSPR, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 8, 27 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"mm", TILEGX_OPC_MM, 0x1, 4, TREG_ZERO, 1,
		{ { 23, 7, 21, 22 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"mnz", TILEGX_OPC_MNZ, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"mtspr", TILEGX_OPC_MTSPR, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 28, 9 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"mul_hs_hs", TILEGX_OPC_MUL_HS_HS, 0x5, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 10, 11, 18 }, { 0, }, { 0, } },
	},
	{
		"mul_hs_hu", TILEGX_OPC_MUL_HS_HU, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"mul_hs_ls", TILEGX_OPC_MUL_HS_LS, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"mul_hs_lu", TILEGX_OPC_MUL_HS_LU, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"mul_hu_hu", TILEGX_OPC_MUL_HU_HU, 0x5, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 10, 11, 18 }, { 0, }, { 0, } },
	},
	{
		"mul_hu_ls", TILEGX_OPC_MUL_HU_LS, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"mul_hu_lu", TILEGX_OPC_MUL_HU_LU, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"mul_ls_ls", TILEGX_OPC_MUL_LS_LS, 0x5, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 10, 11, 18 }, { 0, }, { 0, } },
	},
	{
		"mul_ls_lu", TILEGX_OPC_MUL_LS_LU, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"mul_lu_lu", TILEGX_OPC_MUL_LU_LU, 0x5, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 10, 11, 18 }, { 0, }, { 0, } },
	},
	{
		"mula_hs_hs", TILEGX_OPC_MULA_HS_HS, 0x5, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 24, 11, 18 }, { 0, }, { 0, } },
	},
	{
		"mula_hs_hu", TILEGX_OPC_MULA_HS_HU, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"mula_hs_ls", TILEGX_OPC_MULA_HS_LS, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"mula_hs_lu", TILEGX_OPC_MULA_HS_LU, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"mula_hu_hu", TILEGX_OPC_MULA_HU_HU, 0x5, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 24, 11, 18 }, { 0, }, { 0, } },
	},
	{
		"mula_hu_ls", TILEGX_OPC_MULA_HU_LS, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"mula_hu_lu", TILEGX_OPC_MULA_HU_LU, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"mula_ls_ls", TILEGX_OPC_MULA_LS_LS, 0x5, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 24, 11, 18 }, { 0, }, { 0, } },
	},
	{
		"mula_ls_lu", TILEGX_OPC_MULA_LS_LU, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"mula_lu_lu", TILEGX_OPC_MULA_LU_LU, 0x5, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 24, 11, 18 }, { 0, }, { 0, } },
	},
	{
		"mulax", TILEGX_OPC_MULAX, 0x5, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 24, 11, 18 }, { 0, }, { 0, } },
	},
	{
		"mulx", TILEGX_OPC_MULX, 0x5, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 10, 11, 18 }, { 0, }, { 0, } },
	},
	{
		"mz", TILEGX_OPC_MZ, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"nap", TILEGX_OPC_NAP, 0x2, 0, TREG_ZERO, 0,
		{ { 0, }, {  }, { 0, }, { 0, }, { 0, } },
	},
	{
		"nop", TILEGX_OPC_NOP, 0xf, 0, TREG_ZERO, 1,
		{ {  }, {  }, {  }, {  }, { 0, } },
	},
	{
		"nor", TILEGX_OPC_NOR, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"or", TILEGX_OPC_OR, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"ori", TILEGX_OPC_ORI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 0 }, { 8, 9, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"pcnt", TILEGX_OPC_PCNT, 0x5, 2, TREG_ZERO, 1,
		{ { 6, 7 }, { 0, }, { 10, 11 }, { 0, }, { 0, } },
	},
	{
		"revbits", TILEGX_OPC_REVBITS, 0x5, 2, TREG_ZERO, 1,
		{ { 6, 7 }, { 0, }, { 10, 11 }, { 0, }, { 0, } },
	},
	{
		"revbytes", TILEGX_OPC_REVBYTES, 0x5, 2, TREG_ZERO, 1,
		{ { 6, 7 }, { 0, }, { 10, 11 }, { 0, }, { 0, } },
	},
	{
		"rotl", TILEGX_OPC_ROTL, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"rotli", TILEGX_OPC_ROTLI, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 29 }, { 8, 9, 30 }, { 10, 11, 31 }, { 12, 13, 32 }, { 0, } },
	},
	{
		"shl", TILEGX_OPC_SHL, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"shl16insli", TILEGX_OPC_SHL16INSLI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 4 }, { 8, 9, 5 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"shl1add", TILEGX_OPC_SHL1ADD, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"shl1addx", TILEGX_OPC_SHL1ADDX, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"shl2add", TILEGX_OPC_SHL2ADD, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"shl2addx", TILEGX_OPC_SHL2ADDX, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"shl3add", TILEGX_OPC_SHL3ADD, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"shl3addx", TILEGX_OPC_SHL3ADDX, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"shli", TILEGX_OPC_SHLI, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 29 }, { 8, 9, 30 }, { 10, 11, 31 }, { 12, 13, 32 }, { 0, } },
	},
	{
		"shlx", TILEGX_OPC_SHLX, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"shlxi", TILEGX_OPC_SHLXI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 29 }, { 8, 9, 30 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"shrs", TILEGX_OPC_SHRS, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"shrsi", TILEGX_OPC_SHRSI, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 29 }, { 8, 9, 30 }, { 10, 11, 31 }, { 12, 13, 32 }, { 0, } },
	},
	{
		"shru", TILEGX_OPC_SHRU, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"shrui", TILEGX_OPC_SHRUI, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 29 }, { 8, 9, 30 }, { 10, 11, 31 }, { 12, 13, 32 }, { 0, } },
	},
	{
		"shrux", TILEGX_OPC_SHRUX, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"shruxi", TILEGX_OPC_SHRUXI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 29 }, { 8, 9, 30 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"shufflebytes", TILEGX_OPC_SHUFFLEBYTES, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"st", TILEGX_OPC_ST, 0x12, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 17 }, { 0, }, { 0, }, { 14, 33 } },
	},
	{
		"st1", TILEGX_OPC_ST1, 0x12, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 17 }, { 0, }, { 0, }, { 14, 33 } },
	},
	{
		"st1_add", TILEGX_OPC_ST1_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 15, 17, 34 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"st2", TILEGX_OPC_ST2, 0x12, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 17 }, { 0, }, { 0, }, { 14, 33 } },
	},
	{
		"st2_add", TILEGX_OPC_ST2_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 15, 17, 34 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"st4", TILEGX_OPC_ST4, 0x12, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 17 }, { 0, }, { 0, }, { 14, 33 } },
	},
	{
		"st4_add", TILEGX_OPC_ST4_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 15, 17, 34 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"st_add", TILEGX_OPC_ST_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 15, 17, 34 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"stnt", TILEGX_OPC_STNT, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"stnt1", TILEGX_OPC_STNT1, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"stnt1_add", TILEGX_OPC_STNT1_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 15, 17, 34 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"stnt2", TILEGX_OPC_STNT2, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"stnt2_add", TILEGX_OPC_STNT2_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 15, 17, 34 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"stnt4", TILEGX_OPC_STNT4, 0x2, 2, TREG_ZERO, 1,
		{ { 0, }, { 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"stnt4_add", TILEGX_OPC_STNT4_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 15, 17, 34 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"stnt_add", TILEGX_OPC_STNT_ADD, 0x2, 3, TREG_ZERO, 1,
		{ { 0, }, { 15, 17, 34 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"sub", TILEGX_OPC_SUB, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"subx", TILEGX_OPC_SUBX, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"subxsc", TILEGX_OPC_SUBXSC, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"swint0", TILEGX_OPC_SWINT0, 0x2, 0, TREG_ZERO, 0,
		{ { 0, }, {  }, { 0, }, { 0, }, { 0, } },
	},
	{
		"swint1", TILEGX_OPC_SWINT1, 0x2, 0, TREG_ZERO, 0,
		{ { 0, }, {  }, { 0, }, { 0, }, { 0, } },
	},
	{
		"swint2", TILEGX_OPC_SWINT2, 0x2, 0, TREG_ZERO, 0,
		{ { 0, }, {  }, { 0, }, { 0, }, { 0, } },
	},
	{
		"swint3", TILEGX_OPC_SWINT3, 0x2, 0, TREG_ZERO, 0,
		{ { 0, }, {  }, { 0, }, { 0, }, { 0, } },
	},
	{
		"tblidxb0", TILEGX_OPC_TBLIDXB0, 0x5, 2, TREG_ZERO, 1,
		{ { 23, 7 }, { 0, }, { 24, 11 }, { 0, }, { 0, } },
	},
	{
		"tblidxb1", TILEGX_OPC_TBLIDXB1, 0x5, 2, TREG_ZERO, 1,
		{ { 23, 7 }, { 0, }, { 24, 11 }, { 0, }, { 0, } },
	},
	{
		"tblidxb2", TILEGX_OPC_TBLIDXB2, 0x5, 2, TREG_ZERO, 1,
		{ { 23, 7 }, { 0, }, { 24, 11 }, { 0, }, { 0, } },
	},
	{
		"tblidxb3", TILEGX_OPC_TBLIDXB3, 0x5, 2, TREG_ZERO, 1,
		{ { 23, 7 }, { 0, }, { 24, 11 }, { 0, }, { 0, } },
	},
	{
		"v1add", TILEGX_OPC_V1ADD, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1addi", TILEGX_OPC_V1ADDI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 0 }, { 8, 9, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1adduc", TILEGX_OPC_V1ADDUC, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1adiffu", TILEGX_OPC_V1ADIFFU, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1avgu", TILEGX_OPC_V1AVGU, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1cmpeq", TILEGX_OPC_V1CMPEQ, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1cmpeqi", TILEGX_OPC_V1CMPEQI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 0 }, { 8, 9, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1cmples", TILEGX_OPC_V1CMPLES, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1cmpleu", TILEGX_OPC_V1CMPLEU, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1cmplts", TILEGX_OPC_V1CMPLTS, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1cmpltsi", TILEGX_OPC_V1CMPLTSI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 0 }, { 8, 9, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1cmpltu", TILEGX_OPC_V1CMPLTU, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1cmpltui", TILEGX_OPC_V1CMPLTUI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 0 }, { 8, 9, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1cmpne", TILEGX_OPC_V1CMPNE, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1ddotpu", TILEGX_OPC_V1DDOTPU, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1ddotpua", TILEGX_OPC_V1DDOTPUA, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1ddotpus", TILEGX_OPC_V1DDOTPUS, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1ddotpusa", TILEGX_OPC_V1DDOTPUSA, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1dotp", TILEGX_OPC_V1DOTP, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1dotpa", TILEGX_OPC_V1DOTPA, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1dotpu", TILEGX_OPC_V1DOTPU, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1dotpua", TILEGX_OPC_V1DOTPUA, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1dotpus", TILEGX_OPC_V1DOTPUS, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1dotpusa", TILEGX_OPC_V1DOTPUSA, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1int_h", TILEGX_OPC_V1INT_H, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1int_l", TILEGX_OPC_V1INT_L, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1maxu", TILEGX_OPC_V1MAXU, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1maxui", TILEGX_OPC_V1MAXUI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 0 }, { 8, 9, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1minu", TILEGX_OPC_V1MINU, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1minui", TILEGX_OPC_V1MINUI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 0 }, { 8, 9, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1mnz", TILEGX_OPC_V1MNZ, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1multu", TILEGX_OPC_V1MULTU, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1mulu", TILEGX_OPC_V1MULU, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1mulus", TILEGX_OPC_V1MULUS, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1mz", TILEGX_OPC_V1MZ, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1sadau", TILEGX_OPC_V1SADAU, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1sadu", TILEGX_OPC_V1SADU, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1shl", TILEGX_OPC_V1SHL, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1shli", TILEGX_OPC_V1SHLI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 29 }, { 8, 9, 30 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1shrs", TILEGX_OPC_V1SHRS, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1shrsi", TILEGX_OPC_V1SHRSI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 29 }, { 8, 9, 30 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1shru", TILEGX_OPC_V1SHRU, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1shrui", TILEGX_OPC_V1SHRUI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 29 }, { 8, 9, 30 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1sub", TILEGX_OPC_V1SUB, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v1subuc", TILEGX_OPC_V1SUBUC, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2add", TILEGX_OPC_V2ADD, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2addi", TILEGX_OPC_V2ADDI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 0 }, { 8, 9, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2addsc", TILEGX_OPC_V2ADDSC, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2adiffs", TILEGX_OPC_V2ADIFFS, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2avgs", TILEGX_OPC_V2AVGS, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2cmpeq", TILEGX_OPC_V2CMPEQ, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2cmpeqi", TILEGX_OPC_V2CMPEQI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 0 }, { 8, 9, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2cmples", TILEGX_OPC_V2CMPLES, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2cmpleu", TILEGX_OPC_V2CMPLEU, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2cmplts", TILEGX_OPC_V2CMPLTS, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2cmpltsi", TILEGX_OPC_V2CMPLTSI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 0 }, { 8, 9, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2cmpltu", TILEGX_OPC_V2CMPLTU, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2cmpltui", TILEGX_OPC_V2CMPLTUI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 0 }, { 8, 9, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2cmpne", TILEGX_OPC_V2CMPNE, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2dotp", TILEGX_OPC_V2DOTP, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2dotpa", TILEGX_OPC_V2DOTPA, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2int_h", TILEGX_OPC_V2INT_H, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2int_l", TILEGX_OPC_V2INT_L, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2maxs", TILEGX_OPC_V2MAXS, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2maxsi", TILEGX_OPC_V2MAXSI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 0 }, { 8, 9, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2mins", TILEGX_OPC_V2MINS, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2minsi", TILEGX_OPC_V2MINSI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 0 }, { 8, 9, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2mnz", TILEGX_OPC_V2MNZ, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2mulfsc", TILEGX_OPC_V2MULFSC, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2muls", TILEGX_OPC_V2MULS, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2mults", TILEGX_OPC_V2MULTS, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2mz", TILEGX_OPC_V2MZ, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2packh", TILEGX_OPC_V2PACKH, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2packl", TILEGX_OPC_V2PACKL, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2packuc", TILEGX_OPC_V2PACKUC, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2sadas", TILEGX_OPC_V2SADAS, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2sadau", TILEGX_OPC_V2SADAU, 0x1, 3, TREG_ZERO, 1,
		{ { 23, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2sads", TILEGX_OPC_V2SADS, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2sadu", TILEGX_OPC_V2SADU, 0x1, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 0, }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2shl", TILEGX_OPC_V2SHL, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2shli", TILEGX_OPC_V2SHLI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 29 }, { 8, 9, 30 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2shlsc", TILEGX_OPC_V2SHLSC, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2shrs", TILEGX_OPC_V2SHRS, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2shrsi", TILEGX_OPC_V2SHRSI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 29 }, { 8, 9, 30 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2shru", TILEGX_OPC_V2SHRU, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2shrui", TILEGX_OPC_V2SHRUI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 29 }, { 8, 9, 30 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2sub", TILEGX_OPC_V2SUB, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v2subsc", TILEGX_OPC_V2SUBSC, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v4add", TILEGX_OPC_V4ADD, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v4addsc", TILEGX_OPC_V4ADDSC, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v4int_h", TILEGX_OPC_V4INT_H, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v4int_l", TILEGX_OPC_V4INT_L, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v4packsc", TILEGX_OPC_V4PACKSC, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v4shl", TILEGX_OPC_V4SHL, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v4shlsc", TILEGX_OPC_V4SHLSC, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v4shrs", TILEGX_OPC_V4SHRS, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v4shru", TILEGX_OPC_V4SHRU, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v4sub", TILEGX_OPC_V4SUB, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"v4subsc", TILEGX_OPC_V4SUBSC, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"wh64", TILEGX_OPC_WH64, 0x2, 1, TREG_ZERO, 1,
		{ { 0, }, { 9 }, { 0, }, { 0, }, { 0, } },
	},
	{
		"xor", TILEGX_OPC_XOR, 0xf, 3, TREG_ZERO, 1,
		{ { 6, 7, 16 }, { 8, 9, 17 }, { 10, 11, 18 }, { 12, 13, 19 }, { 0, } },
	},
	{
		"xori", TILEGX_OPC_XORI, 0x3, 3, TREG_ZERO, 1,
		{ { 6, 7, 0 }, { 8, 9, 1 }, { 0, }, { 0, }, { 0, } },
	},
	{
		NULL, TILEGX_OPC_NONE, 0, 0, TREG_ZERO, 0, { { 0, } },
	}
};
#define BITFIELD(start, size) ((start) | (((1 << (size)) - 1) << 6))
#define CHILD(array_index) (TILEGX_OPC_NONE + (array_index))

static const unsigned short decode_X0_fsm[936] =
{
	BITFIELD(22, 9) /* index 0 */,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513),
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513),
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513),
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513),
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513),
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513),
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513),
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513),
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513),
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513),
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_BFEXTS,
	TILEGX_OPC_BFEXTS, TILEGX_OPC_BFEXTS, TILEGX_OPC_BFEXTS, TILEGX_OPC_BFEXTU,
	TILEGX_OPC_BFEXTU, TILEGX_OPC_BFEXTU, TILEGX_OPC_BFEXTU, TILEGX_OPC_BFINS,
	TILEGX_OPC_BFINS, TILEGX_OPC_BFINS, TILEGX_OPC_BFINS, TILEGX_OPC_MM,
	TILEGX_OPC_MM, TILEGX_OPC_MM, TILEGX_OPC_MM, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, CHILD(528), CHILD(578),
	CHILD(583), CHILD(588), CHILD(593), CHILD(598), TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, CHILD(603), CHILD(620), CHILD(637), CHILD(654), CHILD(671),
	CHILD(703), CHILD(797), CHILD(814), CHILD(831), CHILD(848), CHILD(865),
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, CHILD(889), TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, CHILD(906), CHILD(906), CHILD(906), CHILD(906), CHILD(906),
	CHILD(906), CHILD(906), CHILD(906), CHILD(906), CHILD(906), CHILD(906),
	CHILD(906), CHILD(906), CHILD(906), CHILD(906), CHILD(906), CHILD(906),
	CHILD(906), CHILD(906), CHILD(906), CHILD(906), CHILD(906), CHILD(906),
	CHILD(906), CHILD(906), CHILD(906), CHILD(906), CHILD(906), CHILD(906),
	CHILD(906), CHILD(906), CHILD(906), CHILD(906), CHILD(906), CHILD(906),
	CHILD(906), CHILD(906), CHILD(906), CHILD(906), CHILD(906), CHILD(906),
	CHILD(906), CHILD(906), CHILD(906), CHILD(906), CHILD(906), CHILD(906),
	CHILD(906), CHILD(906), CHILD(906), CHILD(906), CHILD(906), CHILD(906),
	CHILD(906), CHILD(906), CHILD(906), CHILD(906), CHILD(906), CHILD(906),
	CHILD(906), CHILD(906), CHILD(906), CHILD(906), CHILD(906),
	BITFIELD(6, 2) /* index 513 */,
	TILEGX_OPC_ADDLI, TILEGX_OPC_ADDLI, TILEGX_OPC_ADDLI, CHILD(518),
	BITFIELD(8, 2) /* index 518 */,
	TILEGX_OPC_ADDLI, TILEGX_OPC_ADDLI, TILEGX_OPC_ADDLI, CHILD(523),
	BITFIELD(10, 2) /* index 523 */,
	TILEGX_OPC_ADDLI, TILEGX_OPC_ADDLI, TILEGX_OPC_ADDLI, TILEGX_OPC_MOVELI,
	BITFIELD(20, 2) /* index 528 */,
	TILEGX_OPC_NONE, CHILD(533), TILEGX_OPC_ADDXI, CHILD(548),
	BITFIELD(6, 2) /* index 533 */,
	TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, CHILD(538),
	BITFIELD(8, 2) /* index 538 */,
	TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, CHILD(543),
	BITFIELD(10, 2) /* index 543 */,
	TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, TILEGX_OPC_MOVEI,
	BITFIELD(0, 2) /* index 548 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, CHILD(553),
	BITFIELD(2, 2) /* index 553 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, CHILD(558),
	BITFIELD(4, 2) /* index 558 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, CHILD(563),
	BITFIELD(6, 2) /* index 563 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, CHILD(568),
	BITFIELD(8, 2) /* index 568 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, CHILD(573),
	BITFIELD(10, 2) /* index 573 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_INFO,
	BITFIELD(20, 2) /* index 578 */,
	TILEGX_OPC_CMPEQI, TILEGX_OPC_CMPLTSI, TILEGX_OPC_CMPLTUI, TILEGX_OPC_ORI,
	BITFIELD(20, 2) /* index 583 */,
	TILEGX_OPC_V1ADDI, TILEGX_OPC_V1CMPEQI, TILEGX_OPC_V1CMPLTSI,
	TILEGX_OPC_V1CMPLTUI,
	BITFIELD(20, 2) /* index 588 */,
	TILEGX_OPC_V1MAXUI, TILEGX_OPC_V1MINUI, TILEGX_OPC_V2ADDI,
	TILEGX_OPC_V2CMPEQI,
	BITFIELD(20, 2) /* index 593 */,
	TILEGX_OPC_V2CMPLTSI, TILEGX_OPC_V2CMPLTUI, TILEGX_OPC_V2MAXSI,
	TILEGX_OPC_V2MINSI,
	BITFIELD(20, 2) /* index 598 */,
	TILEGX_OPC_XORI, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	BITFIELD(18, 4) /* index 603 */,
	TILEGX_OPC_NONE, TILEGX_OPC_ADDXSC, TILEGX_OPC_ADDX, TILEGX_OPC_ADD,
	TILEGX_OPC_AND, TILEGX_OPC_CMOVEQZ, TILEGX_OPC_CMOVNEZ, TILEGX_OPC_CMPEQ,
	TILEGX_OPC_CMPLES, TILEGX_OPC_CMPLEU, TILEGX_OPC_CMPLTS, TILEGX_OPC_CMPLTU,
	TILEGX_OPC_CMPNE, TILEGX_OPC_CMULAF, TILEGX_OPC_CMULA, TILEGX_OPC_CMULFR,
	BITFIELD(18, 4) /* index 620 */,
	TILEGX_OPC_CMULF, TILEGX_OPC_CMULHR, TILEGX_OPC_CMULH, TILEGX_OPC_CMUL,
	TILEGX_OPC_CRC32_32, TILEGX_OPC_CRC32_8, TILEGX_OPC_DBLALIGN2,
	TILEGX_OPC_DBLALIGN4, TILEGX_OPC_DBLALIGN6, TILEGX_OPC_DBLALIGN,
	TILEGX_OPC_FDOUBLE_ADDSUB, TILEGX_OPC_FDOUBLE_ADD_FLAGS,
	TILEGX_OPC_FDOUBLE_MUL_FLAGS, TILEGX_OPC_FDOUBLE_PACK1,
	TILEGX_OPC_FDOUBLE_PACK2, TILEGX_OPC_FDOUBLE_SUB_FLAGS,
	BITFIELD(18, 4) /* index 637 */,
	TILEGX_OPC_FDOUBLE_UNPACK_MAX, TILEGX_OPC_FDOUBLE_UNPACK_MIN,
	TILEGX_OPC_FSINGLE_ADD1, TILEGX_OPC_FSINGLE_ADDSUB2,
	TILEGX_OPC_FSINGLE_MUL1, TILEGX_OPC_FSINGLE_MUL2, TILEGX_OPC_FSINGLE_PACK2,
	TILEGX_OPC_FSINGLE_SUB1, TILEGX_OPC_MNZ, TILEGX_OPC_MULAX,
	TILEGX_OPC_MULA_HS_HS, TILEGX_OPC_MULA_HS_HU, TILEGX_OPC_MULA_HS_LS,
	TILEGX_OPC_MULA_HS_LU, TILEGX_OPC_MULA_HU_HU, TILEGX_OPC_MULA_HU_LS,
	BITFIELD(18, 4) /* index 654 */,
	TILEGX_OPC_MULA_HU_LU, TILEGX_OPC_MULA_LS_LS, TILEGX_OPC_MULA_LS_LU,
	TILEGX_OPC_MULA_LU_LU, TILEGX_OPC_MULX, TILEGX_OPC_MUL_HS_HS,
	TILEGX_OPC_MUL_HS_HU, TILEGX_OPC_MUL_HS_LS, TILEGX_OPC_MUL_HS_LU,
	TILEGX_OPC_MUL_HU_HU, TILEGX_OPC_MUL_HU_LS, TILEGX_OPC_MUL_HU_LU,
	TILEGX_OPC_MUL_LS_LS, TILEGX_OPC_MUL_LS_LU, TILEGX_OPC_MUL_LU_LU,
	TILEGX_OPC_MZ,
	BITFIELD(18, 4) /* index 671 */,
	TILEGX_OPC_NOR, CHILD(688), TILEGX_OPC_ROTL, TILEGX_OPC_SHL1ADDX,
	TILEGX_OPC_SHL1ADD, TILEGX_OPC_SHL2ADDX, TILEGX_OPC_SHL2ADD,
	TILEGX_OPC_SHL3ADDX, TILEGX_OPC_SHL3ADD, TILEGX_OPC_SHLX, TILEGX_OPC_SHL,
	TILEGX_OPC_SHRS, TILEGX_OPC_SHRUX, TILEGX_OPC_SHRU, TILEGX_OPC_SHUFFLEBYTES,
	TILEGX_OPC_SUBXSC,
	BITFIELD(12, 2) /* index 688 */,
	TILEGX_OPC_OR, TILEGX_OPC_OR, TILEGX_OPC_OR, CHILD(693),
	BITFIELD(14, 2) /* index 693 */,
	TILEGX_OPC_OR, TILEGX_OPC_OR, TILEGX_OPC_OR, CHILD(698),
	BITFIELD(16, 2) /* index 698 */,
	TILEGX_OPC_OR, TILEGX_OPC_OR, TILEGX_OPC_OR, TILEGX_OPC_MOVE,
	BITFIELD(18, 4) /* index 703 */,
	TILEGX_OPC_SUBX, TILEGX_OPC_SUB, CHILD(720), TILEGX_OPC_V1ADDUC,
	TILEGX_OPC_V1ADD, TILEGX_OPC_V1ADIFFU, TILEGX_OPC_V1AVGU,
	TILEGX_OPC_V1CMPEQ, TILEGX_OPC_V1CMPLES, TILEGX_OPC_V1CMPLEU,
	TILEGX_OPC_V1CMPLTS, TILEGX_OPC_V1CMPLTU, TILEGX_OPC_V1CMPNE,
	TILEGX_OPC_V1DDOTPUSA, TILEGX_OPC_V1DDOTPUS, TILEGX_OPC_V1DOTPA,
	BITFIELD(12, 4) /* index 720 */,
	TILEGX_OPC_NONE, CHILD(737), CHILD(742), CHILD(747), CHILD(752), CHILD(757),
	CHILD(762), CHILD(767), CHILD(772), CHILD(777), CHILD(782), CHILD(787),
	CHILD(792), TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	BITFIELD(16, 2) /* index 737 */,
	TILEGX_OPC_CLZ, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	BITFIELD(16, 2) /* index 742 */,
	TILEGX_OPC_CTZ, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	BITFIELD(16, 2) /* index 747 */,
	TILEGX_OPC_FNOP, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	BITFIELD(16, 2) /* index 752 */,
	TILEGX_OPC_FSINGLE_PACK1, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	BITFIELD(16, 2) /* index 757 */,
	TILEGX_OPC_NOP, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	BITFIELD(16, 2) /* index 762 */,
	TILEGX_OPC_PCNT, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	BITFIELD(16, 2) /* index 767 */,
	TILEGX_OPC_REVBITS, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	BITFIELD(16, 2) /* index 772 */,
	TILEGX_OPC_REVBYTES, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	BITFIELD(16, 2) /* index 777 */,
	TILEGX_OPC_TBLIDXB0, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	BITFIELD(16, 2) /* index 782 */,
	TILEGX_OPC_TBLIDXB1, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	BITFIELD(16, 2) /* index 787 */,
	TILEGX_OPC_TBLIDXB2, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	BITFIELD(16, 2) /* index 792 */,
	TILEGX_OPC_TBLIDXB3, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	BITFIELD(18, 4) /* index 797 */,
	TILEGX_OPC_V1DOTPUSA, TILEGX_OPC_V1DOTPUS, TILEGX_OPC_V1DOTP,
	TILEGX_OPC_V1INT_H, TILEGX_OPC_V1INT_L, TILEGX_OPC_V1MAXU,
	TILEGX_OPC_V1MINU, TILEGX_OPC_V1MNZ, TILEGX_OPC_V1MULTU, TILEGX_OPC_V1MULUS,
	TILEGX_OPC_V1MULU, TILEGX_OPC_V1MZ, TILEGX_OPC_V1SADAU, TILEGX_OPC_V1SADU,
	TILEGX_OPC_V1SHL, TILEGX_OPC_V1SHRS,
	BITFIELD(18, 4) /* index 814 */,
	TILEGX_OPC_V1SHRU, TILEGX_OPC_V1SUBUC, TILEGX_OPC_V1SUB, TILEGX_OPC_V2ADDSC,
	TILEGX_OPC_V2ADD, TILEGX_OPC_V2ADIFFS, TILEGX_OPC_V2AVGS,
	TILEGX_OPC_V2CMPEQ, TILEGX_OPC_V2CMPLES, TILEGX_OPC_V2CMPLEU,
	TILEGX_OPC_V2CMPLTS, TILEGX_OPC_V2CMPLTU, TILEGX_OPC_V2CMPNE,
	TILEGX_OPC_V2DOTPA, TILEGX_OPC_V2DOTP, TILEGX_OPC_V2INT_H,
	BITFIELD(18, 4) /* index 831 */,
	TILEGX_OPC_V2INT_L, TILEGX_OPC_V2MAXS, TILEGX_OPC_V2MINS, TILEGX_OPC_V2MNZ,
	TILEGX_OPC_V2MULFSC, TILEGX_OPC_V2MULS, TILEGX_OPC_V2MULTS, TILEGX_OPC_V2MZ,
	TILEGX_OPC_V2PACKH, TILEGX_OPC_V2PACKL, TILEGX_OPC_V2PACKUC,
	TILEGX_OPC_V2SADAS, TILEGX_OPC_V2SADAU, TILEGX_OPC_V2SADS,
	TILEGX_OPC_V2SADU, TILEGX_OPC_V2SHLSC,
	BITFIELD(18, 4) /* index 848 */,
	TILEGX_OPC_V2SHL, TILEGX_OPC_V2SHRS, TILEGX_OPC_V2SHRU, TILEGX_OPC_V2SUBSC,
	TILEGX_OPC_V2SUB, TILEGX_OPC_V4ADDSC, TILEGX_OPC_V4ADD, TILEGX_OPC_V4INT_H,
	TILEGX_OPC_V4INT_L, TILEGX_OPC_V4PACKSC, TILEGX_OPC_V4SHLSC,
	TILEGX_OPC_V4SHL, TILEGX_OPC_V4SHRS, TILEGX_OPC_V4SHRU, TILEGX_OPC_V4SUBSC,
	TILEGX_OPC_V4SUB,
	BITFIELD(18, 3) /* index 865 */,
	CHILD(874), CHILD(877), CHILD(880), CHILD(883), CHILD(886), TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	BITFIELD(21, 1) /* index 874 */,
	TILEGX_OPC_XOR, TILEGX_OPC_NONE,
	BITFIELD(21, 1) /* index 877 */,
	TILEGX_OPC_V1DDOTPUA, TILEGX_OPC_NONE,
	BITFIELD(21, 1) /* index 880 */,
	TILEGX_OPC_V1DDOTPU, TILEGX_OPC_NONE,
	BITFIELD(21, 1) /* index 883 */,
	TILEGX_OPC_V1DOTPUA, TILEGX_OPC_NONE,
	BITFIELD(21, 1) /* index 886 */,
	TILEGX_OPC_V1DOTPU, TILEGX_OPC_NONE,
	BITFIELD(18, 4) /* index 889 */,
	TILEGX_OPC_NONE, TILEGX_OPC_ROTLI, TILEGX_OPC_SHLI, TILEGX_OPC_SHLXI,
	TILEGX_OPC_SHRSI, TILEGX_OPC_SHRUI, TILEGX_OPC_SHRUXI, TILEGX_OPC_V1SHLI,
	TILEGX_OPC_V1SHRSI, TILEGX_OPC_V1SHRUI, TILEGX_OPC_V2SHLI,
	TILEGX_OPC_V2SHRSI, TILEGX_OPC_V2SHRUI, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE,
	BITFIELD(0, 2) /* index 906 */,
	TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI,
	CHILD(911),
	BITFIELD(2, 2) /* index 911 */,
	TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI,
	CHILD(916),
	BITFIELD(4, 2) /* index 916 */,
	TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI,
	CHILD(921),
	BITFIELD(6, 2) /* index 921 */,
	TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI,
	CHILD(926),
	BITFIELD(8, 2) /* index 926 */,
	TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI,
	CHILD(931),
	BITFIELD(10, 2) /* index 931 */,
	TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI,
	TILEGX_OPC_INFOL,
};

static const unsigned short decode_X1_fsm[1206] =
{
	BITFIELD(53, 9) /* index 0 */,
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513),
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513),
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513),
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513),
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513),
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513),
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513),
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513),
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513),
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513), CHILD(513),
	CHILD(513), CHILD(513), CHILD(513), CHILD(513), TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI,
	TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_ADDXLI, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_BEQZT,
	TILEGX_OPC_BEQZT, TILEGX_OPC_BEQZ, TILEGX_OPC_BEQZ, TILEGX_OPC_BGEZT,
	TILEGX_OPC_BGEZT, TILEGX_OPC_BGEZ, TILEGX_OPC_BGEZ, TILEGX_OPC_BGTZT,
	TILEGX_OPC_BGTZT, TILEGX_OPC_BGTZ, TILEGX_OPC_BGTZ, TILEGX_OPC_BLBCT,
	TILEGX_OPC_BLBCT, TILEGX_OPC_BLBC, TILEGX_OPC_BLBC, TILEGX_OPC_BLBST,
	TILEGX_OPC_BLBST, TILEGX_OPC_BLBS, TILEGX_OPC_BLBS, TILEGX_OPC_BLEZT,
	TILEGX_OPC_BLEZT, TILEGX_OPC_BLEZ, TILEGX_OPC_BLEZ, TILEGX_OPC_BLTZT,
	TILEGX_OPC_BLTZT, TILEGX_OPC_BLTZ, TILEGX_OPC_BLTZ, TILEGX_OPC_BNEZT,
	TILEGX_OPC_BNEZT, TILEGX_OPC_BNEZ, TILEGX_OPC_BNEZ, CHILD(528), CHILD(578),
	CHILD(598), CHILD(663), CHILD(683), CHILD(688), CHILD(693), CHILD(698),
	CHILD(703), CHILD(708), CHILD(713), CHILD(718), TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_JAL,
	TILEGX_OPC_JAL, TILEGX_OPC_JAL, TILEGX_OPC_JAL, TILEGX_OPC_JAL,
	TILEGX_OPC_JAL, TILEGX_OPC_JAL, TILEGX_OPC_JAL, TILEGX_OPC_JAL,
	TILEGX_OPC_JAL, TILEGX_OPC_JAL, TILEGX_OPC_JAL, TILEGX_OPC_JAL,
	TILEGX_OPC_JAL, TILEGX_OPC_JAL, TILEGX_OPC_JAL, TILEGX_OPC_JAL,
	TILEGX_OPC_JAL, TILEGX_OPC_JAL, TILEGX_OPC_JAL, TILEGX_OPC_JAL,
	TILEGX_OPC_JAL, TILEGX_OPC_JAL, TILEGX_OPC_JAL, TILEGX_OPC_JAL,
	TILEGX_OPC_JAL, TILEGX_OPC_JAL, TILEGX_OPC_JAL, TILEGX_OPC_JAL,
	TILEGX_OPC_JAL, TILEGX_OPC_JAL, TILEGX_OPC_JAL, TILEGX_OPC_J, TILEGX_OPC_J,
	TILEGX_OPC_J, TILEGX_OPC_J, TILEGX_OPC_J, TILEGX_OPC_J, TILEGX_OPC_J,
	TILEGX_OPC_J, TILEGX_OPC_J, TILEGX_OPC_J, TILEGX_OPC_J, TILEGX_OPC_J,
	TILEGX_OPC_J, TILEGX_OPC_J, TILEGX_OPC_J, TILEGX_OPC_J, TILEGX_OPC_J,
	TILEGX_OPC_J, TILEGX_OPC_J, TILEGX_OPC_J, TILEGX_OPC_J, TILEGX_OPC_J,
	TILEGX_OPC_J, TILEGX_OPC_J, TILEGX_OPC_J, TILEGX_OPC_J, TILEGX_OPC_J,
	TILEGX_OPC_J, TILEGX_OPC_J, TILEGX_OPC_J, TILEGX_OPC_J, TILEGX_OPC_J,
	CHILD(723), CHILD(740), CHILD(772), CHILD(789), CHILD(1108), CHILD(1125),
	CHILD(1142), TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, CHILD(1159), TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, CHILD(1176), CHILD(1176), CHILD(1176),
	CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176),
	CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176),
	CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176),
	CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176),
	CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176),
	CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176),
	CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176),
	CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176),
	CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176),
	CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176),
	CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176),
	CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176), CHILD(1176),
	CHILD(1176),
	BITFIELD(37, 2) /* index 513 */,
	TILEGX_OPC_ADDLI, TILEGX_OPC_ADDLI, TILEGX_OPC_ADDLI, CHILD(518),
	BITFIELD(39, 2) /* index 518 */,
	TILEGX_OPC_ADDLI, TILEGX_OPC_ADDLI, TILEGX_OPC_ADDLI, CHILD(523),
	BITFIELD(41, 2) /* index 523 */,
	TILEGX_OPC_ADDLI, TILEGX_OPC_ADDLI, TILEGX_OPC_ADDLI, TILEGX_OPC_MOVELI,
	BITFIELD(51, 2) /* index 528 */,
	TILEGX_OPC_NONE, CHILD(533), TILEGX_OPC_ADDXI, CHILD(548),
	BITFIELD(37, 2) /* index 533 */,
	TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, CHILD(538),
	BITFIELD(39, 2) /* index 538 */,
	TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, CHILD(543),
	BITFIELD(41, 2) /* index 543 */,
	TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, TILEGX_OPC_MOVEI,
	BITFIELD(31, 2) /* index 548 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, CHILD(553),
	BITFIELD(33, 2) /* index 553 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, CHILD(558),
	BITFIELD(35, 2) /* index 558 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, CHILD(563),
	BITFIELD(37, 2) /* index 563 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, CHILD(568),
	BITFIELD(39, 2) /* index 568 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, CHILD(573),
	BITFIELD(41, 2) /* index 573 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_INFO,
	BITFIELD(51, 2) /* index 578 */,
	TILEGX_OPC_CMPEQI, TILEGX_OPC_CMPLTSI, TILEGX_OPC_CMPLTUI, CHILD(583),
	BITFIELD(31, 2) /* index 583 */,
	TILEGX_OPC_LD1S_ADD, TILEGX_OPC_LD1S_ADD, TILEGX_OPC_LD1S_ADD, CHILD(588),
	BITFIELD(33, 2) /* index 588 */,
	TILEGX_OPC_LD1S_ADD, TILEGX_OPC_LD1S_ADD, TILEGX_OPC_LD1S_ADD, CHILD(593),
	BITFIELD(35, 2) /* index 593 */,
	TILEGX_OPC_LD1S_ADD, TILEGX_OPC_LD1S_ADD, TILEGX_OPC_LD1S_ADD,
	TILEGX_OPC_PREFETCH_ADD_L1_FAULT,
	BITFIELD(51, 2) /* index 598 */,
	CHILD(603), CHILD(618), CHILD(633), CHILD(648),
	BITFIELD(31, 2) /* index 603 */,
	TILEGX_OPC_LD1U_ADD, TILEGX_OPC_LD1U_ADD, TILEGX_OPC_LD1U_ADD, CHILD(608),
	BITFIELD(33, 2) /* index 608 */,
	TILEGX_OPC_LD1U_ADD, TILEGX_OPC_LD1U_ADD, TILEGX_OPC_LD1U_ADD, CHILD(613),
	BITFIELD(35, 2) /* index 613 */,
	TILEGX_OPC_LD1U_ADD, TILEGX_OPC_LD1U_ADD, TILEGX_OPC_LD1U_ADD,
	TILEGX_OPC_PREFETCH_ADD_L1,
	BITFIELD(31, 2) /* index 618 */,
	TILEGX_OPC_LD2S_ADD, TILEGX_OPC_LD2S_ADD, TILEGX_OPC_LD2S_ADD, CHILD(623),
	BITFIELD(33, 2) /* index 623 */,
	TILEGX_OPC_LD2S_ADD, TILEGX_OPC_LD2S_ADD, TILEGX_OPC_LD2S_ADD, CHILD(628),
	BITFIELD(35, 2) /* index 628 */,
	TILEGX_OPC_LD2S_ADD, TILEGX_OPC_LD2S_ADD, TILEGX_OPC_LD2S_ADD,
	TILEGX_OPC_PREFETCH_ADD_L2_FAULT,
	BITFIELD(31, 2) /* index 633 */,
	TILEGX_OPC_LD2U_ADD, TILEGX_OPC_LD2U_ADD, TILEGX_OPC_LD2U_ADD, CHILD(638),
	BITFIELD(33, 2) /* index 638 */,
	TILEGX_OPC_LD2U_ADD, TILEGX_OPC_LD2U_ADD, TILEGX_OPC_LD2U_ADD, CHILD(643),
	BITFIELD(35, 2) /* index 643 */,
	TILEGX_OPC_LD2U_ADD, TILEGX_OPC_LD2U_ADD, TILEGX_OPC_LD2U_ADD,
	TILEGX_OPC_PREFETCH_ADD_L2,
	BITFIELD(31, 2) /* index 648 */,
	TILEGX_OPC_LD4S_ADD, TILEGX_OPC_LD4S_ADD, TILEGX_OPC_LD4S_ADD, CHILD(653),
	BITFIELD(33, 2) /* index 653 */,
	TILEGX_OPC_LD4S_ADD, TILEGX_OPC_LD4S_ADD, TILEGX_OPC_LD4S_ADD, CHILD(658),
	BITFIELD(35, 2) /* index 658 */,
	TILEGX_OPC_LD4S_ADD, TILEGX_OPC_LD4S_ADD, TILEGX_OPC_LD4S_ADD,
	TILEGX_OPC_PREFETCH_ADD_L3_FAULT,
	BITFIELD(51, 2) /* index 663 */,
	CHILD(668), TILEGX_OPC_LDNT1S_ADD, TILEGX_OPC_LDNT1U_ADD,
	TILEGX_OPC_LDNT2S_ADD,
	BITFIELD(31, 2) /* index 668 */,
	TILEGX_OPC_LD4U_ADD, TILEGX_OPC_LD4U_ADD, TILEGX_OPC_LD4U_ADD, CHILD(673),
	BITFIELD(33, 2) /* index 673 */,
	TILEGX_OPC_LD4U_ADD, TILEGX_OPC_LD4U_ADD, TILEGX_OPC_LD4U_ADD, CHILD(678),
	BITFIELD(35, 2) /* index 678 */,
	TILEGX_OPC_LD4U_ADD, TILEGX_OPC_LD4U_ADD, TILEGX_OPC_LD4U_ADD,
	TILEGX_OPC_PREFETCH_ADD_L3,
	BITFIELD(51, 2) /* index 683 */,
	TILEGX_OPC_LDNT2U_ADD, TILEGX_OPC_LDNT4S_ADD, TILEGX_OPC_LDNT4U_ADD,
	TILEGX_OPC_LDNT_ADD,
	BITFIELD(51, 2) /* index 688 */,
	TILEGX_OPC_LD_ADD, TILEGX_OPC_LDNA_ADD, TILEGX_OPC_MFSPR, TILEGX_OPC_MTSPR,
	BITFIELD(51, 2) /* index 693 */,
	TILEGX_OPC_ORI, TILEGX_OPC_ST1_ADD, TILEGX_OPC_ST2_ADD, TILEGX_OPC_ST4_ADD,
	BITFIELD(51, 2) /* index 698 */,
	TILEGX_OPC_STNT1_ADD, TILEGX_OPC_STNT2_ADD, TILEGX_OPC_STNT4_ADD,
	TILEGX_OPC_STNT_ADD,
	BITFIELD(51, 2) /* index 703 */,
	TILEGX_OPC_ST_ADD, TILEGX_OPC_V1ADDI, TILEGX_OPC_V1CMPEQI,
	TILEGX_OPC_V1CMPLTSI,
	BITFIELD(51, 2) /* index 708 */,
	TILEGX_OPC_V1CMPLTUI, TILEGX_OPC_V1MAXUI, TILEGX_OPC_V1MINUI,
	TILEGX_OPC_V2ADDI,
	BITFIELD(51, 2) /* index 713 */,
	TILEGX_OPC_V2CMPEQI, TILEGX_OPC_V2CMPLTSI, TILEGX_OPC_V2CMPLTUI,
	TILEGX_OPC_V2MAXSI,
	BITFIELD(51, 2) /* index 718 */,
	TILEGX_OPC_V2MINSI, TILEGX_OPC_XORI, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	BITFIELD(49, 4) /* index 723 */,
	TILEGX_OPC_NONE, TILEGX_OPC_ADDXSC, TILEGX_OPC_ADDX, TILEGX_OPC_ADD,
	TILEGX_OPC_AND, TILEGX_OPC_CMPEQ, TILEGX_OPC_CMPEXCH4, TILEGX_OPC_CMPEXCH,
	TILEGX_OPC_CMPLES, TILEGX_OPC_CMPLEU, TILEGX_OPC_CMPLTS, TILEGX_OPC_CMPLTU,
	TILEGX_OPC_CMPNE, TILEGX_OPC_DBLALIGN2, TILEGX_OPC_DBLALIGN4,
	TILEGX_OPC_DBLALIGN6,
	BITFIELD(49, 4) /* index 740 */,
	TILEGX_OPC_EXCH4, TILEGX_OPC_EXCH, TILEGX_OPC_FETCHADD4,
	TILEGX_OPC_FETCHADDGEZ4, TILEGX_OPC_FETCHADDGEZ, TILEGX_OPC_FETCHADD,
	TILEGX_OPC_FETCHAND4, TILEGX_OPC_FETCHAND, TILEGX_OPC_FETCHOR4,
	TILEGX_OPC_FETCHOR, TILEGX_OPC_MNZ, TILEGX_OPC_MZ, TILEGX_OPC_NOR,
	CHILD(757), TILEGX_OPC_ROTL, TILEGX_OPC_SHL1ADDX,
	BITFIELD(43, 2) /* index 757 */,
	TILEGX_OPC_OR, TILEGX_OPC_OR, TILEGX_OPC_OR, CHILD(762),
	BITFIELD(45, 2) /* index 762 */,
	TILEGX_OPC_OR, TILEGX_OPC_OR, TILEGX_OPC_OR, CHILD(767),
	BITFIELD(47, 2) /* index 767 */,
	TILEGX_OPC_OR, TILEGX_OPC_OR, TILEGX_OPC_OR, TILEGX_OPC_MOVE,
	BITFIELD(49, 4) /* index 772 */,
	TILEGX_OPC_SHL1ADD, TILEGX_OPC_SHL2ADDX, TILEGX_OPC_SHL2ADD,
	TILEGX_OPC_SHL3ADDX, TILEGX_OPC_SHL3ADD, TILEGX_OPC_SHLX, TILEGX_OPC_SHL,
	TILEGX_OPC_SHRS, TILEGX_OPC_SHRUX, TILEGX_OPC_SHRU, TILEGX_OPC_ST1,
	TILEGX_OPC_ST2, TILEGX_OPC_ST4, TILEGX_OPC_STNT1, TILEGX_OPC_STNT2,
	TILEGX_OPC_STNT4,
	BITFIELD(46, 7) /* index 789 */,
	TILEGX_OPC_STNT, TILEGX_OPC_STNT, TILEGX_OPC_STNT, TILEGX_OPC_STNT,
	TILEGX_OPC_STNT, TILEGX_OPC_STNT, TILEGX_OPC_STNT, TILEGX_OPC_STNT,
	TILEGX_OPC_ST, TILEGX_OPC_ST, TILEGX_OPC_ST, TILEGX_OPC_ST, TILEGX_OPC_ST,
	TILEGX_OPC_ST, TILEGX_OPC_ST, TILEGX_OPC_ST, TILEGX_OPC_SUBXSC,
	TILEGX_OPC_SUBXSC, TILEGX_OPC_SUBXSC, TILEGX_OPC_SUBXSC, TILEGX_OPC_SUBXSC,
	TILEGX_OPC_SUBXSC, TILEGX_OPC_SUBXSC, TILEGX_OPC_SUBXSC, TILEGX_OPC_SUBX,
	TILEGX_OPC_SUBX, TILEGX_OPC_SUBX, TILEGX_OPC_SUBX, TILEGX_OPC_SUBX,
	TILEGX_OPC_SUBX, TILEGX_OPC_SUBX, TILEGX_OPC_SUBX, TILEGX_OPC_SUB,
	TILEGX_OPC_SUB, TILEGX_OPC_SUB, TILEGX_OPC_SUB, TILEGX_OPC_SUB,
	TILEGX_OPC_SUB, TILEGX_OPC_SUB, TILEGX_OPC_SUB, CHILD(918), CHILD(927),
	CHILD(1006), CHILD(1090), CHILD(1099), TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_V1ADDUC, TILEGX_OPC_V1ADDUC, TILEGX_OPC_V1ADDUC,
	TILEGX_OPC_V1ADDUC, TILEGX_OPC_V1ADDUC, TILEGX_OPC_V1ADDUC,
	TILEGX_OPC_V1ADDUC, TILEGX_OPC_V1ADDUC, TILEGX_OPC_V1ADD, TILEGX_OPC_V1ADD,
	TILEGX_OPC_V1ADD, TILEGX_OPC_V1ADD, TILEGX_OPC_V1ADD, TILEGX_OPC_V1ADD,
	TILEGX_OPC_V1ADD, TILEGX_OPC_V1ADD, TILEGX_OPC_V1CMPEQ, TILEGX_OPC_V1CMPEQ,
	TILEGX_OPC_V1CMPEQ, TILEGX_OPC_V1CMPEQ, TILEGX_OPC_V1CMPEQ,
	TILEGX_OPC_V1CMPEQ, TILEGX_OPC_V1CMPEQ, TILEGX_OPC_V1CMPEQ,
	TILEGX_OPC_V1CMPLES, TILEGX_OPC_V1CMPLES, TILEGX_OPC_V1CMPLES,
	TILEGX_OPC_V1CMPLES, TILEGX_OPC_V1CMPLES, TILEGX_OPC_V1CMPLES,
	TILEGX_OPC_V1CMPLES, TILEGX_OPC_V1CMPLES, TILEGX_OPC_V1CMPLEU,
	TILEGX_OPC_V1CMPLEU, TILEGX_OPC_V1CMPLEU, TILEGX_OPC_V1CMPLEU,
	TILEGX_OPC_V1CMPLEU, TILEGX_OPC_V1CMPLEU, TILEGX_OPC_V1CMPLEU,
	TILEGX_OPC_V1CMPLEU, TILEGX_OPC_V1CMPLTS, TILEGX_OPC_V1CMPLTS,
	TILEGX_OPC_V1CMPLTS, TILEGX_OPC_V1CMPLTS, TILEGX_OPC_V1CMPLTS,
	TILEGX_OPC_V1CMPLTS, TILEGX_OPC_V1CMPLTS, TILEGX_OPC_V1CMPLTS,
	TILEGX_OPC_V1CMPLTU, TILEGX_OPC_V1CMPLTU, TILEGX_OPC_V1CMPLTU,
	TILEGX_OPC_V1CMPLTU, TILEGX_OPC_V1CMPLTU, TILEGX_OPC_V1CMPLTU,
	TILEGX_OPC_V1CMPLTU, TILEGX_OPC_V1CMPLTU, TILEGX_OPC_V1CMPNE,
	TILEGX_OPC_V1CMPNE, TILEGX_OPC_V1CMPNE, TILEGX_OPC_V1CMPNE,
	TILEGX_OPC_V1CMPNE, TILEGX_OPC_V1CMPNE, TILEGX_OPC_V1CMPNE,
	TILEGX_OPC_V1CMPNE, TILEGX_OPC_V1INT_H, TILEGX_OPC_V1INT_H,
	TILEGX_OPC_V1INT_H, TILEGX_OPC_V1INT_H, TILEGX_OPC_V1INT_H,
	TILEGX_OPC_V1INT_H, TILEGX_OPC_V1INT_H, TILEGX_OPC_V1INT_H,
	TILEGX_OPC_V1INT_L, TILEGX_OPC_V1INT_L, TILEGX_OPC_V1INT_L,
	TILEGX_OPC_V1INT_L, TILEGX_OPC_V1INT_L, TILEGX_OPC_V1INT_L,
	TILEGX_OPC_V1INT_L, TILEGX_OPC_V1INT_L,
	BITFIELD(43, 3) /* index 918 */,
	TILEGX_OPC_NONE, TILEGX_OPC_DRAIN, TILEGX_OPC_DTLBPR, TILEGX_OPC_FINV,
	TILEGX_OPC_FLUSHWB, TILEGX_OPC_FLUSH, TILEGX_OPC_FNOP, TILEGX_OPC_ICOH,
	BITFIELD(43, 3) /* index 927 */,
	CHILD(936), TILEGX_OPC_INV, TILEGX_OPC_IRET, TILEGX_OPC_JALRP,
	TILEGX_OPC_JALR, TILEGX_OPC_JRP, TILEGX_OPC_JR, CHILD(991),
	BITFIELD(31, 2) /* index 936 */,
	CHILD(941), CHILD(966), TILEGX_OPC_ILL, TILEGX_OPC_ILL,
	BITFIELD(33, 2) /* index 941 */,
	TILEGX_OPC_ILL, TILEGX_OPC_ILL, TILEGX_OPC_ILL, CHILD(946),
	BITFIELD(35, 2) /* index 946 */,
	TILEGX_OPC_ILL, CHILD(951), TILEGX_OPC_ILL, TILEGX_OPC_ILL,
	BITFIELD(37, 2) /* index 951 */,
	TILEGX_OPC_ILL, CHILD(956), TILEGX_OPC_ILL, TILEGX_OPC_ILL,
	BITFIELD(39, 2) /* index 956 */,
	TILEGX_OPC_ILL, CHILD(961), TILEGX_OPC_ILL, TILEGX_OPC_ILL,
	BITFIELD(41, 2) /* index 961 */,
	TILEGX_OPC_ILL, TILEGX_OPC_ILL, TILEGX_OPC_BPT, TILEGX_OPC_ILL,
	BITFIELD(33, 2) /* index 966 */,
	TILEGX_OPC_ILL, TILEGX_OPC_ILL, TILEGX_OPC_ILL, CHILD(971),
	BITFIELD(35, 2) /* index 971 */,
	TILEGX_OPC_ILL, CHILD(976), TILEGX_OPC_ILL, TILEGX_OPC_ILL,
	BITFIELD(37, 2) /* index 976 */,
	TILEGX_OPC_ILL, CHILD(981), TILEGX_OPC_ILL, TILEGX_OPC_ILL,
	BITFIELD(39, 2) /* index 981 */,
	TILEGX_OPC_ILL, CHILD(986), TILEGX_OPC_ILL, TILEGX_OPC_ILL,
	BITFIELD(41, 2) /* index 986 */,
	TILEGX_OPC_ILL, TILEGX_OPC_ILL, TILEGX_OPC_RAISE, TILEGX_OPC_ILL,
	BITFIELD(31, 2) /* index 991 */,
	TILEGX_OPC_LD1S, TILEGX_OPC_LD1S, TILEGX_OPC_LD1S, CHILD(996),
	BITFIELD(33, 2) /* index 996 */,
	TILEGX_OPC_LD1S, TILEGX_OPC_LD1S, TILEGX_OPC_LD1S, CHILD(1001),
	BITFIELD(35, 2) /* index 1001 */,
	TILEGX_OPC_LD1S, TILEGX_OPC_LD1S, TILEGX_OPC_LD1S,
	TILEGX_OPC_PREFETCH_L1_FAULT,
	BITFIELD(43, 3) /* index 1006 */,
	CHILD(1015), CHILD(1030), CHILD(1045), CHILD(1060), CHILD(1075),
	TILEGX_OPC_LDNA, TILEGX_OPC_LDNT1S, TILEGX_OPC_LDNT1U,
	BITFIELD(31, 2) /* index 1015 */,
	TILEGX_OPC_LD1U, TILEGX_OPC_LD1U, TILEGX_OPC_LD1U, CHILD(1020),
	BITFIELD(33, 2) /* index 1020 */,
	TILEGX_OPC_LD1U, TILEGX_OPC_LD1U, TILEGX_OPC_LD1U, CHILD(1025),
	BITFIELD(35, 2) /* index 1025 */,
	TILEGX_OPC_LD1U, TILEGX_OPC_LD1U, TILEGX_OPC_LD1U, TILEGX_OPC_PREFETCH,
	BITFIELD(31, 2) /* index 1030 */,
	TILEGX_OPC_LD2S, TILEGX_OPC_LD2S, TILEGX_OPC_LD2S, CHILD(1035),
	BITFIELD(33, 2) /* index 1035 */,
	TILEGX_OPC_LD2S, TILEGX_OPC_LD2S, TILEGX_OPC_LD2S, CHILD(1040),
	BITFIELD(35, 2) /* index 1040 */,
	TILEGX_OPC_LD2S, TILEGX_OPC_LD2S, TILEGX_OPC_LD2S,
	TILEGX_OPC_PREFETCH_L2_FAULT,
	BITFIELD(31, 2) /* index 1045 */,
	TILEGX_OPC_LD2U, TILEGX_OPC_LD2U, TILEGX_OPC_LD2U, CHILD(1050),
	BITFIELD(33, 2) /* index 1050 */,
	TILEGX_OPC_LD2U, TILEGX_OPC_LD2U, TILEGX_OPC_LD2U, CHILD(1055),
	BITFIELD(35, 2) /* index 1055 */,
	TILEGX_OPC_LD2U, TILEGX_OPC_LD2U, TILEGX_OPC_LD2U, TILEGX_OPC_PREFETCH_L2,
	BITFIELD(31, 2) /* index 1060 */,
	TILEGX_OPC_LD4S, TILEGX_OPC_LD4S, TILEGX_OPC_LD4S, CHILD(1065),
	BITFIELD(33, 2) /* index 1065 */,
	TILEGX_OPC_LD4S, TILEGX_OPC_LD4S, TILEGX_OPC_LD4S, CHILD(1070),
	BITFIELD(35, 2) /* index 1070 */,
	TILEGX_OPC_LD4S, TILEGX_OPC_LD4S, TILEGX_OPC_LD4S,
	TILEGX_OPC_PREFETCH_L3_FAULT,
	BITFIELD(31, 2) /* index 1075 */,
	TILEGX_OPC_LD4U, TILEGX_OPC_LD4U, TILEGX_OPC_LD4U, CHILD(1080),
	BITFIELD(33, 2) /* index 1080 */,
	TILEGX_OPC_LD4U, TILEGX_OPC_LD4U, TILEGX_OPC_LD4U, CHILD(1085),
	BITFIELD(35, 2) /* index 1085 */,
	TILEGX_OPC_LD4U, TILEGX_OPC_LD4U, TILEGX_OPC_LD4U, TILEGX_OPC_PREFETCH_L3,
	BITFIELD(43, 3) /* index 1090 */,
	TILEGX_OPC_LDNT2S, TILEGX_OPC_LDNT2U, TILEGX_OPC_LDNT4S, TILEGX_OPC_LDNT4U,
	TILEGX_OPC_LDNT, TILEGX_OPC_LD, TILEGX_OPC_LNK, TILEGX_OPC_MF,
	BITFIELD(43, 3) /* index 1099 */,
	TILEGX_OPC_NAP, TILEGX_OPC_NOP, TILEGX_OPC_SWINT0, TILEGX_OPC_SWINT1,
	TILEGX_OPC_SWINT2, TILEGX_OPC_SWINT3, TILEGX_OPC_WH64, TILEGX_OPC_NONE,
	BITFIELD(49, 4) /* index 1108 */,
	TILEGX_OPC_V1MAXU, TILEGX_OPC_V1MINU, TILEGX_OPC_V1MNZ, TILEGX_OPC_V1MZ,
	TILEGX_OPC_V1SHL, TILEGX_OPC_V1SHRS, TILEGX_OPC_V1SHRU, TILEGX_OPC_V1SUBUC,
	TILEGX_OPC_V1SUB, TILEGX_OPC_V2ADDSC, TILEGX_OPC_V2ADD, TILEGX_OPC_V2CMPEQ,
	TILEGX_OPC_V2CMPLES, TILEGX_OPC_V2CMPLEU, TILEGX_OPC_V2CMPLTS,
	TILEGX_OPC_V2CMPLTU,
	BITFIELD(49, 4) /* index 1125 */,
	TILEGX_OPC_V2CMPNE, TILEGX_OPC_V2INT_H, TILEGX_OPC_V2INT_L,
	TILEGX_OPC_V2MAXS, TILEGX_OPC_V2MINS, TILEGX_OPC_V2MNZ, TILEGX_OPC_V2MZ,
	TILEGX_OPC_V2PACKH, TILEGX_OPC_V2PACKL, TILEGX_OPC_V2PACKUC,
	TILEGX_OPC_V2SHLSC, TILEGX_OPC_V2SHL, TILEGX_OPC_V2SHRS, TILEGX_OPC_V2SHRU,
	TILEGX_OPC_V2SUBSC, TILEGX_OPC_V2SUB,
	BITFIELD(49, 4) /* index 1142 */,
	TILEGX_OPC_V4ADDSC, TILEGX_OPC_V4ADD, TILEGX_OPC_V4INT_H,
	TILEGX_OPC_V4INT_L, TILEGX_OPC_V4PACKSC, TILEGX_OPC_V4SHLSC,
	TILEGX_OPC_V4SHL, TILEGX_OPC_V4SHRS, TILEGX_OPC_V4SHRU, TILEGX_OPC_V4SUBSC,
	TILEGX_OPC_V4SUB, TILEGX_OPC_XOR, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	BITFIELD(49, 4) /* index 1159 */,
	TILEGX_OPC_NONE, TILEGX_OPC_ROTLI, TILEGX_OPC_SHLI, TILEGX_OPC_SHLXI,
	TILEGX_OPC_SHRSI, TILEGX_OPC_SHRUI, TILEGX_OPC_SHRUXI, TILEGX_OPC_V1SHLI,
	TILEGX_OPC_V1SHRSI, TILEGX_OPC_V1SHRUI, TILEGX_OPC_V2SHLI,
	TILEGX_OPC_V2SHRSI, TILEGX_OPC_V2SHRUI, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE,
	BITFIELD(31, 2) /* index 1176 */,
	TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI,
	CHILD(1181),
	BITFIELD(33, 2) /* index 1181 */,
	TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI,
	CHILD(1186),
	BITFIELD(35, 2) /* index 1186 */,
	TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI,
	CHILD(1191),
	BITFIELD(37, 2) /* index 1191 */,
	TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI,
	CHILD(1196),
	BITFIELD(39, 2) /* index 1196 */,
	TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI,
	CHILD(1201),
	BITFIELD(41, 2) /* index 1201 */,
	TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI, TILEGX_OPC_SHL16INSLI,
	TILEGX_OPC_INFOL,
};

static const unsigned short decode_Y0_fsm[178] =
{
	BITFIELD(27, 4) /* index 0 */,
	CHILD(17), TILEGX_OPC_ADDXI, CHILD(32), TILEGX_OPC_CMPEQI,
	TILEGX_OPC_CMPLTSI, CHILD(62), CHILD(67), CHILD(118), CHILD(123),
	CHILD(128), CHILD(133), CHILD(153), CHILD(158), CHILD(163), CHILD(168),
	CHILD(173),
	BITFIELD(6, 2) /* index 17 */,
	TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, CHILD(22),
	BITFIELD(8, 2) /* index 22 */,
	TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, CHILD(27),
	BITFIELD(10, 2) /* index 27 */,
	TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, TILEGX_OPC_MOVEI,
	BITFIELD(0, 2) /* index 32 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, CHILD(37),
	BITFIELD(2, 2) /* index 37 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, CHILD(42),
	BITFIELD(4, 2) /* index 42 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, CHILD(47),
	BITFIELD(6, 2) /* index 47 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, CHILD(52),
	BITFIELD(8, 2) /* index 52 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, CHILD(57),
	BITFIELD(10, 2) /* index 57 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_INFO,
	BITFIELD(18, 2) /* index 62 */,
	TILEGX_OPC_ADDX, TILEGX_OPC_ADD, TILEGX_OPC_SUBX, TILEGX_OPC_SUB,
	BITFIELD(15, 5) /* index 67 */,
	TILEGX_OPC_SHL1ADD, TILEGX_OPC_SHL1ADD, TILEGX_OPC_SHL1ADD,
	TILEGX_OPC_SHL1ADD, TILEGX_OPC_SHL1ADD, TILEGX_OPC_SHL1ADD,
	TILEGX_OPC_SHL1ADD, TILEGX_OPC_SHL1ADD, TILEGX_OPC_SHL2ADD,
	TILEGX_OPC_SHL2ADD, TILEGX_OPC_SHL2ADD, TILEGX_OPC_SHL2ADD,
	TILEGX_OPC_SHL2ADD, TILEGX_OPC_SHL2ADD, TILEGX_OPC_SHL2ADD,
	TILEGX_OPC_SHL2ADD, TILEGX_OPC_SHL3ADD, TILEGX_OPC_SHL3ADD,
	TILEGX_OPC_SHL3ADD, TILEGX_OPC_SHL3ADD, TILEGX_OPC_SHL3ADD,
	TILEGX_OPC_SHL3ADD, TILEGX_OPC_SHL3ADD, TILEGX_OPC_SHL3ADD, CHILD(100),
	CHILD(109), TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	BITFIELD(12, 3) /* index 100 */,
	TILEGX_OPC_NONE, TILEGX_OPC_CLZ, TILEGX_OPC_CTZ, TILEGX_OPC_FNOP,
	TILEGX_OPC_FSINGLE_PACK1, TILEGX_OPC_NOP, TILEGX_OPC_PCNT,
	TILEGX_OPC_REVBITS,
	BITFIELD(12, 3) /* index 109 */,
	TILEGX_OPC_REVBYTES, TILEGX_OPC_TBLIDXB0, TILEGX_OPC_TBLIDXB1,
	TILEGX_OPC_TBLIDXB2, TILEGX_OPC_TBLIDXB3, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	TILEGX_OPC_NONE,
	BITFIELD(18, 2) /* index 118 */,
	TILEGX_OPC_CMPLES, TILEGX_OPC_CMPLEU, TILEGX_OPC_CMPLTS, TILEGX_OPC_CMPLTU,
	BITFIELD(18, 2) /* index 123 */,
	TILEGX_OPC_CMPEQ, TILEGX_OPC_CMPNE, TILEGX_OPC_MULAX, TILEGX_OPC_MULX,
	BITFIELD(18, 2) /* index 128 */,
	TILEGX_OPC_CMOVEQZ, TILEGX_OPC_CMOVNEZ, TILEGX_OPC_MNZ, TILEGX_OPC_MZ,
	BITFIELD(18, 2) /* index 133 */,
	TILEGX_OPC_AND, TILEGX_OPC_NOR, CHILD(138), TILEGX_OPC_XOR,
	BITFIELD(12, 2) /* index 138 */,
	TILEGX_OPC_OR, TILEGX_OPC_OR, TILEGX_OPC_OR, CHILD(143),
	BITFIELD(14, 2) /* index 143 */,
	TILEGX_OPC_OR, TILEGX_OPC_OR, TILEGX_OPC_OR, CHILD(148),
	BITFIELD(16, 2) /* index 148 */,
	TILEGX_OPC_OR, TILEGX_OPC_OR, TILEGX_OPC_OR, TILEGX_OPC_MOVE,
	BITFIELD(18, 2) /* index 153 */,
	TILEGX_OPC_ROTL, TILEGX_OPC_SHL, TILEGX_OPC_SHRS, TILEGX_OPC_SHRU,
	BITFIELD(18, 2) /* index 158 */,
	TILEGX_OPC_NONE, TILEGX_OPC_SHL1ADDX, TILEGX_OPC_SHL2ADDX,
	TILEGX_OPC_SHL3ADDX,
	BITFIELD(18, 2) /* index 163 */,
	TILEGX_OPC_MUL_HS_HS, TILEGX_OPC_MUL_HU_HU, TILEGX_OPC_MUL_LS_LS,
	TILEGX_OPC_MUL_LU_LU,
	BITFIELD(18, 2) /* index 168 */,
	TILEGX_OPC_MULA_HS_HS, TILEGX_OPC_MULA_HU_HU, TILEGX_OPC_MULA_LS_LS,
	TILEGX_OPC_MULA_LU_LU,
	BITFIELD(18, 2) /* index 173 */,
	TILEGX_OPC_ROTLI, TILEGX_OPC_SHLI, TILEGX_OPC_SHRSI, TILEGX_OPC_SHRUI,
};

static const unsigned short decode_Y1_fsm[167] =
{
	BITFIELD(58, 4) /* index 0 */,
	TILEGX_OPC_NONE, CHILD(17), TILEGX_OPC_ADDXI, CHILD(32), TILEGX_OPC_CMPEQI,
	TILEGX_OPC_CMPLTSI, CHILD(62), CHILD(67), CHILD(117), CHILD(122),
	CHILD(127), CHILD(132), CHILD(152), CHILD(157), CHILD(162), TILEGX_OPC_NONE,
	BITFIELD(37, 2) /* index 17 */,
	TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, CHILD(22),
	BITFIELD(39, 2) /* index 22 */,
	TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, CHILD(27),
	BITFIELD(41, 2) /* index 27 */,
	TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, TILEGX_OPC_ADDI, TILEGX_OPC_MOVEI,
	BITFIELD(31, 2) /* index 32 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, CHILD(37),
	BITFIELD(33, 2) /* index 37 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, CHILD(42),
	BITFIELD(35, 2) /* index 42 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, CHILD(47),
	BITFIELD(37, 2) /* index 47 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, CHILD(52),
	BITFIELD(39, 2) /* index 52 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, CHILD(57),
	BITFIELD(41, 2) /* index 57 */,
	TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_ANDI, TILEGX_OPC_INFO,
	BITFIELD(49, 2) /* index 62 */,
	TILEGX_OPC_ADDX, TILEGX_OPC_ADD, TILEGX_OPC_SUBX, TILEGX_OPC_SUB,
	BITFIELD(47, 4) /* index 67 */,
	TILEGX_OPC_SHL1ADD, TILEGX_OPC_SHL1ADD, TILEGX_OPC_SHL1ADD,
	TILEGX_OPC_SHL1ADD, TILEGX_OPC_SHL2ADD, TILEGX_OPC_SHL2ADD,
	TILEGX_OPC_SHL2ADD, TILEGX_OPC_SHL2ADD, TILEGX_OPC_SHL3ADD,
	TILEGX_OPC_SHL3ADD, TILEGX_OPC_SHL3ADD, TILEGX_OPC_SHL3ADD, CHILD(84),
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_NONE,
	BITFIELD(43, 3) /* index 84 */,
	CHILD(93), CHILD(96), CHILD(99), CHILD(102), CHILD(105), CHILD(108),
	CHILD(111), CHILD(114),
	BITFIELD(46, 1) /* index 93 */,
	TILEGX_OPC_NONE, TILEGX_OPC_FNOP,
	BITFIELD(46, 1) /* index 96 */,
	TILEGX_OPC_NONE, TILEGX_OPC_ILL,
	BITFIELD(46, 1) /* index 99 */,
	TILEGX_OPC_NONE, TILEGX_OPC_JALRP,
	BITFIELD(46, 1) /* index 102 */,
	TILEGX_OPC_NONE, TILEGX_OPC_JALR,
	BITFIELD(46, 1) /* index 105 */,
	TILEGX_OPC_NONE, TILEGX_OPC_JRP,
	BITFIELD(46, 1) /* index 108 */,
	TILEGX_OPC_NONE, TILEGX_OPC_JR,
	BITFIELD(46, 1) /* index 111 */,
	TILEGX_OPC_NONE, TILEGX_OPC_LNK,
	BITFIELD(46, 1) /* index 114 */,
	TILEGX_OPC_NONE, TILEGX_OPC_NOP,
	BITFIELD(49, 2) /* index 117 */,
	TILEGX_OPC_CMPLES, TILEGX_OPC_CMPLEU, TILEGX_OPC_CMPLTS, TILEGX_OPC_CMPLTU,
	BITFIELD(49, 2) /* index 122 */,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_CMPEQ, TILEGX_OPC_CMPNE,
	BITFIELD(49, 2) /* index 127 */,
	TILEGX_OPC_NONE, TILEGX_OPC_NONE, TILEGX_OPC_MNZ, TILEGX_OPC_MZ,
	BITFIELD(49, 2) /* index 132 */,
	TILEGX_OPC_AND, TILEGX_OPC_NOR, CHILD(137), TILEGX_OPC_XOR,
	BITFIELD(43, 2) /* index 137 */,
	TILEGX_OPC_OR, TILEGX_OPC_OR, TILEGX_OPC_OR, CHILD(142),
	BITFIELD(45, 2) /* index 142 */,
	TILEGX_OPC_OR, TILEGX_OPC_OR, TILEGX_OPC_OR, CHILD(147),
	BITFIELD(47, 2) /* index 147 */,
	TILEGX_OPC_OR, TILEGX_OPC_OR, TILEGX_OPC_OR, TILEGX_OPC_MOVE,
	BITFIELD(49, 2) /* index 152 */,
	TILEGX_OPC_ROTL, TILEGX_OPC_SHL, TILEGX_OPC_SHRS, TILEGX_OPC_SHRU,
	BITFIELD(49, 2) /* index 157 */,
	TILEGX_OPC_NONE, TILEGX_OPC_SHL1ADDX, TILEGX_OPC_SHL2ADDX,
	TILEGX_OPC_SHL3ADDX,
	BITFIELD(49, 2) /* index 162 */,
	TILEGX_OPC_ROTLI, TILEGX_OPC_SHLI, TILEGX_OPC_SHRSI, TILEGX_OPC_SHRUI,
};

static const unsigned short decode_Y2_fsm[118] =
{
	BITFIELD(62, 2) /* index 0 */,
	TILEGX_OPC_NONE, CHILD(5), CHILD(66), CHILD(109),
	BITFIELD(55, 3) /* index 5 */,
	CHILD(14), CHILD(14), CHILD(14), CHILD(17), CHILD(40), CHILD(40), CHILD(40),
	CHILD(43),
	BITFIELD(26, 1) /* index 14 */,
	TILEGX_OPC_LD1S, TILEGX_OPC_LD1U,
	BITFIELD(26, 1) /* index 17 */,
	CHILD(20), CHILD(30),
	BITFIELD(51, 2) /* index 20 */,
	TILEGX_OPC_LD1S, TILEGX_OPC_LD1S, TILEGX_OPC_LD1S, CHILD(25),
	BITFIELD(53, 2) /* index 25 */,
	TILEGX_OPC_LD1S, TILEGX_OPC_LD1S, TILEGX_OPC_LD1S,
	TILEGX_OPC_PREFETCH_L1_FAULT,
	BITFIELD(51, 2) /* index 30 */,
	TILEGX_OPC_LD1U, TILEGX_OPC_LD1U, TILEGX_OPC_LD1U, CHILD(35),
	BITFIELD(53, 2) /* index 35 */,
	TILEGX_OPC_LD1U, TILEGX_OPC_LD1U, TILEGX_OPC_LD1U, TILEGX_OPC_PREFETCH,
	BITFIELD(26, 1) /* index 40 */,
	TILEGX_OPC_LD2S, TILEGX_OPC_LD2U,
	BITFIELD(26, 1) /* index 43 */,
	CHILD(46), CHILD(56),
	BITFIELD(51, 2) /* index 46 */,
	TILEGX_OPC_LD2S, TILEGX_OPC_LD2S, TILEGX_OPC_LD2S, CHILD(51),
	BITFIELD(53, 2) /* index 51 */,
	TILEGX_OPC_LD2S, TILEGX_OPC_LD2S, TILEGX_OPC_LD2S,
	TILEGX_OPC_PREFETCH_L2_FAULT,
	BITFIELD(51, 2) /* index 56 */,
	TILEGX_OPC_LD2U, TILEGX_OPC_LD2U, TILEGX_OPC_LD2U, CHILD(61),
	BITFIELD(53, 2) /* index 61 */,
	TILEGX_OPC_LD2U, TILEGX_OPC_LD2U, TILEGX_OPC_LD2U, TILEGX_OPC_PREFETCH_L2,
	BITFIELD(56, 2) /* index 66 */,
	CHILD(71), CHILD(74), CHILD(90), CHILD(93),
	BITFIELD(26, 1) /* index 71 */,
	TILEGX_OPC_NONE, TILEGX_OPC_LD4S,
	BITFIELD(26, 1) /* index 74 */,
	TILEGX_OPC_NONE, CHILD(77),
	BITFIELD(51, 2) /* index 77 */,
	TILEGX_OPC_LD4S, TILEGX_OPC_LD4S, TILEGX_OPC_LD4S, CHILD(82),
	BITFIELD(53, 2) /* index 82 */,
	TILEGX_OPC_LD4S, TILEGX_OPC_LD4S, TILEGX_OPC_LD4S, CHILD(87),
	BITFIELD(55, 1) /* index 87 */,
	TILEGX_OPC_LD4S, TILEGX_OPC_PREFETCH_L3_FAULT,
	BITFIELD(26, 1) /* index 90 */,
	TILEGX_OPC_LD4U, TILEGX_OPC_LD,
	BITFIELD(26, 1) /* index 93 */,
	CHILD(96), TILEGX_OPC_LD,
	BITFIELD(51, 2) /* index 96 */,
	TILEGX_OPC_LD4U, TILEGX_OPC_LD4U, TILEGX_OPC_LD4U, CHILD(101),
	BITFIELD(53, 2) /* index 101 */,
	TILEGX_OPC_LD4U, TILEGX_OPC_LD4U, TILEGX_OPC_LD4U, CHILD(106),
	BITFIELD(55, 1) /* index 106 */,
	TILEGX_OPC_LD4U, TILEGX_OPC_PREFETCH_L3,
	BITFIELD(26, 1) /* index 109 */,
	CHILD(112), CHILD(115),
	BITFIELD(57, 1) /* index 112 */,
	TILEGX_OPC_ST1, TILEGX_OPC_ST4,
	BITFIELD(57, 1) /* index 115 */,
	TILEGX_OPC_ST2, TILEGX_OPC_ST,
};

#undef BITFIELD
#undef CHILD
const unsigned short *const
tilegx_bundle_decoder_fsms[TILEGX_NUM_PIPELINE_ENCODINGS] =
{
	decode_X0_fsm,
	decode_X1_fsm,
	decode_Y0_fsm,
	decode_Y1_fsm,
	decode_Y2_fsm
};
const struct tilegx_operand tilegx_operands[35] =
{
	{
		TILEGX_OP_TYPE_IMMEDIATE, BFD_RELOC(TILEGX_IMM8_X0),
		8, 1, 0, 0, 0, 0,
		create_Imm8_X0, get_Imm8_X0
	},
	{
		TILEGX_OP_TYPE_IMMEDIATE, BFD_RELOC(TILEGX_IMM8_X1),
		8, 1, 0, 0, 0, 0,
		create_Imm8_X1, get_Imm8_X1
	},
	{
		TILEGX_OP_TYPE_IMMEDIATE, BFD_RELOC(TILEGX_IMM8_Y0),
		8, 1, 0, 0, 0, 0,
		create_Imm8_Y0, get_Imm8_Y0
	},
	{
		TILEGX_OP_TYPE_IMMEDIATE, BFD_RELOC(TILEGX_IMM8_Y1),
		8, 1, 0, 0, 0, 0,
		create_Imm8_Y1, get_Imm8_Y1
	},
	{
		TILEGX_OP_TYPE_IMMEDIATE, BFD_RELOC(TILEGX_IMM16_X0_HW0_LAST),
		16, 1, 0, 0, 0, 0,
		create_Imm16_X0, get_Imm16_X0
	},
	{
		TILEGX_OP_TYPE_IMMEDIATE, BFD_RELOC(TILEGX_IMM16_X1_HW0_LAST),
		16, 1, 0, 0, 0, 0,
		create_Imm16_X1, get_Imm16_X1
	},
	{
		TILEGX_OP_TYPE_REGISTER, BFD_RELOC(NONE),
		6, 0, 0, 1, 0, 0,
		create_Dest_X0, get_Dest_X0
	},
	{
		TILEGX_OP_TYPE_REGISTER, BFD_RELOC(NONE),
		6, 0, 1, 0, 0, 0,
		create_SrcA_X0, get_SrcA_X0
	},
	{
		TILEGX_OP_TYPE_REGISTER, BFD_RELOC(NONE),
		6, 0, 0, 1, 0, 0,
		create_Dest_X1, get_Dest_X1
	},
	{
		TILEGX_OP_TYPE_REGISTER, BFD_RELOC(NONE),
		6, 0, 1, 0, 0, 0,
		create_SrcA_X1, get_SrcA_X1
	},
	{
		TILEGX_OP_TYPE_REGISTER, BFD_RELOC(NONE),
		6, 0, 0, 1, 0, 0,
		create_Dest_Y0, get_Dest_Y0
	},
	{
		TILEGX_OP_TYPE_REGISTER, BFD_RELOC(NONE),
		6, 0, 1, 0, 0, 0,
		create_SrcA_Y0, get_SrcA_Y0
	},
	{
		TILEGX_OP_TYPE_REGISTER, BFD_RELOC(NONE),
		6, 0, 0, 1, 0, 0,
		create_Dest_Y1, get_Dest_Y1
	},
	{
		TILEGX_OP_TYPE_REGISTER, BFD_RELOC(NONE),
		6, 0, 1, 0, 0, 0,
		create_SrcA_Y1, get_SrcA_Y1
	},
	{
		TILEGX_OP_TYPE_REGISTER, BFD_RELOC(NONE),
		6, 0, 1, 0, 0, 0,
		create_SrcA_Y2, get_SrcA_Y2
	},
	{
		TILEGX_OP_TYPE_REGISTER, BFD_RELOC(NONE),
		6, 0, 1, 1, 0, 0,
		create_SrcA_X1, get_SrcA_X1
	},
	{
		TILEGX_OP_TYPE_REGISTER, BFD_RELOC(NONE),
		6, 0, 1, 0, 0, 0,
		create_SrcB_X0, get_SrcB_X0
	},
	{
		TILEGX_OP_TYPE_REGISTER, BFD_RELOC(NONE),
		6, 0, 1, 0, 0, 0,
		create_SrcB_X1, get_SrcB_X1
	},
	{
		TILEGX_OP_TYPE_REGISTER, BFD_RELOC(NONE),
		6, 0, 1, 0, 0, 0,
		create_SrcB_Y0, get_SrcB_Y0
	},
	{
		TILEGX_OP_TYPE_REGISTER, BFD_RELOC(NONE),
		6, 0, 1, 0, 0, 0,
		create_SrcB_Y1, get_SrcB_Y1
	},
	{
		TILEGX_OP_TYPE_ADDRESS, BFD_RELOC(TILEGX_BROFF_X1),
		17, 1, 0, 0, 1, TILEGX_LOG2_BUNDLE_ALIGNMENT_IN_BYTES,
		create_BrOff_X1, get_BrOff_X1
	},
	{
		TILEGX_OP_TYPE_IMMEDIATE, BFD_RELOC(TILEGX_MMSTART_X0),
		6, 0, 0, 0, 0, 0,
		create_BFStart_X0, get_BFStart_X0
	},
	{
		TILEGX_OP_TYPE_IMMEDIATE, BFD_RELOC(TILEGX_MMEND_X0),
		6, 0, 0, 0, 0, 0,
		create_BFEnd_X0, get_BFEnd_X0
	},
	{
		TILEGX_OP_TYPE_REGISTER, BFD_RELOC(NONE),
		6, 0, 1, 1, 0, 0,
		create_Dest_X0, get_Dest_X0
	},
	{
		TILEGX_OP_TYPE_REGISTER, BFD_RELOC(NONE),
		6, 0, 1, 1, 0, 0,
		create_Dest_Y0, get_Dest_Y0
	},
	{
		TILEGX_OP_TYPE_ADDRESS, BFD_RELOC(TILEGX_JUMPOFF_X1),
		27, 1, 0, 0, 1, TILEGX_LOG2_BUNDLE_ALIGNMENT_IN_BYTES,
		create_JumpOff_X1, get_JumpOff_X1
	},
	{
		TILEGX_OP_TYPE_REGISTER, BFD_RELOC(NONE),
		6, 0, 0, 1, 0, 0,
		create_SrcBDest_Y2, get_SrcBDest_Y2
	},
	{
		TILEGX_OP_TYPE_SPR, BFD_RELOC(TILEGX_MF_IMM14_X1),
		14, 0, 0, 0, 0, 0,
		create_MF_Imm14_X1, get_MF_Imm14_X1
	},
	{
		TILEGX_OP_TYPE_SPR, BFD_RELOC(TILEGX_MT_IMM14_X1),
		14, 0, 0, 0, 0, 0,
		create_MT_Imm14_X1, get_MT_Imm14_X1
	},
	{
		TILEGX_OP_TYPE_IMMEDIATE, BFD_RELOC(TILEGX_SHAMT_X0),
		6, 0, 0, 0, 0, 0,
		create_ShAmt_X0, get_ShAmt_X0
	},
	{
		TILEGX_OP_TYPE_IMMEDIATE, BFD_RELOC(TILEGX_SHAMT_X1),
		6, 0, 0, 0, 0, 0,
		create_ShAmt_X1, get_ShAmt_X1
	},
	{
		TILEGX_OP_TYPE_IMMEDIATE, BFD_RELOC(TILEGX_SHAMT_Y0),
		6, 0, 0, 0, 0, 0,
		create_ShAmt_Y0, get_ShAmt_Y0
	},
	{
		TILEGX_OP_TYPE_IMMEDIATE, BFD_RELOC(TILEGX_SHAMT_Y1),
		6, 0, 0, 0, 0, 0,
		create_ShAmt_Y1, get_ShAmt_Y1
	},
	{
		TILEGX_OP_TYPE_REGISTER, BFD_RELOC(NONE),
		6, 0, 1, 0, 0, 0,
		create_SrcBDest_Y2, get_SrcBDest_Y2
	},
	{
		TILEGX_OP_TYPE_IMMEDIATE, BFD_RELOC(TILEGX_DEST_IMM8_X1),
		8, 1, 0, 0, 0, 0,
		create_Dest_Imm8_X1, get_Dest_Imm8_X1
	}
};




/* Given a set of bundle bits and the lookup FSM for a specific pipe,
 * returns which instruction the bundle contains in that pipe.
 */
static const struct tilegx_opcode *
find_opcode(tilegx_bundle_bits bits, const unsigned short *table)
{
	int index = 0;

	while (1)
	{
		unsigned short bitspec = table[index];
		unsigned int bitfield =
			((unsigned int)(bits >> (bitspec & 63))) & (bitspec >> 6);

		unsigned short next = table[index + 1 + bitfield];

		if (next <= TILEGX_OPC_NONE)
		{
			return &tilegx_opcodes[next];
		}

		index = next - TILEGX_OPC_NONE;
	}
}


int
parse_insn_tilegx(tilegx_bundle_bits bits,
				  unsigned long long pc,
				  struct tilegx_decoded_instruction
				  decoded[TILEGX_MAX_INSTRUCTIONS_PER_BUNDLE])
{
	int num_instructions = 0;
	int pipe;

	int min_pipe, max_pipe;

	if ((bits & TILEGX_BUNDLE_MODE_MASK) == 0)
	{
		min_pipe = TILEGX_PIPELINE_X0;
		max_pipe = TILEGX_PIPELINE_X1;
	}
	else
	{
		min_pipe = TILEGX_PIPELINE_Y0;
		max_pipe = TILEGX_PIPELINE_Y2;
	}

	/* For each pipe, find an instruction that fits. */
	for (pipe = min_pipe; pipe <= max_pipe; pipe++)
	{
		const struct tilegx_opcode *opc;
		struct tilegx_decoded_instruction *d;
		int i;

		d = &decoded[num_instructions++];
		opc = find_opcode (bits, tilegx_bundle_decoder_fsms[pipe]);
		d->opcode = opc;

		/* Decode each operand, sign extending, etc. as appropriate. */
		for (i = 0; i < opc->num_operands; i++)
		{
			const struct tilegx_operand *op =
					&tilegx_operands[opc->operands[pipe][i]];
			int raw_opval = op->extract (bits);
			long long opval;

			if (op->is_signed)
			{
				/* Sign-extend the operand. */
				int shift = (int)((sizeof(int) * 8) - op->num_bits);
				raw_opval = (raw_opval << shift) >> shift;
			}

			/* Adjust PC-relative scaled branch offsets. */
			if (op->type == TILEGX_OP_TYPE_ADDRESS)
			{
				opval = (raw_opval * TILEGX_BUNDLE_SIZE_IN_BYTES) + pc;
			}
			else
			{
				opval = raw_opval;
			}

			/* Record the final value. */
			d->operands[i] = op;
			d->operand_values[i] = opval;
		}
	}

	return num_instructions;
}
