/*
 * DCE_10_0 Register documentation
 *
 * Copyright (C) 2014  Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
 * AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef DCE_10_0_ENUM_H
#define DCE_10_0_ENUM_H

typedef enum DCIO_DC_GENERICA_SEL
{
	DCIO_GENERICA_SEL_DACA_STEREOSYNC                = 0x0,
	DCIO_GENERICA_SEL_STEREOSYNC                     = 0x1,
	DCIO_GENERICA_SEL_DACA_PIXCLK                    = 0x2,
	DCIO_GENERICA_SEL_DACB_PIXCLK                    = 0x3,
	DCIO_GENERICA_SEL_DVOA_CTL3                      = 0x4,
	DCIO_GENERICA_SEL_P1_PLLCLK                      = 0x5,
	DCIO_GENERICA_SEL_P2_PLLCLK                      = 0x6,
	DCIO_GENERICA_SEL_DVOA_STEREOSYNC                = 0x7,
	DCIO_GENERICA_SEL_DACA_FIELD_NUMBER              = 0x8,
	DCIO_GENERICA_SEL_DACB_FIELD_NUMBER              = 0x9,
	DCIO_GENERICA_SEL_GENERICA_DCCG                  = 0xa,
	DCIO_GENERICA_SEL_SYNCEN                         = 0xb,
	DCIO_GENERICA_SEL_GENERICA_SCG                   = 0xc,
	DCIO_GENERICA_SEL_RESERVED_VALUE13               = 0xd,
	DCIO_GENERICA_SEL_RESERVED_VALUE14               = 0xe,
	DCIO_GENERICA_SEL_RESERVED_VALUE15               = 0xf,
	DCIO_GENERICA_SEL_GENERICA_DPRX                  = 0x10,
	DCIO_GENERICA_SEL_GENERICB_DPRX                  = 0x11,
} DCIO_DC_GENERICA_SEL;
typedef enum DCIO_DC_GENERIC_UNIPHY_REFDIV_CLK_SEL
{
	DCIO_UNIPHYA_TEST_REFDIV_CLK                     = 0x0,
	DCIO_UNIPHYB_TEST_REFDIV_CLK                     = 0x1,
	DCIO_UNIPHYC_TEST_REFDIV_CLK                     = 0x2,
	DCIO_UNIPHYD_TEST_REFDIV_CLK                     = 0x3,
	DCIO_UNIPHYE_TEST_REFDIV_CLK                     = 0x4,
	DCIO_UNIPHYF_TEST_REFDIV_CLK                     = 0x5,
} DCIO_DC_GENERIC_UNIPHY_REFDIV_CLK_SEL;
typedef enum DCIO_DC_GENERIC_UNIPHY_FBDIV_CLK_SEL
{
	DCIO_UNIPHYA_FBDIV_CLK                           = 0x0,
	DCIO_UNIPHYB_FBDIV_CLK                           = 0x1,
	DCIO_UNIPHYC_FBDIV_CLK                           = 0x2,
	DCIO_UNIPHYD_FBDIV_CLK                           = 0x3,
	DCIO_UNIPHYE_FBDIV_CLK                           = 0x4,
	DCIO_UNIPHYF_FBDIV_CLK                           = 0x5,
} DCIO_DC_GENERIC_UNIPHY_FBDIV_CLK_SEL;
typedef enum DCIO_DC_GENERIC_UNIPHY_FBDIV_SSC_CLK_SEL
{
	DCIO_UNIPHYA_FBDIV_SSC_CLK                       = 0x0,
	DCIO_UNIPHYB_FBDIV_SSC_CLK                       = 0x1,
	DCIO_UNIPHYC_FBDIV_SSC_CLK                       = 0x2,
	DCIO_UNIPHYD_FBDIV_SSC_CLK                       = 0x3,
	DCIO_UNIPHYE_FBDIV_SSC_CLK                       = 0x4,
	DCIO_UNIPHYF_FBDIV_SSC_CLK                       = 0x5,
} DCIO_DC_GENERIC_UNIPHY_FBDIV_SSC_CLK_SEL;
typedef enum DCIO_DC_GENERIC_UNIPHY_FBDIV_CLK_DIV2_SEL
{
	DCIO_UNIPHYA_TEST_FBDIV_CLK_DIV2                 = 0x0,
	DCIO_UNIPHYB_TEST_FBDIV_CLK_DIV2                 = 0x1,
	DCIO_UNIPHYC_TEST_FBDIV_CLK_DIV2                 = 0x2,
	DCIO_UNIPHYD_TEST_FBDIV_CLK_DIV2                 = 0x3,
	DCIO_UNIPHYE_TEST_FBDIV_CLK_DIV2                 = 0x4,
	DCIO_UNIPHYF_TEST_FBDIV_CLK_DIV2                 = 0x5,
} DCIO_DC_GENERIC_UNIPHY_FBDIV_CLK_DIV2_SEL;
typedef enum DCIO_DC_GENERICB_SEL
{
	DCIO_GENERICB_SEL_DACA_STEREOSYNC                = 0x0,
	DCIO_GENERICB_SEL_STEREOSYNC                     = 0x1,
	DCIO_GENERICB_SEL_DACA_PIXCLK                    = 0x2,
	DCIO_GENERICB_SEL_DACB_PIXCLK                    = 0x3,
	DCIO_GENERICB_SEL_DVOA_CTL3                      = 0x4,
	DCIO_GENERICB_SEL_P1_PLLCLK                      = 0x5,
	DCIO_GENERICB_SEL_P2_PLLCLK                      = 0x6,
	DCIO_GENERICB_SEL_DVOA_STEREOSYNC                = 0x7,
	DCIO_GENERICB_SEL_DACA_FIELD_NUMBER              = 0x8,
	DCIO_GENERICB_SEL_DACB_FIELD_NUMBER              = 0x9,
	DCIO_GENERICB_SEL_GENERICB_DCCG                  = 0xa,
	DCIO_GENERICB_SEL_SYNCEN                         = 0xb,
	DCIO_GENERICB_SEL_GENERICA_SCG                   = 0xc,
	DCIO_GENERICB_SEL_RESERVED_VALUE13               = 0xd,
	DCIO_GENERICB_SEL_RESERVED_VALUE14               = 0xe,
	DCIO_GENERICB_SEL_RESERVED_VALUE15               = 0xf,
} DCIO_DC_GENERICB_SEL;
typedef enum DCIO_DC_PAD_EXTERN_SIG_SEL
{
	DCIO_DC_PAD_EXTERN_SIG_SEL_MVP                   = 0x0,
	DCIO_DC_PAD_EXTERN_SIG_SEL_VSYNCA                = 0x1,
	DCIO_DC_PAD_EXTERN_SIG_SEL_GENLK_CLK             = 0x2,
	DCIO_DC_PAD_EXTERN_SIG_SEL_GENLK_VSYNC           = 0x3,
	DCIO_DC_PAD_EXTERN_SIG_SEL_GENERICA              = 0x4,
	DCIO_DC_PAD_EXTERN_SIG_SEL_GENERICB              = 0x5,
	DCIO_DC_PAD_EXTERN_SIG_SEL_GENERICC              = 0x6,
	DCIO_DC_PAD_EXTERN_SIG_SEL_HPD1                  = 0x7,
	DCIO_DC_PAD_EXTERN_SIG_SEL_HPD2                  = 0x8,
	DCIO_DC_PAD_EXTERN_SIG_SEL_DDC1CLK               = 0x9,
	DCIO_DC_PAD_EXTERN_SIG_SEL_DDC1DATA              = 0xa,
	DCIO_DC_PAD_EXTERN_SIG_SEL_DDC2CLK               = 0xb,
	DCIO_DC_PAD_EXTERN_SIG_SEL_DDC2DATA              = 0xc,
	DCIO_DC_PAD_EXTERN_SIG_SEL_VHAD1                 = 0xd,
	DCIO_DC_PAD_EXTERN_SIG_SEL_VHAD0                 = 0xe,
	DCIO_DC_PAD_EXTERN_SIG_SEL_VPHCTL                = 0xf,
} DCIO_DC_PAD_EXTERN_SIG_SEL;
typedef enum DCIO_DC_PAD_EXTERN_SIG_MVP_PIXEL_SRC_STATUS
{
	DCIO_MVP_PIXEL_SRC_STATUS_HSYNCA                 = 0x0,
	DCIO_MVP_PIXEL_SRC_STATUS_HSYNCA_DUPLICATE       = 0x1,
	DCIO_MVP_PIXEL_SRC_STATUS_CRTC                   = 0x2,
	DCIO_MVP_PIXEL_SRC_STATUS_LB                     = 0x3,
} DCIO_DC_PAD_EXTERN_SIG_MVP_PIXEL_SRC_STATUS;
typedef enum DCIO_DC_REF_CLK_CNTL_HSYNCA_OUTPUT_SEL
{
	DCIO_HSYNCA_OUTPUT_SEL_DISABLE                   = 0x0,
	DCIO_HSYNCA_OUTPUT_SEL_PPLL1                     = 0x1,
	DCIO_HSYNCA_OUTPUT_SEL_PPLL2                     = 0x2,
	DCIO_HSYNCA_OUTPUT_SEL_RESERVED                  = 0x3,
} DCIO_DC_REF_CLK_CNTL_HSYNCA_OUTPUT_SEL;
typedef enum DCIO_DC_REF_CLK_CNTL_GENLK_CLK_OUTPUT_SEL
{
	DCIO_GENLK_CLK_OUTPUT_SEL_DISABLE                = 0x0,
	DCIO_GENLK_CLK_OUTPUT_SEL_PPLL1                  = 0x1,
	DCIO_GENLK_CLK_OUTPUT_SEL_PPLL2                  = 0x2,
	DCIO_GENLK_CLK_OUTPUT_SEL_RESERVED_VALUE3        = 0x3,
} DCIO_DC_REF_CLK_CNTL_GENLK_CLK_OUTPUT_SEL;
typedef enum DCIO_DC_GPIO_VIP_DEBUG
{
	DCIO_DC_GPIO_VIP_DEBUG_NORMAL                    = 0x0,
	DCIO_DC_GPIO_VIP_DEBUG_CG_BIG                    = 0x1,
} DCIO_DC_GPIO_VIP_DEBUG;
typedef enum DCIO_DC_GPIO_MACRO_DEBUG
{
	DCIO_DC_GPIO_MACRO_DEBUG_NORMAL                  = 0x0,
	DCIO_DC_GPIO_MACRO_DEBUG_CHIP_BIF                = 0x1,
	DCIO_DC_GPIO_MACRO_DEBUG_RESERVED_VALUE2         = 0x2,
	DCIO_DC_GPIO_MACRO_DEBUG_RESERVED_VALUE3         = 0x3,
} DCIO_DC_GPIO_MACRO_DEBUG;
typedef enum DCIO_DC_GPIO_CHIP_DEBUG_OUT_PIN_SEL
{
	DCIO_DC_GPIO_CHIP_DEBUG_OUT_PIN_SEL_NORMAL       = 0x0,
	DCIO_DC_GPIO_CHIP_DEBUG_OUT_PIN_SEL_SWAP         = 0x1,
} DCIO_DC_GPIO_CHIP_DEBUG_OUT_PIN_SEL;
typedef enum DCIO_DC_GPIO_DEBUG_BUS_FLOP_EN
{
	DCIO_DC_GPIO_DEBUG_BUS_FLOP_EN_BYPASS            = 0x0,
	DCIO_DC_GPIO_DEBUG_BUS_FLOP_EN_ENABLE            = 0x1,
} DCIO_DC_GPIO_DEBUG_BUS_FLOP_EN;
typedef enum DCIO_DC_GPIO_DEBUG_DPRX_LOOPBACK_ENABLE
{
	DCIO_DPRX_LOOPBACK_ENABLE_NORMAL                 = 0x0,
	DCIO_DPRX_LOOPBACK_ENABLE_LOOP                   = 0x1,
} DCIO_DC_GPIO_DEBUG_DPRX_LOOPBACK_ENABLE;
typedef enum DCIO_UNIPHY_LINK_CNTL_MINIMUM_PIXVLD_LOW_DURATION
{
	DCIO_UNIPHY_MINIMUM_PIXVLD_LOW_DURATION_3_CLOCKS = 0x0,
	DCIO_UNIPHY_MINIMUM_PIXVLD_LOW_DURATION_7_CLOCKS = 0x1,
	DCIO_UNIPHY_MINIMUM_PIXVLD_LOW_DURATION_11_CLOCKS = 0x2,
	DCIO_UNIPHY_MINIMUM_PIXVLD_LOW_DURATION_15_CLOCKS = 0x3,
	DCIO_UNIPHY_MINIMUM_PIXVLD_LOW_DURATION_19_CLOCKS = 0x4,
	DCIO_UNIPHY_MINIMUM_PIXVLD_LOW_DURATION_23_CLOCKS = 0x5,
	DCIO_UNIPHY_MINIMUM_PIXVLD_LOW_DURATION_27_CLOCKS = 0x6,
	DCIO_UNIPHY_MINIMUM_PIXVLD_LOW_DURATION_31_CLOCKS = 0x7,
} DCIO_UNIPHY_LINK_CNTL_MINIMUM_PIXVLD_LOW_DURATION;
typedef enum DCIO_UNIPHY_LINK_CNTL_CHANNEL_INVERT
{
	DCIO_UNIPHY_CHANNEL_NO_INVERSION                 = 0x0,
	DCIO_UNIPHY_CHANNEL_INVERTED                     = 0x1,
} DCIO_UNIPHY_LINK_CNTL_CHANNEL_INVERT;
typedef enum DCIO_UNIPHY_LINK_CNTL_ENABLE_HPD_MASK
{
	DCIO_UNIPHY_LINK_ENABLE_HPD_MASK_DISALLOW        = 0x0,
	DCIO_UNIPHY_LINK_ENABLE_HPD_MASK_ALLOW           = 0x1,
	DCIO_UNIPHY_LINK_ENABLE_HPD_MASK_ALLOW_DEBOUNCED = 0x2,
	DCIO_UNIPHY_LINK_ENABLE_HPD_MASK_ALLOW_TOGGLE_FILTERED = 0x3,
} DCIO_UNIPHY_LINK_CNTL_ENABLE_HPD_MASK;
typedef enum DCIO_UNIPHY_CHANNEL_XBAR_SOURCE
{
	DCIO_UNIPHY_CHANNEL_XBAR_SOURCE_CH0              = 0x0,
	DCIO_UNIPHY_CHANNEL_XBAR_SOURCE_CH1              = 0x1,
	DCIO_UNIPHY_CHANNEL_XBAR_SOURCE_CH2              = 0x2,
	DCIO_UNIPHY_CHANNEL_XBAR_SOURCE_CH3              = 0x3,
} DCIO_UNIPHY_CHANNEL_XBAR_SOURCE;
typedef enum DCIO_DC_DVODATA_CONFIG_VIP_MUX_EN
{
	DCIO_VIP_MUX_EN_DVO                              = 0x0,
	DCIO_VIP_MUX_EN_VIP                              = 0x1,
} DCIO_DC_DVODATA_CONFIG_VIP_MUX_EN;
typedef enum DCIO_DC_DVODATA_CONFIG_VIP_ALTER_MAPPING_EN
{
	DCIO_VIP_ALTER_MAPPING_EN_DEFAULT                = 0x0,
	DCIO_VIP_ALTER_MAPPING_EN_ALTERNATIVE            = 0x1,
} DCIO_DC_DVODATA_CONFIG_VIP_ALTER_MAPPING_EN;
typedef enum DCIO_DC_DVODATA_CONFIG_DVO_ALTER_MAPPING_EN
{
	DCIO_DVO_ALTER_MAPPING_EN_DEFAULT                = 0x0,
	DCIO_DVO_ALTER_MAPPING_EN_ALTERNATIVE            = 0x1,
} DCIO_DC_DVODATA_CONFIG_DVO_ALTER_MAPPING_EN;
typedef enum DCIO_LVTMA_PWRSEQ_CNTL_DISABLE_SYNCEN_CONTROL_OF_TX_EN
{
	DCIO_LVTMA_PWRSEQ_DISABLE_SYNCEN_CONTROL_OF_TX_ENABLE = 0x0,
	DCIO_LVTMA_PWRSEQ_DISABLE_SYNCEN_CONTROL_OF_TX_DISABLE = 0x1,
} DCIO_LVTMA_PWRSEQ_CNTL_DISABLE_SYNCEN_CONTROL_OF_TX_EN;
typedef enum DCIO_LVTMA_PWRSEQ_CNTL_TARGET_STATE
{
	DCIO_LVTMA_PWRSEQ_TARGET_STATE_LCD_OFF           = 0x0,
	DCIO_LVTMA_PWRSEQ_TARGET_STATE_LCD_ON            = 0x1,
} DCIO_LVTMA_PWRSEQ_CNTL_TARGET_STATE;
typedef enum DCIO_LVTMA_PWRSEQ_CNTL_LVTMA_SYNCEN_POL
{
	DCIO_LVTMA_SYNCEN_POL_NON_INVERT                 = 0x0,
	DCIO_LVTMA_SYNCEN_POL_INVERT                     = 0x1,
} DCIO_LVTMA_PWRSEQ_CNTL_LVTMA_SYNCEN_POL;
typedef enum DCIO_LVTMA_PWRSEQ_CNTL_LVTMA_DIGON
{
	DCIO_LVTMA_DIGON_OFF                             = 0x0,
	DCIO_LVTMA_DIGON_ON                              = 0x1,
} DCIO_LVTMA_PWRSEQ_CNTL_LVTMA_DIGON;
typedef enum DCIO_LVTMA_PWRSEQ_CNTL_LVTMA_DIGON_POL
{
	DCIO_LVTMA_DIGON_POL_NON_INVERT                  = 0x0,
	DCIO_LVTMA_DIGON_POL_INVERT                      = 0x1,
} DCIO_LVTMA_PWRSEQ_CNTL_LVTMA_DIGON_POL;
typedef enum DCIO_LVTMA_PWRSEQ_CNTL_LVTMA_BLON
{
	DCIO_LVTMA_BLON_OFF                              = 0x0,
	DCIO_LVTMA_BLON_ON                               = 0x1,
} DCIO_LVTMA_PWRSEQ_CNTL_LVTMA_BLON;
typedef enum DCIO_LVTMA_PWRSEQ_CNTL_LVTMA_BLON_POL
{
	DCIO_LVTMA_BLON_POL_NON_INVERT                   = 0x0,
	DCIO_LVTMA_BLON_POL_INVERT                       = 0x1,
} DCIO_LVTMA_PWRSEQ_CNTL_LVTMA_BLON_POL;
typedef enum DCIO_LVTMA_PWRSEQ_DELAY2_LVTMA_VARY_BL_OVERRIDE_EN
{
	DCIO_LVTMA_VARY_BL_OVERRIDE_EN_BLON              = 0x0,
	DCIO_LVTMA_VARY_BL_OVERRIDE_EN_SEPARATE          = 0x1,
} DCIO_LVTMA_PWRSEQ_DELAY2_LVTMA_VARY_BL_OVERRIDE_EN;
typedef enum DCIO_BL_PWM_CNTL_BL_PWM_FRACTIONAL_EN
{
	DCIO_BL_PWM_FRACTIONAL_DISABLE                   = 0x0,
	DCIO_BL_PWM_FRACTIONAL_ENABLE                    = 0x1,
} DCIO_BL_PWM_CNTL_BL_PWM_FRACTIONAL_EN;
typedef enum DCIO_BL_PWM_CNTL_BL_PWM_EN
{
	DCIO_BL_PWM_DISABLE                              = 0x0,
	DCIO_BL_PWM_ENABLE                               = 0x1,
} DCIO_BL_PWM_CNTL_BL_PWM_EN;
typedef enum DCIO_BL_PWM_CNTL2_DBG_BL_PWM_INPUT_REFCLK_SELECT
{
	DCIO_DBG_BL_PWM_INPUT_REFCLK_SELECT_NORMAL       = 0x0,
	DCIO_DBG_BL_PWM_INPUT_REFCLK_SELECT_DEBUG1       = 0x1,
	DCIO_DBG_BL_PWM_INPUT_REFCLK_SELECT_DEBUG2       = 0x2,
	DCIO_DBG_BL_PWM_INPUT_REFCLK_SELECT_DEBUG3       = 0x3,
} DCIO_BL_PWM_CNTL2_DBG_BL_PWM_INPUT_REFCLK_SELECT;
typedef enum DCIO_BL_PWM_CNTL2_BL_PWM_OVERRIDE_BL_OUT_ENABLE
{
	DCIO_BL_PWM_OVERRIDE_BL_OUT_DISABLE              = 0x0,
	DCIO_BL_PWM_OVERRIDE_BL_OUT_ENABLE               = 0x1,
} DCIO_BL_PWM_CNTL2_BL_PWM_OVERRIDE_BL_OUT_ENABLE;
typedef enum DCIO_BL_PWM_CNTL2_BL_PWM_OVERRIDE_LVTMA_PWRSEQ_EN
{
	DCIO_BL_PWM_OVERRIDE_LVTMA_PWRSEQ_EN_NORMAL      = 0x0,
	DCIO_BL_PWM_OVERRIDE_LVTMA_PWRSEQ_EN_PWM         = 0x1,
} DCIO_BL_PWM_CNTL2_BL_PWM_OVERRIDE_LVTMA_PWRSEQ_EN;
typedef enum DCIO_BL_PWM_GRP1_REG_LOCK
{
	DCIO_BL_PWM_GRP1_REG_LOCK_DISABLE                = 0x0,
	DCIO_BL_PWM_GRP1_REG_LOCK_ENABLE                 = 0x1,
} DCIO_BL_PWM_GRP1_REG_LOCK;
typedef enum DCIO_BL_PWM_GRP1_UPDATE_AT_FRAME_START
{
	DCIO_BL_PWM_GRP1_UPDATE_AT_FRAME_START_DISABLE   = 0x0,
	DCIO_BL_PWM_GRP1_UPDATE_AT_FRAME_START_ENABLE    = 0x1,
} DCIO_BL_PWM_GRP1_UPDATE_AT_FRAME_START;
typedef enum DCIO_BL_PWM_GRP1_FRAME_START_DISP_SEL
{
	DCIO_BL_PWM_GRP1_FRAME_START_DISP_SEL_CONTROLLER1 = 0x0,
	DCIO_BL_PWM_GRP1_FRAME_START_DISP_SEL_CONTROLLER2 = 0x1,
	DCIO_BL_PWM_GRP1_FRAME_START_DISP_SEL_CONTROLLER3 = 0x2,
	DCIO_BL_PWM_GRP1_FRAME_START_DISP_SEL_CONTROLLER4 = 0x3,
	DCIO_BL_PWM_GRP1_FRAME_START_DISP_SEL_CONTROLLER5 = 0x4,
	DCIO_BL_PWM_GRP1_FRAME_START_DISP_SEL_CONTROLLER6 = 0x5,
} DCIO_BL_PWM_GRP1_FRAME_START_DISP_SEL;
typedef enum DCIO_BL_PWM_GRP1_READBACK_DB_REG_VALUE_EN
{
	DCIO_BL_PWM_GRP1_READBACK_DB_REG_VALUE_EN_BL_PWM = 0x0,
	DCIO_BL_PWM_GRP1_READBACK_DB_REG_VALUE_EN_BL1_PWM = 0x1,
} DCIO_BL_PWM_GRP1_READBACK_DB_REG_VALUE_EN;
typedef enum DCIO_BL_PWM_GRP1_IGNORE_MASTER_LOCK_EN
{
	DCIO_BL_PWM_GRP1_IGNORE_MASTER_LOCK_ENABLE       = 0x0,
	DCIO_BL_PWM_GRP1_IGNORE_MASTER_LOCK_DISABLE      = 0x1,
} DCIO_BL_PWM_GRP1_IGNORE_MASTER_LOCK_EN;
typedef enum DCIO_GSL_SEL
{
	DCIO_GSL_SEL_GROUP_0                             = 0x0,
	DCIO_GSL_SEL_GROUP_1                             = 0x1,
	DCIO_GSL_SEL_GROUP_2                             = 0x2,
} DCIO_GSL_SEL;
typedef enum DCIO_GENLK_CLK_GSL_MASK
{
	DCIO_GENLK_CLK_GSL_MASK_NO                       = 0x0,
	DCIO_GENLK_CLK_GSL_MASK_TIMING                   = 0x1,
	DCIO_GENLK_CLK_GSL_MASK_STEREO                   = 0x2,
} DCIO_GENLK_CLK_GSL_MASK;
typedef enum DCIO_GENLK_VSYNC_GSL_MASK
{
	DCIO_GENLK_VSYNC_GSL_MASK_NO                     = 0x0,
	DCIO_GENLK_VSYNC_GSL_MASK_TIMING                 = 0x1,
	DCIO_GENLK_VSYNC_GSL_MASK_STEREO                 = 0x2,
} DCIO_GENLK_VSYNC_GSL_MASK;
typedef enum DCIO_SWAPLOCK_A_GSL_MASK
{
	DCIO_SWAPLOCK_A_GSL_MASK_NO                      = 0x0,
	DCIO_SWAPLOCK_A_GSL_MASK_TIMING                  = 0x1,
	DCIO_SWAPLOCK_A_GSL_MASK_STEREO                  = 0x2,
} DCIO_SWAPLOCK_A_GSL_MASK;
typedef enum DCIO_SWAPLOCK_B_GSL_MASK
{
	DCIO_SWAPLOCK_B_GSL_MASK_NO                      = 0x0,
	DCIO_SWAPLOCK_B_GSL_MASK_TIMING                  = 0x1,
	DCIO_SWAPLOCK_B_GSL_MASK_STEREO                  = 0x2,
} DCIO_SWAPLOCK_B_GSL_MASK;
typedef enum DCIO_GSL_VSYNC_SEL
{
	DCIO_GSL_VSYNC_SEL_PIPE0                         = 0x0,
	DCIO_GSL_VSYNC_SEL_PIPE1                         = 0x1,
	DCIO_GSL_VSYNC_SEL_PIPE2                         = 0x2,
	DCIO_GSL_VSYNC_SEL_PIPE3                         = 0x3,
	DCIO_GSL_VSYNC_SEL_PIPE4                         = 0x4,
	DCIO_GSL_VSYNC_SEL_PIPE5                         = 0x5,
} DCIO_GSL_VSYNC_SEL;
typedef enum DCIO_GSL0_TIMING_SYNC_SEL
{
	DCIO_GSL0_TIMING_SYNC_SEL_PIPE                   = 0x0,
	DCIO_GSL0_TIMING_SYNC_SEL_GENCLK_VSYNC           = 0x1,
	DCIO_GSL0_TIMING_SYNC_SEL_GENCLK_CLK             = 0x2,
	DCIO_GSL0_TIMING_SYNC_SEL_SWAPLOCK_A             = 0x3,
	DCIO_GSL0_TIMING_SYNC_SEL_SWAPLOCK_B             = 0x4,
} DCIO_GSL0_TIMING_SYNC_SEL;
typedef enum DCIO_GSL0_GLOBAL_UNLOCK_SEL
{
	DCIO_GSL0_GLOBAL_UNLOCK_SEL_INVERSION            = 0x0,
	DCIO_GSL0_GLOBAL_UNLOCK_SEL_GENCLK_VSYNC         = 0x1,
	DCIO_GSL0_GLOBAL_UNLOCK_SEL_GENLK_CLK            = 0x2,
	DCIO_GSL0_GLOBAL_UNLOCK_SEL_SWAPLOCK_A           = 0x3,
	DCIO_GSL0_GLOBAL_UNLOCK_SEL_SWAPLOCK_B           = 0x4,
} DCIO_GSL0_GLOBAL_UNLOCK_SEL;
typedef enum DCIO_GSL1_TIMING_SYNC_SEL
{
	DCIO_GSL1_TIMING_SYNC_SEL_PIPE                   = 0x0,
	DCIO_GSL1_TIMING_SYNC_SEL_GENCLK_VSYNC           = 0x1,
	DCIO_GSL1_TIMING_SYNC_SEL_GENCLK_CLK             = 0x2,
	DCIO_GSL1_TIMING_SYNC_SEL_SWAPLOCK_A             = 0x3,
	DCIO_GSL1_TIMING_SYNC_SEL_SWAPLOCK_B             = 0x4,
} DCIO_GSL1_TIMING_SYNC_SEL;
typedef enum DCIO_GSL1_GLOBAL_UNLOCK_SEL
{
	DCIO_GSL1_GLOBAL_UNLOCK_SEL_INVERSION            = 0x0,
	DCIO_GSL1_GLOBAL_UNLOCK_SEL_GENCLK_VSYNC         = 0x1,
	DCIO_GSL1_GLOBAL_UNLOCK_SEL_GENLK_CLK            = 0x2,
	DCIO_GSL1_GLOBAL_UNLOCK_SEL_SWAPLOCK_A           = 0x3,
	DCIO_GSL1_GLOBAL_UNLOCK_SEL_SWAPLOCK_B           = 0x4,
} DCIO_GSL1_GLOBAL_UNLOCK_SEL;
typedef enum DCIO_GSL2_TIMING_SYNC_SEL
{
	DCIO_GSL2_TIMING_SYNC_SEL_PIPE                   = 0x0,
	DCIO_GSL2_TIMING_SYNC_SEL_GENCLK_VSYNC           = 0x1,
	DCIO_GSL2_TIMING_SYNC_SEL_GENCLK_CLK             = 0x2,
	DCIO_GSL2_TIMING_SYNC_SEL_SWAPLOCK_A             = 0x3,
	DCIO_GSL2_TIMING_SYNC_SEL_SWAPLOCK_B             = 0x4,
} DCIO_GSL2_TIMING_SYNC_SEL;
typedef enum DCIO_GSL2_GLOBAL_UNLOCK_SEL
{
	DCIO_GSL2_GLOBAL_UNLOCK_SEL_INVERSION            = 0x0,
	DCIO_GSL2_GLOBAL_UNLOCK_SEL_GENCLK_VSYNC         = 0x1,
	DCIO_GSL2_GLOBAL_UNLOCK_SEL_GENLK_CLK            = 0x2,
	DCIO_GSL2_GLOBAL_UNLOCK_SEL_SWAPLOCK_A           = 0x3,
	DCIO_GSL2_GLOBAL_UNLOCK_SEL_SWAPLOCK_B           = 0x4,
} DCIO_GSL2_GLOBAL_UNLOCK_SEL;
typedef enum DCIO_DC_GPU_TIMER_START_POSITION
{
	DCIO_GPU_TIMER_START_0_END_27                    = 0x0,
	DCIO_GPU_TIMER_START_1_END_28                    = 0x1,
	DCIO_GPU_TIMER_START_2_END_29                    = 0x2,
	DCIO_GPU_TIMER_START_3_END_30                    = 0x3,
	DCIO_GPU_TIMER_START_4_END_31                    = 0x4,
	DCIO_GPU_TIMER_START_6_END_33                    = 0x5,
	DCIO_GPU_TIMER_START_8_END_35                    = 0x6,
	DCIO_GPU_TIMER_START_10_END_37                   = 0x7,
} DCIO_DC_GPU_TIMER_START_POSITION;
typedef enum DCIO_CLOCK_CNTL_DCIO_TEST_CLK_SEL
{
	DCIO_TEST_CLK_SEL_DISPCLK                        = 0x0,
	DCIO_TEST_CLK_SEL_GATED_DISPCLK                  = 0x1,
	DCIO_TEST_CLK_SEL_SCLK                           = 0x2,
} DCIO_CLOCK_CNTL_DCIO_TEST_CLK_SEL;
typedef enum DCIO_CLOCK_CNTL_DISPCLK_R_DCIO_GATE_DIS
{
	DCIO_DISPCLK_R_DCIO_GATE_DISABLE                 = 0x0,
	DCIO_DISPCLK_R_DCIO_GATE_ENABLE                  = 0x1,
} DCIO_CLOCK_CNTL_DISPCLK_R_DCIO_GATE_DIS;
typedef enum DCIO_CLOCK_CNTL_DISPCLK_R_DCIO_RAMP_DIS
{
	DCIO_DISPCLK_R_DCIO_RAMP_DISABLE                 = 0x0,
	DCIO_DISPCLK_R_DCIO_RAMP_ENABLE                  = 0x1,
} DCIO_CLOCK_CNTL_DISPCLK_R_DCIO_RAMP_DIS;
typedef enum DCIO_DCO_DCFE_EXT_VSYNC_MUX
{
	DCIO_EXT_VSYNC_MUX_SWAPLOCKB                     = 0x0,
	DCIO_EXT_VSYNC_MUX_CRTC0                         = 0x1,
	DCIO_EXT_VSYNC_MUX_CRTC1                         = 0x2,
	DCIO_EXT_VSYNC_MUX_CRTC2                         = 0x3,
	DCIO_EXT_VSYNC_MUX_CRTC3                         = 0x4,
	DCIO_EXT_VSYNC_MUX_CRTC4                         = 0x5,
	DCIO_EXT_VSYNC_MUX_CRTC5                         = 0x6,
	DCIO_EXT_VSYNC_MUX_GENERICB                      = 0x7,
} DCIO_DCO_DCFE_EXT_VSYNC_MUX;
typedef enum DCIO_DCO_EXT_VSYNC_MASK
{
	DCIO_EXT_VSYNC_MASK_NONE                         = 0x0,
	DCIO_EXT_VSYNC_MASK_PIPE0                        = 0x1,
	DCIO_EXT_VSYNC_MASK_PIPE1                        = 0x2,
	DCIO_EXT_VSYNC_MASK_PIPE2                        = 0x3,
	DCIO_EXT_VSYNC_MASK_PIPE3                        = 0x4,
	DCIO_EXT_VSYNC_MASK_PIPE4                        = 0x5,
	DCIO_EXT_VSYNC_MASK_PIPE5                        = 0x6,
	DCIO_EXT_VSYNC_MASK_NONE_DUPLICATE               = 0x7,
} DCIO_DCO_EXT_VSYNC_MASK;
typedef enum DCIO_DBG_OUT_PIN_SEL
{
	DCIO_DBG_OUT_PIN_SEL_LOW_12BIT                   = 0x0,
	DCIO_DBG_OUT_PIN_SEL_HIGH_12BIT                  = 0x1,
} DCIO_DBG_OUT_PIN_SEL;
typedef enum DCIO_DBG_OUT_12BIT_SEL
{
	DCIO_DBG_OUT_12BIT_SEL_LOW_12BIT                 = 0x0,
	DCIO_DBG_OUT_12BIT_SEL_MID_12BIT                 = 0x1,
	DCIO_DBG_OUT_12BIT_SEL_HIGH_12BIT                = 0x2,
	DCIO_DBG_OUT_12BIT_SEL_OVERRIDE                  = 0x3,
} DCIO_DBG_OUT_12BIT_SEL;
typedef enum DCIO_DSYNC_SOFT_RESET
{
	DCIO_DSYNC_SOFT_RESET_DEASSERT                   = 0x0,
	DCIO_DSYNC_SOFT_RESET_ASSERT                     = 0x1,
} DCIO_DSYNC_SOFT_RESET;
typedef enum DCIO_DACA_SOFT_RESET
{
	DCIO_DACA_SOFT_RESET_DEASSERT                    = 0x0,
	DCIO_DACA_SOFT_RESET_ASSERT                      = 0x1,
} DCIO_DACA_SOFT_RESET;
typedef enum DCIO_DCRXPHY_SOFT_RESET
{
	DCIO_DCRXPHY_SOFT_RESET_DEASSERT                 = 0x0,
	DCIO_DCRXPHY_SOFT_RESET_ASSERT                   = 0x1,
} DCIO_DCRXPHY_SOFT_RESET;
typedef enum DCIO_DPHY_LANE_SEL
{
	DCIO_DPHY_LANE_SEL_LANE0                         = 0x0,
	DCIO_DPHY_LANE_SEL_LANE1                         = 0x1,
	DCIO_DPHY_LANE_SEL_LANE2                         = 0x2,
	DCIO_DPHY_LANE_SEL_LANE3                         = 0x3,
} DCIO_DPHY_LANE_SEL;
typedef enum DCIO_DC_GPU_TIMER_READ_SELECT
{
	DCIO_GPU_TIMER_READ_SELECT_LOWER_D1_V_UPDATE     = 0x0,
	DCIO_GPU_TIMER_READ_SELECT_UPPER_D1_V_UPDATE     = 0x1,
	DCIO_GPU_TIMER_READ_SELECT_LOWER_D2_V_UPDATE     = 0x2,
	DCIO_GPU_TIMER_READ_SELECT_UPPER_D2_V_UPDATE     = 0x3,
	DCIO_GPU_TIMER_READ_SELECT_LOWER_D3_V_UPDATE     = 0x4,
	DCIO_GPU_TIMER_READ_SELECT_UPPER_D3_V_UPDATE     = 0x5,
	DCIO_GPU_TIMER_READ_SELECT_LOWER_D4_V_UPDATE     = 0x6,
	DCIO_GPU_TIMER_READ_SELECT_UPPER_D4_V_UPDATE     = 0x7,
	DCIO_GPU_TIMER_READ_SELECT_LOWER_D5_V_UPDATE     = 0x8,
	DCIO_GPU_TIMER_READ_SELECT_UPPER_D5_V_UPDATE     = 0x9,
	DCIO_GPU_TIMER_READ_SELECT_LOWER_D6_V_UPDATE     = 0xa,
	DCIO_GPU_TIMER_READ_SELECT_UPPER_D6_V_UPDATE     = 0xb,
	DCIO_GPU_TIMER_READ_SELECT_LOWER_D1_P_FLIP       = 0xc,
	DCIO_GPU_TIMER_READ_SELECT_UPPER_D1_P_FLIP       = 0xd,
	DCIO_GPU_TIMER_READ_SELECT_LOWER_D2_P_FLIP       = 0xe,
	DCIO_GPU_TIMER_READ_SELECT_UPPER_D2_P_FLIP       = 0xf,
	DCIO_GPU_TIMER_READ_SELECT_LOWER_D3_P_FLIP       = 0x10,
	DCIO_GPU_TIMER_READ_SELECT_UPPER_D3_P_FLIP       = 0x11,
	DCIO_GPU_TIMER_READ_SELECT_LOWER_D4_P_FLIP       = 0x12,
	DCIO_GPU_TIMER_READ_SELECT_UPPER_D4_P_FLIP       = 0x13,
	DCIO_GPU_TIMER_READ_SELECT_LOWER_D5_P_FLIP       = 0x14,
	DCIO_GPU_TIMER_READ_SELECT_UPPER_D5_P_FLIP       = 0x15,
	DCIO_GPU_TIMER_READ_SELECT_LOWER_D6_P_FLIP       = 0x16,
	DCIO_GPU_TIMER_READ_SELECT_UPPER_D6_P_FLIP       = 0x17,
	DCIO_GPU_TIMER_READ_SELECT_LOWER_D1_VSYNC_NOM    = 0x18,
	DCIO_GPU_TIMER_READ_SELECT_UPPER_D1_VSYNC_NOM    = 0x19,
	DCIO_GPU_TIMER_READ_SELECT_LOWER_D2_VSYNC_NOM    = 0x1a,
	DCIO_GPU_TIMER_READ_SELECT_UPPER_D2_VSYNC_NOM    = 0x1b,
	DCIO_GPU_TIMER_READ_SELECT_LOWER_D3_VSYNC_NOM    = 0x1c,
	DCIO_GPU_TIMER_READ_SELECT_UPPER_D3_VSYNC_NOM    = 0x1d,
	DCIO_GPU_TIMER_READ_SELECT_LOWER_D4_VSYNC_NOM    = 0x1e,
	DCIO_GPU_TIMER_READ_SELECT_UPPER_D4_VSYNC_NOM    = 0x1f,
	DCIO_GPU_TIMER_READ_SELECT_LOWER_D5_VSYNC_NOM    = 0x20,
	DCIO_GPU_TIMER_READ_SELECT_UPPER_D5_VSYNC_NOM    = 0x21,
	DCIO_GPU_TIMER_READ_SELECT_LOWER_D6_VSYNC_NOM    = 0x22,
	DCIO_GPU_TIMER_READ_SELECT_UPPER_D6_VSYNC_NOM    = 0x23,
} DCIO_DC_GPU_TIMER_READ_SELECT;
typedef enum DCIO_IMPCAL_STEP_DELAY
{
	DCIO_IMPCAL_STEP_DELAY_1us                       = 0x0,
	DCIO_IMPCAL_STEP_DELAY_2us                       = 0x1,
	DCIO_IMPCAL_STEP_DELAY_3us                       = 0x2,
	DCIO_IMPCAL_STEP_DELAY_4us                       = 0x3,
	DCIO_IMPCAL_STEP_DELAY_5us                       = 0x4,
	DCIO_IMPCAL_STEP_DELAY_6us                       = 0x5,
	DCIO_IMPCAL_STEP_DELAY_7us                       = 0x6,
	DCIO_IMPCAL_STEP_DELAY_8us                       = 0x7,
	DCIO_IMPCAL_STEP_DELAY_9us                       = 0x8,
	DCIO_IMPCAL_STEP_DELAY_10us                      = 0x9,
	DCIO_IMPCAL_STEP_DELAY_11us                      = 0xa,
	DCIO_IMPCAL_STEP_DELAY_12us                      = 0xb,
	DCIO_IMPCAL_STEP_DELAY_13us                      = 0xc,
	DCIO_IMPCAL_STEP_DELAY_14us                      = 0xd,
	DCIO_IMPCAL_STEP_DELAY_15us                      = 0xe,
	DCIO_IMPCAL_STEP_DELAY_16us                      = 0xf,
} DCIO_IMPCAL_STEP_DELAY;
typedef enum DCIO_UNIPHY_IMPCAL_SEL
{
	DCIO_UNIPHY_IMPCAL_SEL_TEMPERATURE               = 0x0,
	DCIO_UNIPHY_IMPCAL_SEL_BINARY                    = 0x1,
} DCIO_UNIPHY_IMPCAL_SEL;
typedef enum DCIOCHIP_HPD_SEL
{
	DCIOCHIP_HPD_SEL_ASYNC                           = 0x0,
	DCIOCHIP_HPD_SEL_CLOCKED                         = 0x1,
} DCIOCHIP_HPD_SEL;
typedef enum DCIOCHIP_PAD_MODE
{
	DCIOCHIP_PAD_MODE_DDC                            = 0x0,
	DCIOCHIP_PAD_MODE_DP                             = 0x1,
} DCIOCHIP_PAD_MODE;
typedef enum DCIOCHIP_AUXSLAVE_PAD_MODE
{
	DCIOCHIP_AUXSLAVE_PAD_MODE_I2C                   = 0x0,
	DCIOCHIP_AUXSLAVE_PAD_MODE_AUX                   = 0x1,
} DCIOCHIP_AUXSLAVE_PAD_MODE;
typedef enum DCIOCHIP_INVERT
{
	DCIOCHIP_POL_NON_INVERT                          = 0x0,
	DCIOCHIP_POL_INVERT                              = 0x1,
} DCIOCHIP_INVERT;
typedef enum DCIOCHIP_PD_EN
{
	DCIOCHIP_PD_EN_NOTALLOW                          = 0x0,
	DCIOCHIP_PD_EN_ALLOW                             = 0x1,
} DCIOCHIP_PD_EN;
typedef enum DCIOCHIP_GPIO_MASK_EN
{
	DCIOCHIP_GPIO_MASK_EN_HARDWARE                   = 0x0,
	DCIOCHIP_GPIO_MASK_EN_SOFTWARE                   = 0x1,
} DCIOCHIP_GPIO_MASK_EN;
typedef enum DCIOCHIP_MASK
{
	DCIOCHIP_MASK_DISABLE                            = 0x0,
	DCIOCHIP_MASK_ENABLE                             = 0x1,
} DCIOCHIP_MASK;
typedef enum DCIOCHIP_GPIO_I2C_MASK
{
	DCIOCHIP_GPIO_I2C_MASK_DISABLE                   = 0x0,
	DCIOCHIP_GPIO_I2C_MASK_ENABLE                    = 0x1,
} DCIOCHIP_GPIO_I2C_MASK;
typedef enum DCIOCHIP_GPIO_I2C_DRIVE
{
	DCIOCHIP_GPIO_I2C_DRIVE_LOW                      = 0x0,
	DCIOCHIP_GPIO_I2C_DRIVE_HIGH                     = 0x1,
} DCIOCHIP_GPIO_I2C_DRIVE;
typedef enum DCIOCHIP_GPIO_I2C_EN
{
	DCIOCHIP_GPIO_I2C_DISABLE                        = 0x0,
	DCIOCHIP_GPIO_I2C_ENABLE                         = 0x1,
} DCIOCHIP_GPIO_I2C_EN;
typedef enum DCIOCHIP_MASK_4BIT
{
	DCIOCHIP_MASK_4BIT_DISABLE                       = 0x0,
	DCIOCHIP_MASK_4BIT_ENABLE                        = 0xf,
} DCIOCHIP_MASK_4BIT;
typedef enum DCIOCHIP_ENABLE_4BIT
{
	DCIOCHIP_4BIT_DISABLE                            = 0x0,
	DCIOCHIP_4BIT_ENABLE                             = 0xf,
} DCIOCHIP_ENABLE_4BIT;
typedef enum DCIOCHIP_MASK_5BIT
{
	DCIOCHIP_MASIK_5BIT_DISABLE                      = 0x0,
	DCIOCHIP_MASIK_5BIT_ENABLE                       = 0x1f,
} DCIOCHIP_MASK_5BIT;
typedef enum DCIOCHIP_ENABLE_5BIT
{
	DCIOCHIP_5BIT_DISABLE                            = 0x0,
	DCIOCHIP_5BIT_ENABLE                             = 0x1f,
} DCIOCHIP_ENABLE_5BIT;
typedef enum DCIOCHIP_MASK_2BIT
{
	DCIOCHIP_MASK_2BIT_DISABLE                       = 0x0,
	DCIOCHIP_MASK_2BIT_ENABLE                        = 0x3,
} DCIOCHIP_MASK_2BIT;
typedef enum DCIOCHIP_ENABLE_2BIT
{
	DCIOCHIP_2BIT_DISABLE                            = 0x0,
	DCIOCHIP_2BIT_ENABLE                             = 0x3,
} DCIOCHIP_ENABLE_2BIT;
typedef enum DCIOCHIP_REF_27_SRC_SEL
{
	DCIOCHIP_REF_27_SRC_SEL_XTAL_DIVIDER             = 0x0,
	DCIOCHIP_REF_27_SRC_SEL_DISP_CLKIN2_DIVIDER      = 0x1,
	DCIOCHIP_REF_27_SRC_SEL_XTAL_BYPASS              = 0x2,
	DCIOCHIP_REF_27_SRC_SEL_DISP_CLKIN2_BYPASS       = 0x3,
} DCIOCHIP_REF_27_SRC_SEL;
typedef enum DCIOCHIP_DVO_VREFPON
{
	DCIOCHIP_DVO_VREFPON_DISABLE                     = 0x0,
	DCIOCHIP_DVO_VREFPON_ENABLE                      = 0x1,
} DCIOCHIP_DVO_VREFPON;
typedef enum DCIOCHIP_DVO_VREFSEL
{
	DCIOCHIP_DVO_VREFSEL_ONCHIP                      = 0x0,
	DCIOCHIP_DVO_VREFSEL_EXTERNAL                    = 0x1,
} DCIOCHIP_DVO_VREFSEL;
typedef enum COL_MAN_UPDATE_LOCK
{
	COL_MAN_UPDATE_UNLOCKED                          = 0x0,
	COL_MAN_UPDATE_LOCKED                            = 0x1,
} COL_MAN_UPDATE_LOCK;
typedef enum COL_MAN_DISABLE_MULTIPLE_UPDATE
{
	COL_MAN_MULTIPLE_UPDATE                          = 0x0,
	COL_MAN_MULTIPLE_UPDAT_EDISABLE                  = 0x1,
} COL_MAN_DISABLE_MULTIPLE_UPDATE;
typedef enum COL_MAN_INPUTCSC_MODE
{
	INPUTCSC_MODE_BYPASS                             = 0x0,
	INPUTCSC_MODE_A                                  = 0x1,
	INPUTCSC_MODE_B                                  = 0x2,
	INPUTCSC_MODE_UNITY                              = 0x3,
} COL_MAN_INPUTCSC_MODE;
typedef enum COL_MAN_INPUTCSC_TYPE
{
	INPUTCSC_TYPE_12_0                               = 0x0,
	INPUTCSC_TYPE_10_2                               = 0x1,
	INPUTCSC_TYPE_8_4                                = 0x2,
} COL_MAN_INPUTCSC_TYPE;
typedef enum COL_MAN_INPUTCSC_CONVERT
{
	INPUTCSC_ROUND                                   = 0x0,
	INPUTCSC_TRUNCATE                                = 0x1,
} COL_MAN_INPUTCSC_CONVERT;
typedef enum COL_MAN_PRESCALE_MODE
{
	PRESCALE_MODE_BYPASS                             = 0x0,
	PRESCALE_MODE_PROGRAM                            = 0x1,
	PRESCALE_MODE_UNITY                              = 0x2,
} COL_MAN_PRESCALE_MODE;
typedef enum COL_MAN_OUTPUT_CSC_MODE
{
	COL_MAN_OUTPUT_CSC_BYPASS                        = 0x0,
	COL_MAN_OUTPUT_CSC_RGB                           = 0x1,
	COL_MAN_OUTPUT_CSC_YCrCb601                      = 0x2,
	COL_MAN_OUTPUT_CSC_YCrCb709                      = 0x3,
	COL_MAN_OUTPUT_CSC_A                             = 0x4,
	COL_MAN_OUTPUT_CSC_B                             = 0x5,
} COL_MAN_OUTPUT_CSC_MODE;
typedef enum COL_MAN_DENORM_CLAMP_CONTROL
{
	DENORM_CLAMP_CONTROL_UNITY                       = 0x0,
	DENORM_CLAMP_CONTROL_8                           = 0x1,
	DENORM_CLAMP_CONTROL_10                          = 0x2,
	DENORM_CLAMP_CONTROL_12                          = 0x3,
} COL_MAN_DENORM_CLAMP_CONTROL;
typedef enum COL_MAN_GAMMA_CORR_CONTROL
{
	GAMMA_CORR_CONTROL_BYPASS                        = 0x0,
	GAMMA_CORR_CONTROL_A                             = 0x1,
	GAMMA_CORR_CONTROL_B                             = 0x2,
} COL_MAN_GAMMA_CORR_CONTROL;
typedef enum SurfaceEndian
{
	ENDIAN_NONE                                      = 0x0,
	ENDIAN_8IN16                                     = 0x1,
	ENDIAN_8IN32                                     = 0x2,
	ENDIAN_8IN64                                     = 0x3,
} SurfaceEndian;
typedef enum ArrayMode
{
	ARRAY_LINEAR_GENERAL                             = 0x0,
	ARRAY_LINEAR_ALIGNED                             = 0x1,
	ARRAY_1D_TILED_THIN1                             = 0x2,
	ARRAY_1D_TILED_THICK                             = 0x3,
	ARRAY_2D_TILED_THIN1                             = 0x4,
	ARRAY_PRT_TILED_THIN1                            = 0x5,
	ARRAY_PRT_2D_TILED_THIN1                         = 0x6,
	ARRAY_2D_TILED_THICK                             = 0x7,
	ARRAY_2D_TILED_XTHICK                            = 0x8,
	ARRAY_PRT_TILED_THICK                            = 0x9,
	ARRAY_PRT_2D_TILED_THICK                         = 0xa,
	ARRAY_PRT_3D_TILED_THIN1                         = 0xb,
	ARRAY_3D_TILED_THIN1                             = 0xc,
	ARRAY_3D_TILED_THICK                             = 0xd,
	ARRAY_3D_TILED_XTHICK                            = 0xe,
	ARRAY_PRT_3D_TILED_THICK                         = 0xf,
} ArrayMode;
typedef enum PipeTiling
{
	CONFIG_1_PIPE                                    = 0x0,
	CONFIG_2_PIPE                                    = 0x1,
	CONFIG_4_PIPE                                    = 0x2,
	CONFIG_8_PIPE                                    = 0x3,
} PipeTiling;
typedef enum BankTiling
{
	CONFIG_4_BANK                                    = 0x0,
	CONFIG_8_BANK                                    = 0x1,
} BankTiling;
typedef enum GroupInterleave
{
	CONFIG_256B_GROUP                                = 0x0,
	CONFIG_512B_GROUP                                = 0x1,
} GroupInterleave;
typedef enum RowTiling
{
	CONFIG_1KB_ROW                                   = 0x0,
	CONFIG_2KB_ROW                                   = 0x1,
	CONFIG_4KB_ROW                                   = 0x2,
	CONFIG_8KB_ROW                                   = 0x3,
	CONFIG_1KB_ROW_OPT                               = 0x4,
	CONFIG_2KB_ROW_OPT                               = 0x5,
	CONFIG_4KB_ROW_OPT                               = 0x6,
	CONFIG_8KB_ROW_OPT                               = 0x7,
} RowTiling;
typedef enum BankSwapBytes
{
	CONFIG_128B_SWAPS                                = 0x0,
	CONFIG_256B_SWAPS                                = 0x1,
	CONFIG_512B_SWAPS                                = 0x2,
	CONFIG_1KB_SWAPS                                 = 0x3,
} BankSwapBytes;
typedef enum SampleSplitBytes
{
	CONFIG_1KB_SPLIT                                 = 0x0,
	CONFIG_2KB_SPLIT                                 = 0x1,
	CONFIG_4KB_SPLIT                                 = 0x2,
	CONFIG_8KB_SPLIT                                 = 0x3,
} SampleSplitBytes;
typedef enum NumPipes
{
	ADDR_CONFIG_1_PIPE                               = 0x0,
	ADDR_CONFIG_2_PIPE                               = 0x1,
	ADDR_CONFIG_4_PIPE                               = 0x2,
	ADDR_CONFIG_8_PIPE                               = 0x3,
} NumPipes;
typedef enum PipeInterleaveSize
{
	ADDR_CONFIG_PIPE_INTERLEAVE_256B                 = 0x0,
	ADDR_CONFIG_PIPE_INTERLEAVE_512B                 = 0x1,
} PipeInterleaveSize;
typedef enum BankInterleaveSize
{
	ADDR_CONFIG_BANK_INTERLEAVE_1                    = 0x0,
	ADDR_CONFIG_BANK_INTERLEAVE_2                    = 0x1,
	ADDR_CONFIG_BANK_INTERLEAVE_4                    = 0x2,
	ADDR_CONFIG_BANK_INTERLEAVE_8                    = 0x3,
} BankInterleaveSize;
typedef enum NumShaderEngines
{
	ADDR_CONFIG_1_SHADER_ENGINE                      = 0x0,
	ADDR_CONFIG_2_SHADER_ENGINE                      = 0x1,
} NumShaderEngines;
typedef enum ShaderEngineTileSize
{
	ADDR_CONFIG_SE_TILE_16                           = 0x0,
	ADDR_CONFIG_SE_TILE_32                           = 0x1,
} ShaderEngineTileSize;
typedef enum NumGPUs
{
	ADDR_CONFIG_1_GPU                                = 0x0,
	ADDR_CONFIG_2_GPU                                = 0x1,
	ADDR_CONFIG_4_GPU                                = 0x2,
} NumGPUs;
typedef enum MultiGPUTileSize
{
	ADDR_CONFIG_GPU_TILE_16                          = 0x0,
	ADDR_CONFIG_GPU_TILE_32                          = 0x1,
	ADDR_CONFIG_GPU_TILE_64                          = 0x2,
	ADDR_CONFIG_GPU_TILE_128                         = 0x3,
} MultiGPUTileSize;
typedef enum RowSize
{
	ADDR_CONFIG_1KB_ROW                              = 0x0,
	ADDR_CONFIG_2KB_ROW                              = 0x1,
	ADDR_CONFIG_4KB_ROW                              = 0x2,
} RowSize;
typedef enum NumLowerPipes
{
	ADDR_CONFIG_1_LOWER_PIPES                        = 0x0,
	ADDR_CONFIG_2_LOWER_PIPES                        = 0x1,
} NumLowerPipes;
typedef enum DebugBlockId
{
	DBG_CLIENT_BLKID_RESERVED                        = 0x0,
	DBG_CLIENT_BLKID_dbg                             = 0x1,
	DBG_CLIENT_BLKID_scf2                            = 0x2,
	DBG_CLIENT_BLKID_mcd5                            = 0x3,
	DBG_CLIENT_BLKID_vmc                             = 0x4,
	DBG_CLIENT_BLKID_sx30                            = 0x5,
	DBG_CLIENT_BLKID_mcd2                            = 0x6,
	DBG_CLIENT_BLKID_bci1                            = 0x7,
	DBG_CLIENT_BLKID_xdma_dbg_client_wrapper         = 0x8,
	DBG_CLIENT_BLKID_mcc0                            = 0x9,
	DBG_CLIENT_BLKID_uvdf_0                          = 0xa,
	DBG_CLIENT_BLKID_uvdf_1                          = 0xb,
	DBG_CLIENT_BLKID_uvdf_2                          = 0xc,
	DBG_CLIENT_BLKID_uvdi_0                          = 0xd,
	DBG_CLIENT_BLKID_bci0                            = 0xe,
	DBG_CLIENT_BLKID_vcec0_0                         = 0xf,
	DBG_CLIENT_BLKID_cb100                           = 0x10,
	DBG_CLIENT_BLKID_cb001                           = 0x11,
	DBG_CLIENT_BLKID_mcd4                            = 0x12,
	DBG_CLIENT_BLKID_tmonw00                         = 0x13,
	DBG_CLIENT_BLKID_cb101                           = 0x14,
	DBG_CLIENT_BLKID_sx10                            = 0x15,
	DBG_CLIENT_BLKID_cb301                           = 0x16,
	DBG_CLIENT_BLKID_tmonw01                         = 0x17,
	DBG_CLIENT_BLKID_vcea0_0                         = 0x18,
	DBG_CLIENT_BLKID_vcea0_1                         = 0x19,
	DBG_CLIENT_BLKID_vcea0_2                         = 0x1a,
	DBG_CLIENT_BLKID_vcea0_3                         = 0x1b,
	DBG_CLIENT_BLKID_scf1                            = 0x1c,
	DBG_CLIENT_BLKID_sx20                            = 0x1d,
	DBG_CLIENT_BLKID_spim1                           = 0x1e,
	DBG_CLIENT_BLKID_pa10                            = 0x1f,
	DBG_CLIENT_BLKID_pa00                            = 0x20,
	DBG_CLIENT_BLKID_gmcon                           = 0x21,
	DBG_CLIENT_BLKID_mcb                             = 0x22,
	DBG_CLIENT_BLKID_vgt0                            = 0x23,
	DBG_CLIENT_BLKID_pc0                             = 0x24,
	DBG_CLIENT_BLKID_bci2                            = 0x25,
	DBG_CLIENT_BLKID_uvdb_0                          = 0x26,
	DBG_CLIENT_BLKID_spim3                           = 0x27,
	DBG_CLIENT_BLKID_cpc_0                           = 0x28,
	DBG_CLIENT_BLKID_cpc_1                           = 0x29,
	DBG_CLIENT_BLKID_uvdm_0                          = 0x2a,
	DBG_CLIENT_BLKID_uvdm_1                          = 0x2b,
	DBG_CLIENT_BLKID_uvdm_2                          = 0x2c,
	DBG_CLIENT_BLKID_uvdm_3                          = 0x2d,
	DBG_CLIENT_BLKID_cb000                           = 0x2e,
	DBG_CLIENT_BLKID_spim0                           = 0x2f,
	DBG_CLIENT_BLKID_mcc2                            = 0x30,
	DBG_CLIENT_BLKID_ds0                             = 0x31,
	DBG_CLIENT_BLKID_srbm                            = 0x32,
	DBG_CLIENT_BLKID_ih                              = 0x33,
	DBG_CLIENT_BLKID_sem                             = 0x34,
	DBG_CLIENT_BLKID_sdma_0                          = 0x35,
	DBG_CLIENT_BLKID_sdma_1                          = 0x36,
	DBG_CLIENT_BLKID_hdp                             = 0x37,
	DBG_CLIENT_BLKID_acp_0                           = 0x38,
	DBG_CLIENT_BLKID_acp_1                           = 0x39,
	DBG_CLIENT_BLKID_cb200                           = 0x3a,
	DBG_CLIENT_BLKID_scf3                            = 0x3b,
	DBG_CLIENT_BLKID_vceb1_0                         = 0x3c,
	DBG_CLIENT_BLKID_vcea1_0                         = 0x3d,
	DBG_CLIENT_BLKID_vcea1_1                         = 0x3e,
	DBG_CLIENT_BLKID_vcea1_2                         = 0x3f,
	DBG_CLIENT_BLKID_vcea1_3                         = 0x40,
	DBG_CLIENT_BLKID_bci3                            = 0x41,
	DBG_CLIENT_BLKID_mcd0                            = 0x42,
	DBG_CLIENT_BLKID_pa11                            = 0x43,
	DBG_CLIENT_BLKID_pa01                            = 0x44,
	DBG_CLIENT_BLKID_cb201                           = 0x45,
	DBG_CLIENT_BLKID_spim2                           = 0x46,
	DBG_CLIENT_BLKID_vgt2                            = 0x47,
	DBG_CLIENT_BLKID_pc2                             = 0x48,
	DBG_CLIENT_BLKID_smu_0                           = 0x49,
	DBG_CLIENT_BLKID_smu_1                           = 0x4a,
	DBG_CLIENT_BLKID_smu_2                           = 0x4b,
	DBG_CLIENT_BLKID_cb1                             = 0x4c,
	DBG_CLIENT_BLKID_ia0                             = 0x4d,
	DBG_CLIENT_BLKID_wd                              = 0x4e,
	DBG_CLIENT_BLKID_ia1                             = 0x4f,
	DBG_CLIENT_BLKID_vcec1_0                         = 0x50,
	DBG_CLIENT_BLKID_scf0                            = 0x51,
	DBG_CLIENT_BLKID_vgt1                            = 0x52,
	DBG_CLIENT_BLKID_pc1                             = 0x53,
	DBG_CLIENT_BLKID_cb0                             = 0x54,
	DBG_CLIENT_BLKID_gdc_one_0                       = 0x55,
	DBG_CLIENT_BLKID_gdc_one_1                       = 0x56,
	DBG_CLIENT_BLKID_gdc_one_2                       = 0x57,
	DBG_CLIENT_BLKID_gdc_one_3                       = 0x58,
	DBG_CLIENT_BLKID_gdc_one_4                       = 0x59,
	DBG_CLIENT_BLKID_gdc_one_5                       = 0x5a,
	DBG_CLIENT_BLKID_gdc_one_6                       = 0x5b,
	DBG_CLIENT_BLKID_gdc_one_7                       = 0x5c,
	DBG_CLIENT_BLKID_gdc_one_8                       = 0x5d,
	DBG_CLIENT_BLKID_gdc_one_9                       = 0x5e,
	DBG_CLIENT_BLKID_gdc_one_10                      = 0x5f,
	DBG_CLIENT_BLKID_gdc_one_11                      = 0x60,
	DBG_CLIENT_BLKID_gdc_one_12                      = 0x61,
	DBG_CLIENT_BLKID_gdc_one_13                      = 0x62,
	DBG_CLIENT_BLKID_gdc_one_14                      = 0x63,
	DBG_CLIENT_BLKID_gdc_one_15                      = 0x64,
	DBG_CLIENT_BLKID_gdc_one_16                      = 0x65,
	DBG_CLIENT_BLKID_gdc_one_17                      = 0x66,
	DBG_CLIENT_BLKID_gdc_one_18                      = 0x67,
	DBG_CLIENT_BLKID_gdc_one_19                      = 0x68,
	DBG_CLIENT_BLKID_gdc_one_20                      = 0x69,
	DBG_CLIENT_BLKID_gdc_one_21                      = 0x6a,
	DBG_CLIENT_BLKID_gdc_one_22                      = 0x6b,
	DBG_CLIENT_BLKID_gdc_one_23                      = 0x6c,
	DBG_CLIENT_BLKID_gdc_one_24                      = 0x6d,
	DBG_CLIENT_BLKID_gdc_one_25                      = 0x6e,
	DBG_CLIENT_BLKID_gdc_one_26                      = 0x6f,
	DBG_CLIENT_BLKID_gdc_one_27                      = 0x70,
	DBG_CLIENT_BLKID_gdc_one_28                      = 0x71,
	DBG_CLIENT_BLKID_gdc_one_29                      = 0x72,
	DBG_CLIENT_BLKID_gdc_one_30                      = 0x73,
	DBG_CLIENT_BLKID_gdc_one_31                      = 0x74,
	DBG_CLIENT_BLKID_gdc_one_32                      = 0x75,
	DBG_CLIENT_BLKID_gdc_one_33                      = 0x76,
	DBG_CLIENT_BLKID_gdc_one_34                      = 0x77,
	DBG_CLIENT_BLKID_gdc_one_35                      = 0x78,
	DBG_CLIENT_BLKID_vceb0_0                         = 0x79,
	DBG_CLIENT_BLKID_vgt3                            = 0x7a,
	DBG_CLIENT_BLKID_pc3                             = 0x7b,
	DBG_CLIENT_BLKID_mcd3                            = 0x7c,
	DBG_CLIENT_BLKID_uvdu_0                          = 0x7d,
	DBG_CLIENT_BLKID_uvdu_1                          = 0x7e,
	DBG_CLIENT_BLKID_uvdu_2                          = 0x7f,
	DBG_CLIENT_BLKID_uvdu_3                          = 0x80,
	DBG_CLIENT_BLKID_uvdu_4                          = 0x81,
	DBG_CLIENT_BLKID_uvdu_5                          = 0x82,
	DBG_CLIENT_BLKID_uvdu_6                          = 0x83,
	DBG_CLIENT_BLKID_cb300                           = 0x84,
	DBG_CLIENT_BLKID_mcd1                            = 0x85,
	DBG_CLIENT_BLKID_sx00                            = 0x86,
	DBG_CLIENT_BLKID_uvdc_0                          = 0x87,
	DBG_CLIENT_BLKID_uvdc_1                          = 0x88,
	DBG_CLIENT_BLKID_mcc3                            = 0x89,
	DBG_CLIENT_BLKID_cpg_0                           = 0x8a,
	DBG_CLIENT_BLKID_cpg_1                           = 0x8b,
	DBG_CLIENT_BLKID_gck                             = 0x8c,
	DBG_CLIENT_BLKID_mcc1                            = 0x8d,
	DBG_CLIENT_BLKID_cpf_0                           = 0x8e,
	DBG_CLIENT_BLKID_cpf_1                           = 0x8f,
	DBG_CLIENT_BLKID_rlc                             = 0x90,
	DBG_CLIENT_BLKID_grbm                            = 0x91,
	DBG_CLIENT_BLKID_sammsp                          = 0x92,
	DBG_CLIENT_BLKID_dci_pg                          = 0x93,
	DBG_CLIENT_BLKID_dci_0                           = 0x94,
	DBG_CLIENT_BLKID_dccg0_0                         = 0x95,
	DBG_CLIENT_BLKID_dccg0_1                         = 0x96,
	DBG_CLIENT_BLKID_dcfe01_0                        = 0x97,
	DBG_CLIENT_BLKID_dcfe02_0                        = 0x98,
	DBG_CLIENT_BLKID_dcfe03_0                        = 0x99,
	DBG_CLIENT_BLKID_dcfe04_0                        = 0x9a,
	DBG_CLIENT_BLKID_dcfe05_0                        = 0x9b,
	DBG_CLIENT_BLKID_dcfe06_0                        = 0x9c,
	DBG_CLIENT_BLKID_RESERVED_LAST                   = 0x9d,
} DebugBlockId;
typedef enum DebugBlockId_OLD
{
	DBG_BLOCK_ID_RESERVED                            = 0x0,
	DBG_BLOCK_ID_DBG                                 = 0x1,
	DBG_BLOCK_ID_VMC                                 = 0x2,
	DBG_BLOCK_ID_PDMA                                = 0x3,
	DBG_BLOCK_ID_CG                                  = 0x4,
	DBG_BLOCK_ID_SRBM                                = 0x5,
	DBG_BLOCK_ID_GRBM                                = 0x6,
	DBG_BLOCK_ID_RLC                                 = 0x7,
	DBG_BLOCK_ID_CSC                                 = 0x8,
	DBG_BLOCK_ID_SEM                                 = 0x9,
	DBG_BLOCK_ID_IH                                  = 0xa,
	DBG_BLOCK_ID_SC                                  = 0xb,
	DBG_BLOCK_ID_SQ                                  = 0xc,
	DBG_BLOCK_ID_AVP                                 = 0xd,
	DBG_BLOCK_ID_GMCON                               = 0xe,
	DBG_BLOCK_ID_SMU                                 = 0xf,
	DBG_BLOCK_ID_DMA0                                = 0x10,
	DBG_BLOCK_ID_DMA1                                = 0x11,
	DBG_BLOCK_ID_SPIM                                = 0x12,
	DBG_BLOCK_ID_GDS                                 = 0x13,
	DBG_BLOCK_ID_SPIS                                = 0x14,
	DBG_BLOCK_ID_UNUSED0                             = 0x15,
	DBG_BLOCK_ID_PA0                                 = 0x16,
	DBG_BLOCK_ID_PA1                                 = 0x17,
	DBG_BLOCK_ID_CP0                                 = 0x18,
	DBG_BLOCK_ID_CP1                                 = 0x19,
	DBG_BLOCK_ID_CP2                                 = 0x1a,
	DBG_BLOCK_ID_UNUSED1                             = 0x1b,
	DBG_BLOCK_ID_UVDU                                = 0x1c,
	DBG_BLOCK_ID_UVDM                                = 0x1d,
	DBG_BLOCK_ID_VCE                                 = 0x1e,
	DBG_BLOCK_ID_UNUSED2                             = 0x1f,
	DBG_BLOCK_ID_VGT0                                = 0x20,
	DBG_BLOCK_ID_VGT1                                = 0x21,
	DBG_BLOCK_ID_IA                                  = 0x22,
	DBG_BLOCK_ID_UNUSED3                             = 0x23,
	DBG_BLOCK_ID_SCT0                                = 0x24,
	DBG_BLOCK_ID_SCT1                                = 0x25,
	DBG_BLOCK_ID_SPM0                                = 0x26,
	DBG_BLOCK_ID_SPM1                                = 0x27,
	DBG_BLOCK_ID_TCAA                                = 0x28,
	DBG_BLOCK_ID_TCAB                                = 0x29,
	DBG_BLOCK_ID_TCCA                                = 0x2a,
	DBG_BLOCK_ID_TCCB                                = 0x2b,
	DBG_BLOCK_ID_MCC0                                = 0x2c,
	DBG_BLOCK_ID_MCC1                                = 0x2d,
	DBG_BLOCK_ID_MCC2                                = 0x2e,
	DBG_BLOCK_ID_MCC3                                = 0x2f,
	DBG_BLOCK_ID_SX0                                 = 0x30,
	DBG_BLOCK_ID_SX1                                 = 0x31,
	DBG_BLOCK_ID_SX2                                 = 0x32,
	DBG_BLOCK_ID_SX3                                 = 0x33,
	DBG_BLOCK_ID_UNUSED4                             = 0x34,
	DBG_BLOCK_ID_UNUSED5                             = 0x35,
	DBG_BLOCK_ID_UNUSED6                             = 0x36,
	DBG_BLOCK_ID_UNUSED7                             = 0x37,
	DBG_BLOCK_ID_PC0                                 = 0x38,
	DBG_BLOCK_ID_PC1                                 = 0x39,
	DBG_BLOCK_ID_UNUSED8                             = 0x3a,
	DBG_BLOCK_ID_UNUSED9                             = 0x3b,
	DBG_BLOCK_ID_UNUSED10                            = 0x3c,
	DBG_BLOCK_ID_UNUSED11                            = 0x3d,
	DBG_BLOCK_ID_MCB                                 = 0x3e,
	DBG_BLOCK_ID_UNUSED12                            = 0x3f,
	DBG_BLOCK_ID_SCB0                                = 0x40,
	DBG_BLOCK_ID_SCB1                                = 0x41,
	DBG_BLOCK_ID_UNUSED13                            = 0x42,
	DBG_BLOCK_ID_UNUSED14                            = 0x43,
	DBG_BLOCK_ID_SCF0                                = 0x44,
	DBG_BLOCK_ID_SCF1                                = 0x45,
	DBG_BLOCK_ID_UNUSED15                            = 0x46,
	DBG_BLOCK_ID_UNUSED16                            = 0x47,
	DBG_BLOCK_ID_BCI0                                = 0x48,
	DBG_BLOCK_ID_BCI1                                = 0x49,
	DBG_BLOCK_ID_BCI2                                = 0x4a,
	DBG_BLOCK_ID_BCI3                                = 0x4b,
	DBG_BLOCK_ID_UNUSED17                            = 0x4c,
	DBG_BLOCK_ID_UNUSED18                            = 0x4d,
	DBG_BLOCK_ID_UNUSED19                            = 0x4e,
	DBG_BLOCK_ID_UNUSED20                            = 0x4f,
	DBG_BLOCK_ID_CB00                                = 0x50,
	DBG_BLOCK_ID_CB01                                = 0x51,
	DBG_BLOCK_ID_CB02                                = 0x52,
	DBG_BLOCK_ID_CB03                                = 0x53,
	DBG_BLOCK_ID_CB04                                = 0x54,
	DBG_BLOCK_ID_UNUSED21                            = 0x55,
	DBG_BLOCK_ID_UNUSED22                            = 0x56,
	DBG_BLOCK_ID_UNUSED23                            = 0x57,
	DBG_BLOCK_ID_CB10                                = 0x58,
	DBG_BLOCK_ID_CB11                                = 0x59,
	DBG_BLOCK_ID_CB12                                = 0x5a,
	DBG_BLOCK_ID_CB13                                = 0x5b,
	DBG_BLOCK_ID_CB14                                = 0x5c,
	DBG_BLOCK_ID_UNUSED24                            = 0x5d,
	DBG_BLOCK_ID_UNUSED25                            = 0x5e,
	DBG_BLOCK_ID_UNUSED26                            = 0x5f,
	DBG_BLOCK_ID_TCP0                                = 0x60,
	DBG_BLOCK_ID_TCP1                                = 0x61,
	DBG_BLOCK_ID_TCP2                                = 0x62,
	DBG_BLOCK_ID_TCP3                                = 0x63,
	DBG_BLOCK_ID_TCP4                                = 0x64,
	DBG_BLOCK_ID_TCP5                                = 0x65,
	DBG_BLOCK_ID_TCP6                                = 0x66,
	DBG_BLOCK_ID_TCP7                                = 0x67,
	DBG_BLOCK_ID_TCP8                                = 0x68,
	DBG_BLOCK_ID_TCP9                                = 0x69,
	DBG_BLOCK_ID_TCP10                               = 0x6a,
	DBG_BLOCK_ID_TCP11                               = 0x6b,
	DBG_BLOCK_ID_TCP12                               = 0x6c,
	DBG_BLOCK_ID_TCP13                               = 0x6d,
	DBG_BLOCK_ID_TCP14                               = 0x6e,
	DBG_BLOCK_ID_TCP15                               = 0x6f,
	DBG_BLOCK_ID_TCP16                               = 0x70,
	DBG_BLOCK_ID_TCP17                               = 0x71,
	DBG_BLOCK_ID_TCP18                               = 0x72,
	DBG_BLOCK_ID_TCP19                               = 0x73,
	DBG_BLOCK_ID_TCP20                               = 0x74,
	DBG_BLOCK_ID_TCP21                               = 0x75,
	DBG_BLOCK_ID_TCP22                               = 0x76,
	DBG_BLOCK_ID_TCP23                               = 0x77,
	DBG_BLOCK_ID_TCP_RESERVED0                       = 0x78,
	DBG_BLOCK_ID_TCP_RESERVED1                       = 0x79,
	DBG_BLOCK_ID_TCP_RESERVED2                       = 0x7a,
	DBG_BLOCK_ID_TCP_RESERVED3                       = 0x7b,
	DBG_BLOCK_ID_TCP_RESERVED4                       = 0x7c,
	DBG_BLOCK_ID_TCP_RESERVED5                       = 0x7d,
	DBG_BLOCK_ID_TCP_RESERVED6                       = 0x7e,
	DBG_BLOCK_ID_TCP_RESERVED7                       = 0x7f,
	DBG_BLOCK_ID_DB00                                = 0x80,
	DBG_BLOCK_ID_DB01                                = 0x81,
	DBG_BLOCK_ID_DB02                                = 0x82,
	DBG_BLOCK_ID_DB03                                = 0x83,
	DBG_BLOCK_ID_DB04                                = 0x84,
	DBG_BLOCK_ID_UNUSED27                            = 0x85,
	DBG_BLOCK_ID_UNUSED28                            = 0x86,
	DBG_BLOCK_ID_UNUSED29                            = 0x87,
	DBG_BLOCK_ID_DB10                                = 0x88,
	DBG_BLOCK_ID_DB11                                = 0x89,
	DBG_BLOCK_ID_DB12                                = 0x8a,
	DBG_BLOCK_ID_DB13                                = 0x8b,
	DBG_BLOCK_ID_DB14                                = 0x8c,
	DBG_BLOCK_ID_UNUSED30                            = 0x8d,
	DBG_BLOCK_ID_UNUSED31                            = 0x8e,
	DBG_BLOCK_ID_UNUSED32                            = 0x8f,
	DBG_BLOCK_ID_TCC0                                = 0x90,
	DBG_BLOCK_ID_TCC1                                = 0x91,
	DBG_BLOCK_ID_TCC2                                = 0x92,
	DBG_BLOCK_ID_TCC3                                = 0x93,
	DBG_BLOCK_ID_TCC4                                = 0x94,
	DBG_BLOCK_ID_TCC5                                = 0x95,
	DBG_BLOCK_ID_TCC6                                = 0x96,
	DBG_BLOCK_ID_TCC7                                = 0x97,
	DBG_BLOCK_ID_SPS00                               = 0x98,
	DBG_BLOCK_ID_SPS01                               = 0x99,
	DBG_BLOCK_ID_SPS02                               = 0x9a,
	DBG_BLOCK_ID_SPS10                               = 0x9b,
	DBG_BLOCK_ID_SPS11                               = 0x9c,
	DBG_BLOCK_ID_SPS12                               = 0x9d,
	DBG_BLOCK_ID_UNUSED33                            = 0x9e,
	DBG_BLOCK_ID_UNUSED34                            = 0x9f,
	DBG_BLOCK_ID_TA00                                = 0xa0,
	DBG_BLOCK_ID_TA01                                = 0xa1,
	DBG_BLOCK_ID_TA02                                = 0xa2,
	DBG_BLOCK_ID_TA03                                = 0xa3,
	DBG_BLOCK_ID_TA04                                = 0xa4,
	DBG_BLOCK_ID_TA05                                = 0xa5,
	DBG_BLOCK_ID_TA06                                = 0xa6,
	DBG_BLOCK_ID_TA07                                = 0xa7,
	DBG_BLOCK_ID_TA08                                = 0xa8,
	DBG_BLOCK_ID_TA09                                = 0xa9,
	DBG_BLOCK_ID_TA0A                                = 0xaa,
	DBG_BLOCK_ID_TA0B                                = 0xab,
	DBG_BLOCK_ID_UNUSED35                            = 0xac,
	DBG_BLOCK_ID_UNUSED36                            = 0xad,
	DBG_BLOCK_ID_UNUSED37                            = 0xae,
	DBG_BLOCK_ID_UNUSED38                            = 0xaf,
	DBG_BLOCK_ID_TA10                                = 0xb0,
	DBG_BLOCK_ID_TA11                                = 0xb1,
	DBG_BLOCK_ID_TA12                                = 0xb2,
	DBG_BLOCK_ID_TA13                                = 0xb3,
	DBG_BLOCK_ID_TA14                                = 0xb4,
	DBG_BLOCK_ID_TA15                                = 0xb5,
	DBG_BLOCK_ID_TA16                                = 0xb6,
	DBG_BLOCK_ID_TA17                                = 0xb7,
	DBG_BLOCK_ID_TA18                                = 0xb8,
	DBG_BLOCK_ID_TA19                                = 0xb9,
	DBG_BLOCK_ID_TA1A                                = 0xba,
	DBG_BLOCK_ID_TA1B                                = 0xbb,
	DBG_BLOCK_ID_UNUSED39                            = 0xbc,
	DBG_BLOCK_ID_UNUSED40                            = 0xbd,
	DBG_BLOCK_ID_UNUSED41                            = 0xbe,
	DBG_BLOCK_ID_UNUSED42                            = 0xbf,
	DBG_BLOCK_ID_TD00                                = 0xc0,
	DBG_BLOCK_ID_TD01                                = 0xc1,
	DBG_BLOCK_ID_TD02                                = 0xc2,
	DBG_BLOCK_ID_TD03                                = 0xc3,
	DBG_BLOCK_ID_TD04                                = 0xc4,
	DBG_BLOCK_ID_TD05                                = 0xc5,
	DBG_BLOCK_ID_TD06                                = 0xc6,
	DBG_BLOCK_ID_TD07                                = 0xc7,
	DBG_BLOCK_ID_TD08                                = 0xc8,
	DBG_BLOCK_ID_TD09                                = 0xc9,
	DBG_BLOCK_ID_TD0A                                = 0xca,
	DBG_BLOCK_ID_TD0B                                = 0xcb,
	DBG_BLOCK_ID_UNUSED43                            = 0xcc,
	DBG_BLOCK_ID_UNUSED44                            = 0xcd,
	DBG_BLOCK_ID_UNUSED45                            = 0xce,
	DBG_BLOCK_ID_UNUSED46                            = 0xcf,
	DBG_BLOCK_ID_TD10                                = 0xd0,
	DBG_BLOCK_ID_TD11                                = 0xd1,
	DBG_BLOCK_ID_TD12                                = 0xd2,
	DBG_BLOCK_ID_TD13                                = 0xd3,
	DBG_BLOCK_ID_TD14                                = 0xd4,
	DBG_BLOCK_ID_TD15                                = 0xd5,
	DBG_BLOCK_ID_TD16                                = 0xd6,
	DBG_BLOCK_ID_TD17                                = 0xd7,
	DBG_BLOCK_ID_TD18                                = 0xd8,
	DBG_BLOCK_ID_TD19                                = 0xd9,
	DBG_BLOCK_ID_TD1A                                = 0xda,
	DBG_BLOCK_ID_TD1B                                = 0xdb,
	DBG_BLOCK_ID_UNUSED47                            = 0xdc,
	DBG_BLOCK_ID_UNUSED48                            = 0xdd,
	DBG_BLOCK_ID_UNUSED49                            = 0xde,
	DBG_BLOCK_ID_UNUSED50                            = 0xdf,
	DBG_BLOCK_ID_MCD0                                = 0xe0,
	DBG_BLOCK_ID_MCD1                                = 0xe1,
	DBG_BLOCK_ID_MCD2                                = 0xe2,
	DBG_BLOCK_ID_MCD3                                = 0xe3,
	DBG_BLOCK_ID_MCD4                                = 0xe4,
	DBG_BLOCK_ID_MCD5                                = 0xe5,
	DBG_BLOCK_ID_UNUSED51                            = 0xe6,
	DBG_BLOCK_ID_UNUSED52                            = 0xe7,
} DebugBlockId_OLD;
typedef enum DebugBlockId_BY2
{
	DBG_BLOCK_ID_RESERVED_BY2                        = 0x0,
	DBG_BLOCK_ID_VMC_BY2                             = 0x1,
	DBG_BLOCK_ID_CG_BY2                              = 0x2,
	DBG_BLOCK_ID_GRBM_BY2                            = 0x3,
	DBG_BLOCK_ID_CSC_BY2                             = 0x4,
	DBG_BLOCK_ID_IH_BY2                              = 0x5,
	DBG_BLOCK_ID_SQ_BY2                              = 0x6,
	DBG_BLOCK_ID_GMCON_BY2                           = 0x7,
	DBG_BLOCK_ID_DMA0_BY2                            = 0x8,
	DBG_BLOCK_ID_SPIM_BY2                            = 0x9,
	DBG_BLOCK_ID_SPIS_BY2                            = 0xa,
	DBG_BLOCK_ID_PA0_BY2                             = 0xb,
	DBG_BLOCK_ID_CP0_BY2                             = 0xc,
	DBG_BLOCK_ID_CP2_BY2                             = 0xd,
	DBG_BLOCK_ID_UVDU_BY2                            = 0xe,
	DBG_BLOCK_ID_VCE_BY2                             = 0xf,
	DBG_BLOCK_ID_VGT0_BY2                            = 0x10,
	DBG_BLOCK_ID_IA_BY2                              = 0x11,
	DBG_BLOCK_ID_SCT0_BY2                            = 0x12,
	DBG_BLOCK_ID_SPM0_BY2                            = 0x13,
	DBG_BLOCK_ID_TCAA_BY2                            = 0x14,
	DBG_BLOCK_ID_TCCA_BY2                            = 0x15,
	DBG_BLOCK_ID_MCC0_BY2                            = 0x16,
	DBG_BLOCK_ID_MCC2_BY2                            = 0x17,
	DBG_BLOCK_ID_SX0_BY2                             = 0x18,
	DBG_BLOCK_ID_SX2_BY2                             = 0x19,
	DBG_BLOCK_ID_UNUSED4_BY2                         = 0x1a,
	DBG_BLOCK_ID_UNUSED6_BY2                         = 0x1b,
	DBG_BLOCK_ID_PC0_BY2                             = 0x1c,
	DBG_BLOCK_ID_UNUSED8_BY2                         = 0x1d,
	DBG_BLOCK_ID_UNUSED10_BY2                        = 0x1e,
	DBG_BLOCK_ID_MCB_BY2                             = 0x1f,
	DBG_BLOCK_ID_SCB0_BY2                            = 0x20,
	DBG_BLOCK_ID_UNUSED13_BY2                        = 0x21,
	DBG_BLOCK_ID_SCF0_BY2                            = 0x22,
	DBG_BLOCK_ID_UNUSED15_BY2                        = 0x23,
	DBG_BLOCK_ID_BCI0_BY2                            = 0x24,
	DBG_BLOCK_ID_BCI2_BY2                            = 0x25,
	DBG_BLOCK_ID_UNUSED17_BY2                        = 0x26,
	DBG_BLOCK_ID_UNUSED19_BY2                        = 0x27,
	DBG_BLOCK_ID_CB00_BY2                            = 0x28,
	DBG_BLOCK_ID_CB02_BY2                            = 0x29,
	DBG_BLOCK_ID_CB04_BY2                            = 0x2a,
	DBG_BLOCK_ID_UNUSED22_BY2                        = 0x2b,
	DBG_BLOCK_ID_CB10_BY2                            = 0x2c,
	DBG_BLOCK_ID_CB12_BY2                            = 0x2d,
	DBG_BLOCK_ID_CB14_BY2                            = 0x2e,
	DBG_BLOCK_ID_UNUSED25_BY2                        = 0x2f,
	DBG_BLOCK_ID_TCP0_BY2                            = 0x30,
	DBG_BLOCK_ID_TCP2_BY2                            = 0x31,
	DBG_BLOCK_ID_TCP4_BY2                            = 0x32,
	DBG_BLOCK_ID_TCP6_BY2                            = 0x33,
	DBG_BLOCK_ID_TCP8_BY2                            = 0x34,
	DBG_BLOCK_ID_TCP10_BY2                           = 0x35,
	DBG_BLOCK_ID_TCP12_BY2                           = 0x36,
	DBG_BLOCK_ID_TCP14_BY2                           = 0x37,
	DBG_BLOCK_ID_TCP16_BY2                           = 0x38,
	DBG_BLOCK_ID_TCP18_BY2                           = 0x39,
	DBG_BLOCK_ID_TCP20_BY2                           = 0x3a,
	DBG_BLOCK_ID_TCP22_BY2                           = 0x3b,
	DBG_BLOCK_ID_TCP_RESERVED0_BY2                   = 0x3c,
	DBG_BLOCK_ID_TCP_RESERVED2_BY2                   = 0x3d,
	DBG_BLOCK_ID_TCP_RESERVED4_BY2                   = 0x3e,
	DBG_BLOCK_ID_TCP_RESERVED6_BY2                   = 0x3f,
	DBG_BLOCK_ID_DB00_BY2                            = 0x40,
	DBG_BLOCK_ID_DB02_BY2                            = 0x41,
	DBG_BLOCK_ID_DB04_BY2                            = 0x42,
	DBG_BLOCK_ID_UNUSED28_BY2                        = 0x43,
	DBG_BLOCK_ID_DB10_BY2                            = 0x44,
	DBG_BLOCK_ID_DB12_BY2                            = 0x45,
	DBG_BLOCK_ID_DB14_BY2                            = 0x46,
	DBG_BLOCK_ID_UNUSED31_BY2                        = 0x47,
	DBG_BLOCK_ID_TCC0_BY2                            = 0x48,
	DBG_BLOCK_ID_TCC2_BY2                            = 0x49,
	DBG_BLOCK_ID_TCC4_BY2                            = 0x4a,
	DBG_BLOCK_ID_TCC6_BY2                            = 0x4b,
	DBG_BLOCK_ID_SPS00_BY2                           = 0x4c,
	DBG_BLOCK_ID_SPS02_BY2                           = 0x4d,
	DBG_BLOCK_ID_SPS11_BY2                           = 0x4e,
	DBG_BLOCK_ID_UNUSED33_BY2                        = 0x4f,
	DBG_BLOCK_ID_TA00_BY2                            = 0x50,
	DBG_BLOCK_ID_TA02_BY2                            = 0x51,
	DBG_BLOCK_ID_TA04_BY2                            = 0x52,
	DBG_BLOCK_ID_TA06_BY2                            = 0x53,
	DBG_BLOCK_ID_TA08_BY2                            = 0x54,
	DBG_BLOCK_ID_TA0A_BY2                            = 0x55,
	DBG_BLOCK_ID_UNUSED35_BY2                        = 0x56,
	DBG_BLOCK_ID_UNUSED37_BY2                        = 0x57,
	DBG_BLOCK_ID_TA10_BY2                            = 0x58,
	DBG_BLOCK_ID_TA12_BY2                            = 0x59,
	DBG_BLOCK_ID_TA14_BY2                            = 0x5a,
	DBG_BLOCK_ID_TA16_BY2                            = 0x5b,
	DBG_BLOCK_ID_TA18_BY2                            = 0x5c,
	DBG_BLOCK_ID_TA1A_BY2                            = 0x5d,
	DBG_BLOCK_ID_UNUSED39_BY2                        = 0x5e,
	DBG_BLOCK_ID_UNUSED41_BY2                        = 0x5f,
	DBG_BLOCK_ID_TD00_BY2                            = 0x60,
	DBG_BLOCK_ID_TD02_BY2                            = 0x61,
	DBG_BLOCK_ID_TD04_BY2                            = 0x62,
	DBG_BLOCK_ID_TD06_BY2                            = 0x63,
	DBG_BLOCK_ID_TD08_BY2                            = 0x64,
	DBG_BLOCK_ID_TD0A_BY2                            = 0x65,
	DBG_BLOCK_ID_UNUSED43_BY2                        = 0x66,
	DBG_BLOCK_ID_UNUSED45_BY2                        = 0x67,
	DBG_BLOCK_ID_TD10_BY2                            = 0x68,
	DBG_BLOCK_ID_TD12_BY2                            = 0x69,
	DBG_BLOCK_ID_TD14_BY2                            = 0x6a,
	DBG_BLOCK_ID_TD16_BY2                            = 0x6b,
	DBG_BLOCK_ID_TD18_BY2                            = 0x6c,
	DBG_BLOCK_ID_TD1A_BY2                            = 0x6d,
	DBG_BLOCK_ID_UNUSED47_BY2                        = 0x6e,
	DBG_BLOCK_ID_UNUSED49_BY2                        = 0x6f,
	DBG_BLOCK_ID_MCD0_BY2                            = 0x70,
	DBG_BLOCK_ID_MCD2_BY2                            = 0x71,
	DBG_BLOCK_ID_MCD4_BY2                            = 0x72,
	DBG_BLOCK_ID_UNUSED51_BY2                        = 0x73,
} DebugBlockId_BY2;
typedef enum DebugBlockId_BY4
{
	DBG_BLOCK_ID_RESERVED_BY4                        = 0x0,
	DBG_BLOCK_ID_CG_BY4                              = 0x1,
	DBG_BLOCK_ID_CSC_BY4                             = 0x2,
	DBG_BLOCK_ID_SQ_BY4                              = 0x3,
	DBG_BLOCK_ID_DMA0_BY4                            = 0x4,
	DBG_BLOCK_ID_SPIS_BY4                            = 0x5,
	DBG_BLOCK_ID_CP0_BY4                             = 0x6,
	DBG_BLOCK_ID_UVDU_BY4                            = 0x7,
	DBG_BLOCK_ID_VGT0_BY4                            = 0x8,
	DBG_BLOCK_ID_SCT0_BY4                            = 0x9,
	DBG_BLOCK_ID_TCAA_BY4                            = 0xa,
	DBG_BLOCK_ID_MCC0_BY4                            = 0xb,
	DBG_BLOCK_ID_SX0_BY4                             = 0xc,
	DBG_BLOCK_ID_UNUSED4_BY4                         = 0xd,
	DBG_BLOCK_ID_PC0_BY4                             = 0xe,
	DBG_BLOCK_ID_UNUSED10_BY4                        = 0xf,
	DBG_BLOCK_ID_SCB0_BY4                            = 0x10,
	DBG_BLOCK_ID_SCF0_BY4                            = 0x11,
	DBG_BLOCK_ID_BCI0_BY4                            = 0x12,
	DBG_BLOCK_ID_UNUSED17_BY4                        = 0x13,
	DBG_BLOCK_ID_CB00_BY4                            = 0x14,
	DBG_BLOCK_ID_CB04_BY4                            = 0x15,
	DBG_BLOCK_ID_CB10_BY4                            = 0x16,
	DBG_BLOCK_ID_CB14_BY4                            = 0x17,
	DBG_BLOCK_ID_TCP0_BY4                            = 0x18,
	DBG_BLOCK_ID_TCP4_BY4                            = 0x19,
	DBG_BLOCK_ID_TCP8_BY4                            = 0x1a,
	DBG_BLOCK_ID_TCP12_BY4                           = 0x1b,
	DBG_BLOCK_ID_TCP16_BY4                           = 0x1c,
	DBG_BLOCK_ID_TCP20_BY4                           = 0x1d,
	DBG_BLOCK_ID_TCP_RESERVED0_BY4                   = 0x1e,
	DBG_BLOCK_ID_TCP_RESERVED4_BY4                   = 0x1f,
	DBG_BLOCK_ID_DB_BY4                              = 0x20,
	DBG_BLOCK_ID_DB04_BY4                            = 0x21,
	DBG_BLOCK_ID_DB10_BY4                            = 0x22,
	DBG_BLOCK_ID_DB14_BY4                            = 0x23,
	DBG_BLOCK_ID_TCC0_BY4                            = 0x24,
	DBG_BLOCK_ID_TCC4_BY4                            = 0x25,
	DBG_BLOCK_ID_SPS00_BY4                           = 0x26,
	DBG_BLOCK_ID_SPS11_BY4                           = 0x27,
	DBG_BLOCK_ID_TA00_BY4                            = 0x28,
	DBG_BLOCK_ID_TA04_BY4                            = 0x29,
	DBG_BLOCK_ID_TA08_BY4                            = 0x2a,
	DBG_BLOCK_ID_UNUSED35_BY4                        = 0x2b,
	DBG_BLOCK_ID_TA10_BY4                            = 0x2c,
	DBG_BLOCK_ID_TA14_BY4                            = 0x2d,
	DBG_BLOCK_ID_TA18_BY4                            = 0x2e,
	DBG_BLOCK_ID_UNUSED39_BY4                        = 0x2f,
	DBG_BLOCK_ID_TD00_BY4                            = 0x30,
	DBG_BLOCK_ID_TD04_BY4                            = 0x31,
	DBG_BLOCK_ID_TD08_BY4                            = 0x32,
	DBG_BLOCK_ID_UNUSED43_BY4                        = 0x33,
	DBG_BLOCK_ID_TD10_BY4                            = 0x34,
	DBG_BLOCK_ID_TD14_BY4                            = 0x35,
	DBG_BLOCK_ID_TD18_BY4                            = 0x36,
	DBG_BLOCK_ID_UNUSED47_BY4                        = 0x37,
	DBG_BLOCK_ID_MCD0_BY4                            = 0x38,
	DBG_BLOCK_ID_MCD4_BY4                            = 0x39,
} DebugBlockId_BY4;
typedef enum DebugBlockId_BY8
{
	DBG_BLOCK_ID_RESERVED_BY8                        = 0x0,
	DBG_BLOCK_ID_CSC_BY8                             = 0x1,
	DBG_BLOCK_ID_DMA0_BY8                            = 0x2,
	DBG_BLOCK_ID_CP0_BY8                             = 0x3,
	DBG_BLOCK_ID_VGT0_BY8                            = 0x4,
	DBG_BLOCK_ID_TCAA_BY8                            = 0x5,
	DBG_BLOCK_ID_SX0_BY8                             = 0x6,
	DBG_BLOCK_ID_PC0_BY8                             = 0x7,
	DBG_BLOCK_ID_SCB0_BY8                            = 0x8,
	DBG_BLOCK_ID_BCI0_BY8                            = 0x9,
	DBG_BLOCK_ID_CB00_BY8                            = 0xa,
	DBG_BLOCK_ID_CB10_BY8                            = 0xb,
	DBG_BLOCK_ID_TCP0_BY8                            = 0xc,
	DBG_BLOCK_ID_TCP8_BY8                            = 0xd,
	DBG_BLOCK_ID_TCP16_BY8                           = 0xe,
	DBG_BLOCK_ID_TCP_RESERVED0_BY8                   = 0xf,
	DBG_BLOCK_ID_DB00_BY8                            = 0x10,
	DBG_BLOCK_ID_DB10_BY8                            = 0x11,
	DBG_BLOCK_ID_TCC0_BY8                            = 0x12,
	DBG_BLOCK_ID_SPS00_BY8                           = 0x13,
	DBG_BLOCK_ID_TA00_BY8                            = 0x14,
	DBG_BLOCK_ID_TA08_BY8                            = 0x15,
	DBG_BLOCK_ID_TA10_BY8                            = 0x16,
	DBG_BLOCK_ID_TA18_BY8                            = 0x17,
	DBG_BLOCK_ID_TD00_BY8                            = 0x18,
	DBG_BLOCK_ID_TD08_BY8                            = 0x19,
	DBG_BLOCK_ID_TD10_BY8                            = 0x1a,
	DBG_BLOCK_ID_TD18_BY8                            = 0x1b,
	DBG_BLOCK_ID_MCD0_BY8                            = 0x1c,
} DebugBlockId_BY8;
typedef enum DebugBlockId_BY16
{
	DBG_BLOCK_ID_RESERVED_BY16                       = 0x0,
	DBG_BLOCK_ID_DMA0_BY16                           = 0x1,
	DBG_BLOCK_ID_VGT0_BY16                           = 0x2,
	DBG_BLOCK_ID_SX0_BY16                            = 0x3,
	DBG_BLOCK_ID_SCB0_BY16                           = 0x4,
	DBG_BLOCK_ID_CB00_BY16                           = 0x5,
	DBG_BLOCK_ID_TCP0_BY16                           = 0x6,
	DBG_BLOCK_ID_TCP16_BY16                          = 0x7,
	DBG_BLOCK_ID_DB00_BY16                           = 0x8,
	DBG_BLOCK_ID_TCC0_BY16                           = 0x9,
	DBG_BLOCK_ID_TA00_BY16                           = 0xa,
	DBG_BLOCK_ID_TA10_BY16                           = 0xb,
	DBG_BLOCK_ID_TD00_BY16                           = 0xc,
	DBG_BLOCK_ID_TD10_BY16                           = 0xd,
	DBG_BLOCK_ID_MCD0_BY16                           = 0xe,
} DebugBlockId_BY16;
typedef enum ColorTransform
{
	DCC_CT_AUTO                                      = 0x0,
	DCC_CT_NONE                                      = 0x1,
	ABGR_TO_A_BG_G_RB                                = 0x2,
	BGRA_TO_BG_G_RB_A                                = 0x3,
} ColorTransform;
typedef enum CompareRef
{
	REF_NEVER                                        = 0x0,
	REF_LESS                                         = 0x1,
	REF_EQUAL                                        = 0x2,
	REF_LEQUAL                                       = 0x3,
	REF_GREATER                                      = 0x4,
	REF_NOTEQUAL                                     = 0x5,
	REF_GEQUAL                                       = 0x6,
	REF_ALWAYS                                       = 0x7,
} CompareRef;
typedef enum ReadSize
{
	READ_256_BITS                                    = 0x0,
	READ_512_BITS                                    = 0x1,
} ReadSize;
typedef enum DepthFormat
{
	DEPTH_INVALID                                    = 0x0,
	DEPTH_16                                         = 0x1,
	DEPTH_X8_24                                      = 0x2,
	DEPTH_8_24                                       = 0x3,
	DEPTH_X8_24_FLOAT                                = 0x4,
	DEPTH_8_24_FLOAT                                 = 0x5,
	DEPTH_32_FLOAT                                   = 0x6,
	DEPTH_X24_8_32_FLOAT                             = 0x7,
} DepthFormat;
typedef enum ZFormat
{
	Z_INVALID                                        = 0x0,
	Z_16                                             = 0x1,
	Z_24                                             = 0x2,
	Z_32_FLOAT                                       = 0x3,
} ZFormat;
typedef enum StencilFormat
{
	STENCIL_INVALID                                  = 0x0,
	STENCIL_8                                        = 0x1,
} StencilFormat;
typedef enum CmaskMode
{
	CMASK_CLEAR_NONE                                 = 0x0,
	CMASK_CLEAR_ONE                                  = 0x1,
	CMASK_CLEAR_ALL                                  = 0x2,
	CMASK_ANY_EXPANDED                               = 0x3,
	CMASK_ALPHA0_FRAG1                               = 0x4,
	CMASK_ALPHA0_FRAG2                               = 0x5,
	CMASK_ALPHA0_FRAG4                               = 0x6,
	CMASK_ALPHA0_FRAGS                               = 0x7,
	CMASK_ALPHA1_FRAG1                               = 0x8,
	CMASK_ALPHA1_FRAG2                               = 0x9,
	CMASK_ALPHA1_FRAG4                               = 0xa,
	CMASK_ALPHA1_FRAGS                               = 0xb,
	CMASK_ALPHAX_FRAG1                               = 0xc,
	CMASK_ALPHAX_FRAG2                               = 0xd,
	CMASK_ALPHAX_FRAG4                               = 0xe,
	CMASK_ALPHAX_FRAGS                               = 0xf,
} CmaskMode;
typedef enum QuadExportFormat
{
	EXPORT_UNUSED                                    = 0x0,
	EXPORT_32_R                                      = 0x1,
	EXPORT_32_GR                                     = 0x2,
	EXPORT_32_AR                                     = 0x3,
	EXPORT_FP16_ABGR                                 = 0x4,
	EXPORT_UNSIGNED16_ABGR                           = 0x5,
	EXPORT_SIGNED16_ABGR                             = 0x6,
	EXPORT_32_ABGR                                   = 0x7,
} QuadExportFormat;
typedef enum QuadExportFormatOld
{
	EXPORT_4P_32BPC_ABGR                             = 0x0,
	EXPORT_4P_16BPC_ABGR                             = 0x1,
	EXPORT_4P_32BPC_GR                               = 0x2,
	EXPORT_4P_32BPC_AR                               = 0x3,
	EXPORT_2P_32BPC_ABGR                             = 0x4,
	EXPORT_8P_32BPC_R                                = 0x5,
} QuadExportFormatOld;
typedef enum ColorFormat
{
	COLOR_INVALID                                    = 0x0,
	COLOR_8                                          = 0x1,
	COLOR_16                                         = 0x2,
	COLOR_8_8                                        = 0x3,
	COLOR_32                                         = 0x4,
	COLOR_16_16                                      = 0x5,
	COLOR_10_11_11                                   = 0x6,
	COLOR_11_11_10                                   = 0x7,
	COLOR_10_10_10_2                                 = 0x8,
	COLOR_2_10_10_10                                 = 0x9,
	COLOR_8_8_8_8                                    = 0xa,
	COLOR_32_32                                      = 0xb,
	COLOR_16_16_16_16                                = 0xc,
	COLOR_RESERVED_13                                = 0xd,
	COLOR_32_32_32_32                                = 0xe,
	COLOR_RESERVED_15                                = 0xf,
	COLOR_5_6_5                                      = 0x10,
	COLOR_1_5_5_5                                    = 0x11,
	COLOR_5_5_5_1                                    = 0x12,
	COLOR_4_4_4_4                                    = 0x13,
	COLOR_8_24                                       = 0x14,
	COLOR_24_8                                       = 0x15,
	COLOR_X24_8_32_FLOAT                             = 0x16,
	COLOR_RESERVED_23                                = 0x17,
} ColorFormat;
typedef enum SurfaceFormat
{
	FMT_INVALID                                      = 0x0,
	FMT_8                                            = 0x1,
	FMT_16                                           = 0x2,
	FMT_8_8                                          = 0x3,
	FMT_32                                           = 0x4,
	FMT_16_16                                        = 0x5,
	FMT_10_11_11                                     = 0x6,
	FMT_11_11_10                                     = 0x7,
	FMT_10_10_10_2                                   = 0x8,
	FMT_2_10_10_10                                   = 0x9,
	FMT_8_8_8_8                                      = 0xa,
	FMT_32_32                                        = 0xb,
	FMT_16_16_16_16                                  = 0xc,
	FMT_32_32_32                                     = 0xd,
	FMT_32_32_32_32                                  = 0xe,
	FMT_RESERVED_4                                   = 0xf,
	FMT_5_6_5                                        = 0x10,
	FMT_1_5_5_5                                      = 0x11,
	FMT_5_5_5_1                                      = 0x12,
	FMT_4_4_4_4                                      = 0x13,
	FMT_8_24                                         = 0x14,
	FMT_24_8                                         = 0x15,
	FMT_X24_8_32_FLOAT                               = 0x16,
	FMT_RESERVED_33                                  = 0x17,
	FMT_11_11_10_FLOAT                               = 0x18,
	FMT_16_FLOAT                                     = 0x19,
	FMT_32_FLOAT                                     = 0x1a,
	FMT_16_16_FLOAT                                  = 0x1b,
	FMT_8_24_FLOAT                                   = 0x1c,
	FMT_24_8_FLOAT                                   = 0x1d,
	FMT_32_32_FLOAT                                  = 0x1e,
	FMT_10_11_11_FLOAT                               = 0x1f,
	FMT_16_16_16_16_FLOAT                            = 0x20,
	FMT_3_3_2                                        = 0x21,
	FMT_6_5_5                                        = 0x22,
	FMT_32_32_32_32_FLOAT                            = 0x23,
	FMT_RESERVED_36                                  = 0x24,
	FMT_1                                            = 0x25,
	FMT_1_REVERSED                                   = 0x26,
	FMT_GB_GR                                        = 0x27,
	FMT_BG_RG                                        = 0x28,
	FMT_32_AS_8                                      = 0x29,
	FMT_32_AS_8_8                                    = 0x2a,
	FMT_5_9_9_9_SHAREDEXP                            = 0x2b,
	FMT_8_8_8                                        = 0x2c,
	FMT_16_16_16                                     = 0x2d,
	FMT_16_16_16_FLOAT                               = 0x2e,
	FMT_4_4                                          = 0x2f,
	FMT_32_32_32_FLOAT                               = 0x30,
	FMT_BC1                                          = 0x31,
	FMT_BC2                                          = 0x32,
	FMT_BC3                                          = 0x33,
	FMT_BC4                                          = 0x34,
	FMT_BC5                                          = 0x35,
	FMT_BC6                                          = 0x36,
	FMT_BC7                                          = 0x37,
	FMT_32_AS_32_32_32_32                            = 0x38,
	FMT_APC3                                         = 0x39,
	FMT_APC4                                         = 0x3a,
	FMT_APC5                                         = 0x3b,
	FMT_APC6                                         = 0x3c,
	FMT_APC7                                         = 0x3d,
	FMT_CTX1                                         = 0x3e,
	FMT_RESERVED_63                                  = 0x3f,
} SurfaceFormat;
typedef enum BUF_DATA_FORMAT
{
	BUF_DATA_FORMAT_INVALID                          = 0x0,
	BUF_DATA_FORMAT_8                                = 0x1,
	BUF_DATA_FORMAT_16                               = 0x2,
	BUF_DATA_FORMAT_8_8                              = 0x3,
	BUF_DATA_FORMAT_32                               = 0x4,
	BUF_DATA_FORMAT_16_16                            = 0x5,
	BUF_DATA_FORMAT_10_11_11                         = 0x6,
	BUF_DATA_FORMAT_11_11_10                         = 0x7,
	BUF_DATA_FORMAT_10_10_10_2                       = 0x8,
	BUF_DATA_FORMAT_2_10_10_10                       = 0x9,
	BUF_DATA_FORMAT_8_8_8_8                          = 0xa,
	BUF_DATA_FORMAT_32_32                            = 0xb,
	BUF_DATA_FORMAT_16_16_16_16                      = 0xc,
	BUF_DATA_FORMAT_32_32_32                         = 0xd,
	BUF_DATA_FORMAT_32_32_32_32                      = 0xe,
	BUF_DATA_FORMAT_RESERVED_15                      = 0xf,
} BUF_DATA_FORMAT;
typedef enum IMG_DATA_FORMAT
{
	IMG_DATA_FORMAT_INVALID                          = 0x0,
	IMG_DATA_FORMAT_8                                = 0x1,
	IMG_DATA_FORMAT_16                               = 0x2,
	IMG_DATA_FORMAT_8_8                              = 0x3,
	IMG_DATA_FORMAT_32                               = 0x4,
	IMG_DATA_FORMAT_16_16                            = 0x5,
	IMG_DATA_FORMAT_10_11_11                         = 0x6,
	IMG_DATA_FORMAT_11_11_10                         = 0x7,
	IMG_DATA_FORMAT_10_10_10_2                       = 0x8,
	IMG_DATA_FORMAT_2_10_10_10                       = 0x9,
	IMG_DATA_FORMAT_8_8_8_8                          = 0xa,
	IMG_DATA_FORMAT_32_32                            = 0xb,
	IMG_DATA_FORMAT_16_16_16_16                      = 0xc,
	IMG_DATA_FORMAT_32_32_32                         = 0xd,
	IMG_DATA_FORMAT_32_32_32_32                      = 0xe,
	IMG_DATA_FORMAT_RESERVED_15                      = 0xf,
	IMG_DATA_FORMAT_5_6_5                            = 0x10,
	IMG_DATA_FORMAT_1_5_5_5                          = 0x11,
	IMG_DATA_FORMAT_5_5_5_1                          = 0x12,
	IMG_DATA_FORMAT_4_4_4_4                          = 0x13,
	IMG_DATA_FORMAT_8_24                             = 0x14,
	IMG_DATA_FORMAT_24_8                             = 0x15,
	IMG_DATA_FORMAT_X24_8_32                         = 0x16,
	IMG_DATA_FORMAT_RESERVED_23                      = 0x17,
	IMG_DATA_FORMAT_RESERVED_24                      = 0x18,
	IMG_DATA_FORMAT_RESERVED_25                      = 0x19,
	IMG_DATA_FORMAT_RESERVED_26                      = 0x1a,
	IMG_DATA_FORMAT_RESERVED_27                      = 0x1b,
	IMG_DATA_FORMAT_RESERVED_28                      = 0x1c,
	IMG_DATA_FORMAT_RESERVED_29                      = 0x1d,
	IMG_DATA_FORMAT_RESERVED_30                      = 0x1e,
	IMG_DATA_FORMAT_RESERVED_31                      = 0x1f,
	IMG_DATA_FORMAT_GB_GR                            = 0x20,
	IMG_DATA_FORMAT_BG_RG                            = 0x21,
	IMG_DATA_FORMAT_5_9_9_9                          = 0x22,
	IMG_DATA_FORMAT_BC1                              = 0x23,
	IMG_DATA_FORMAT_BC2                              = 0x24,
	IMG_DATA_FORMAT_BC3                              = 0x25,
	IMG_DATA_FORMAT_BC4                              = 0x26,
	IMG_DATA_FORMAT_BC5                              = 0x27,
	IMG_DATA_FORMAT_BC6                              = 0x28,
	IMG_DATA_FORMAT_BC7                              = 0x29,
	IMG_DATA_FORMAT_RESERVED_42                      = 0x2a,
	IMG_DATA_FORMAT_RESERVED_43                      = 0x2b,
	IMG_DATA_FORMAT_FMASK8_S2_F1                     = 0x2c,
	IMG_DATA_FORMAT_FMASK8_S4_F1                     = 0x2d,
	IMG_DATA_FORMAT_FMASK8_S8_F1                     = 0x2e,
	IMG_DATA_FORMAT_FMASK8_S2_F2                     = 0x2f,
	IMG_DATA_FORMAT_FMASK8_S4_F2                     = 0x30,
	IMG_DATA_FORMAT_FMASK8_S4_F4                     = 0x31,
	IMG_DATA_FORMAT_FMASK16_S16_F1                   = 0x32,
	IMG_DATA_FORMAT_FMASK16_S8_F2                    = 0x33,
	IMG_DATA_FORMAT_FMASK32_S16_F2                   = 0x34,
	IMG_DATA_FORMAT_FMASK32_S8_F4                    = 0x35,
	IMG_DATA_FORMAT_FMASK32_S8_F8                    = 0x36,
	IMG_DATA_FORMAT_FMASK64_S16_F4                   = 0x37,
	IMG_DATA_FORMAT_FMASK64_S16_F8                   = 0x38,
	IMG_DATA_FORMAT_4_4                              = 0x39,
	IMG_DATA_FORMAT_6_5_5                            = 0x3a,
	IMG_DATA_FORMAT_1                                = 0x3b,
	IMG_DATA_FORMAT_1_REVERSED                       = 0x3c,
	IMG_DATA_FORMAT_32_AS_8                          = 0x3d,
	IMG_DATA_FORMAT_32_AS_8_8                        = 0x3e,
	IMG_DATA_FORMAT_32_AS_32_32_32_32                = 0x3f,
} IMG_DATA_FORMAT;
typedef enum BUF_NUM_FORMAT
{
	BUF_NUM_FORMAT_UNORM                             = 0x0,
	BUF_NUM_FORMAT_SNORM                             = 0x1,
	BUF_NUM_FORMAT_USCALED                           = 0x2,
	BUF_NUM_FORMAT_SSCALED                           = 0x3,
	BUF_NUM_FORMAT_UINT                              = 0x4,
	BUF_NUM_FORMAT_SINT                              = 0x5,
	BUF_NUM_FORMAT_RESERVED_6                        = 0x6,
	BUF_NUM_FORMAT_FLOAT                             = 0x7,
} BUF_NUM_FORMAT;
typedef enum IMG_NUM_FORMAT
{
	IMG_NUM_FORMAT_UNORM                             = 0x0,
	IMG_NUM_FORMAT_SNORM                             = 0x1,
	IMG_NUM_FORMAT_USCALED                           = 0x2,
	IMG_NUM_FORMAT_SSCALED                           = 0x3,
	IMG_NUM_FORMAT_UINT                              = 0x4,
	IMG_NUM_FORMAT_SINT                              = 0x5,
	IMG_NUM_FORMAT_RESERVED_6                        = 0x6,
	IMG_NUM_FORMAT_FLOAT                             = 0x7,
	IMG_NUM_FORMAT_RESERVED_8                        = 0x8,
	IMG_NUM_FORMAT_SRGB                              = 0x9,
	IMG_NUM_FORMAT_RESERVED_10                       = 0xa,
	IMG_NUM_FORMAT_RESERVED_11                       = 0xb,
	IMG_NUM_FORMAT_RESERVED_12                       = 0xc,
	IMG_NUM_FORMAT_RESERVED_13                       = 0xd,
	IMG_NUM_FORMAT_RESERVED_14                       = 0xe,
	IMG_NUM_FORMAT_RESERVED_15                       = 0xf,
} IMG_NUM_FORMAT;
typedef enum TileType
{
	ARRAY_COLOR_TILE                                 = 0x0,
	ARRAY_DEPTH_TILE                                 = 0x1,
} TileType;
typedef enum NonDispTilingOrder
{
	ADDR_SURF_MICRO_TILING_DISPLAY                   = 0x0,
	ADDR_SURF_MICRO_TILING_NON_DISPLAY               = 0x1,
} NonDispTilingOrder;
typedef enum MicroTileMode
{
	ADDR_SURF_DISPLAY_MICRO_TILING                   = 0x0,
	ADDR_SURF_THIN_MICRO_TILING                      = 0x1,
	ADDR_SURF_DEPTH_MICRO_TILING                     = 0x2,
	ADDR_SURF_ROTATED_MICRO_TILING                   = 0x3,
	ADDR_SURF_THICK_MICRO_TILING                     = 0x4,
} MicroTileMode;
typedef enum TileSplit
{
	ADDR_SURF_TILE_SPLIT_64B                         = 0x0,
	ADDR_SURF_TILE_SPLIT_128B                        = 0x1,
	ADDR_SURF_TILE_SPLIT_256B                        = 0x2,
	ADDR_SURF_TILE_SPLIT_512B                        = 0x3,
	ADDR_SURF_TILE_SPLIT_1KB                         = 0x4,
	ADDR_SURF_TILE_SPLIT_2KB                         = 0x5,
	ADDR_SURF_TILE_SPLIT_4KB                         = 0x6,
} TileSplit;
typedef enum SampleSplit
{
	ADDR_SURF_SAMPLE_SPLIT_1                         = 0x0,
	ADDR_SURF_SAMPLE_SPLIT_2                         = 0x1,
	ADDR_SURF_SAMPLE_SPLIT_4                         = 0x2,
	ADDR_SURF_SAMPLE_SPLIT_8                         = 0x3,
} SampleSplit;
typedef enum PipeConfig
{
	ADDR_SURF_P2                                     = 0x0,
	ADDR_SURF_P2_RESERVED0                           = 0x1,
	ADDR_SURF_P2_RESERVED1                           = 0x2,
	ADDR_SURF_P2_RESERVED2                           = 0x3,
	ADDR_SURF_P4_8x16                                = 0x4,
	ADDR_SURF_P4_16x16                               = 0x5,
	ADDR_SURF_P4_16x32                               = 0x6,
	ADDR_SURF_P4_32x32                               = 0x7,
	ADDR_SURF_P8_16x16_8x16                          = 0x8,
	ADDR_SURF_P8_16x32_8x16                          = 0x9,
	ADDR_SURF_P8_32x32_8x16                          = 0xa,
	ADDR_SURF_P8_16x32_16x16                         = 0xb,
	ADDR_SURF_P8_32x32_16x16                         = 0xc,
	ADDR_SURF_P8_32x32_16x32                         = 0xd,
	ADDR_SURF_P8_32x64_32x32                         = 0xe,
	ADDR_SURF_P8_RESERVED0                           = 0xf,
	ADDR_SURF_P16_32x32_8x16                         = 0x10,
	ADDR_SURF_P16_32x32_16x16                        = 0x11,
} PipeConfig;
typedef enum NumBanks
{
	ADDR_SURF_2_BANK                                 = 0x0,
	ADDR_SURF_4_BANK                                 = 0x1,
	ADDR_SURF_8_BANK                                 = 0x2,
	ADDR_SURF_16_BANK                                = 0x3,
} NumBanks;
typedef enum BankWidth
{
	ADDR_SURF_BANK_WIDTH_1                           = 0x0,
	ADDR_SURF_BANK_WIDTH_2                           = 0x1,
	ADDR_SURF_BANK_WIDTH_4                           = 0x2,
	ADDR_SURF_BANK_WIDTH_8                           = 0x3,
} BankWidth;
typedef enum BankHeight
{
	ADDR_SURF_BANK_HEIGHT_1                          = 0x0,
	ADDR_SURF_BANK_HEIGHT_2                          = 0x1,
	ADDR_SURF_BANK_HEIGHT_4                          = 0x2,
	ADDR_SURF_BANK_HEIGHT_8                          = 0x3,
} BankHeight;
typedef enum BankWidthHeight
{
	ADDR_SURF_BANK_WH_1                              = 0x0,
	ADDR_SURF_BANK_WH_2                              = 0x1,
	ADDR_SURF_BANK_WH_4                              = 0x2,
	ADDR_SURF_BANK_WH_8                              = 0x3,
} BankWidthHeight;
typedef enum MacroTileAspect
{
	ADDR_SURF_MACRO_ASPECT_1                         = 0x0,
	ADDR_SURF_MACRO_ASPECT_2                         = 0x1,
	ADDR_SURF_MACRO_ASPECT_4                         = 0x2,
	ADDR_SURF_MACRO_ASPECT_8                         = 0x3,
} MacroTileAspect;
typedef enum GATCL1RequestType
{
	GATCL1_TYPE_NORMAL                               = 0x0,
	GATCL1_TYPE_SHOOTDOWN                            = 0x1,
	GATCL1_TYPE_BYPASS                               = 0x2,
} GATCL1RequestType;
typedef enum TCC_CACHE_POLICIES
{
	TCC_CACHE_POLICY_LRU                             = 0x0,
	TCC_CACHE_POLICY_STREAM                          = 0x1,
} TCC_CACHE_POLICIES;
typedef enum MTYPE
{
	MTYPE_NC_NV                                      = 0x0,
	MTYPE_NC                                         = 0x1,
	MTYPE_CC                                         = 0x2,
	MTYPE_UC                                         = 0x3,
} MTYPE;
typedef enum PERFMON_COUNTER_MODE
{
	PERFMON_COUNTER_MODE_ACCUM                       = 0x0,
	PERFMON_COUNTER_MODE_ACTIVE_CYCLES               = 0x1,
	PERFMON_COUNTER_MODE_MAX                         = 0x2,
	PERFMON_COUNTER_MODE_DIRTY                       = 0x3,
	PERFMON_COUNTER_MODE_SAMPLE                      = 0x4,
	PERFMON_COUNTER_MODE_CYCLES_SINCE_FIRST_EVENT    = 0x5,
	PERFMON_COUNTER_MODE_CYCLES_SINCE_LAST_EVENT     = 0x6,
	PERFMON_COUNTER_MODE_CYCLES_GE_HI                = 0x7,
	PERFMON_COUNTER_MODE_CYCLES_EQ_HI                = 0x8,
	PERFMON_COUNTER_MODE_INACTIVE_CYCLES             = 0x9,
	PERFMON_COUNTER_MODE_RESERVED                    = 0xf,
} PERFMON_COUNTER_MODE;
typedef enum PERFMON_SPM_MODE
{
	PERFMON_SPM_MODE_OFF                             = 0x0,
	PERFMON_SPM_MODE_16BIT_CLAMP                     = 0x1,
	PERFMON_SPM_MODE_16BIT_NO_CLAMP                  = 0x2,
	PERFMON_SPM_MODE_32BIT_CLAMP                     = 0x3,
	PERFMON_SPM_MODE_32BIT_NO_CLAMP                  = 0x4,
	PERFMON_SPM_MODE_RESERVED_5                      = 0x5,
	PERFMON_SPM_MODE_RESERVED_6                      = 0x6,
	PERFMON_SPM_MODE_RESERVED_7                      = 0x7,
	PERFMON_SPM_MODE_TEST_MODE_0                     = 0x8,
	PERFMON_SPM_MODE_TEST_MODE_1                     = 0x9,
	PERFMON_SPM_MODE_TEST_MODE_2                     = 0xa,
} PERFMON_SPM_MODE;
typedef enum SurfaceTiling
{
	ARRAY_LINEAR                                     = 0x0,
	ARRAY_TILED                                      = 0x1,
} SurfaceTiling;
typedef enum SurfaceArray
{
	ARRAY_1D                                         = 0x0,
	ARRAY_2D                                         = 0x1,
	ARRAY_3D                                         = 0x2,
	ARRAY_3D_SLICE                                   = 0x3,
} SurfaceArray;
typedef enum ColorArray
{
	ARRAY_2D_ALT_COLOR                               = 0x0,
	ARRAY_2D_COLOR                                   = 0x1,
	ARRAY_3D_SLICE_COLOR                             = 0x3,
} ColorArray;
typedef enum DepthArray
{
	ARRAY_2D_ALT_DEPTH                               = 0x0,
	ARRAY_2D_DEPTH                                   = 0x1,
} DepthArray;
typedef enum ENUM_NUM_SIMD_PER_CU
{
	NUM_SIMD_PER_CU                                  = 0x4,
} ENUM_NUM_SIMD_PER_CU;
typedef enum MEM_PWR_FORCE_CTRL
{
	NO_FORCE_REQUEST                                 = 0x0,
	FORCE_LIGHT_SLEEP_REQUEST                        = 0x1,
	FORCE_DEEP_SLEEP_REQUEST                         = 0x2,
	FORCE_SHUT_DOWN_REQUEST                          = 0x3,
} MEM_PWR_FORCE_CTRL;
typedef enum MEM_PWR_FORCE_CTRL2
{
	NO_FORCE_REQ                                     = 0x0,
	FORCE_LIGHT_SLEEP_REQ                            = 0x1,
} MEM_PWR_FORCE_CTRL2;
typedef enum MEM_PWR_DIS_CTRL
{
	ENABLE_MEM_PWR_CTRL                              = 0x0,
	DISABLE_MEM_PWR_CTRL                             = 0x1,
} MEM_PWR_DIS_CTRL;
typedef enum MEM_PWR_SEL_CTRL
{
	DYNAMIC_SHUT_DOWN_ENABLE                         = 0x0,
	DYNAMIC_DEEP_SLEEP_ENABLE                        = 0x1,
	DYNAMIC_LIGHT_SLEEP_ENABLE                       = 0x2,
} MEM_PWR_SEL_CTRL;
typedef enum MEM_PWR_SEL_CTRL2
{
	DYNAMIC_DEEP_SLEEP_EN                            = 0x0,
	DYNAMIC_LIGHT_SLEEP_EN                           = 0x1,
} MEM_PWR_SEL_CTRL2;

#endif /* DCE_10_0_ENUM_H */
