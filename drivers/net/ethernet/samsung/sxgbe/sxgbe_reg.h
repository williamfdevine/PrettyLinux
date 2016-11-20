/* 10G controller driver for Samsung SoCs
 *
 * Copyright (C) 2013 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * Author: Siva Reddy Kallam <siva.kallam@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __SXGBE_REGMAP_H__
#define __SXGBE_REGMAP_H__

/* SXGBE MAC Registers */
#define SXGBE_CORE_TX_CONFIG_REG	0x0000
#define SXGBE_CORE_RX_CONFIG_REG	0x0004
#define SXGBE_CORE_PKT_FILTER_REG	0x0008
#define SXGBE_CORE_WATCHDOG_TIMEOUT_REG 0x000C
#define SXGBE_CORE_HASH_TABLE_REG0	0x0010
#define SXGBE_CORE_HASH_TABLE_REG1	0x0014
#define SXGBE_CORE_HASH_TABLE_REG2	0x0018
#define SXGBE_CORE_HASH_TABLE_REG3	0x001C
#define SXGBE_CORE_HASH_TABLE_REG4	0x0020
#define SXGBE_CORE_HASH_TABLE_REG5	0x0024
#define SXGBE_CORE_HASH_TABLE_REG6	0x0028
#define SXGBE_CORE_HASH_TABLE_REG7	0x002C

/* EEE-LPI Registers */
#define SXGBE_CORE_LPI_CTRL_STATUS	0x00D0
#define SXGBE_CORE_LPI_TIMER_CTRL	0x00D4

/* VLAN Specific Registers */
#define SXGBE_CORE_VLAN_TAG_REG		0x0050
#define SXGBE_CORE_VLAN_HASHTAB_REG	0x0058
#define SXGBE_CORE_VLAN_INSCTL_REG	0x0060
#define SXGBE_CORE_VLAN_INNERCTL_REG	0x0064
#define SXGBE_CORE_RX_ETHTYPE_MATCH_REG 0x006C

/* Flow Contol Registers */
#define SXGBE_CORE_TX_Q0_FLOWCTL_REG	0x0070
#define SXGBE_CORE_TX_Q1_FLOWCTL_REG	0x0074
#define SXGBE_CORE_TX_Q2_FLOWCTL_REG	0x0078
#define SXGBE_CORE_TX_Q3_FLOWCTL_REG	0x007C
#define SXGBE_CORE_TX_Q4_FLOWCTL_REG	0x0080
#define SXGBE_CORE_TX_Q5_FLOWCTL_REG	0x0084
#define SXGBE_CORE_TX_Q6_FLOWCTL_REG	0x0088
#define SXGBE_CORE_TX_Q7_FLOWCTL_REG	0x008C
#define SXGBE_CORE_RX_FLOWCTL_REG	0x0090
#define SXGBE_CORE_RX_CTL0_REG		0x00A0
#define SXGBE_CORE_RX_CTL1_REG		0x00A4
#define SXGBE_CORE_RX_CTL2_REG		0x00A8
#define SXGBE_CORE_RX_CTL3_REG		0x00AC

#define SXGBE_CORE_RXQ_ENABLE_MASK	0x0003
#define SXGBE_CORE_RXQ_ENABLE		0x0002
#define SXGBE_CORE_RXQ_DISABLE		0x0000

/* Interrupt Registers */
#define SXGBE_CORE_INT_STATUS_REG	0x00B0
#define SXGBE_CORE_INT_ENABLE_REG	0x00B4
#define SXGBE_CORE_RXTX_ERR_STATUS_REG	0x00B8
#define SXGBE_CORE_PMT_CTL_STATUS_REG	0x00C0
#define SXGBE_CORE_RWK_PKT_FILTER_REG	0x00C4
#define SXGBE_CORE_VERSION_REG		0x0110
#define SXGBE_CORE_DEBUG_REG		0x0114
#define SXGBE_CORE_HW_FEA_REG(index)	(0x011C + index * 4)

/* SMA(MDIO) module registers */
#define SXGBE_MDIO_SCMD_ADD_REG		0x0200
#define SXGBE_MDIO_SCMD_DATA_REG	0x0204
#define SXGBE_MDIO_CCMD_WADD_REG	0x0208
#define SXGBE_MDIO_CCMD_WDATA_REG	0x020C
#define SXGBE_MDIO_CSCAN_PORT_REG	0x0210
#define SXGBE_MDIO_INT_STATUS_REG	0x0214
#define SXGBE_MDIO_INT_ENABLE_REG	0x0218
#define SXGBE_MDIO_PORT_CONDCON_REG	0x021C
#define SXGBE_MDIO_CLAUSE22_PORT_REG	0x0220

/* port specific, addr = 0-3 */
#define SXGBE_MDIO_DEV_BASE_REG		0x0230
#define SXGBE_MDIO_PORT_DEV_REG(addr)			\
	(SXGBE_MDIO_DEV_BASE_REG + (0x10 * addr) + 0x0)
#define SXGBE_MDIO_PORT_LSTATUS_REG(addr)		\
	(SXGBE_MDIO_DEV_BASE_REG + (0x10 * addr) + 0x4)
#define SXGBE_MDIO_PORT_ALIVE_REG(addr)			\
	(SXGBE_MDIO_DEV_BASE_REG + (0x10 * addr) + 0x8)

#define SXGBE_CORE_GPIO_CTL_REG		0x0278
#define SXGBE_CORE_GPIO_STATUS_REG	0x027C

/* Address registers for filtering */
#define SXGBE_CORE_ADD_BASE_REG		0x0300

/* addr = 0-31 */
#define SXGBE_CORE_ADD_HIGHOFFSET(addr)			\
	(SXGBE_CORE_ADD_BASE_REG + (0x8 * addr) + 0x0)
#define SXGBE_CORE_ADD_LOWOFFSET(addr)			\
	(SXGBE_CORE_ADD_BASE_REG + (0x8 * addr) + 0x4)

/* SXGBE MMC registers */
#define SXGBE_MMC_CTL_REG		0x0800
#define SXGBE_MMC_RXINT_STATUS_REG	0x0804
#define SXGBE_MMC_TXINT_STATUS_REG	0x0808
#define SXGBE_MMC_RXINT_ENABLE_REG	0x080C
#define SXGBE_MMC_TXINT_ENABLE_REG	0x0810

/* TX specific counters */
#define SXGBE_MMC_TXOCTETHI_GBCNT_REG	0x0814
#define SXGBE_MMC_TXOCTETLO_GBCNT_REG	0x0818
#define SXGBE_MMC_TXFRAMELO_GBCNT_REG	0x081C
#define SXGBE_MMC_TXFRAMEHI_GBCNT_REG	0x0820
#define SXGBE_MMC_TXBROADLO_GCNT_REG	0x0824
#define SXGBE_MMC_TXBROADHI_GCNT_REG	0x0828
#define SXGBE_MMC_TXMULTILO_GCNT_REG	0x082C
#define SXGBE_MMC_TXMULTIHI_GCNT_REG	0x0830
#define SXGBE_MMC_TX64LO_GBCNT_REG	0x0834
#define SXGBE_MMC_TX64HI_GBCNT_REG	0x0838
#define SXGBE_MMC_TX65TO127LO_GBCNT_REG		0x083C
#define SXGBE_MMC_TX65TO127HI_GBCNT_REG		0x0840
#define SXGBE_MMC_TX128TO255LO_GBCNT_REG	0x0844
#define SXGBE_MMC_TX128TO255HI_GBCNT_REG	0x0848
#define SXGBE_MMC_TX256TO511LO_GBCNT_REG	0x084C
#define SXGBE_MMC_TX256TO511HI_GBCNT_REG	0x0850
#define SXGBE_MMC_TX512TO1023LO_GBCNT_REG	0x0854
#define SXGBE_MMC_TX512TO1023HI_GBCNT_REG	0x0858
#define SXGBE_MMC_TX1023TOMAXLO_GBCNT_REG	0x085C
#define SXGBE_MMC_TX1023TOMAXHI_GBCNT_REG	0x0860
#define SXGBE_MMC_TXUNICASTLO_GBCNT_REG		0x0864
#define SXGBE_MMC_TXUNICASTHI_GBCNT_REG		0x0868
#define SXGBE_MMC_TXMULTILO_GBCNT_REG		0x086C
#define SXGBE_MMC_TXMULTIHI_GBCNT_REG		0x0870
#define SXGBE_MMC_TXBROADLO_GBCNT_REG		0x0874
#define SXGBE_MMC_TXBROADHI_GBCNT_REG		0x0878
#define SXGBE_MMC_TXUFLWLO_GBCNT_REG		0x087C
#define SXGBE_MMC_TXUFLWHI_GBCNT_REG		0x0880
#define SXGBE_MMC_TXOCTETLO_GCNT_REG	0x0884
#define SXGBE_MMC_TXOCTETHI_GCNT_REG	0x0888
#define SXGBE_MMC_TXFRAMELO_GCNT_REG	0x088C
#define SXGBE_MMC_TXFRAMEHI_GCNT_REG	0x0890
#define SXGBE_MMC_TXPAUSELO_CNT_REG	0x0894
#define SXGBE_MMC_TXPAUSEHI_CNT_REG	0x0898
#define SXGBE_MMC_TXVLANLO_GCNT_REG	0x089C
#define SXGBE_MMC_TXVLANHI_GCNT_REG	0x08A0

/* RX specific counters */
#define SXGBE_MMC_RXFRAMELO_GBCNT_REG	0x0900
#define SXGBE_MMC_RXFRAMEHI_GBCNT_REG	0x0904
#define SXGBE_MMC_RXOCTETLO_GBCNT_REG	0x0908
#define SXGBE_MMC_RXOCTETHI_GBCNT_REG	0x090C
#define SXGBE_MMC_RXOCTETLO_GCNT_REG	0x0910
#define SXGBE_MMC_RXOCTETHI_GCNT_REG	0x0914
#define SXGBE_MMC_RXBROADLO_GCNT_REG	0x0918
#define SXGBE_MMC_RXBROADHI_GCNT_REG	0x091C
#define SXGBE_MMC_RXMULTILO_GCNT_REG	0x0920
#define SXGBE_MMC_RXMULTIHI_GCNT_REG	0x0924
#define SXGBE_MMC_RXCRCERRLO_REG	0x0928
#define SXGBE_MMC_RXCRCERRHI_REG	0x092C
#define SXGBE_MMC_RXSHORT64BFRAME_ERR_REG	0x0930
#define SXGBE_MMC_RXJABBERERR_REG		0x0934
#define SXGBE_MMC_RXSHORT64BFRAME_COR_REG	0x0938
#define SXGBE_MMC_RXOVERMAXFRAME_COR_REG	0x093C
#define SXGBE_MMC_RX64LO_GBCNT_REG		0x0940
#define SXGBE_MMC_RX64HI_GBCNT_REG		0x0944
#define SXGBE_MMC_RX65TO127LO_GBCNT_REG		0x0948
#define SXGBE_MMC_RX65TO127HI_GBCNT_REG		0x094C
#define SXGBE_MMC_RX128TO255LO_GBCNT_REG	0x0950
#define SXGBE_MMC_RX128TO255HI_GBCNT_REG	0x0954
#define SXGBE_MMC_RX256TO511LO_GBCNT_REG	0x0958
#define SXGBE_MMC_RX256TO511HI_GBCNT_REG	0x095C
#define SXGBE_MMC_RX512TO1023LO_GBCNT_REG	0x0960
#define SXGBE_MMC_RX512TO1023HI_GBCNT_REG	0x0964
#define SXGBE_MMC_RX1023TOMAXLO_GBCNT_REG	0x0968
#define SXGBE_MMC_RX1023TOMAXHI_GBCNT_REG	0x096C
#define SXGBE_MMC_RXUNICASTLO_GCNT_REG		0x0970
#define SXGBE_MMC_RXUNICASTHI_GCNT_REG		0x0974
#define SXGBE_MMC_RXLENERRLO_REG		0x0978
#define SXGBE_MMC_RXLENERRHI_REG		0x097C
#define SXGBE_MMC_RXOUTOFRANGETYPELO_REG	0x0980
#define SXGBE_MMC_RXOUTOFRANGETYPEHI_REG	0x0984
#define SXGBE_MMC_RXPAUSELO_CNT_REG		0x0988
#define SXGBE_MMC_RXPAUSEHI_CNT_REG		0x098C
#define SXGBE_MMC_RXFIFOOVERFLOWLO_GBCNT_REG	0x0990
#define SXGBE_MMC_RXFIFOOVERFLOWHI_GBCNT_REG	0x0994
#define SXGBE_MMC_RXVLANLO_GBCNT_REG		0x0998
#define SXGBE_MMC_RXVLANHI_GBCNT_REG		0x099C
#define SXGBE_MMC_RXWATCHDOG_ERR_REG		0x09A0

/* L3/L4 function registers */
#define SXGBE_CORE_L34_ADDCTL_REG	0x0C00
#define SXGBE_CORE_L34_DATA_REG		0x0C04

/* ARP registers */
#define SXGBE_CORE_ARP_ADD_REG		0x0C10

/* RSS registers */
#define SXGBE_CORE_RSS_CTL_REG		0x0C80
#define SXGBE_CORE_RSS_ADD_REG		0x0C88
#define SXGBE_CORE_RSS_DATA_REG		0x0C8C

/* RSS control register bits */
#define SXGBE_CORE_RSS_CTL_UDP4TE	BIT(3)
#define SXGBE_CORE_RSS_CTL_TCP4TE	BIT(2)
#define SXGBE_CORE_RSS_CTL_IP2TE	BIT(1)
#define SXGBE_CORE_RSS_CTL_RSSE		BIT(0)

/* IEEE 1588 registers */
#define SXGBE_CORE_TSTAMP_CTL_REG	0x0D00
#define SXGBE_CORE_SUBSEC_INC_REG	0x0D04
#define SXGBE_CORE_SYSTIME_SEC_REG	0x0D0C
#define SXGBE_CORE_SYSTIME_NSEC_REG	0x0D10
#define SXGBE_CORE_SYSTIME_SECUP_REG	0x0D14
#define SXGBE_CORE_TSTAMP_ADD_REG	0x0D18
#define SXGBE_CORE_SYSTIME_HWORD_REG	0x0D1C
#define SXGBE_CORE_TSTAMP_STATUS_REG	0x0D20
#define SXGBE_CORE_TXTIME_STATUSNSEC_REG 0x0D30
#define SXGBE_CORE_TXTIME_STATUSSEC_REG	0x0D34

/* Auxiliary registers */
#define SXGBE_CORE_AUX_CTL_REG			 0x0D40
#define SXGBE_CORE_AUX_TSTAMP_NSEC_REG		 0x0D48
#define SXGBE_CORE_AUX_TSTAMP_SEC_REG		 0x0D4C
#define SXGBE_CORE_AUX_TSTAMP_INGCOR_REG	 0x0D50
#define SXGBE_CORE_AUX_TSTAMP_ENGCOR_REG	 0x0D54
#define SXGBE_CORE_AUX_TSTAMP_INGCOR_NSEC_REG	 0x0D58
#define SXGBE_CORE_AUX_TSTAMP_INGCOR_SUBNSEC_REG 0x0D5C
#define SXGBE_CORE_AUX_TSTAMP_ENGCOR_NSEC_REG	 0x0D60
#define SXGBE_CORE_AUX_TSTAMP_ENGCOR_SUBNSEC_REG 0x0D64

/* PPS registers */
#define SXGBE_CORE_PPS_CTL_REG		0x0D70
#define SXGBE_CORE_PPS_BASE			0x0D80

/* addr = 0 - 3 */
#define SXGBE_CORE_PPS_TTIME_SEC_REG(addr)		\
	(SXGBE_CORE_PPS_BASE + (0x10 * addr) + 0x0)
#define SXGBE_CORE_PPS_TTIME_NSEC_REG(addr)		\
	(SXGBE_CORE_PPS_BASE + (0x10 * addr) + 0x4)
#define SXGBE_CORE_PPS_INTERVAL_REG(addr)		\
	(SXGBE_CORE_PPS_BASE + (0x10 * addr) + 0x8)
#define SXGBE_CORE_PPS_WIDTH_REG(addr)			\
	(SXGBE_CORE_PPS_BASE + (0x10 * addr) + 0xC)
#define SXGBE_CORE_PTO_CTL_REG		0x0DC0
#define SXGBE_CORE_SRCPORT_ITY0_REG	0x0DC4
#define SXGBE_CORE_SRCPORT_ITY1_REG	0x0DC8
#define SXGBE_CORE_SRCPORT_ITY2_REG	0x0DCC
#define SXGBE_CORE_LOGMSG_LEVEL_REG	0x0DD0

/* SXGBE MTL Registers */
#define SXGBE_MTL_BASE_REG		0x1000
#define SXGBE_MTL_OP_MODE_REG		(SXGBE_MTL_BASE_REG + 0x0000)
#define SXGBE_MTL_DEBUG_CTL_REG		(SXGBE_MTL_BASE_REG + 0x0008)
#define SXGBE_MTL_DEBUG_STATUS_REG	(SXGBE_MTL_BASE_REG + 0x000C)
#define SXGBE_MTL_FIFO_DEBUGDATA_REG	(SXGBE_MTL_BASE_REG + 0x0010)
#define SXGBE_MTL_INT_STATUS_REG	(SXGBE_MTL_BASE_REG + 0x0020)
#define SXGBE_MTL_RXQ_DMAMAP0_REG	(SXGBE_MTL_BASE_REG + 0x0030)
#define SXGBE_MTL_RXQ_DMAMAP1_REG	(SXGBE_MTL_BASE_REG + 0x0034)
#define SXGBE_MTL_RXQ_DMAMAP2_REG	(SXGBE_MTL_BASE_REG + 0x0038)
#define SXGBE_MTL_TX_PRTYMAP0_REG	(SXGBE_MTL_BASE_REG + 0x0040)
#define SXGBE_MTL_TX_PRTYMAP1_REG	(SXGBE_MTL_BASE_REG + 0x0044)

/* TC/Queue registers, qnum=0-15 */
#define SXGBE_MTL_TC_TXBASE_REG		(SXGBE_MTL_BASE_REG + 0x0100)
#define SXGBE_MTL_TXQ_OPMODE_REG(qnum)				\
	(SXGBE_MTL_TC_TXBASE_REG + (qnum * 0x80) + 0x00)
#define SXGBE_MTL_SFMODE		BIT(1)
#define SXGBE_MTL_FIFO_LSHIFT		16
#define SXGBE_MTL_ENABLE_QUEUE		0x00000008
#define SXGBE_MTL_TXQ_UNDERFLOW_REG(qnum)			\
	(SXGBE_MTL_TC_TXBASE_REG + (qnum * 0x80) + 0x04)
#define SXGBE_MTL_TXQ_DEBUG_REG(qnum)				\
	(SXGBE_MTL_TC_TXBASE_REG + (qnum * 0x80) + 0x08)
#define SXGBE_MTL_TXQ_ETSCTL_REG(qnum)				\
	(SXGBE_MTL_TC_TXBASE_REG + (qnum * 0x80) + 0x10)
#define SXGBE_MTL_TXQ_ETSSTATUS_REG(qnum)			\
	(SXGBE_MTL_TC_TXBASE_REG + (qnum * 0x80) + 0x14)
#define SXGBE_MTL_TXQ_QUANTWEIGHT_REG(qnum)			\
	(SXGBE_MTL_TC_TXBASE_REG + (qnum * 0x80) + 0x18)

#define SXGBE_MTL_TC_RXBASE_REG		0x1140
#define SXGBE_RX_MTL_SFMODE		BIT(5)
#define SXGBE_MTL_RXQ_OPMODE_REG(qnum)				\
	(SXGBE_MTL_TC_RXBASE_REG + (qnum * 0x80) + 0x00)
#define SXGBE_MTL_RXQ_MISPKTOVERFLOW_REG(qnum)			\
	(SXGBE_MTL_TC_RXBASE_REG + (qnum * 0x80) + 0x04)
#define SXGBE_MTL_RXQ_DEBUG_REG(qnum)				\
	(SXGBE_MTL_TC_RXBASE_REG + (qnum * 0x80) + 0x08)
#define SXGBE_MTL_RXQ_CTL_REG(qnum)				\
	(SXGBE_MTL_TC_RXBASE_REG + (qnum * 0x80) + 0x0C)
#define SXGBE_MTL_RXQ_INTENABLE_REG(qnum)			\
	(SXGBE_MTL_TC_RXBASE_REG + (qnum * 0x80) + 0x30)
#define SXGBE_MTL_RXQ_INTSTATUS_REG(qnum)			\
	(SXGBE_MTL_TC_RXBASE_REG + (qnum * 0x80) + 0x34)

/* SXGBE DMA Registers */
#define SXGBE_DMA_BASE_REG		0x3000
#define SXGBE_DMA_MODE_REG		(SXGBE_DMA_BASE_REG + 0x0000)
#define SXGBE_DMA_SOFT_RESET		BIT(0)
#define SXGBE_DMA_SYSBUS_MODE_REG	(SXGBE_DMA_BASE_REG + 0x0004)
#define SXGBE_DMA_AXI_UNDEF_BURST	BIT(0)
#define SXGBE_DMA_ENHACE_ADDR_MODE	BIT(11)
#define SXGBE_DMA_INT_STATUS_REG	(SXGBE_DMA_BASE_REG + 0x0008)
#define SXGBE_DMA_AXI_ARCACHECTL_REG	(SXGBE_DMA_BASE_REG + 0x0010)
#define SXGBE_DMA_AXI_AWCACHECTL_REG	(SXGBE_DMA_BASE_REG + 0x0018)
#define SXGBE_DMA_DEBUG_STATUS0_REG	(SXGBE_DMA_BASE_REG + 0x0020)
#define SXGBE_DMA_DEBUG_STATUS1_REG	(SXGBE_DMA_BASE_REG + 0x0024)
#define SXGBE_DMA_DEBUG_STATUS2_REG	(SXGBE_DMA_BASE_REG + 0x0028)
#define SXGBE_DMA_DEBUG_STATUS3_REG	(SXGBE_DMA_BASE_REG + 0x002C)
#define SXGBE_DMA_DEBUG_STATUS4_REG	(SXGBE_DMA_BASE_REG + 0x0030)
#define SXGBE_DMA_DEBUG_STATUS5_REG	(SXGBE_DMA_BASE_REG + 0x0034)

/* Channel Registers, cha_num = 0-15 */
#define SXGBE_DMA_CHA_BASE_REG			\
	(SXGBE_DMA_BASE_REG + 0x0100)
#define SXGBE_DMA_CHA_CTL_REG(cha_num)				\
	(SXGBE_DMA_CHA_BASE_REG + (cha_num * 0x80) + 0x00)
#define SXGBE_DMA_PBL_X8MODE			BIT(16)
#define SXGBE_DMA_CHA_TXCTL_TSE_ENABLE		BIT(12)
#define SXGBE_DMA_CHA_TXCTL_REG(cha_num)			\
	(SXGBE_DMA_CHA_BASE_REG + (cha_num * 0x80) + 0x04)
#define SXGBE_DMA_CHA_RXCTL_REG(cha_num)			\
	(SXGBE_DMA_CHA_BASE_REG + (cha_num * 0x80) + 0x08)
#define SXGBE_DMA_CHA_TXDESC_HADD_REG(cha_num)			\
	(SXGBE_DMA_CHA_BASE_REG + (cha_num * 0x80) + 0x10)
#define SXGBE_DMA_CHA_TXDESC_LADD_REG(cha_num)			\
	(SXGBE_DMA_CHA_BASE_REG + (cha_num * 0x80) + 0x14)
#define SXGBE_DMA_CHA_RXDESC_HADD_REG(cha_num)			\
	(SXGBE_DMA_CHA_BASE_REG + (cha_num * 0x80) + 0x18)
#define SXGBE_DMA_CHA_RXDESC_LADD_REG(cha_num)			\
	(SXGBE_DMA_CHA_BASE_REG + (cha_num * 0x80) + 0x1C)
#define SXGBE_DMA_CHA_TXDESC_TAILPTR_REG(cha_num)		\
	(SXGBE_DMA_CHA_BASE_REG + (cha_num * 0x80) + 0x24)
#define SXGBE_DMA_CHA_RXDESC_TAILPTR_REG(cha_num)		\
	(SXGBE_DMA_CHA_BASE_REG + (cha_num * 0x80) + 0x2C)
#define SXGBE_DMA_CHA_TXDESC_RINGLEN_REG(cha_num)		\
	(SXGBE_DMA_CHA_BASE_REG + (cha_num * 0x80) + 0x30)
#define SXGBE_DMA_CHA_RXDESC_RINGLEN_REG(cha_num)		\
	(SXGBE_DMA_CHA_BASE_REG + (cha_num * 0x80) + 0x34)
#define SXGBE_DMA_CHA_INT_ENABLE_REG(cha_num)			\
	(SXGBE_DMA_CHA_BASE_REG + (cha_num * 0x80) + 0x38)
#define SXGBE_DMA_CHA_INT_RXWATCHTMR_REG(cha_num)		\
	(SXGBE_DMA_CHA_BASE_REG + (cha_num * 0x80) + 0x3C)
#define SXGBE_DMA_CHA_TXDESC_CURADDLO_REG(cha_num)		\
	(SXGBE_DMA_CHA_BASE_REG + (cha_num * 0x80) + 0x44)
#define SXGBE_DMA_CHA_RXDESC_CURADDLO_REG(cha_num)		\
	(SXGBE_DMA_CHA_BASE_REG + (cha_num * 0x80) + 0x4C)
#define SXGBE_DMA_CHA_CURTXBUF_ADDHI_REG(cha_num)		\
	(SXGBE_DMA_CHA_BASE_REG + (cha_num * 0x80) + 0x50)
#define SXGBE_DMA_CHA_CURTXBUF_ADDLO_REG(cha_num)		\
	(SXGBE_DMA_CHA_BASE_REG + (cha_num * 0x80) + 0x54)
#define SXGBE_DMA_CHA_CURRXBUF_ADDHI_REG(cha_num)		\
	(SXGBE_DMA_CHA_BASE_REG + (cha_num * 0x80) + 0x58)
#define SXGBE_DMA_CHA_CURRXBUF_ADDLO_REG(cha_num)		\
	(SXGBE_DMA_CHA_BASE_REG + (cha_num * 0x80) + 0x5C)
#define SXGBE_DMA_CHA_STATUS_REG(cha_num)			\
	(SXGBE_DMA_CHA_BASE_REG + (cha_num * 0x80) + 0x60)

/* TX DMA control register specific */
#define SXGBE_TX_START_DMA	BIT(0)

/* sxgbe tx configuration register bitfields */
#define SXGBE_SPEED_10G		0x0
#define SXGBE_SPEED_2_5G	0x1
#define SXGBE_SPEED_1G		0x2
#define SXGBE_SPEED_LSHIFT	29

#define SXGBE_TX_ENABLE		BIT(0)
#define SXGBE_TX_DISDIC_ALGO	BIT(1)
#define SXGBE_TX_JABBER_DISABLE	BIT(16)

/* sxgbe rx configuration register bitfields */
#define SXGBE_RX_ENABLE		BIT(0)
#define SXGBE_RX_ACS_ENABLE		BIT(1)
#define SXGBE_RX_WATCHDOG_DISABLE	BIT(7)
#define SXGBE_RX_JUMBPKT_ENABLE		BIT(8)
#define SXGBE_RX_CSUMOFFLOAD_ENABLE	BIT(9)
#define SXGBE_RX_LOOPBACK_ENABLE	BIT(10)
#define SXGBE_RX_ARPOFFLOAD_ENABLE	BIT(31)

/* sxgbe vlan Tag Register bitfields */
#define SXGBE_VLAN_SVLAN_ENABLE		BIT(18)
#define SXGBE_VLAN_DOUBLEVLAN_ENABLE	BIT(26)
#define SXGBE_VLAN_INNERVLAN_ENABLE	BIT(27)

/* XMAC VLAN Tag Inclusion Register(0x0060) bitfields
 * Below fields same for  Inner VLAN Tag Inclusion
 * Register(0x0064) register
 */
enum vlan_tag_ctl_tx
{
	VLAN_TAG_TX_NOP,
	VLAN_TAG_TX_DEL,
	VLAN_TAG_TX_INSERT,
	VLAN_TAG_TX_REPLACE
};
#define SXGBE_VLAN_PRTY_CTL	BIT(18)
#define SXGBE_VLAN_CSVL_CTL	BIT(19)

/* SXGBE TX Q Flow Control Register bitfields */
#define SXGBE_TX_FLOW_CTL_FCB	BIT(0)
#define SXGBE_TX_FLOW_CTL_TFB	BIT(1)

/* SXGBE RX Q Flow Control Register bitfields */
#define SXGBE_RX_FLOW_CTL_ENABLE	BIT(0)
#define SXGBE_RX_UNICAST_DETECT		BIT(1)
#define SXGBE_RX_PRTYFLOW_CTL_ENABLE	BIT(8)

/* sxgbe rx Q control0 register bitfields */
#define SXGBE_RX_Q_ENABLE	0x2

/* SXGBE hardware features bitfield specific */
/* Capability Register 0 */
#define SXGBE_HW_FEAT_GMII(cap)			((cap & 0x00000002) >> 1)
#define SXGBE_HW_FEAT_VLAN_HASH_FILTER(cap)	((cap & 0x00000010) >> 4)
#define SXGBE_HW_FEAT_SMA(cap)			((cap & 0x00000020) >> 5)
#define SXGBE_HW_FEAT_PMT_TEMOTE_WOP(cap)	((cap & 0x00000040) >> 6)
#define SXGBE_HW_FEAT_PMT_MAGIC_PKT(cap)	((cap & 0x00000080) >> 7)
#define SXGBE_HW_FEAT_RMON(cap)			((cap & 0x00000100) >> 8)
#define SXGBE_HW_FEAT_ARP_OFFLOAD(cap)		((cap & 0x00000200) >> 9)
#define SXGBE_HW_FEAT_IEEE1500_2008(cap)	((cap & 0x00001000) >> 12)
#define SXGBE_HW_FEAT_EEE(cap)			((cap & 0x00002000) >> 13)
#define SXGBE_HW_FEAT_TX_CSUM_OFFLOAD(cap)	((cap & 0x00004000) >> 14)
#define SXGBE_HW_FEAT_RX_CSUM_OFFLOAD(cap)	((cap & 0x00010000) >> 16)
#define SXGBE_HW_FEAT_MACADDR_COUNT(cap)	((cap & 0x007C0000) >> 18)
#define SXGBE_HW_FEAT_TSTMAP_SRC(cap)		((cap & 0x06000000) >> 25)
#define SXGBE_HW_FEAT_SRCADDR_VLAN(cap)		((cap & 0x08000000) >> 27)

/* Capability Register 1 */
#define SXGBE_HW_FEAT_RX_FIFO_SIZE(cap)		((cap & 0x0000001F))
#define SXGBE_HW_FEAT_TX_FIFO_SIZE(cap)		((cap & 0x000007C0) >> 6)
#define SXGBE_HW_FEAT_IEEE1588_HWORD(cap)	((cap & 0x00002000) >> 13)
#define SXGBE_HW_FEAT_DCB(cap)			((cap & 0x00010000) >> 16)
#define SXGBE_HW_FEAT_SPLIT_HDR(cap)		((cap & 0x00020000) >> 17)
#define SXGBE_HW_FEAT_TSO(cap)			((cap & 0x00040000) >> 18)
#define SXGBE_HW_FEAT_DEBUG_MEM_IFACE(cap)	((cap & 0x00080000) >> 19)
#define SXGBE_HW_FEAT_RSS(cap)			((cap & 0x00100000) >> 20)
#define SXGBE_HW_FEAT_HASH_TABLE_SIZE(cap)	((cap & 0x03000000) >> 24)
#define SXGBE_HW_FEAT_L3L4_FILTER_NUM(cap)	((cap & 0x78000000) >> 27)

/* Capability Register 2 */
#define SXGBE_HW_FEAT_RX_MTL_QUEUES(cap)	((cap & 0x0000000F))
#define SXGBE_HW_FEAT_TX_MTL_QUEUES(cap)	((cap & 0x000003C0) >> 6)
#define SXGBE_HW_FEAT_RX_DMA_CHANNELS(cap)	((cap & 0x0000F000) >> 12)
#define SXGBE_HW_FEAT_TX_DMA_CHANNELS(cap)	((cap & 0x003C0000) >> 18)
#define SXGBE_HW_FEAT_PPS_OUTPUTS(cap)		((cap & 0x07000000) >> 24)
#define SXGBE_HW_FEAT_AUX_SNAPSHOTS(cap)	((cap & 0x70000000) >> 28)

/* DMAchannel interrupt enable specific */
/* DMA Normal interrupt */
#define SXGBE_DMA_INT_ENA_NIE	BIT(16)	/* Normal Summary */
#define SXGBE_DMA_INT_ENA_TIE	BIT(0)	/* Transmit Interrupt */
#define SXGBE_DMA_INT_ENA_TUE	BIT(2)	/* Transmit Buffer Unavailable */
#define SXGBE_DMA_INT_ENA_RIE	BIT(6)	/* Receive Interrupt */

#define SXGBE_DMA_INT_NORMAL					\
	(SXGBE_DMA_INT_ENA_NIE | SXGBE_DMA_INT_ENA_RIE |	\
	 SXGBE_DMA_INT_ENA_TIE | SXGBE_DMA_INT_ENA_TUE)

/* DMA Abnormal interrupt */
#define SXGBE_DMA_INT_ENA_AIE	BIT(15)	/* Abnormal Summary */
#define SXGBE_DMA_INT_ENA_TSE	BIT(1)	/* Transmit Stopped */
#define SXGBE_DMA_INT_ENA_RUE	BIT(7)	/* Receive Buffer Unavailable */
#define SXGBE_DMA_INT_ENA_RSE	BIT(8)	/* Receive Stopped */
#define SXGBE_DMA_INT_ENA_FBE	BIT(12)	/* Fatal Bus Error */
#define SXGBE_DMA_INT_ENA_CDEE	BIT(13)	/* Context Descriptor Error */

#define SXGBE_DMA_INT_ABNORMAL					\
	(SXGBE_DMA_INT_ENA_AIE | SXGBE_DMA_INT_ENA_TSE |	\
	 SXGBE_DMA_INT_ENA_RUE | SXGBE_DMA_INT_ENA_RSE |	\
	 SXGBE_DMA_INT_ENA_FBE | SXGBE_DMA_INT_ENA_CDEE)

#define SXGBE_DMA_ENA_INT	(SXGBE_DMA_INT_NORMAL | SXGBE_DMA_INT_ABNORMAL)

/* DMA channel interrupt status specific */
#define	SXGBE_DMA_INT_STATUS_REB2	BIT(21)
#define	SXGBE_DMA_INT_STATUS_REB1	BIT(20)
#define	SXGBE_DMA_INT_STATUS_REB0	BIT(19)
#define	SXGBE_DMA_INT_STATUS_TEB2	BIT(18)
#define	SXGBE_DMA_INT_STATUS_TEB1	BIT(17)
#define	SXGBE_DMA_INT_STATUS_TEB0	BIT(16)
#define	SXGBE_DMA_INT_STATUS_NIS	BIT(15)
#define SXGBE_DMA_INT_STATUS_AIS	BIT(14)
#define SXGBE_DMA_INT_STATUS_CTXTERR	BIT(13)
#define SXGBE_DMA_INT_STATUS_FBE	BIT(12)
#define SXGBE_DMA_INT_STATUS_RPS	BIT(8)
#define SXGBE_DMA_INT_STATUS_RBU	BIT(7)
#define SXGBE_DMA_INT_STATUS_RI		BIT(6)
#define SXGBE_DMA_INT_STATUS_TBU	BIT(2)
#define SXGBE_DMA_INT_STATUS_TPS	BIT(1)
#define SXGBE_DMA_INT_STATUS_TI		BIT(0)

#endif /* __SXGBE_REGMAP_H__ */
