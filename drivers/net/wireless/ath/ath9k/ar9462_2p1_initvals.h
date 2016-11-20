/*
 * Copyright (c) 2010-2011 Atheros Communications Inc.
 * Copyright (c) 2011-2012 Qualcomm Atheros Inc.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef INITVALS_9462_2P1_H
#define INITVALS_9462_2P1_H

/* AR9462 2.1 */

#define ar9462_2p1_mac_postamble ar9462_2p0_mac_postamble

#define ar9462_2p1_baseband_core ar9462_2p0_baseband_core

#define ar9462_2p1_radio_core ar9462_2p0_radio_core

#define ar9462_2p1_radio_postamble ar9462_2p0_radio_postamble

#define ar9462_2p1_soc_postamble ar9462_2p0_soc_postamble

#define ar9462_2p1_radio_postamble_sys2ant ar9462_2p0_radio_postamble_sys2ant

#define ar9462_2p1_common_rx_gain ar9462_2p0_common_rx_gain

#define ar9462_2p1_common_mixed_rx_gain ar9462_2p0_common_mixed_rx_gain

#define ar9462_2p1_common_5g_xlna_only_rxgain ar9462_2p0_common_5g_xlna_only_rxgain

#define ar9462_2p1_baseband_core_mix_rxgain ar9462_2p0_baseband_core_mix_rxgain

#define ar9462_2p1_baseband_postamble_mix_rxgain ar9462_2p0_baseband_postamble_mix_rxgain

#define ar9462_2p1_baseband_postamble_5g_xlna ar9462_2p0_baseband_postamble_5g_xlna

#define ar9462_2p1_common_wo_xlna_rx_gain ar9462_2p0_common_wo_xlna_rx_gain

#define ar9462_2p1_modes_low_ob_db_tx_gain ar9462_2p0_modes_low_ob_db_tx_gain

#define ar9462_2p1_modes_high_ob_db_tx_gain ar9462_2p0_modes_high_ob_db_tx_gain

#define ar9462_2p1_modes_mix_ob_db_tx_gain ar9462_2p0_modes_mix_ob_db_tx_gain

#define ar9462_2p1_modes_fast_clock ar9462_2p0_modes_fast_clock

#define ar9462_2p1_baseband_core_txfir_coeff_japan_2484 ar9462_2p0_baseband_core_txfir_coeff_japan_2484

#define ar9462_2p1_pciephy_clkreq_disable_L1 ar9462_2p0_pciephy_clkreq_disable_L1

static const u32 ar9462_2p1_mac_core[][2] =
{
	/* Addr      allmodes  */
	{0x00000008, 0x00000000},
	{0x00000030, 0x000e0085},
	{0x00000034, 0x00000005},
	{0x00000040, 0x00000000},
	{0x00000044, 0x00000000},
	{0x00000048, 0x00000008},
	{0x0000004c, 0x00000010},
	{0x00000050, 0x00000000},
	{0x00001040, 0x002ffc0f},
	{0x00001044, 0x002ffc0f},
	{0x00001048, 0x002ffc0f},
	{0x0000104c, 0x002ffc0f},
	{0x00001050, 0x002ffc0f},
	{0x00001054, 0x002ffc0f},
	{0x00001058, 0x002ffc0f},
	{0x0000105c, 0x002ffc0f},
	{0x00001060, 0x002ffc0f},
	{0x00001064, 0x002ffc0f},
	{0x000010f0, 0x00000100},
	{0x00001270, 0x00000000},
	{0x000012b0, 0x00000000},
	{0x000012f0, 0x00000000},
	{0x0000143c, 0x00000000},
	{0x0000147c, 0x00000000},
	{0x00001810, 0x0f000003},
	{0x00008000, 0x00000000},
	{0x00008004, 0x00000000},
	{0x00008008, 0x00000000},
	{0x0000800c, 0x00000000},
	{0x00008018, 0x00000000},
	{0x00008020, 0x00000000},
	{0x00008038, 0x00000000},
	{0x0000803c, 0x00080000},
	{0x00008040, 0x00000000},
	{0x00008044, 0x00000000},
	{0x00008048, 0x00000000},
	{0x0000804c, 0xffffffff},
	{0x00008054, 0x00000000},
	{0x00008058, 0x00000000},
	{0x0000805c, 0x000fc78f},
	{0x00008060, 0x0000000f},
	{0x00008064, 0x00000000},
	{0x00008070, 0x00000310},
	{0x00008074, 0x00000020},
	{0x00008078, 0x00000000},
	{0x0000809c, 0x0000000f},
	{0x000080a0, 0x00000000},
	{0x000080a4, 0x02ff0000},
	{0x000080a8, 0x0e070605},
	{0x000080ac, 0x0000000d},
	{0x000080b0, 0x00000000},
	{0x000080b4, 0x00000000},
	{0x000080b8, 0x00000000},
	{0x000080bc, 0x00000000},
	{0x000080c0, 0x2a800000},
	{0x000080c4, 0x06900168},
	{0x000080c8, 0x13881c20},
	{0x000080cc, 0x01f40000},
	{0x000080d0, 0x00252500},
	{0x000080d4, 0x00b00005},
	{0x000080d8, 0x00400002},
	{0x000080dc, 0x00000000},
	{0x000080e0, 0xffffffff},
	{0x000080e4, 0x0000ffff},
	{0x000080e8, 0x3f3f3f3f},
	{0x000080ec, 0x00000000},
	{0x000080f0, 0x00000000},
	{0x000080f4, 0x00000000},
	{0x000080fc, 0x00020000},
	{0x00008100, 0x00000000},
	{0x00008108, 0x00000052},
	{0x0000810c, 0x00000000},
	{0x00008110, 0x00000000},
	{0x00008114, 0x000007ff},
	{0x00008118, 0x000000aa},
	{0x0000811c, 0x00003210},
	{0x00008124, 0x00000000},
	{0x00008128, 0x00000000},
	{0x0000812c, 0x00000000},
	{0x00008130, 0x00000000},
	{0x00008134, 0x00000000},
	{0x00008138, 0x00000000},
	{0x0000813c, 0x0000ffff},
	{0x00008144, 0xffffffff},
	{0x00008168, 0x00000000},
	{0x0000816c, 0x00000000},
	{0x00008170, 0x18486e00},
	{0x00008174, 0x33332210},
	{0x00008178, 0x00000000},
	{0x0000817c, 0x00020000},
	{0x000081c4, 0x33332210},
	{0x000081c8, 0x00000000},
	{0x000081cc, 0x00000000},
	{0x000081d4, 0x00000000},
	{0x000081ec, 0x00000000},
	{0x000081f0, 0x00000000},
	{0x000081f4, 0x00000000},
	{0x000081f8, 0x00000000},
	{0x000081fc, 0x00000000},
	{0x00008240, 0x00100000},
	{0x00008244, 0x0010f400},
	{0x00008248, 0x00000800},
	{0x0000824c, 0x0001e800},
	{0x00008250, 0x00000000},
	{0x00008254, 0x00000000},
	{0x00008258, 0x00000000},
	{0x0000825c, 0x40000000},
	{0x00008260, 0x00080922},
	{0x00008264, 0x99c00010},
	{0x00008268, 0xffffffff},
	{0x0000826c, 0x0000ffff},
	{0x00008270, 0x00000000},
	{0x00008274, 0x40000000},
	{0x00008278, 0x003e4180},
	{0x0000827c, 0x00000004},
	{0x00008284, 0x0000002c},
	{0x00008288, 0x0000002c},
	{0x0000828c, 0x000000ff},
	{0x00008294, 0x00000000},
	{0x00008298, 0x00000000},
	{0x0000829c, 0x00000000},
	{0x00008300, 0x00000140},
	{0x00008314, 0x00000000},
	{0x0000831c, 0x0000010d},
	{0x00008328, 0x00000000},
	{0x0000832c, 0x0000001f},
	{0x00008330, 0x00000302},
	{0x00008334, 0x00000700},
	{0x00008338, 0xffff0000},
	{0x0000833c, 0x02400000},
	{0x00008340, 0x000107ff},
	{0x00008344, 0xaa48107b},
	{0x00008348, 0x008f0000},
	{0x0000835c, 0x00000000},
	{0x00008360, 0xffffffff},
	{0x00008364, 0xffffffff},
	{0x00008368, 0x00000000},
	{0x00008370, 0x00000000},
	{0x00008374, 0x000000ff},
	{0x00008378, 0x00000000},
	{0x0000837c, 0x00000000},
	{0x00008380, 0xffffffff},
	{0x00008384, 0xffffffff},
	{0x00008390, 0xffffffff},
	{0x00008394, 0xffffffff},
	{0x00008398, 0x00000000},
	{0x0000839c, 0x00000000},
	{0x000083a4, 0x0000fa14},
	{0x000083a8, 0x000f0c00},
	{0x000083ac, 0x33332210},
	{0x000083b0, 0x33332210},
	{0x000083b4, 0x33332210},
	{0x000083b8, 0x33332210},
	{0x000083bc, 0x00000000},
	{0x000083c0, 0x00000000},
	{0x000083c4, 0x00000000},
	{0x000083c8, 0x00000000},
	{0x000083cc, 0x00000200},
	{0x000083d0, 0x000301ff},
};

static const u32 ar9462_2p1_baseband_postamble[][5] =
{
	/* Addr      5G_HT20     5G_HT40     2G_HT40     2G_HT20   */
	{0x00009810, 0xd00a8005, 0xd00a8005, 0xd00a8011, 0xd00a800d},
	{0x00009820, 0x206a022e, 0x206a022e, 0x206a012e, 0x206a01ae},
	{0x00009824, 0x63c640de, 0x5ac640d0, 0x5ac640d0, 0x63c640da},
	{0x00009828, 0x0796be89, 0x0696b081, 0x0696b881, 0x09143e81},
	{0x0000982c, 0x05eea6d4, 0x05eea6d4, 0x05eea6d4, 0x05eea6d4},
	{0x00009830, 0x0000059c, 0x0000059c, 0x0000119c, 0x0000119c},
	{0x00009c00, 0x000000c4, 0x000000c4, 0x000000c4, 0x000000c4},
	{0x00009e00, 0x0372111a, 0x0372111a, 0x037216a0, 0x037216a2},
	{0x00009e04, 0x001c2020, 0x001c2020, 0x001c2020, 0x001c2020},
	{0x00009e0c, 0x6c4000e2, 0x6d4000e2, 0x6d4000e2, 0x6c4000d8},
	{0x00009e10, 0x92c88d2e, 0x7ec88d2e, 0x7ec84d2e, 0x7ec86d2e},
	{0x00009e14, 0x37b95d5e, 0x37b9605e, 0x3236605e, 0x32365a5e},
	{0x00009e18, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x00009e1c, 0x0001cf9c, 0x0001cf9c, 0x00021f9c, 0x00021f9c},
	{0x00009e20, 0x000003a5, 0x000003a5, 0x000003a5, 0x000003a5},
	{0x00009e2c, 0x0000001c, 0x0000001c, 0x00000021, 0x00000021},
	{0x00009e3c, 0xcf946220, 0xcf946220, 0xcfd5c780, 0xcfd5c280},
	{0x00009e44, 0x62321e27, 0x62321e27, 0xfe291e27, 0xfe291e27},
	{0x00009e48, 0x5030201a, 0x5030201a, 0x50302012, 0x50302012},
	{0x00009fc8, 0x0003f000, 0x0003f000, 0x0001a000, 0x0001a000},
	{0x0000a204, 0x01318fc0, 0x01318fc4, 0x01318fc4, 0x01318fc0},
	{0x0000a208, 0x00000104, 0x00000104, 0x00000004, 0x00000004},
	{0x0000a22c, 0x01026a2f, 0x01026a27, 0x01026a2f, 0x01026a2f},
	{0x0000a230, 0x0000400a, 0x00004014, 0x00004016, 0x0000400b},
	{0x0000a234, 0x00000fff, 0x10000fff, 0x10000fff, 0x00000fff},
	{0x0000a238, 0xffb81018, 0xffb81018, 0xffb81018, 0xffb81018},
	{0x0000a250, 0x00000000, 0x00000000, 0x00000210, 0x00000108},
	{0x0000a254, 0x000007d0, 0x00000fa0, 0x00001130, 0x00000898},
	{0x0000a258, 0x02020002, 0x02020002, 0x02020002, 0x02020002},
	{0x0000a25c, 0x01000e0e, 0x01000e0e, 0x01000e0e, 0x01000e0e},
	{0x0000a260, 0x0a021501, 0x0a021501, 0x3a021501, 0x3a021501},
	{0x0000a264, 0x00000e0e, 0x00000e0e, 0x00000e0e, 0x00000e0e},
	{0x0000a280, 0x00000007, 0x00000007, 0x0000000b, 0x0000000b},
	{0x0000a284, 0x00000000, 0x00000000, 0x00000150, 0x00000150},
	{0x0000a288, 0x00000110, 0x00000110, 0x00000110, 0x00000110},
	{0x0000a28c, 0x00022222, 0x00022222, 0x00022222, 0x00022222},
	{0x0000a2c4, 0x00058d18, 0x00058d18, 0x00058d18, 0x00058d18},
	{0x0000a2d0, 0x00041981, 0x00041981, 0x00041981, 0x00041982},
	{0x0000a2d8, 0x7999a83b, 0x7999a83b, 0x7999a83b, 0x7999a83b},
	{0x0000a358, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x0000a3a4, 0x00000050, 0x00000050, 0x00000000, 0x00000000},
	{0x0000a3a8, 0xaaaaaaaa, 0xaaaaaaaa, 0xaaaaaaaa, 0xaaaaaaaa},
	{0x0000a3ac, 0xaaaaaa00, 0xaa30aa30, 0xaaaaaa00, 0xaaaaaa00},
	{0x0000a41c, 0x1ce739ce, 0x1ce739ce, 0x1ce739ce, 0x1ce739ce},
	{0x0000a420, 0x000001ce, 0x000001ce, 0x000001ce, 0x000001ce},
	{0x0000a424, 0x1ce739ce, 0x1ce739ce, 0x1ce739ce, 0x1ce739ce},
	{0x0000a428, 0x000001ce, 0x000001ce, 0x000001ce, 0x000001ce},
	{0x0000a42c, 0x1ce739ce, 0x1ce739ce, 0x1ce739ce, 0x1ce739ce},
	{0x0000a430, 0x1ce739ce, 0x1ce739ce, 0x1ce739ce, 0x1ce739ce},
	{0x0000a830, 0x0000019c, 0x0000019c, 0x0000019c, 0x0000019c},
	{0x0000ae04, 0x001c0000, 0x001c0000, 0x001c0000, 0x00100000},
	{0x0000ae18, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x0000ae1c, 0x0000019c, 0x0000019c, 0x0000019c, 0x0000019c},
	{0x0000ae20, 0x000001a6, 0x000001a6, 0x000001aa, 0x000001aa},
	{0x0000b284, 0x00000000, 0x00000000, 0x00000550, 0x00000550},
};

static const u32 ar9462_2p1_soc_preamble[][2] =
{
	/* Addr      allmodes  */
	{0x000040a4, 0x00a0c9c9},
	{0x00007020, 0x00000000},
	{0x00007034, 0x00000002},
	{0x00007038, 0x000004c2},
};

#endif /* INITVALS_9462_2P1_H */
