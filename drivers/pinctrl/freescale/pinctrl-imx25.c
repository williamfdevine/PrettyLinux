/*
 * imx25 pinctrl driver.
 *
 * Copyright 2013 Eukréa Electromatique <denis@eukrea.com>
 *
 * This driver was mostly copied from the imx51 pinctrl driver which has:
 *
 * Copyright (C) 2012 Freescale Semiconductor, Inc.
 * Copyright (C) 2012 Linaro, Inc.
 *
 * Author: Denis Carikli <denis@eukrea.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as published
 * by the Free Software Foundation.
 */

#include <linux/err.h>
#include <linux/init.h>
#include <linux/io.h>
#include <linux/of.h>
#include <linux/of_device.h>
#include <linux/pinctrl/pinctrl.h>

#include "pinctrl-imx.h"

enum imx25_pads
{
	MX25_PAD_RESERVE0 = 0,
	MX25_PAD_RESERVE1 = 1,
	MX25_PAD_A10 = 2,
	MX25_PAD_A13 = 3,
	MX25_PAD_A14 = 4,
	MX25_PAD_A15 = 5,
	MX25_PAD_A16 = 6,
	MX25_PAD_A17 = 7,
	MX25_PAD_A18 = 8,
	MX25_PAD_A19 = 9,
	MX25_PAD_A20 = 10,
	MX25_PAD_A21 = 11,
	MX25_PAD_A22 = 12,
	MX25_PAD_A23 = 13,
	MX25_PAD_A24 = 14,
	MX25_PAD_A25 = 15,
	MX25_PAD_EB0 = 16,
	MX25_PAD_EB1 = 17,
	MX25_PAD_OE = 18,
	MX25_PAD_CS0 = 19,
	MX25_PAD_CS1 = 20,
	MX25_PAD_CS4 = 21,
	MX25_PAD_CS5 = 22,
	MX25_PAD_NF_CE0 = 23,
	MX25_PAD_ECB = 24,
	MX25_PAD_LBA = 25,
	MX25_PAD_BCLK = 26,
	MX25_PAD_RW = 27,
	MX25_PAD_NFWE_B = 28,
	MX25_PAD_NFRE_B = 29,
	MX25_PAD_NFALE = 30,
	MX25_PAD_NFCLE = 31,
	MX25_PAD_NFWP_B = 32,
	MX25_PAD_NFRB = 33,
	MX25_PAD_D15 = 34,
	MX25_PAD_D14 = 35,
	MX25_PAD_D13 = 36,
	MX25_PAD_D12 = 37,
	MX25_PAD_D11 = 38,
	MX25_PAD_D10 = 39,
	MX25_PAD_D9 = 40,
	MX25_PAD_D8 = 41,
	MX25_PAD_D7 = 42,
	MX25_PAD_D6 = 43,
	MX25_PAD_D5 = 44,
	MX25_PAD_D4 = 45,
	MX25_PAD_D3 = 46,
	MX25_PAD_D2 = 47,
	MX25_PAD_D1 = 48,
	MX25_PAD_D0 = 49,
	MX25_PAD_LD0 = 50,
	MX25_PAD_LD1 = 51,
	MX25_PAD_LD2 = 52,
	MX25_PAD_LD3 = 53,
	MX25_PAD_LD4 = 54,
	MX25_PAD_LD5 = 55,
	MX25_PAD_LD6 = 56,
	MX25_PAD_LD7 = 57,
	MX25_PAD_LD8 = 58,
	MX25_PAD_LD9 = 59,
	MX25_PAD_LD10 = 60,
	MX25_PAD_LD11 = 61,
	MX25_PAD_LD12 = 62,
	MX25_PAD_LD13 = 63,
	MX25_PAD_LD14 = 64,
	MX25_PAD_LD15 = 65,
	MX25_PAD_HSYNC = 66,
	MX25_PAD_VSYNC = 67,
	MX25_PAD_LSCLK = 68,
	MX25_PAD_OE_ACD = 69,
	MX25_PAD_CONTRAST = 70,
	MX25_PAD_PWM = 71,
	MX25_PAD_CSI_D2 = 72,
	MX25_PAD_CSI_D3 = 73,
	MX25_PAD_CSI_D4 = 74,
	MX25_PAD_CSI_D5 = 75,
	MX25_PAD_CSI_D6 = 76,
	MX25_PAD_CSI_D7 = 77,
	MX25_PAD_CSI_D8 = 78,
	MX25_PAD_CSI_D9 = 79,
	MX25_PAD_CSI_MCLK = 80,
	MX25_PAD_CSI_VSYNC = 81,
	MX25_PAD_CSI_HSYNC = 82,
	MX25_PAD_CSI_PIXCLK = 83,
	MX25_PAD_I2C1_CLK = 84,
	MX25_PAD_I2C1_DAT = 85,
	MX25_PAD_CSPI1_MOSI = 86,
	MX25_PAD_CSPI1_MISO = 87,
	MX25_PAD_CSPI1_SS0 = 88,
	MX25_PAD_CSPI1_SS1 = 89,
	MX25_PAD_CSPI1_SCLK = 90,
	MX25_PAD_CSPI1_RDY = 91,
	MX25_PAD_UART1_RXD = 92,
	MX25_PAD_UART1_TXD = 93,
	MX25_PAD_UART1_RTS = 94,
	MX25_PAD_UART1_CTS = 95,
	MX25_PAD_UART2_RXD = 96,
	MX25_PAD_UART2_TXD = 97,
	MX25_PAD_UART2_RTS = 98,
	MX25_PAD_UART2_CTS = 99,
	MX25_PAD_SD1_CMD = 100,
	MX25_PAD_SD1_CLK = 101,
	MX25_PAD_SD1_DATA0 = 102,
	MX25_PAD_SD1_DATA1 = 103,
	MX25_PAD_SD1_DATA2 = 104,
	MX25_PAD_SD1_DATA3 = 105,
	MX25_PAD_KPP_ROW0 = 106,
	MX25_PAD_KPP_ROW1 = 107,
	MX25_PAD_KPP_ROW2 = 108,
	MX25_PAD_KPP_ROW3 = 109,
	MX25_PAD_KPP_COL0 = 110,
	MX25_PAD_KPP_COL1 = 111,
	MX25_PAD_KPP_COL2 = 112,
	MX25_PAD_KPP_COL3 = 113,
	MX25_PAD_FEC_MDC = 114,
	MX25_PAD_FEC_MDIO = 115,
	MX25_PAD_FEC_TDATA0 = 116,
	MX25_PAD_FEC_TDATA1 = 117,
	MX25_PAD_FEC_TX_EN = 118,
	MX25_PAD_FEC_RDATA0 = 119,
	MX25_PAD_FEC_RDATA1 = 120,
	MX25_PAD_FEC_RX_DV = 121,
	MX25_PAD_FEC_TX_CLK = 122,
	MX25_PAD_RTCK = 123,
	MX25_PAD_DE_B = 124,
	MX25_PAD_GPIO_A = 125,
	MX25_PAD_GPIO_B = 126,
	MX25_PAD_GPIO_C = 127,
	MX25_PAD_GPIO_D = 128,
	MX25_PAD_GPIO_E = 129,
	MX25_PAD_GPIO_F = 130,
	MX25_PAD_EXT_ARMCLK = 131,
	MX25_PAD_UPLL_BYPCLK = 132,
	MX25_PAD_VSTBY_REQ = 133,
	MX25_PAD_VSTBY_ACK = 134,
	MX25_PAD_POWER_FAIL  = 135,
	MX25_PAD_CLKO = 136,
	MX25_PAD_BOOT_MODE0 = 137,
	MX25_PAD_BOOT_MODE1 = 138,
};

/* Pad names for the pinmux subsystem */
static const struct pinctrl_pin_desc imx25_pinctrl_pads[] =
{
	IMX_PINCTRL_PIN(MX25_PAD_RESERVE0),
	IMX_PINCTRL_PIN(MX25_PAD_RESERVE1),
	IMX_PINCTRL_PIN(MX25_PAD_A10),
	IMX_PINCTRL_PIN(MX25_PAD_A13),
	IMX_PINCTRL_PIN(MX25_PAD_A14),
	IMX_PINCTRL_PIN(MX25_PAD_A15),
	IMX_PINCTRL_PIN(MX25_PAD_A16),
	IMX_PINCTRL_PIN(MX25_PAD_A17),
	IMX_PINCTRL_PIN(MX25_PAD_A18),
	IMX_PINCTRL_PIN(MX25_PAD_A19),
	IMX_PINCTRL_PIN(MX25_PAD_A20),
	IMX_PINCTRL_PIN(MX25_PAD_A21),
	IMX_PINCTRL_PIN(MX25_PAD_A22),
	IMX_PINCTRL_PIN(MX25_PAD_A23),
	IMX_PINCTRL_PIN(MX25_PAD_A24),
	IMX_PINCTRL_PIN(MX25_PAD_A25),
	IMX_PINCTRL_PIN(MX25_PAD_EB0),
	IMX_PINCTRL_PIN(MX25_PAD_EB1),
	IMX_PINCTRL_PIN(MX25_PAD_OE),
	IMX_PINCTRL_PIN(MX25_PAD_CS0),
	IMX_PINCTRL_PIN(MX25_PAD_CS1),
	IMX_PINCTRL_PIN(MX25_PAD_CS4),
	IMX_PINCTRL_PIN(MX25_PAD_CS5),
	IMX_PINCTRL_PIN(MX25_PAD_NF_CE0),
	IMX_PINCTRL_PIN(MX25_PAD_ECB),
	IMX_PINCTRL_PIN(MX25_PAD_LBA),
	IMX_PINCTRL_PIN(MX25_PAD_BCLK),
	IMX_PINCTRL_PIN(MX25_PAD_RW),
	IMX_PINCTRL_PIN(MX25_PAD_NFWE_B),
	IMX_PINCTRL_PIN(MX25_PAD_NFRE_B),
	IMX_PINCTRL_PIN(MX25_PAD_NFALE),
	IMX_PINCTRL_PIN(MX25_PAD_NFCLE),
	IMX_PINCTRL_PIN(MX25_PAD_NFWP_B),
	IMX_PINCTRL_PIN(MX25_PAD_NFRB),
	IMX_PINCTRL_PIN(MX25_PAD_D15),
	IMX_PINCTRL_PIN(MX25_PAD_D14),
	IMX_PINCTRL_PIN(MX25_PAD_D13),
	IMX_PINCTRL_PIN(MX25_PAD_D12),
	IMX_PINCTRL_PIN(MX25_PAD_D11),
	IMX_PINCTRL_PIN(MX25_PAD_D10),
	IMX_PINCTRL_PIN(MX25_PAD_D9),
	IMX_PINCTRL_PIN(MX25_PAD_D8),
	IMX_PINCTRL_PIN(MX25_PAD_D7),
	IMX_PINCTRL_PIN(MX25_PAD_D6),
	IMX_PINCTRL_PIN(MX25_PAD_D5),
	IMX_PINCTRL_PIN(MX25_PAD_D4),
	IMX_PINCTRL_PIN(MX25_PAD_D3),
	IMX_PINCTRL_PIN(MX25_PAD_D2),
	IMX_PINCTRL_PIN(MX25_PAD_D1),
	IMX_PINCTRL_PIN(MX25_PAD_D0),
	IMX_PINCTRL_PIN(MX25_PAD_LD0),
	IMX_PINCTRL_PIN(MX25_PAD_LD1),
	IMX_PINCTRL_PIN(MX25_PAD_LD2),
	IMX_PINCTRL_PIN(MX25_PAD_LD3),
	IMX_PINCTRL_PIN(MX25_PAD_LD4),
	IMX_PINCTRL_PIN(MX25_PAD_LD5),
	IMX_PINCTRL_PIN(MX25_PAD_LD6),
	IMX_PINCTRL_PIN(MX25_PAD_LD7),
	IMX_PINCTRL_PIN(MX25_PAD_LD8),
	IMX_PINCTRL_PIN(MX25_PAD_LD9),
	IMX_PINCTRL_PIN(MX25_PAD_LD10),
	IMX_PINCTRL_PIN(MX25_PAD_LD11),
	IMX_PINCTRL_PIN(MX25_PAD_LD12),
	IMX_PINCTRL_PIN(MX25_PAD_LD13),
	IMX_PINCTRL_PIN(MX25_PAD_LD14),
	IMX_PINCTRL_PIN(MX25_PAD_LD15),
	IMX_PINCTRL_PIN(MX25_PAD_HSYNC),
	IMX_PINCTRL_PIN(MX25_PAD_VSYNC),
	IMX_PINCTRL_PIN(MX25_PAD_LSCLK),
	IMX_PINCTRL_PIN(MX25_PAD_OE_ACD),
	IMX_PINCTRL_PIN(MX25_PAD_CONTRAST),
	IMX_PINCTRL_PIN(MX25_PAD_PWM),
	IMX_PINCTRL_PIN(MX25_PAD_CSI_D2),
	IMX_PINCTRL_PIN(MX25_PAD_CSI_D3),
	IMX_PINCTRL_PIN(MX25_PAD_CSI_D4),
	IMX_PINCTRL_PIN(MX25_PAD_CSI_D5),
	IMX_PINCTRL_PIN(MX25_PAD_CSI_D6),
	IMX_PINCTRL_PIN(MX25_PAD_CSI_D7),
	IMX_PINCTRL_PIN(MX25_PAD_CSI_D8),
	IMX_PINCTRL_PIN(MX25_PAD_CSI_D9),
	IMX_PINCTRL_PIN(MX25_PAD_CSI_MCLK),
	IMX_PINCTRL_PIN(MX25_PAD_CSI_VSYNC),
	IMX_PINCTRL_PIN(MX25_PAD_CSI_HSYNC),
	IMX_PINCTRL_PIN(MX25_PAD_CSI_PIXCLK),
	IMX_PINCTRL_PIN(MX25_PAD_I2C1_CLK),
	IMX_PINCTRL_PIN(MX25_PAD_I2C1_DAT),
	IMX_PINCTRL_PIN(MX25_PAD_CSPI1_MOSI),
	IMX_PINCTRL_PIN(MX25_PAD_CSPI1_MISO),
	IMX_PINCTRL_PIN(MX25_PAD_CSPI1_SS0),
	IMX_PINCTRL_PIN(MX25_PAD_CSPI1_SS1),
	IMX_PINCTRL_PIN(MX25_PAD_CSPI1_SCLK),
	IMX_PINCTRL_PIN(MX25_PAD_CSPI1_RDY),
	IMX_PINCTRL_PIN(MX25_PAD_UART1_RXD),
	IMX_PINCTRL_PIN(MX25_PAD_UART1_TXD),
	IMX_PINCTRL_PIN(MX25_PAD_UART1_RTS),
	IMX_PINCTRL_PIN(MX25_PAD_UART1_CTS),
	IMX_PINCTRL_PIN(MX25_PAD_UART2_RXD),
	IMX_PINCTRL_PIN(MX25_PAD_UART2_TXD),
	IMX_PINCTRL_PIN(MX25_PAD_UART2_RTS),
	IMX_PINCTRL_PIN(MX25_PAD_UART2_CTS),
	IMX_PINCTRL_PIN(MX25_PAD_SD1_CMD),
	IMX_PINCTRL_PIN(MX25_PAD_SD1_CLK),
	IMX_PINCTRL_PIN(MX25_PAD_SD1_DATA0),
	IMX_PINCTRL_PIN(MX25_PAD_SD1_DATA1),
	IMX_PINCTRL_PIN(MX25_PAD_SD1_DATA2),
	IMX_PINCTRL_PIN(MX25_PAD_SD1_DATA3),
	IMX_PINCTRL_PIN(MX25_PAD_KPP_ROW0),
	IMX_PINCTRL_PIN(MX25_PAD_KPP_ROW1),
	IMX_PINCTRL_PIN(MX25_PAD_KPP_ROW2),
	IMX_PINCTRL_PIN(MX25_PAD_KPP_ROW3),
	IMX_PINCTRL_PIN(MX25_PAD_KPP_COL0),
	IMX_PINCTRL_PIN(MX25_PAD_KPP_COL1),
	IMX_PINCTRL_PIN(MX25_PAD_KPP_COL2),
	IMX_PINCTRL_PIN(MX25_PAD_KPP_COL3),
	IMX_PINCTRL_PIN(MX25_PAD_FEC_MDC),
	IMX_PINCTRL_PIN(MX25_PAD_FEC_MDIO),
	IMX_PINCTRL_PIN(MX25_PAD_FEC_TDATA0),
	IMX_PINCTRL_PIN(MX25_PAD_FEC_TDATA1),
	IMX_PINCTRL_PIN(MX25_PAD_FEC_TX_EN),
	IMX_PINCTRL_PIN(MX25_PAD_FEC_RDATA0),
	IMX_PINCTRL_PIN(MX25_PAD_FEC_RDATA1),
	IMX_PINCTRL_PIN(MX25_PAD_FEC_RX_DV),
	IMX_PINCTRL_PIN(MX25_PAD_FEC_TX_CLK),
	IMX_PINCTRL_PIN(MX25_PAD_RTCK),
	IMX_PINCTRL_PIN(MX25_PAD_DE_B),
	IMX_PINCTRL_PIN(MX25_PAD_GPIO_A),
	IMX_PINCTRL_PIN(MX25_PAD_GPIO_B),
	IMX_PINCTRL_PIN(MX25_PAD_GPIO_C),
	IMX_PINCTRL_PIN(MX25_PAD_GPIO_D),
	IMX_PINCTRL_PIN(MX25_PAD_GPIO_E),
	IMX_PINCTRL_PIN(MX25_PAD_GPIO_F),
	IMX_PINCTRL_PIN(MX25_PAD_EXT_ARMCLK),
	IMX_PINCTRL_PIN(MX25_PAD_UPLL_BYPCLK),
	IMX_PINCTRL_PIN(MX25_PAD_VSTBY_REQ),
	IMX_PINCTRL_PIN(MX25_PAD_VSTBY_ACK),
	IMX_PINCTRL_PIN(MX25_PAD_POWER_FAIL),
	IMX_PINCTRL_PIN(MX25_PAD_CLKO),
	IMX_PINCTRL_PIN(MX25_PAD_BOOT_MODE0),
	IMX_PINCTRL_PIN(MX25_PAD_BOOT_MODE1),
};

static struct imx_pinctrl_soc_info imx25_pinctrl_info =
{
	.pins = imx25_pinctrl_pads,
	.npins = ARRAY_SIZE(imx25_pinctrl_pads),
};

static const struct of_device_id imx25_pinctrl_of_match[] =
{
	{ .compatible = "fsl,imx25-iomuxc", },
	{ /* sentinel */ }
};

static int imx25_pinctrl_probe(struct platform_device *pdev)
{
	return imx_pinctrl_probe(pdev, &imx25_pinctrl_info);
}

static struct platform_driver imx25_pinctrl_driver =
{
	.driver = {
		.name = "imx25-pinctrl",
		.of_match_table = of_match_ptr(imx25_pinctrl_of_match),
	},
	.probe = imx25_pinctrl_probe,
};

static int __init imx25_pinctrl_init(void)
{
	return platform_driver_register(&imx25_pinctrl_driver);
}
arch_initcall(imx25_pinctrl_init);
