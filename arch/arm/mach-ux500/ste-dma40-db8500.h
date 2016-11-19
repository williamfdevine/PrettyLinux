/*
 * arch/arm/mach-ux500/ste_dma40_db8500.h
 * DB8500-SoC-specific configuration for DMA40
 *
 * Copyright (C) ST-Ericsson 2007-2010
 * License terms: GNU General Public License (GPL) version 2
 * Author: Per Friden <per.friden@stericsson.com>
 * Author: Jonas Aaberg <jonas.aberg@stericsson.com>
 */
#ifndef STE_DMA40_DB8500_H
#define STE_DMA40_DB8500_H

#define DB8500_DMA_NR_DEV 64

/*
 * Unless otherwise specified, all channels numbers are used for
 * TX & RX, and can be used for either source or destination
 * channels.
 */
enum dma_dev_type
{
	DB8500_DMA_DEV0_SPI0 = 0,
	DB8500_DMA_DEV1_SD_MMC0 = 1,
	DB8500_DMA_DEV2_SD_MMC1 = 2,
	DB8500_DMA_DEV3_SD_MMC2 = 3,
	DB8500_DMA_DEV4_I2C1 = 4,
	DB8500_DMA_DEV5_I2C3 = 5,
	DB8500_DMA_DEV6_I2C2 = 6,
	DB8500_DMA_DEV7_I2C4 = 7,			/* Only on V1 and later */
	DB8500_DMA_DEV8_SSP0 = 8,
	DB8500_DMA_DEV9_SSP1 = 9,
	DB8500_DMA_DEV10_MCDE_RX = 10,			/* RX only */
	DB8500_DMA_DEV11_UART2 = 11,
	DB8500_DMA_DEV12_UART1 = 12,
	DB8500_DMA_DEV13_UART0 = 13,
	DB8500_DMA_DEV14_MSP2 = 14,
	DB8500_DMA_DEV15_I2C0 = 15,
	DB8500_DMA_DEV16_USB_OTG_IEP_AND_OEP_7_15 = 16,
	DB8500_DMA_DEV17_USB_OTG_IEP_AND_OEP_6_14 = 17,
	DB8500_DMA_DEV18_USB_OTG_IEP_AND_OEP_5_13 = 18,
	DB8500_DMA_DEV19_USB_OTG_IEP_AND_OEP_4_12 = 19,
	DB8500_DMA_DEV20_SLIM0_CH0_HSI_CH0 = 20,
	DB8500_DMA_DEV21_SLIM0_CH1_HSI_CH1 = 21,
	DB8500_DMA_DEV22_SLIM0_CH2_HSI_CH2 = 22,
	DB8500_DMA_DEV23_SLIM0_CH3_HSI_CH3 = 23,
	DB8500_DMA_DEV24_SXA0 = 24,
	DB8500_DMA_DEV25_SXA1 = 25,
	DB8500_DMA_DEV26_SXA2 = 26,
	DB8500_DMA_DEV27_SXA3 = 27,
	DB8500_DMA_DEV28_SD_MM2 = 28,
	DB8500_DMA_DEV29_SD_MM0 = 29,
	DB8500_DMA_DEV30_MSP1 = 30,
	/* On DB8500v2, MSP3 RX replaces MSP1 RX */
	DB8500_DMA_DEV30_MSP3 = 30,
	DB8500_DMA_DEV31_MSP0_SLIM0_CH0 = 31,
	DB8500_DMA_DEV32_SD_MM1 = 32,
	DB8500_DMA_DEV33_SPI2 = 33,
	DB8500_DMA_DEV34_I2C3_RX2_TX2 = 34,
	DB8500_DMA_DEV35_SPI1 = 35,
	DB8500_DMA_DEV36_USB_OTG_IEP_AND_OEP_3_11 = 36,
	DB8500_DMA_DEV37_USB_OTG_IEP_AND_OEP_2_10 = 37,
	DB8500_DMA_DEV38_USB_OTG_IEP_AND_OEP_1_9 = 38,
	DB8500_DMA_DEV39_USB_OTG_IEP_AND_OEP_8 = 39,
	DB8500_DMA_DEV40_SPI3 = 40,
	DB8500_DMA_DEV41_SD_MM3 = 41,
	DB8500_DMA_DEV42_SD_MM4 = 42,
	DB8500_DMA_DEV43_SD_MM5 = 43,
	DB8500_DMA_DEV44_SXA4 = 44,
	DB8500_DMA_DEV45_SXA5 = 45,
	DB8500_DMA_DEV46_SLIM0_CH8_SRC_SXA6 = 46,
	DB8500_DMA_DEV47_SLIM0_CH9_SRC_SXA7 = 47,
	DB8500_DMA_DEV48_CAC1 = 48,
	DB8500_DMA_DEV49_CAC1_TX_HAC1_TX = 49,		/* TX only */
	DB8500_DMA_DEV50_HAC1_TX = 50,			/* TX only */
	DB8500_DMA_MEMCPY_TX_0 = 51,			/* TX only */
	DB8500_DMA_DEV52_SLIM0_CH4_HSI_CH4 = 52,
	DB8500_DMA_DEV53_SLIM0_CH5_HSI_CH5 = 53,
	DB8500_DMA_DEV54_SLIM0_CH6_HSI_CH6 = 54,
	DB8500_DMA_DEV55_SLIM0_CH7_HSI_CH7 = 55,
	/* 56 -> 60 are channels reserved for memcpy only */
	DB8500_DMA_DEV61_CAC0 = 61,
	DB8500_DMA_DEV62_CAC0_TX_HAC0_TX = 62,		/* TX only */
	DB8500_DMA_DEV63_HAC0_TX = 63,			/* TX only */
};

#endif
