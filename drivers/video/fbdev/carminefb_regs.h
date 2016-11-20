#ifndef _CARMINEFB_REGS_H
#define _CARMINEFB_REGS_H

#define CARMINE_OVERLAY_EXT_MODE	(0x00000002)
#define CARMINE_GRAPH_REG		(0x00000000)
#define CARMINE_DISP0_REG		(0x00100000)
#define CARMINE_DISP1_REG		(0x00140000)
#define CARMINE_WB_REG			(0x00180000)
#define CARMINE_DCTL_REG		(0x00300000)
#define CARMINE_CTL_REG			(0x00400000)
#define CARMINE_WINDOW_MODE		(0x00000001)
#define CARMINE_EXTEND_MODE		(CARMINE_WINDOW_MODE | \
								 CARMINE_OVERLAY_EXT_MODE)
#define CARMINE_L0E			(1 << 16)
#define CARMINE_L2E			(1 << 18)
#define CARMINE_DEN			(1 << 31)

#define CARMINE_EXT_CMODE_DIRECT24_RGBA		(0xC0000000)
#define CARMINE_DCTL_REG_MODE_ADD		(0x00)
#define CARMINE_DCTL_REG_SETTIME1_EMODE		(0x04)
#define CARMINE_DCTL_REG_REFRESH_SETTIME2	(0x08)
#define CARMINE_DCTL_REG_RSV0_STATES		(0x0C)
#define CARMINE_DCTL_REG_RSV2_RSV1		(0x10)
#define CARMINE_DCTL_REG_DDRIF2_DDRIF1		(0x14)
#define CARMINE_DCTL_REG_IOCONT1_IOCONT0	(0x24)
#define CARMINE_DCTL_REG_STATES_MASK		(0x000F)
#define CARMINE_DCTL_INIT_WAIT_INTERVAL		(1)
#define CARMINE_DCTL_INIT_WAIT_LIMIT		(5000)
#define CARMINE_WB_REG_WBM_DEFAULT		(0x0001c020)
#define CARMINE_DISP_REG_L0RM			(0x1880)
#define CARMINE_DISP_REG_L0PX			(0x1884)
#define CARMINE_DISP_REG_L0PY			(0x1888)
#define CARMINE_DISP_REG_L2RM			(0x18A0)
#define CARMINE_DISP_REG_L2PX			(0x18A4)
#define CARMINE_DISP_REG_L2PY			(0x18A8)
#define CARMINE_DISP_REG_L3RM			(0x18B0)
#define CARMINE_DISP_REG_L3PX			(0x18B4)
#define CARMINE_DISP_REG_L3PY			(0x18B8)
#define CARMINE_DISP_REG_L4RM			(0x18C0)
#define CARMINE_DISP_REG_L4PX			(0x18C4)
#define CARMINE_DISP_REG_L4PY			(0x18C8)
#define CARMINE_DISP_REG_L5RM			(0x18D0)
#define CARMINE_DISP_REG_L5PX			(0x18D4)
#define CARMINE_DISP_REG_L5PY			(0x18D8)
#define CARMINE_DISP_REG_L6RM			(0x1924)
#define CARMINE_DISP_REG_L6PX			(0x1928)
#define CARMINE_DISP_REG_L6PY			(0x192C)
#define CARMINE_DISP_REG_L7RM			(0x1964)
#define CARMINE_DISP_REG_L7PX			(0x1968)
#define CARMINE_DISP_REG_L7PY			(0x196C)
#define CARMINE_WB_REG_WBM			(0x0004)
#define CARMINE_DISP_HTP_SHIFT			(16)
#define CARMINE_DISP_HDB_SHIFT			(16)
#define CARMINE_DISP_HSW_SHIFT			(16)
#define CARMINE_DISP_VSW_SHIFT			(24)
#define CARMINE_DISP_VTR_SHIFT			(16)
#define CARMINE_DISP_VDP_SHIFT			(16)
#define CARMINE_CURSOR_CUTZ_MASK		(0x00000100)
#define CARMINE_CURSOR0_PRIORITY_MASK		(0x00010000)
#define CARMINE_CURSOR1_PRIORITY_MASK		(0x00020000)
#define CARMINE_DISP_WIDTH_SHIFT		(16)
#define CARMINE_DISP_WIN_H_SHIFT		(16)
#define CARMINE_DISP_REG_H_TOTAL		(0x0004)
#define CARMINE_DISP_REG_H_PERIOD		(0x0008)
#define CARMINE_DISP_REG_V_H_W_H_POS		(0x000C)
#define CARMINE_DISP_REG_V_TOTAL		(0x0010)
#define CARMINE_DISP_REG_V_PERIOD_POS		(0x0014)
#define CARMINE_DISP_REG_L0_MODE_W_H		(0x0020)
#define CARMINE_DISP_REG_L0_ORG_ADR		(0x0024)
#define CARMINE_DISP_REG_L0_DISP_ADR		(0x0028)
#define CARMINE_DISP_REG_L0_DISP_POS		(0x002C)
#define CARMINE_DISP_REG_L1_WIDTH		(0x0030)
#define CARMINE_DISP_REG_L1_ORG_ADR		(0x0034)
#define CARMINE_DISP_REG_L2_MODE_W_H		(0x0040)
#define CARMINE_DISP_REG_L2_ORG_ADR1		(0x0044)
#define CARMINE_DISP_REG_L2_DISP_ADR1		(0x0048)
#define CARMINE_DISP_REG_L2_DISP_POS		(0x0054)
#define CARMINE_DISP_REG_L3_MODE_W_H		(0x0058)
#define CARMINE_DISP_REG_L3_ORG_ADR1		(0x005C)
#define CARMINE_DISP_REG_L3_DISP_ADR1		(0x0060)
#define CARMINE_DISP_REG_L3_DISP_POS		(0x006C)
#define CARMINE_DISP_REG_L4_MODE_W_H		(0x0070)
#define CARMINE_DISP_REG_L4_ORG_ADR1		(0x0074)
#define CARMINE_DISP_REG_L4_DISP_ADR1		(0x0078)
#define CARMINE_DISP_REG_L4_DISP_POS		(0x0084)
#define CARMINE_DISP_REG_L5_MODE_W_H		(0x0088)
#define CARMINE_DISP_REG_L5_ORG_ADR1		(0x008C)
#define CARMINE_DISP_REG_L5_DISP_ADR1		(0x0090)
#define CARMINE_DISP_REG_L5_DISP_POS		(0x009C)
#define CARMINE_DISP_REG_CURSOR_MODE		(0x00A0)
#define CARMINE_DISP_REG_CUR1_POS		(0x00A8)
#define CARMINE_DISP_REG_CUR2_POS		(0x00B0)
#define CARMINE_DISP_REG_C_TRANS		(0x00BC)
#define CARMINE_DISP_REG_MLMR_TRANS		(0x00C0)
#define CARMINE_DISP_REG_L0_EXT_MODE		(0x0110)
#define CARMINE_DISP_REG_L0_WIN_POS		(0x0114)
#define CARMINE_DISP_REG_L0_WIN_SIZE		(0x0118)
#define CARMINE_DISP_REG_L1_EXT_MODE		(0x0120)
#define CARMINE_DISP_REG_L1_WIN_POS		(0x0124)
#define CARMINE_DISP_REG_L1_WIN_SIZE		(0x0128)
#define CARMINE_DISP_REG_L2_EXT_MODE		(0x0130)
#define CARMINE_DISP_REG_L2_WIN_POS		(0x0134)
#define CARMINE_DISP_REG_L2_WIN_SIZE		(0x0138)
#define CARMINE_DISP_REG_L3_EXT_MODE		(0x0140)
#define CARMINE_DISP_REG_L3_WIN_POS		(0x0144)
#define CARMINE_DISP_REG_L3_WIN_SIZE		(0x0148)
#define CARMINE_DISP_REG_L4_EXT_MODE		(0x0150)
#define CARMINE_DISP_REG_L4_WIN_POS		(0x0154)
#define CARMINE_DISP_REG_L4_WIN_SIZE		(0x0158)
#define CARMINE_DISP_REG_L5_EXT_MODE		(0x0160)
#define CARMINE_DISP_REG_L5_WIN_POS		(0x0164)
#define CARMINE_DISP_REG_L5_WIN_SIZE		(0x0168)
#define CARMINE_DISP_REG_L6_EXT_MODE		(0x1918)
#define CARMINE_DISP_REG_L6_WIN_POS		(0x191c)
#define CARMINE_DISP_REG_L6_WIN_SIZE		(0x1920)
#define CARMINE_DISP_REG_L7_EXT_MODE		(0x1958)
#define CARMINE_DISP_REG_L7_WIN_POS		(0x195c)
#define CARMINE_DISP_REG_L7_WIN_SIZE		(0x1960)
#define CARMINE_DISP_REG_BLEND_MODE_L0		(0x00B4)
#define CARMINE_DISP_REG_BLEND_MODE_L1		(0x0188)
#define CARMINE_DISP_REG_BLEND_MODE_L2		(0x018C)
#define CARMINE_DISP_REG_BLEND_MODE_L3		(0x0190)
#define CARMINE_DISP_REG_BLEND_MODE_L4		(0x0194)
#define CARMINE_DISP_REG_BLEND_MODE_L5		(0x0198)
#define CARMINE_DISP_REG_BLEND_MODE_L6		(0x1990)
#define CARMINE_DISP_REG_BLEND_MODE_L7		(0x1994)
#define CARMINE_DISP_REG_L0_TRANS		(0x01A0)
#define CARMINE_DISP_REG_L1_TRANS		(0x01A4)
#define CARMINE_DISP_REG_L2_TRANS		(0x01A8)
#define CARMINE_DISP_REG_L3_TRANS		(0x01AC)
#define CARMINE_DISP_REG_L4_TRANS		(0x01B0)
#define CARMINE_DISP_REG_L5_TRANS		(0x01B4)
#define CARMINE_DISP_REG_L6_TRANS		(0x1998)
#define CARMINE_DISP_REG_L7_TRANS		(0x199c)
#define CARMINE_EXTEND_MODE_MASK		(0x00000003)
#define CARMINE_DISP_DCM_MASK			(0x0000FFFF)
#define CARMINE_DISP_REG_DCM1			(0x0100)
#define CARMINE_DISP_WIDTH_UNIT			(64)
#define CARMINE_DISP_REG_L6_MODE_W_H		(0x1900)
#define CARMINE_DISP_REG_L6_ORG_ADR1		(0x1904)
#define CARMINE_DISP_REG_L6_DISP_ADR0		(0x1908)
#define CARMINE_DISP_REG_L6_DISP_POS		(0x1914)
#define CARMINE_DISP_REG_L7_MODE_W_H		(0x1940)
#define CARMINE_DISP_REG_L7_ORG_ADR1		(0x1944)
#define CARMINE_DISP_REG_L7_DISP_ADR0		(0x1948)
#define CARMINE_DISP_REG_L7_DISP_POS		(0x1954)
#define CARMINE_CTL_REG_CLOCK_ENABLE		(0x000C)
#define CARMINE_CTL_REG_SOFTWARE_RESET		(0x0010)
#define CARMINE_CTL_REG_IST_MASK_ALL		(0x07FFFFFF)
#define CARMINE_GRAPH_REG_VRINTM		(0x00028064)
#define CARMINE_GRAPH_REG_VRERRM		(0x0002806C)
#define CARMINE_GRAPH_REG_DC_OFFSET_PX		(0x0004005C)
#define CARMINE_GRAPH_REG_DC_OFFSET_PY		(0x00040060)
#define CARMINE_GRAPH_REG_DC_OFFSET_LX		(0x00040064)
#define CARMINE_GRAPH_REG_DC_OFFSET_LY		(0x00040068)
#define CARMINE_GRAPH_REG_DC_OFFSET_TX		(0x0004006C)
#define CARMINE_GRAPH_REG_DC_OFFSET_TY		(0x00040070)

#endif
