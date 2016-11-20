/* Subdriver for the GL860 chip with the MI2020 sensor
 * Author Olivier LORIN, from logs by Iceman/Soro2005 + Fret_saw/Hulkie/Tricid
 * with the help of Kytrix/BUGabundo/Blazercist.
 * Driver achieved thanks to a webcam gift by Kytrix.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* Sensor : MI2020 */

#include "gl860.h"

static u8 dat_wbal1[] = {0x8c, 0xa2, 0x0c};

static u8 dat_bright1[] = {0x8c, 0xa2, 0x06};
static u8 dat_bright3[] = {0x8c, 0xa1, 0x02};
static u8 dat_bright4[] = {0x90, 0x00, 0x0f};
static u8 dat_bright5[] = {0x8c, 0xa1, 0x03};
static u8 dat_bright6[] = {0x90, 0x00, 0x05};

static u8 dat_hvflip1[] = {0x8c, 0x27, 0x19};
static u8 dat_hvflip3[] = {0x8c, 0x27, 0x3b};
static u8 dat_hvflip5[] = {0x8c, 0xa1, 0x03};
static u8 dat_hvflip6[] = {0x90, 0x00, 0x06};

static struct idxdata tbl_middle_hvflip_low[] =
{
	{0x33, {0x90, 0x00, 0x06}},
	{6, {0xff, 0xff, 0xff}},
	{0x33, {0x90, 0x00, 0x06}},
	{6, {0xff, 0xff, 0xff}},
	{0x33, {0x90, 0x00, 0x06}},
	{6, {0xff, 0xff, 0xff}},
	{0x33, {0x90, 0x00, 0x06}},
	{6, {0xff, 0xff, 0xff}},
};

static struct idxdata tbl_middle_hvflip_big[] =
{
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x01}},
	{0x33, {0x8c, 0xa1, 0x20}}, {0x33, {0x90, 0x00, 0x00}},
	{0x33, {0x8c, 0xa7, 0x02}}, {0x33, {0x90, 0x00, 0x00}},
	{102, {0xff, 0xff, 0xff}},
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x02}},
	{0x33, {0x8c, 0xa1, 0x20}}, {0x33, {0x90, 0x00, 0x72}},
	{0x33, {0x8c, 0xa7, 0x02}}, {0x33, {0x90, 0x00, 0x01}},
};

static struct idxdata tbl_end_hvflip[] =
{
	{0x33, {0x8c, 0xa1, 0x02}}, {0x33, {0x90, 0x00, 0x1f}},
	{6, {0xff, 0xff, 0xff}},
	{0x33, {0x8c, 0xa1, 0x02}}, {0x33, {0x90, 0x00, 0x1f}},
	{6, {0xff, 0xff, 0xff}},
	{0x33, {0x8c, 0xa1, 0x02}}, {0x33, {0x90, 0x00, 0x1f}},
	{6, {0xff, 0xff, 0xff}},
	{0x33, {0x8c, 0xa1, 0x02}}, {0x33, {0x90, 0x00, 0x1f}},
};

static u8 dat_freq1[] = { 0x8c, 0xa4, 0x04 };

static u8 dat_multi5[] = { 0x8c, 0xa1, 0x03 };
static u8 dat_multi6[] = { 0x90, 0x00, 0x05 };

static struct validx tbl_init_at_startup[] =
{
	{0x0000, 0x0000}, {0x0010, 0x0010}, {0x0008, 0x00c0}, {0x0001, 0x00c1},
	{0x0001, 0x00c2}, {0x0020, 0x0006}, {0x006a, 0x000d},
	{53, 0xffff},
	{0x0040, 0x0000}, {0x0063, 0x0006},
};

static struct validx tbl_common_0B[] =
{
	{0x0002, 0x0004}, {0x006a, 0x0007}, {0x00ef, 0x0006}, {0x006a, 0x000d},
	{0x0000, 0x00c0}, {0x0010, 0x0010}, {0x0003, 0x00c1}, {0x0042, 0x00c2},
	{0x0004, 0x00d8}, {0x0000, 0x0058}, {0x0041, 0x0000},
};

static struct idxdata tbl_common_3B[] =
{
	{0x33, {0x86, 0x25, 0x01}}, {0x33, {0x86, 0x25, 0x00}},
	{2, {0xff, 0xff, 0xff}},
	{0x30, {0x1a, 0x0a, 0xcc}}, {0x32, {0x02, 0x00, 0x08}},
	{0x33, {0xf4, 0x03, 0x1d}},
	{6, {0xff, 0xff, 0xff}}, /* 12 */
	{0x34, {0x1e, 0x8f, 0x09}}, {0x34, {0x1c, 0x01, 0x28}},
	{0x34, {0x1e, 0x8f, 0x09}},
	{2, {0xff, 0xff, 0xff}}, /* - */
	{0x34, {0x1e, 0x8f, 0x09}}, {0x32, {0x14, 0x06, 0xe6}},
	{0x33, {0x8c, 0x22, 0x23}}, {0x33, {0x90, 0x00, 0x00}},
	{0x33, {0x8c, 0xa2, 0x0f}}, {0x33, {0x90, 0x00, 0x0d}},
	{0x33, {0x8c, 0xa2, 0x10}}, {0x33, {0x90, 0x00, 0x0b}},
	{0x33, {0x8c, 0xa2, 0x11}}, {0x33, {0x90, 0x00, 0x07}},
	{0x33, {0xf4, 0x03, 0x1d}}, {0x35, {0xa2, 0x00, 0xe2}},
	{0x33, {0x8c, 0xab, 0x05}}, {0x33, {0x90, 0x00, 0x01}},
	{0x32, {0x6e, 0x00, 0x86}}, {0x32, {0x70, 0x0f, 0xaa}},
	{0x32, {0x72, 0x0f, 0xe4}}, {0x33, {0x8c, 0xa3, 0x4a}},
	{0x33, {0x90, 0x00, 0x5a}}, {0x33, {0x8c, 0xa3, 0x4b}},
	{0x33, {0x90, 0x00, 0xa6}}, {0x33, {0x8c, 0xa3, 0x61}},
	{0x33, {0x90, 0x00, 0xc8}}, {0x33, {0x8c, 0xa3, 0x62}},
	{0x33, {0x90, 0x00, 0xe1}}, {0x34, {0xce, 0x01, 0xa8}},
	{0x34, {0xd0, 0x66, 0x33}}, {0x34, {0xd2, 0x31, 0x9a}},
	{0x34, {0xd4, 0x94, 0x63}}, {0x34, {0xd6, 0x4b, 0x25}},
	{0x34, {0xd8, 0x26, 0x70}}, {0x34, {0xda, 0x72, 0x4c}},
	{0x34, {0xdc, 0xff, 0x04}}, {0x34, {0xde, 0x01, 0x5b}},
	{0x34, {0xe6, 0x01, 0x13}}, {0x34, {0xee, 0x0b, 0xf0}},
	{0x34, {0xf6, 0x0b, 0xa4}}, {0x35, {0x00, 0xf6, 0xe7}},
	{0x35, {0x08, 0x0d, 0xfd}}, {0x35, {0x10, 0x25, 0x63}},
	{0x35, {0x18, 0x35, 0x6c}}, {0x35, {0x20, 0x42, 0x7e}},
	{0x35, {0x28, 0x19, 0x44}}, {0x35, {0x30, 0x39, 0xd4}},
	{0x35, {0x38, 0xf5, 0xa8}}, {0x35, {0x4c, 0x07, 0x90}},
	{0x35, {0x44, 0x07, 0xb8}}, {0x35, {0x5c, 0x06, 0x88}},
	{0x35, {0x54, 0x07, 0xff}}, {0x34, {0xe0, 0x01, 0x52}},
	{0x34, {0xe8, 0x00, 0xcc}}, {0x34, {0xf0, 0x0d, 0x83}},
	{0x34, {0xf8, 0x0c, 0xb3}}, {0x35, {0x02, 0xfe, 0xba}},
	{0x35, {0x0a, 0x04, 0xe0}}, {0x35, {0x12, 0x1c, 0x63}},
	{0x35, {0x1a, 0x2b, 0x5a}}, {0x35, {0x22, 0x32, 0x5e}},
	{0x35, {0x2a, 0x0d, 0x28}}, {0x35, {0x32, 0x2c, 0x02}},
	{0x35, {0x3a, 0xf4, 0xfa}}, {0x35, {0x4e, 0x07, 0xef}},
	{0x35, {0x46, 0x07, 0x88}}, {0x35, {0x5e, 0x07, 0xc1}},
	{0x35, {0x56, 0x04, 0x64}}, {0x34, {0xe4, 0x01, 0x15}},
	{0x34, {0xec, 0x00, 0x82}}, {0x34, {0xf4, 0x0c, 0xce}},
	{0x34, {0xfc, 0x0c, 0xba}}, {0x35, {0x06, 0x1f, 0x02}},
	{0x35, {0x0e, 0x02, 0xe3}}, {0x35, {0x16, 0x1a, 0x50}},
	{0x35, {0x1e, 0x24, 0x39}}, {0x35, {0x26, 0x23, 0x4c}},
	{0x35, {0x2e, 0xf9, 0x1b}}, {0x35, {0x36, 0x23, 0x19}},
	{0x35, {0x3e, 0x12, 0x08}}, {0x35, {0x52, 0x07, 0x22}},
	{0x35, {0x4a, 0x03, 0xd3}}, {0x35, {0x62, 0x06, 0x54}},
	{0x35, {0x5a, 0x04, 0x5d}}, {0x34, {0xe2, 0x01, 0x04}},
	{0x34, {0xea, 0x00, 0xa0}}, {0x34, {0xf2, 0x0c, 0xbc}},
	{0x34, {0xfa, 0x0c, 0x5b}}, {0x35, {0x04, 0x17, 0xf2}},
	{0x35, {0x0c, 0x02, 0x08}}, {0x35, {0x14, 0x28, 0x43}},
	{0x35, {0x1c, 0x28, 0x62}}, {0x35, {0x24, 0x2b, 0x60}},
	{0x35, {0x2c, 0x07, 0x33}}, {0x35, {0x34, 0x1f, 0xb0}},
	{0x35, {0x3c, 0xed, 0xcd}}, {0x35, {0x50, 0x00, 0x06}},
	{0x35, {0x48, 0x07, 0xff}}, {0x35, {0x60, 0x05, 0x89}},
	{0x35, {0x58, 0x07, 0xff}}, {0x35, {0x40, 0x00, 0xa0}},
	{0x35, {0x42, 0x00, 0x00}}, {0x32, {0x10, 0x01, 0xfc}},
	{0x33, {0x8c, 0xa1, 0x18}}, {0x33, {0x90, 0x00, 0x3c}},
	{0x33, {0x78, 0x00, 0x00}},
	{2, {0xff, 0xff, 0xff}},
	{0x35, {0xb8, 0x1f, 0x20}}, {0x33, {0x8c, 0xa2, 0x06}},
	{0x33, {0x90, 0x00, 0x10}}, {0x33, {0x8c, 0xa2, 0x07}},
	{0x33, {0x90, 0x00, 0x08}}, {0x33, {0x8c, 0xa2, 0x42}},
	{0x33, {0x90, 0x00, 0x0b}}, {0x33, {0x8c, 0xa2, 0x4a}},
	{0x33, {0x90, 0x00, 0x8c}}, {0x35, {0xba, 0xfa, 0x08}},
	{0x33, {0x8c, 0xa2, 0x02}}, {0x33, {0x90, 0x00, 0x22}},
	{0x33, {0x8c, 0xa2, 0x03}}, {0x33, {0x90, 0x00, 0xbb}},
	{0x33, {0x8c, 0xa4, 0x04}}, {0x33, {0x90, 0x00, 0x80}},
	{0x33, {0x8c, 0xa7, 0x9d}}, {0x33, {0x90, 0x00, 0x00}},
	{0x33, {0x8c, 0xa7, 0x9e}}, {0x33, {0x90, 0x00, 0x00}},
	{0x33, {0x8c, 0xa2, 0x0c}}, {0x33, {0x90, 0x00, 0x17}},
	{0x33, {0x8c, 0xa2, 0x15}}, {0x33, {0x90, 0x00, 0x04}},
	{0x33, {0x8c, 0xa2, 0x14}}, {0x33, {0x90, 0x00, 0x20}},
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x00}},
	{0x33, {0x8c, 0x27, 0x17}}, {0x33, {0x90, 0x21, 0x11}},
	{0x33, {0x8c, 0x27, 0x1b}}, {0x33, {0x90, 0x02, 0x4f}},
	{0x33, {0x8c, 0x27, 0x25}}, {0x33, {0x90, 0x06, 0x0f}},
	{0x33, {0x8c, 0x27, 0x39}}, {0x33, {0x90, 0x21, 0x11}},
	{0x33, {0x8c, 0x27, 0x3d}}, {0x33, {0x90, 0x01, 0x20}},
	{0x33, {0x8c, 0x27, 0x47}}, {0x33, {0x90, 0x09, 0x4c}},
	{0x33, {0x8c, 0x27, 0x03}}, {0x33, {0x90, 0x02, 0x84}},
	{0x33, {0x8c, 0x27, 0x05}}, {0x33, {0x90, 0x01, 0xe2}},
	{0x33, {0x8c, 0x27, 0x07}}, {0x33, {0x90, 0x06, 0x40}},
	{0x33, {0x8c, 0x27, 0x09}}, {0x33, {0x90, 0x04, 0xb0}},
	{0x33, {0x8c, 0x27, 0x0d}}, {0x33, {0x90, 0x00, 0x00}},
	{0x33, {0x8c, 0x27, 0x0f}}, {0x33, {0x90, 0x00, 0x00}},
	{0x33, {0x8c, 0x27, 0x11}}, {0x33, {0x90, 0x04, 0xbd}},
	{0x33, {0x8c, 0x27, 0x13}}, {0x33, {0x90, 0x06, 0x4d}},
	{0x33, {0x8c, 0x27, 0x15}}, {0x33, {0x90, 0x00, 0x00}},
	{0x33, {0x8c, 0x27, 0x17}}, {0x33, {0x90, 0x21, 0x11}},
	{0x33, {0x8c, 0x27, 0x19}}, {0x33, {0x90, 0x04, 0x6c}},
	{0x33, {0x8c, 0x27, 0x1b}}, {0x33, {0x90, 0x02, 0x4f}},
	{0x33, {0x8c, 0x27, 0x1d}}, {0x33, {0x90, 0x01, 0x02}},
	{0x33, {0x8c, 0x27, 0x1f}}, {0x33, {0x90, 0x02, 0x79}},
	{0x33, {0x8c, 0x27, 0x21}}, {0x33, {0x90, 0x01, 0x55}},
	{0x33, {0x8c, 0x27, 0x23}}, {0x33, {0x90, 0x02, 0x85}},
	{0x33, {0x8c, 0x27, 0x25}}, {0x33, {0x90, 0x06, 0x0f}},
	{0x33, {0x8c, 0x27, 0x27}}, {0x33, {0x90, 0x20, 0x20}},
	{0x33, {0x8c, 0x27, 0x29}}, {0x33, {0x90, 0x20, 0x20}},
	{0x33, {0x8c, 0x27, 0x2b}}, {0x33, {0x90, 0x10, 0x20}},
	{0x33, {0x8c, 0x27, 0x2d}}, {0x33, {0x90, 0x20, 0x07}},
	{0x33, {0x8c, 0x27, 0x2f}}, {0x33, {0x90, 0x00, 0x04}},
	{0x33, {0x8c, 0x27, 0x31}}, {0x33, {0x90, 0x00, 0x04}},
	{0x33, {0x8c, 0x27, 0x33}}, {0x33, {0x90, 0x04, 0xbb}},
	{0x33, {0x8c, 0x27, 0x35}}, {0x33, {0x90, 0x06, 0x4b}},
	{0x33, {0x8c, 0x27, 0x37}}, {0x33, {0x90, 0x00, 0x00}},
	{0x33, {0x8c, 0x27, 0x39}}, {0x33, {0x90, 0x21, 0x11}},
	{0x33, {0x8c, 0x27, 0x3b}}, {0x33, {0x90, 0x00, 0x24}},
	{0x33, {0x8c, 0x27, 0x3d}}, {0x33, {0x90, 0x01, 0x20}},
	{0x33, {0x8c, 0x27, 0x41}}, {0x33, {0x90, 0x01, 0x69}},
	{0x33, {0x8c, 0x27, 0x45}}, {0x33, {0x90, 0x04, 0xed}},
	{0x33, {0x8c, 0x27, 0x47}}, {0x33, {0x90, 0x09, 0x4c}},
	{0x33, {0x8c, 0x27, 0x51}}, {0x33, {0x90, 0x00, 0x00}},
	{0x33, {0x8c, 0x27, 0x53}}, {0x33, {0x90, 0x03, 0x20}},
	{0x33, {0x8c, 0x27, 0x55}}, {0x33, {0x90, 0x00, 0x00}},
	{0x33, {0x8c, 0x27, 0x57}}, {0x33, {0x90, 0x02, 0x58}},
	{0x33, {0x8c, 0x27, 0x5f}}, {0x33, {0x90, 0x00, 0x00}},
	{0x33, {0x8c, 0x27, 0x61}}, {0x33, {0x90, 0x06, 0x40}},
	{0x33, {0x8c, 0x27, 0x63}}, {0x33, {0x90, 0x00, 0x00}},
	{0x33, {0x8c, 0x27, 0x65}}, {0x33, {0x90, 0x04, 0xb0}},
	{0x33, {0x8c, 0x22, 0x2e}}, {0x33, {0x90, 0x00, 0xa1}},
	{0x33, {0x8c, 0xa4, 0x08}}, {0x33, {0x90, 0x00, 0x1f}},
	{0x33, {0x8c, 0xa4, 0x09}}, {0x33, {0x90, 0x00, 0x21}},
	{0x33, {0x8c, 0xa4, 0x0a}}, {0x33, {0x90, 0x00, 0x25}},
	{0x33, {0x8c, 0xa4, 0x0b}}, {0x33, {0x90, 0x00, 0x27}},
	{0x33, {0x8c, 0x24, 0x11}}, {0x33, {0x90, 0x00, 0xa1}},
	{0x33, {0x8c, 0x24, 0x13}}, {0x33, {0x90, 0x00, 0xc1}},
	{0x33, {0x8c, 0x24, 0x15}}, {0x33, {0x90, 0x00, 0x6a}},
	{0x33, {0x8c, 0x24, 0x17}}, {0x33, {0x90, 0x00, 0x80}},
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x05}},
	{2, {0xff, 0xff, 0xff}},
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x06}},
	{3, {0xff, 0xff, 0xff}},
};

static struct idxdata tbl_init_post_alt_low1[] =
{
	{0x33, {0x8c, 0x27, 0x15}}, {0x33, {0x90, 0x00, 0x25}},
	{0x33, {0x8c, 0x22, 0x2e}}, {0x33, {0x90, 0x00, 0x81}},
	{0x33, {0x8c, 0xa4, 0x08}}, {0x33, {0x90, 0x00, 0x17}},
	{0x33, {0x8c, 0xa4, 0x09}}, {0x33, {0x90, 0x00, 0x1a}},
	{0x33, {0x8c, 0xa4, 0x0a}}, {0x33, {0x90, 0x00, 0x1d}},
	{0x33, {0x8c, 0xa4, 0x0b}}, {0x33, {0x90, 0x00, 0x20}},
	{0x33, {0x8c, 0x24, 0x11}}, {0x33, {0x90, 0x00, 0x81}},
	{0x33, {0x8c, 0x24, 0x13}}, {0x33, {0x90, 0x00, 0x9b}},
};

static struct idxdata tbl_init_post_alt_low2[] =
{
	{0x33, {0x8c, 0x27, 0x03}}, {0x33, {0x90, 0x03, 0x24}},
	{0x33, {0x8c, 0x27, 0x05}}, {0x33, {0x90, 0x02, 0x58}},
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x05}},
	{2, {0xff, 0xff, 0xff}},
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x06}},
	{2, {0xff, 0xff, 0xff}},
};

static struct idxdata tbl_init_post_alt_low3[] =
{
	{0x34, {0x1e, 0x8f, 0x09}}, {0x34, {0x1c, 0x01, 0x28}},
	{0x34, {0x1e, 0x8f, 0x09}},
	{2, {0xff, 0xff, 0xff}},
	{0x34, {0x1e, 0x8f, 0x09}}, {0x32, {0x14, 0x06, 0xe6}},
	{0x33, {0x8c, 0xa1, 0x20}}, {0x33, {0x90, 0x00, 0x00}},
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x01}},
	{0x33, {0x2e, 0x01, 0x00}}, {0x34, {0x04, 0x00, 0x2a}},
	{0x33, {0x8c, 0xa7, 0x02}}, {0x33, {0x90, 0x00, 0x00}},
	{0x33, {0x8c, 0x27, 0x95}}, {0x33, {0x90, 0x01, 0x00}},
	{2, {0xff, 0xff, 0xff}},
	{0x33, {0x8c, 0xa1, 0x20}}, {0x33, {0x90, 0x00, 0x72}},
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x02}},
	{0x33, {0x8c, 0xa7, 0x02}}, {0x33, {0x90, 0x00, 0x01}},
	{2, {0xff, 0xff, 0xff}},
	{0x33, {0x8c, 0xa1, 0x20}}, {0x33, {0x90, 0x00, 0x00}},
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x01}},
	{0x33, {0x8c, 0xa7, 0x02}}, {0x33, {0x90, 0x00, 0x00}},
	{2, {0xff, 0xff, 0xff}},
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x05}},
	{2, {0xff, 0xff, 0xff}},
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x06}},
	{2, {0xff, 0xff, 0xff}},
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x05}},
	{2, {0xff, 0xff, 0xff}},
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x06}},
};

static struct idxdata tbl_init_post_alt_big[] =
{
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x05}},
	{2, {0xff, 0xff, 0xff}},
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x06}},
	{2, {0xff, 0xff, 0xff}},
	{0x34, {0x1e, 0x8f, 0x09}}, {0x34, {0x1c, 0x01, 0x28}},
	{0x34, {0x1e, 0x8f, 0x09}},
	{2, {0xff, 0xff, 0xff}},
	{0x34, {0x1e, 0x8f, 0x09}}, {0x32, {0x14, 0x06, 0xe6}},
	{0x33, {0x8c, 0xa1, 0x03}},
	{0x33, {0x90, 0x00, 0x05}},
	{2, {0xff, 0xff, 0xff}},
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x06}},
	{2, {0xff, 0xff, 0xff}},
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x05}},
	{2, {0xff, 0xff, 0xff}},
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x06}},
	{0x33, {0x8c, 0xa1, 0x20}}, {0x33, {0x90, 0x00, 0x72}},
	{0x33, {0x8c, 0xa1, 0x30}}, {0x33, {0x90, 0x00, 0x03}},
	{0x33, {0x8c, 0xa1, 0x31}}, {0x33, {0x90, 0x00, 0x02}},
	{0x33, {0x8c, 0xa1, 0x32}}, {0x33, {0x90, 0x00, 0x03}},
	{0x33, {0x8c, 0xa1, 0x34}}, {0x33, {0x90, 0x00, 0x03}},
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x02}},
	{0x33, {0x2e, 0x01, 0x00}}, {0x34, {0x04, 0x00, 0x2a}},
	{0x33, {0x8c, 0xa7, 0x02}}, {0x33, {0x90, 0x00, 0x01}},
	{0x33, {0x8c, 0x27, 0x97}}, {0x33, {0x90, 0x01, 0x00}},
	{51, {0xff, 0xff, 0xff}},
	{0x33, {0x8c, 0xa1, 0x20}}, {0x33, {0x90, 0x00, 0x00}},
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x01}},
	{0x33, {0x8c, 0xa7, 0x02}}, {0x33, {0x90, 0x00, 0x00}},
	{51, {0xff, 0xff, 0xff}},
	{0x33, {0x8c, 0xa1, 0x20}}, {0x33, {0x90, 0x00, 0x72}},
	{0x33, {0x8c, 0xa1, 0x03}}, {0x33, {0x90, 0x00, 0x02}},
	{0x33, {0x8c, 0xa7, 0x02}}, {0x33, {0x90, 0x00, 0x01}},
	{51, {0xff, 0xff, 0xff}},
};

static struct idxdata tbl_init_post_alt_3B[] =
{
	{0x32, {0x10, 0x01, 0xf8}}, {0x34, {0xce, 0x01, 0xa8}},
	{0x34, {0xd0, 0x66, 0x33}}, {0x34, {0xd2, 0x31, 0x9a}},
	{0x34, {0xd4, 0x94, 0x63}}, {0x34, {0xd6, 0x4b, 0x25}},
	{0x34, {0xd8, 0x26, 0x70}}, {0x34, {0xda, 0x72, 0x4c}},
	{0x34, {0xdc, 0xff, 0x04}}, {0x34, {0xde, 0x01, 0x5b}},
	{0x34, {0xe6, 0x01, 0x13}}, {0x34, {0xee, 0x0b, 0xf0}},
	{0x34, {0xf6, 0x0b, 0xa4}}, {0x35, {0x00, 0xf6, 0xe7}},
	{0x35, {0x08, 0x0d, 0xfd}}, {0x35, {0x10, 0x25, 0x63}},
	{0x35, {0x18, 0x35, 0x6c}}, {0x35, {0x20, 0x42, 0x7e}},
	{0x35, {0x28, 0x19, 0x44}}, {0x35, {0x30, 0x39, 0xd4}},
	{0x35, {0x38, 0xf5, 0xa8}}, {0x35, {0x4c, 0x07, 0x90}},
	{0x35, {0x44, 0x07, 0xb8}}, {0x35, {0x5c, 0x06, 0x88}},
	{0x35, {0x54, 0x07, 0xff}}, {0x34, {0xe0, 0x01, 0x52}},
	{0x34, {0xe8, 0x00, 0xcc}}, {0x34, {0xf0, 0x0d, 0x83}},
	{0x34, {0xf8, 0x0c, 0xb3}}, {0x35, {0x02, 0xfe, 0xba}},
	{0x35, {0x0a, 0x04, 0xe0}}, {0x35, {0x12, 0x1c, 0x63}},
	{0x35, {0x1a, 0x2b, 0x5a}}, {0x35, {0x22, 0x32, 0x5e}},
	{0x35, {0x2a, 0x0d, 0x28}}, {0x35, {0x32, 0x2c, 0x02}},
	{0x35, {0x3a, 0xf4, 0xfa}}, {0x35, {0x4e, 0x07, 0xef}},
	{0x35, {0x46, 0x07, 0x88}}, {0x35, {0x5e, 0x07, 0xc1}},
	{0x35, {0x56, 0x04, 0x64}}, {0x34, {0xe4, 0x01, 0x15}},
	{0x34, {0xec, 0x00, 0x82}}, {0x34, {0xf4, 0x0c, 0xce}},
	{0x34, {0xfc, 0x0c, 0xba}}, {0x35, {0x06, 0x1f, 0x02}},
	{0x35, {0x0e, 0x02, 0xe3}}, {0x35, {0x16, 0x1a, 0x50}},
	{0x35, {0x1e, 0x24, 0x39}}, {0x35, {0x26, 0x23, 0x4c}},
	{0x35, {0x2e, 0xf9, 0x1b}}, {0x35, {0x36, 0x23, 0x19}},
	{0x35, {0x3e, 0x12, 0x08}}, {0x35, {0x52, 0x07, 0x22}},
	{0x35, {0x4a, 0x03, 0xd3}}, {0x35, {0x62, 0x06, 0x54}},
	{0x35, {0x5a, 0x04, 0x5d}}, {0x34, {0xe2, 0x01, 0x04}},
	{0x34, {0xea, 0x00, 0xa0}}, {0x34, {0xf2, 0x0c, 0xbc}},
	{0x34, {0xfa, 0x0c, 0x5b}}, {0x35, {0x04, 0x17, 0xf2}},
	{0x35, {0x0c, 0x02, 0x08}}, {0x35, {0x14, 0x28, 0x43}},
	{0x35, {0x1c, 0x28, 0x62}}, {0x35, {0x24, 0x2b, 0x60}},
	{0x35, {0x2c, 0x07, 0x33}}, {0x35, {0x34, 0x1f, 0xb0}},
	{0x35, {0x3c, 0xed, 0xcd}}, {0x35, {0x50, 0x00, 0x06}},
	{0x35, {0x48, 0x07, 0xff}}, {0x35, {0x60, 0x05, 0x89}},
	{0x35, {0x58, 0x07, 0xff}}, {0x35, {0x40, 0x00, 0xa0}},
	{0x35, {0x42, 0x00, 0x00}}, {0x32, {0x10, 0x01, 0xfc}},
	{0x33, {0x8c, 0xa1, 0x18}}, {0x33, {0x90, 0x00, 0x3c}},
};

static u8 *dat_640  = "\xd0\x02\xd1\x08\xd2\xe1\xd3\x02\xd4\x10\xd5\x81";
static u8 *dat_800  = "\xd0\x02\xd1\x10\xd2\x57\xd3\x02\xd4\x18\xd5\x21";
static u8 *dat_1280 = "\xd0\x02\xd1\x20\xd2\x01\xd3\x02\xd4\x28\xd5\x01";
static u8 *dat_1600 = "\xd0\x02\xd1\x20\xd2\xaf\xd3\x02\xd4\x30\xd5\x41";

static int  mi2020_init_at_startup(struct gspca_dev *gspca_dev);
static int  mi2020_configure_alt(struct gspca_dev *gspca_dev);
static int  mi2020_init_pre_alt(struct gspca_dev *gspca_dev);
static int  mi2020_init_post_alt(struct gspca_dev *gspca_dev);
static void mi2020_post_unset_alt(struct gspca_dev *gspca_dev);
static int  mi2020_camera_settings(struct gspca_dev *gspca_dev);
/*==========================================================================*/

void mi2020_init_settings(struct gspca_dev *gspca_dev)
{
	struct sd *sd = (struct sd *) gspca_dev;

	sd->vcur.backlight  =  0;
	sd->vcur.brightness = 70;
	sd->vcur.sharpness  = 20;
	sd->vcur.contrast   =  0;
	sd->vcur.gamma      =  0;
	sd->vcur.hue        =  0;
	sd->vcur.saturation = 60;
	sd->vcur.whitebal   =  0; /* 50, not done by hardware */
	sd->vcur.mirror = 0;
	sd->vcur.flip   = 0;
	sd->vcur.AC50Hz = 1;

	sd->vmax.backlight  =  64;
	sd->vmax.brightness = 128;
	sd->vmax.sharpness  =  40;
	sd->vmax.contrast   =   3;
	sd->vmax.gamma      =   2;
	sd->vmax.hue        =   0 + 1; /* 200, not done by hardware */
	sd->vmax.saturation =   0;     /* 100, not done by hardware */
	sd->vmax.whitebal   =   2;     /* 100, not done by hardware */
	sd->vmax.mirror = 1;
	sd->vmax.flip   = 1;
	sd->vmax.AC50Hz = 1;

	sd->dev_camera_settings = mi2020_camera_settings;
	sd->dev_init_at_startup = mi2020_init_at_startup;
	sd->dev_configure_alt   = mi2020_configure_alt;
	sd->dev_init_pre_alt    = mi2020_init_pre_alt;
	sd->dev_post_unset_alt  = mi2020_post_unset_alt;
}

/*==========================================================================*/

static void common(struct gspca_dev *gspca_dev)
{
	fetch_validx(gspca_dev, tbl_common_0B, ARRAY_SIZE(tbl_common_0B));
	fetch_idxdata(gspca_dev, tbl_common_3B, ARRAY_SIZE(tbl_common_3B));
	ctrl_out(gspca_dev, 0x40, 1, 0x0041, 0x0000, 0, NULL);
}

static int mi2020_init_at_startup(struct gspca_dev *gspca_dev)
{
	u8 c;

	ctrl_in(gspca_dev, 0xc0, 2, 0x0000, 0x0004, 1, &c);
	ctrl_in(gspca_dev, 0xc0, 2, 0x0000, 0x0004, 1, &c);

	fetch_validx(gspca_dev, tbl_init_at_startup,
				 ARRAY_SIZE(tbl_init_at_startup));

	ctrl_out(gspca_dev, 0x40,  1, 0x7a00, 0x8030,  0, NULL);
	ctrl_in(gspca_dev, 0xc0,  2, 0x7a00, 0x8030,  1, &c);

	common(gspca_dev);

	msleep(61);
	/*	ctrl_out(gspca_dev, 0x40, 11, 0x0000, 0x0000,  0, NULL); */
	/*	msleep(36); */
	ctrl_out(gspca_dev, 0x40,  1, 0x0001, 0x0000,  0, NULL);

	return 0;
}

static int mi2020_init_pre_alt(struct gspca_dev *gspca_dev)
{
	struct sd *sd = (struct sd *) gspca_dev;

	sd->mirrorMask =  0;
	sd->vold.hue   = -1;

	/* These controls need to be reset */
	sd->vold.brightness = -1;
	sd->vold.sharpness  = -1;

	/* If not different from default, they do not need to be set */
	sd->vold.contrast  = 0;
	sd->vold.gamma     = 0;
	sd->vold.backlight = 0;

	mi2020_init_post_alt(gspca_dev);

	return 0;
}

static int mi2020_init_post_alt(struct gspca_dev *gspca_dev)
{
	struct sd *sd = (struct sd *) gspca_dev;
	s32 reso = gspca_dev->cam.cam_mode[(s32) gspca_dev->curr_mode].priv;

	s32 mirror = (((sd->vcur.mirror > 0) ^ sd->mirrorMask) > 0);
	s32 flip   = (((sd->vcur.flip   > 0) ^ sd->mirrorMask) > 0);
	s32 freq   = (sd->vcur.AC50Hz  > 0);
	s32 wbal   = sd->vcur.whitebal;

	u8 dat_freq2[] = {0x90, 0x00, 0x80};
	u8 dat_multi1[] = {0x8c, 0xa7, 0x00};
	u8 dat_multi2[] = {0x90, 0x00, 0x00};
	u8 dat_multi3[] = {0x8c, 0xa7, 0x00};
	u8 dat_multi4[] = {0x90, 0x00, 0x00};
	u8 dat_hvflip2[] = {0x90, 0x04, 0x6c};
	u8 dat_hvflip4[] = {0x90, 0x00, 0x24};
	u8 dat_wbal2[] = {0x90, 0x00, 0x00};
	u8 c;

	sd->nbIm = -1;

	dat_freq2[2] = freq ? 0xc0 : 0x80;
	dat_multi1[2] = 0x9d;
	dat_multi3[2] = dat_multi1[2] + 1;

	if (wbal == 0)
	{
		dat_multi4[2] = dat_multi2[2] = 0;
		dat_wbal2[2] = 0x17;
	}
	else if (wbal == 1)
	{
		dat_multi4[2] = dat_multi2[2] = 0;
		dat_wbal2[2] = 0x35;
	}
	else if (wbal == 2)
	{
		dat_multi4[2] = dat_multi2[2] = 0x20;
		dat_wbal2[2] = 0x17;
	}

	dat_hvflip2[2] = 0x6c + 2 * (1 - flip) + (1 - mirror);
	dat_hvflip4[2] = 0x24 + 2 * (1 - flip) + (1 - mirror);

	msleep(200);
	ctrl_out(gspca_dev, 0x40, 5, 0x0001, 0x0000, 0, NULL);
	msleep(2);

	common(gspca_dev);

	msleep(142);
	ctrl_out(gspca_dev, 0x40,  1, 0x0010, 0x0010,  0, NULL);
	ctrl_out(gspca_dev, 0x40,  1, 0x0003, 0x00c1,  0, NULL);
	ctrl_out(gspca_dev, 0x40,  1, 0x0042, 0x00c2,  0, NULL);
	ctrl_out(gspca_dev, 0x40,  1, 0x006a, 0x000d,  0, NULL);

	switch (reso)
	{
		case IMAGE_640:
		case IMAGE_800:
			if (reso != IMAGE_800)
				ctrl_out(gspca_dev, 0x40,  3, 0x0000, 0x0200,
						 12, dat_640);
			else
				ctrl_out(gspca_dev, 0x40,  3, 0x0000, 0x0200,
						 12, dat_800);

			fetch_idxdata(gspca_dev, tbl_init_post_alt_low1,
						  ARRAY_SIZE(tbl_init_post_alt_low1));

			if (reso == IMAGE_800)
				fetch_idxdata(gspca_dev, tbl_init_post_alt_low2,
							  ARRAY_SIZE(tbl_init_post_alt_low2));

			fetch_idxdata(gspca_dev, tbl_init_post_alt_low3,
						  ARRAY_SIZE(tbl_init_post_alt_low3));

			ctrl_out(gspca_dev, 0x40, 1, 0x0010, 0x0010, 0, NULL);
			ctrl_out(gspca_dev, 0x40, 1, 0x0000, 0x00c1, 0, NULL);
			ctrl_out(gspca_dev, 0x40, 1, 0x0041, 0x00c2, 0, NULL);
			msleep(120);
			break;

		case IMAGE_1280:
		case IMAGE_1600:
			if (reso == IMAGE_1280)
			{
				ctrl_out(gspca_dev, 0x40, 3, 0x0000, 0x0200,
						 12, dat_1280);
				ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033,
						 3, "\x8c\x27\x07");
				ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033,
						 3, "\x90\x05\x04");
				ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033,
						 3, "\x8c\x27\x09");
				ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033,
						 3, "\x90\x04\x02");
			}
			else
			{
				ctrl_out(gspca_dev, 0x40, 3, 0x0000, 0x0200,
						 12, dat_1600);
				ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033,
						 3, "\x8c\x27\x07");
				ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033,
						 3, "\x90\x06\x40");
				ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033,
						 3, "\x8c\x27\x09");
				ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033,
						 3, "\x90\x04\xb0");
			}

			fetch_idxdata(gspca_dev, tbl_init_post_alt_big,
						  ARRAY_SIZE(tbl_init_post_alt_big));

			ctrl_out(gspca_dev, 0x40, 1, 0x0001, 0x0010, 0, NULL);
			ctrl_out(gspca_dev, 0x40, 1, 0x0000, 0x00c1, 0, NULL);
			ctrl_out(gspca_dev, 0x40, 1, 0x0041, 0x00c2, 0, NULL);
			msleep(1850);
	}

	ctrl_out(gspca_dev, 0x40, 1, 0x0040, 0x0000, 0, NULL);
	msleep(40);

	/* AC power frequency */
	ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_freq1);
	ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_freq2);
	msleep(33);
	/* light source */
	ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi1);
	ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi2);
	ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi3);
	ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi4);
	ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_wbal1);
	ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_wbal2);
	ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi5);
	ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi6);
	msleep(7);
	ctrl_in(gspca_dev, 0xc0, 2, 0x0000, 0x0000, 1, &c);

	fetch_idxdata(gspca_dev, tbl_init_post_alt_3B,
				  ARRAY_SIZE(tbl_init_post_alt_3B));

	/* hvflip */
	ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_hvflip1);
	ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_hvflip2);
	ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_hvflip3);
	ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_hvflip4);
	ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_hvflip5);
	ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_hvflip6);
	msleep(250);

	if (reso == IMAGE_640 || reso == IMAGE_800)
		fetch_idxdata(gspca_dev, tbl_middle_hvflip_low,
					  ARRAY_SIZE(tbl_middle_hvflip_low));
	else
		fetch_idxdata(gspca_dev, tbl_middle_hvflip_big,
					  ARRAY_SIZE(tbl_middle_hvflip_big));

	fetch_idxdata(gspca_dev, tbl_end_hvflip,
				  ARRAY_SIZE(tbl_end_hvflip));

	sd->nbIm = 0;

	sd->vold.mirror    = mirror;
	sd->vold.flip      = flip;
	sd->vold.AC50Hz    = freq;
	sd->vold.whitebal  = wbal;

	mi2020_camera_settings(gspca_dev);

	return 0;
}

static int mi2020_configure_alt(struct gspca_dev *gspca_dev)
{
	s32 reso = gspca_dev->cam.cam_mode[(s32) gspca_dev->curr_mode].priv;

	switch (reso)
	{
		case IMAGE_640:
			gspca_dev->alt = 3 + 1;
			break;

		case IMAGE_800:
		case IMAGE_1280:
		case IMAGE_1600:
			gspca_dev->alt = 1 + 1;
			break;
	}

	return 0;
}

static int mi2020_camera_settings(struct gspca_dev *gspca_dev)
{
	struct sd *sd = (struct sd *) gspca_dev;
	s32 reso = gspca_dev->cam.cam_mode[(s32) gspca_dev->curr_mode].priv;

	s32 backlight = sd->vcur.backlight;
	s32 bright =  sd->vcur.brightness;
	s32 sharp  =  sd->vcur.sharpness;
	s32 cntr   =  sd->vcur.contrast;
	s32 gam	   =  sd->vcur.gamma;
	s32 hue    = (sd->vcur.hue > 0);
	s32 mirror = (((sd->vcur.mirror > 0) ^ sd->mirrorMask) > 0);
	s32 flip   = (((sd->vcur.flip   > 0) ^ sd->mirrorMask) > 0);
	s32 freq   = (sd->vcur.AC50Hz > 0);
	s32 wbal   = sd->vcur.whitebal;

	u8 dat_sharp[] = {0x6c, 0x00, 0x08};
	u8 dat_bright2[] = {0x90, 0x00, 0x00};
	u8 dat_freq2[] = {0x90, 0x00, 0x80};
	u8 dat_multi1[] = {0x8c, 0xa7, 0x00};
	u8 dat_multi2[] = {0x90, 0x00, 0x00};
	u8 dat_multi3[] = {0x8c, 0xa7, 0x00};
	u8 dat_multi4[] = {0x90, 0x00, 0x00};
	u8 dat_hvflip2[] = {0x90, 0x04, 0x6c};
	u8 dat_hvflip4[] = {0x90, 0x00, 0x24};
	u8 dat_wbal2[] = {0x90, 0x00, 0x00};

	/* Less than 4 images received -> too early to set the settings */
	if (sd->nbIm < 4)
	{
		sd->waitSet = 1;
		return 0;
	}

	sd->waitSet = 0;

	if (freq != sd->vold.AC50Hz)
	{
		sd->vold.AC50Hz = freq;

		dat_freq2[2] = freq ? 0xc0 : 0x80;
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_freq1);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_freq2);
		msleep(20);
	}

	if (wbal != sd->vold.whitebal)
	{
		sd->vold.whitebal = wbal;

		if (wbal < 0 || wbal > sd->vmax.whitebal)
		{
			wbal = 0;
		}

		dat_multi1[2] = 0x9d;
		dat_multi3[2] = dat_multi1[2] + 1;

		if (wbal == 0)
		{
			dat_multi4[2] = dat_multi2[2] = 0;
			dat_wbal2[2] = 0x17;
		}
		else if (wbal == 1)
		{
			dat_multi4[2] = dat_multi2[2] = 0;
			dat_wbal2[2] = 0x35;
		}
		else if (wbal == 2)
		{
			dat_multi4[2] = dat_multi2[2] = 0x20;
			dat_wbal2[2] = 0x17;
		}

		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi1);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi2);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi3);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi4);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_wbal1);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_wbal2);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi5);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi6);
	}

	if (mirror != sd->vold.mirror || flip != sd->vold.flip)
	{
		sd->vold.mirror = mirror;
		sd->vold.flip   = flip;

		dat_hvflip2[2] = 0x6c + 2 * (1 - flip) + (1 - mirror);
		dat_hvflip4[2] = 0x24 + 2 * (1 - flip) + (1 - mirror);

		fetch_idxdata(gspca_dev, tbl_init_post_alt_3B,
					  ARRAY_SIZE(tbl_init_post_alt_3B));

		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_hvflip1);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_hvflip2);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_hvflip3);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_hvflip4);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_hvflip5);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_hvflip6);
		msleep(40);

		if (reso == IMAGE_640 || reso == IMAGE_800)
			fetch_idxdata(gspca_dev, tbl_middle_hvflip_low,
						  ARRAY_SIZE(tbl_middle_hvflip_low));
		else
			fetch_idxdata(gspca_dev, tbl_middle_hvflip_big,
						  ARRAY_SIZE(tbl_middle_hvflip_big));

		fetch_idxdata(gspca_dev, tbl_end_hvflip,
					  ARRAY_SIZE(tbl_end_hvflip));
	}

	if (bright != sd->vold.brightness)
	{
		sd->vold.brightness = bright;

		if (bright < 0 || bright > sd->vmax.brightness)
		{
			bright = 0;
		}

		dat_bright2[2] = bright;
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_bright1);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_bright2);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_bright3);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_bright4);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_bright5);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_bright6);
	}

	if (cntr != sd->vold.contrast || gam != sd->vold.gamma)
	{
		sd->vold.contrast = cntr;

		if (cntr < 0 || cntr > sd->vmax.contrast)
		{
			cntr = 0;
		}

		sd->vold.gamma = gam;

		if (gam < 0 || gam > sd->vmax.gamma)
		{
			gam = 0;
		}

		dat_multi1[2] = 0x6d;
		dat_multi3[2] = dat_multi1[2] + 1;

		if (cntr == 0)
		{
			cntr = 4;
		}

		dat_multi4[2] = dat_multi2[2] = cntr * 0x10 + 2 - gam;
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi1);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi2);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi3);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi4);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi5);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi6);
	}

	if (backlight != sd->vold.backlight)
	{
		sd->vold.backlight = backlight;

		if (backlight < 0 || backlight > sd->vmax.backlight)
		{
			backlight = 0;
		}

		dat_multi1[2] = 0x9d;
		dat_multi3[2] = dat_multi1[2] + 1;
		dat_multi4[2] = dat_multi2[2] = backlight;
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi1);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi2);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi3);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi4);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi5);
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0033, 3, dat_multi6);
	}

	if (sharp != sd->vold.sharpness)
	{
		sd->vold.sharpness = sharp;

		if (sharp < 0 || sharp > sd->vmax.sharpness)
		{
			sharp = 0;
		}

		dat_sharp[1] = sharp;
		ctrl_out(gspca_dev, 0x40, 3, 0x7a00, 0x0032, 3, dat_sharp);
	}

	if (hue != sd->vold.hue)
	{
		sd->swapRB = hue;
		sd->vold.hue = hue;
	}

	return 0;
}

static void mi2020_post_unset_alt(struct gspca_dev *gspca_dev)
{
	ctrl_out(gspca_dev, 0x40, 5, 0x0000, 0x0000, 0, NULL);
	msleep(40);
	ctrl_out(gspca_dev, 0x40, 1, 0x0001, 0x0000, 0, NULL);
}
