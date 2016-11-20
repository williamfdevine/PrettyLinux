/*
 * tegra_sgtl5000.c - Tegra machine ASoC driver for boards using SGTL5000 codec
 *
 * Author: Marcel Ziswiler <marcel@ziswiler.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Based on code copyright/by:
 *
 * Copyright (C) 2010-2012 - NVIDIA, Inc.
 * (c) 2009, 2010 Nvidia Graphics Pvt. Ltd.
 * Copyright 2007 Wolfson Microelectronics PLC.
 */

#include <linux/module.h>
#include <linux/platform_device.h>
#include <linux/slab.h>
#include <linux/gpio.h>
#include <linux/of_gpio.h>

#include <sound/core.h>
#include <sound/pcm.h>
#include <sound/pcm_params.h>
#include <sound/soc.h>

#include "../codecs/sgtl5000.h"

#include "tegra_asoc_utils.h"

#define DRV_NAME "tegra-snd-sgtl5000"

struct tegra_sgtl5000
{
	struct tegra_asoc_utils_data util_data;
};

static int tegra_sgtl5000_hw_params(struct snd_pcm_substream *substream,
									struct snd_pcm_hw_params *params)
{
	struct snd_soc_pcm_runtime *rtd = substream->private_data;
	struct snd_soc_dai *codec_dai = rtd->codec_dai;
	struct snd_soc_card *card = rtd->card;
	struct tegra_sgtl5000 *machine = snd_soc_card_get_drvdata(card);
	int srate, mclk;
	int err;

	srate = params_rate(params);

	switch (srate)
	{
		case 11025:
		case 22050:
		case 44100:
		case 88200:
			mclk = 11289600;
			break;

		default:
			mclk = 12288000;
			break;
	}

	err = tegra_asoc_utils_set_rate(&machine->util_data, srate, mclk);

	if (err < 0)
	{
		dev_err(card->dev, "Can't configure clocks\n");
		return err;
	}

	err = snd_soc_dai_set_sysclk(codec_dai, SGTL5000_SYSCLK, mclk,
								 SND_SOC_CLOCK_IN);

	if (err < 0)
	{
		dev_err(card->dev, "codec_dai clock not set\n");
		return err;
	}

	return 0;
}

static struct snd_soc_ops tegra_sgtl5000_ops =
{
	.hw_params = tegra_sgtl5000_hw_params,
};

static const struct snd_soc_dapm_widget tegra_sgtl5000_dapm_widgets[] =
{
	SND_SOC_DAPM_HP("Headphone Jack", NULL),
	SND_SOC_DAPM_LINE("Line In Jack", NULL),
	SND_SOC_DAPM_MIC("Mic Jack", NULL),
};

static struct snd_soc_dai_link tegra_sgtl5000_dai =
{
	.name = "sgtl5000",
	.stream_name = "HiFi",
	.codec_dai_name = "sgtl5000",
	.ops = &tegra_sgtl5000_ops,
	.dai_fmt = SND_SOC_DAIFMT_I2S | SND_SOC_DAIFMT_NB_NF |
	SND_SOC_DAIFMT_CBS_CFS,
};

static struct snd_soc_card snd_soc_tegra_sgtl5000 =
{
	.name = "tegra-sgtl5000",
	.owner = THIS_MODULE,
	.dai_link = &tegra_sgtl5000_dai,
	.num_links = 1,
	.dapm_widgets = tegra_sgtl5000_dapm_widgets,
	.num_dapm_widgets = ARRAY_SIZE(tegra_sgtl5000_dapm_widgets),
	.fully_routed = true,
};

static int tegra_sgtl5000_driver_probe(struct platform_device *pdev)
{
	struct device_node *np = pdev->dev.of_node;
	struct snd_soc_card *card = &snd_soc_tegra_sgtl5000;
	struct tegra_sgtl5000 *machine;
	int ret;

	machine = devm_kzalloc(&pdev->dev, sizeof(struct tegra_sgtl5000),
						   GFP_KERNEL);

	if (!machine)
	{
		dev_err(&pdev->dev, "Can't allocate tegra_sgtl5000 struct\n");
		return -ENOMEM;
	}

	card->dev = &pdev->dev;
	platform_set_drvdata(pdev, card);
	snd_soc_card_set_drvdata(card, machine);

	ret = snd_soc_of_parse_card_name(card, "nvidia,model");

	if (ret)
	{
		goto err;
	}

	ret = snd_soc_of_parse_audio_routing(card, "nvidia,audio-routing");

	if (ret)
	{
		goto err;
	}

	tegra_sgtl5000_dai.codec_of_node = of_parse_phandle(np,
									   "nvidia,audio-codec", 0);

	if (!tegra_sgtl5000_dai.codec_of_node)
	{
		dev_err(&pdev->dev,
				"Property 'nvidia,audio-codec' missing or invalid\n");
		ret = -EINVAL;
		goto err;
	}

	tegra_sgtl5000_dai.cpu_of_node = of_parse_phandle(np,
									 "nvidia,i2s-controller", 0);

	if (!tegra_sgtl5000_dai.cpu_of_node)
	{
		dev_err(&pdev->dev,
				"Property 'nvidia,i2s-controller' missing/invalid\n");
		ret = -EINVAL;
		goto err;
	}

	tegra_sgtl5000_dai.platform_of_node = tegra_sgtl5000_dai.cpu_of_node;

	ret = tegra_asoc_utils_init(&machine->util_data, &pdev->dev);

	if (ret)
	{
		goto err;
	}

	ret = snd_soc_register_card(card);

	if (ret)
	{
		dev_err(&pdev->dev, "snd_soc_register_card failed (%d)\n",
				ret);
		goto err_fini_utils;
	}

	return 0;

err_fini_utils:
	tegra_asoc_utils_fini(&machine->util_data);
err:
	return ret;
}

static int tegra_sgtl5000_driver_remove(struct platform_device *pdev)
{
	struct snd_soc_card *card = platform_get_drvdata(pdev);
	struct tegra_sgtl5000 *machine = snd_soc_card_get_drvdata(card);
	int ret;

	ret = snd_soc_unregister_card(card);

	tegra_asoc_utils_fini(&machine->util_data);

	return ret;
}

static const struct of_device_id tegra_sgtl5000_of_match[] =
{
	{ .compatible = "nvidia,tegra-audio-sgtl5000", },
	{ /* sentinel */ },
};

static struct platform_driver tegra_sgtl5000_driver =
{
	.driver = {
		.name = DRV_NAME,
		.pm = &snd_soc_pm_ops,
		.of_match_table = tegra_sgtl5000_of_match,
	},
	.probe = tegra_sgtl5000_driver_probe,
	.remove = tegra_sgtl5000_driver_remove,
};
module_platform_driver(tegra_sgtl5000_driver);

MODULE_AUTHOR("Marcel Ziswiler <marcel@ziswiler.com>");
MODULE_DESCRIPTION("Tegra SGTL5000 machine ASoC driver");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:" DRV_NAME);
MODULE_DEVICE_TABLE(of, tegra_sgtl5000_of_match);
