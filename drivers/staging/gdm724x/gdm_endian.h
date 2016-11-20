/*
 * Copyright (c) 2012 GCT Semiconductor, Inc. All rights reserved.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef __GDM_ENDIAN_H__
#define __GDM_ENDIAN_H__

#include <linux/types.h>

enum
{
	ENDIANNESS_MIN = 0,
	ENDIANNESS_UNKNOWN,
	ENDIANNESS_LITTLE,
	ENDIANNESS_BIG,
	ENDIANNESS_MIDDLE,
	ENDIANNESS_MAX
};

struct gdm_endian
{
	u8 dev_ed;
};

void gdm_set_endian(struct gdm_endian *ed, u8 dev_endian);
u16 gdm_cpu_to_dev16(struct gdm_endian *ed, u16 x);
u16 gdm_dev16_to_cpu(struct gdm_endian *ed, u16 x);
u32 gdm_cpu_to_dev32(struct gdm_endian *ed, u32 x);
u32 gdm_dev32_to_cpu(struct gdm_endian *ed, u32 x);

#endif /*__GDM_ENDIAN_H__*/
