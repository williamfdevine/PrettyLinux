/*
 * Copyright © 2014 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * Generated by: intel-gpu-tools-1.8-220-g01153e7
 */

#include "intel_renderstate.h"

static const u32 gen9_null_state_relocs[] =
{
	0x000007a8,
	0x000007b4,
	0x000007bc,
	0x000007cc,
	-1,
};

static const u32 gen9_null_state_batch[] =
{
	0x7a000004,
	0x01000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x69040300,
	0x78140000,
	0x04000000,
	0x7820000a,
	0x00000000,
	0x00000000,
	0x80000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x78130002,
	0x00000000,
	0x00000000,
	0x02001808,
	0x781f0004,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x78510009,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x78100007,
	0x00000000,
	0x00000000,
	0x00010000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x781b0007,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000800,
	0x00000000,
	0x78110008,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x781e0003,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x781d0009,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x78120002,
	0x00000000,
	0x00000000,
	0x00000000,
	0x78500003,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x781c0002,
	0x00000000,
	0x00000000,
	0x00000000,
	0x780c0000,
	0x00000000,
	0x78520003,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x78300000,
	0x08010040,
	0x78310000,
	0x1e000000,
	0x78320000,
	0x1e000000,
	0x78330000,
	0x1e000000,
	0x79190002,
	0x00000000,
	0x00000000,
	0x00000000,
	0x791a0002,
	0x00000000,
	0x00000000,
	0x00000000,
	0x791b0002,
	0x00000000,
	0x00000000,
	0x00000000,
	0x79120000,
	0x00000000,
	0x79130000,
	0x00000000,
	0x79140000,
	0x00000000,
	0x79150000,
	0x00000000,
	0x79160000,
	0x00000000,
	0x78150009,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x78190009,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x781a0009,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x78160009,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x78170009,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x78490001,
	0x00000000,
	0x00000000,
	0x784a0000,
	0x00000000,
	0x784b0000,
	0x00000004,
	0x79170101,
	0x00000000,
	0x00000080,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x79180006,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x79180006,
	0x20000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x79180006,
	0x40000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x79180006,
	0x60000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x61010011,
	0x00000001,	 /* reloc */
	0x00000000,
	0x00000000,
	0x00000001,	 /* reloc */
	0x00000000,
	0x00000001,	 /* reloc */
	0x00000000,
	0x00000001,
	0x00000000,
	0x00000001,	 /* reloc */
	0x00000000,
	0x00001001,
	0x00001001,
	0x00000001,
	0x00001001,
	0x00000000,
	0x00000000,
	0x00000000,
	0x61020001,
	0x00000000,
	0x00000000,
	0x79000002,
	0x00000000,
	0x00000000,
	0x00000000,
	0x78050006,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x79040002,
	0x00000000,
	0x00000000,
	0x00000000,
	0x79040002,
	0x40000000,
	0x00000000,
	0x00000000,
	0x79040002,
	0x80000000,
	0x00000000,
	0x00000000,
	0x79040002,
	0xc0000000,
	0x00000000,
	0x00000000,
	0x79080001,
	0x00000000,
	0x00000000,
	0x790a0001,
	0x00000000,
	0x00000000,
	0x78060003,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x78070003,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x78040001,
	0x00000000,
	0x00000000,
	0x79110000,
	0x00000000,
	0x780d0000,
	0x00000000,
	0x79060000,
	0x00000000,
	0x7907001f,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x7902000f,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x790c000f,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x780a0003,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x78080083,
	0x00004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x04004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x08004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x0c004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x10004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x14004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x18004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x1c004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x20004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x24004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x28004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x2c004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x30004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x34004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x38004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x3c004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x40004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x44004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x48004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x4c004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x50004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x54004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x58004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x5c004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x60004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x64004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x68004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x6c004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x70004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x74004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x78004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x7c004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x80004000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x78090043,
	0x02000000,
	0x22220000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x78550003,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x680b0001,
	0x780e0000,
	0x00000e01,
	0x78240000,
	0x00000e41,
	0x784f0000,
	0x80000100,
	0x784d0000,
	0x40000000,
	0x782b0000,
	0x00000000,
	0x782c0000,
	0x00000000,
	0x782d0000,
	0x00000000,
	0x782e0000,
	0x00000000,
	0x782f0000,
	0x00000000,
	0x780f0000,
	0x00000000,
	0x78230000,
	0x00000ea0,
	0x78210000,
	0x00000ec0,
	0x78260000,
	0x00000000,
	0x78270000,
	0x00000000,
	0x78280000,
	0x00000000,
	0x78290000,
	0x00000000,
	0x782a0000,
	0x00000000,
	0x7b000005,
	0x00000004,
	0x00000001,
	0x00000000,
	0x00000001,
	0x00000000,
	0x00000000,
	0x05000000,	 /* cmds end */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,	 /* state start */
	0x00000000,
	0x3f800000,
	0x3f800000,
	0x3f800000,
	0x3f800000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,	 /* state end */
};

RO_RENDERSTATE(9);
