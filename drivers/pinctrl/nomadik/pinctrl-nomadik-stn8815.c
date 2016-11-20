#include <linux/kernel.h>
#include <linux/pinctrl/pinctrl.h>
#include "pinctrl-nomadik.h"

/* All the pins that can be used for GPIO and some other functions */
#define _GPIO(offset)		(offset)

#define STN8815_PIN_B4		_GPIO(0)
#define STN8815_PIN_D5		_GPIO(1)
#define STN8815_PIN_C5		_GPIO(2)
#define STN8815_PIN_A4		_GPIO(3)
#define STN8815_PIN_B5		_GPIO(4)
#define STN8815_PIN_D6		_GPIO(5)
#define STN8815_PIN_C6		_GPIO(6)
#define STN8815_PIN_B6		_GPIO(7)
#define STN8815_PIN_B10		_GPIO(8)
#define STN8815_PIN_A10		_GPIO(9)
#define STN8815_PIN_C11		_GPIO(10)
#define STN8815_PIN_B11		_GPIO(11)
#define STN8815_PIN_A11		_GPIO(12)
#define STN8815_PIN_C12		_GPIO(13)
#define STN8815_PIN_B12		_GPIO(14)
#define STN8815_PIN_A12		_GPIO(15)
#define STN8815_PIN_C13		_GPIO(16)
#define STN8815_PIN_B13		_GPIO(17)
#define STN8815_PIN_A13		_GPIO(18)
#define STN8815_PIN_D13		_GPIO(19)
#define STN8815_PIN_C14		_GPIO(20)
#define STN8815_PIN_B14		_GPIO(21)
#define STN8815_PIN_A14		_GPIO(22)
#define STN8815_PIN_D15		_GPIO(23)
#define STN8815_PIN_C15		_GPIO(24)
#define STN8815_PIN_B15		_GPIO(25)
#define STN8815_PIN_A15		_GPIO(26)
#define STN8815_PIN_C16		_GPIO(27)
#define STN8815_PIN_B16		_GPIO(28)
#define STN8815_PIN_A16		_GPIO(29)
#define STN8815_PIN_D17		_GPIO(30)
#define STN8815_PIN_C17		_GPIO(31)
#define STN8815_PIN_AB6		_GPIO(32)
#define STN8815_PIN_AA6		_GPIO(33)
#define STN8815_PIN_Y6		_GPIO(34)
#define STN8815_PIN_Y5		_GPIO(35)
#define STN8815_PIN_AA5		_GPIO(36)
#define STN8815_PIN_AB5		_GPIO(37)
#define STN8815_PIN_AB4		_GPIO(38)
#define STN8815_PIN_Y4		_GPIO(39)
#define STN8815_PIN_R1		_GPIO(40)
#define STN8815_PIN_R2		_GPIO(41)
#define STN8815_PIN_R3		_GPIO(42)
#define STN8815_PIN_P1		_GPIO(43)
#define STN8815_PIN_P2		_GPIO(44)
#define STN8815_PIN_P3		_GPIO(45)
#define STN8815_PIN_N1		_GPIO(46)
#define STN8815_PIN_N2		_GPIO(47)
#define STN8815_PIN_N3		_GPIO(48)
#define STN8815_PIN_M1		_GPIO(49)
#define STN8815_PIN_M3		_GPIO(50)
#define STN8815_PIN_M2		_GPIO(51)
#define STN8815_PIN_L1		_GPIO(52)
#define STN8815_PIN_L4		_GPIO(53)
#define STN8815_PIN_L3		_GPIO(54)
#define STN8815_PIN_L2		_GPIO(55)
#define STN8815_PIN_F3		_GPIO(56)
#define STN8815_PIN_F2		_GPIO(57)
#define STN8815_PIN_E1		_GPIO(58)
#define STN8815_PIN_E3		_GPIO(59)
#define STN8815_PIN_E2		_GPIO(60)
#define STN8815_PIN_E4		_GPIO(61)
#define STN8815_PIN_D3		_GPIO(62)
#define STN8815_PIN_D2		_GPIO(63)
#define STN8815_PIN_F21		_GPIO(64)
#define STN8815_PIN_F20		_GPIO(65)
#define STN8815_PIN_E22		_GPIO(66)
#define STN8815_PIN_D22		_GPIO(67)
#define STN8815_PIN_E21		_GPIO(68)
#define STN8815_PIN_E20		_GPIO(69)
#define STN8815_PIN_C22		_GPIO(70)
#define STN8815_PIN_D21		_GPIO(71)
#define STN8815_PIN_D20		_GPIO(72)
#define STN8815_PIN_C21		_GPIO(73)
#define STN8815_PIN_C20		_GPIO(74)
#define STN8815_PIN_C19		_GPIO(75)
#define STN8815_PIN_B20		_GPIO(76)
#define STN8815_PIN_B8		_GPIO(77)
#define STN8815_PIN_A8		_GPIO(78)
#define STN8815_PIN_C9		_GPIO(79)
#define STN8815_PIN_B9		_GPIO(80)
#define STN8815_PIN_A9		_GPIO(81)
#define STN8815_PIN_C10		_GPIO(82)
#define STN8815_PIN_K1		_GPIO(83)
#define STN8815_PIN_K3		_GPIO(84)
#define STN8815_PIN_K2		_GPIO(85)
#define STN8815_PIN_J1		_GPIO(86)
#define STN8815_PIN_J3		_GPIO(87)
#define STN8815_PIN_J2		_GPIO(88)
#define STN8815_PIN_H1		_GPIO(89)
#define STN8815_PIN_H3		_GPIO(90)
#define STN8815_PIN_H2		_GPIO(91)
#define STN8815_PIN_G1		_GPIO(92)
#define STN8815_PIN_G3		_GPIO(93)
#define STN8815_PIN_G2		_GPIO(94)
#define STN8815_PIN_F1		_GPIO(95)
#define STN8815_PIN_T20		_GPIO(96)
#define STN8815_PIN_R21		_GPIO(97)
#define STN8815_PIN_R20		_GPIO(98)
#define STN8815_PIN_U22		_GPIO(99)
#define STN8815_PIN_N21		_GPIO(100)
#define STN8815_PIN_N20		_GPIO(101)
#define STN8815_PIN_P22		_GPIO(102)
#define STN8815_PIN_N22		_GPIO(103)
#define STN8815_PIN_V22		_GPIO(104)
#define STN8815_PIN_V21		_GPIO(105)
#define STN8815_PIN_K22		_GPIO(106)
#define STN8815_PIN_K21		_GPIO(107)
#define STN8815_PIN_H20		_GPIO(108)
#define STN8815_PIN_G20		_GPIO(109)
#define STN8815_PIN_L21		_GPIO(110)
#define STN8815_PIN_H21		_GPIO(111)
#define STN8815_PIN_J21		_GPIO(112)
#define STN8815_PIN_H22		_GPIO(113)
#define STN8815_PIN_K20		_GPIO(114)
#define STN8815_PIN_L22		_GPIO(115)
#define STN8815_PIN_G21		_GPIO(116)
#define STN8815_PIN_J20		_GPIO(117)
#define STN8815_PIN_G22		_GPIO(118)
#define STN8815_PIN_U19		_GPIO(119)
#define STN8815_PIN_G19		_GPIO(120)
#define STN8815_PIN_M22		_GPIO(121)
#define STN8815_PIN_M19		_GPIO(122)
#define STN8815_PIN_J22		_GPIO(123)
/* GPIOs 124-127 not routed to pins */

/*
 * The names of the pins are denoted by GPIO number and ball name, even
 * though they can be used for other things than GPIO, this is the first
 * column in the table of the data sheet and often used on schematics and
 * such.
 */
static const struct pinctrl_pin_desc nmk_stn8815_pins[] =
{
	PINCTRL_PIN(STN8815_PIN_B4, "GPIO0_B4"),
	PINCTRL_PIN(STN8815_PIN_D5, "GPIO1_D5"),
	PINCTRL_PIN(STN8815_PIN_C5, "GPIO2_C5"),
	PINCTRL_PIN(STN8815_PIN_A4, "GPIO3_A4"),
	PINCTRL_PIN(STN8815_PIN_B5, "GPIO4_B5"),
	PINCTRL_PIN(STN8815_PIN_D6, "GPIO5_D6"),
	PINCTRL_PIN(STN8815_PIN_C6, "GPIO6_C6"),
	PINCTRL_PIN(STN8815_PIN_B6, "GPIO7_B6"),
	PINCTRL_PIN(STN8815_PIN_B10, "GPIO8_B10"),
	PINCTRL_PIN(STN8815_PIN_A10, "GPIO9_A10"),
	PINCTRL_PIN(STN8815_PIN_C11, "GPIO10_C11"),
	PINCTRL_PIN(STN8815_PIN_B11, "GPIO11_B11"),
	PINCTRL_PIN(STN8815_PIN_A11, "GPIO12_A11"),
	PINCTRL_PIN(STN8815_PIN_C12, "GPIO13_C12"),
	PINCTRL_PIN(STN8815_PIN_B12, "GPIO14_B12"),
	PINCTRL_PIN(STN8815_PIN_A12, "GPIO15_A12"),
	PINCTRL_PIN(STN8815_PIN_C13, "GPIO16_C13"),
	PINCTRL_PIN(STN8815_PIN_B13, "GPIO17_B13"),
	PINCTRL_PIN(STN8815_PIN_A13, "GPIO18_A13"),
	PINCTRL_PIN(STN8815_PIN_D13, "GPIO19_D13"),
	PINCTRL_PIN(STN8815_PIN_C14, "GPIO20_C14"),
	PINCTRL_PIN(STN8815_PIN_B14, "GPIO21_B14"),
	PINCTRL_PIN(STN8815_PIN_A14, "GPIO22_A14"),
	PINCTRL_PIN(STN8815_PIN_D15, "GPIO23_D15"),
	PINCTRL_PIN(STN8815_PIN_C15, "GPIO24_C15"),
	PINCTRL_PIN(STN8815_PIN_B15, "GPIO25_B15"),
	PINCTRL_PIN(STN8815_PIN_A15, "GPIO26_A15"),
	PINCTRL_PIN(STN8815_PIN_C16, "GPIO27_C16"),
	PINCTRL_PIN(STN8815_PIN_B16, "GPIO28_B16"),
	PINCTRL_PIN(STN8815_PIN_A16, "GPIO29_A16"),
	PINCTRL_PIN(STN8815_PIN_D17, "GPIO30_D17"),
	PINCTRL_PIN(STN8815_PIN_C17, "GPIO31_C17"),
	PINCTRL_PIN(STN8815_PIN_AB6, "GPIO32_AB6"),
	PINCTRL_PIN(STN8815_PIN_AA6, "GPIO33_AA6"),
	PINCTRL_PIN(STN8815_PIN_Y6, "GPIO34_Y6"),
	PINCTRL_PIN(STN8815_PIN_Y5, "GPIO35_Y5"),
	PINCTRL_PIN(STN8815_PIN_AA5, "GPIO36_AA5"),
	PINCTRL_PIN(STN8815_PIN_AB5, "GPIO37_AB5"),
	PINCTRL_PIN(STN8815_PIN_AB4, "GPIO38_AB4"),
	PINCTRL_PIN(STN8815_PIN_Y4, "GPIO39_Y4"),
	PINCTRL_PIN(STN8815_PIN_R1, "GPIO40_R1"),
	PINCTRL_PIN(STN8815_PIN_R2, "GPIO41_R2"),
	PINCTRL_PIN(STN8815_PIN_R3, "GPIO42_R3"),
	PINCTRL_PIN(STN8815_PIN_P1, "GPIO43_P1"),
	PINCTRL_PIN(STN8815_PIN_P2, "GPIO44_P2"),
	PINCTRL_PIN(STN8815_PIN_P3, "GPIO45_P3"),
	PINCTRL_PIN(STN8815_PIN_N1, "GPIO46_N1"),
	PINCTRL_PIN(STN8815_PIN_N2, "GPIO47_N2"),
	PINCTRL_PIN(STN8815_PIN_N3, "GPIO48_N3"),
	PINCTRL_PIN(STN8815_PIN_M1, "GPIO49_M1"),
	PINCTRL_PIN(STN8815_PIN_M3, "GPIO50_M3"),
	PINCTRL_PIN(STN8815_PIN_M2, "GPIO51_M2"),
	PINCTRL_PIN(STN8815_PIN_L1, "GPIO52_L1"),
	PINCTRL_PIN(STN8815_PIN_L4, "GPIO53_L4"),
	PINCTRL_PIN(STN8815_PIN_L3, "GPIO54_L3"),
	PINCTRL_PIN(STN8815_PIN_L2, "GPIO55_L2"),
	PINCTRL_PIN(STN8815_PIN_F3, "GPIO56_F3"),
	PINCTRL_PIN(STN8815_PIN_F2, "GPIO57_F2"),
	PINCTRL_PIN(STN8815_PIN_E1, "GPIO58_E1"),
	PINCTRL_PIN(STN8815_PIN_E3, "GPIO59_E3"),
	PINCTRL_PIN(STN8815_PIN_E2, "GPIO60_E2"),
	PINCTRL_PIN(STN8815_PIN_E4, "GPIO61_E4"),
	PINCTRL_PIN(STN8815_PIN_D3, "GPIO62_D3"),
	PINCTRL_PIN(STN8815_PIN_D2, "GPIO63_D2"),
	PINCTRL_PIN(STN8815_PIN_F21, "GPIO64_F21"),
	PINCTRL_PIN(STN8815_PIN_F20, "GPIO65_F20"),
	PINCTRL_PIN(STN8815_PIN_E22, "GPIO66_E22"),
	PINCTRL_PIN(STN8815_PIN_D22, "GPIO67_D22"),
	PINCTRL_PIN(STN8815_PIN_E21, "GPIO68_E21"),
	PINCTRL_PIN(STN8815_PIN_E20, "GPIO69_E20"),
	PINCTRL_PIN(STN8815_PIN_C22, "GPIO70_C22"),
	PINCTRL_PIN(STN8815_PIN_D21, "GPIO71_D21"),
	PINCTRL_PIN(STN8815_PIN_D20, "GPIO72_D20"),
	PINCTRL_PIN(STN8815_PIN_C21, "GPIO73_C21"),
	PINCTRL_PIN(STN8815_PIN_C20, "GPIO74_C20"),
	PINCTRL_PIN(STN8815_PIN_C19, "GPIO75_C19"),
	PINCTRL_PIN(STN8815_PIN_B20, "GPIO76_B20"),
	PINCTRL_PIN(STN8815_PIN_B8, "GPIO77_B8"),
	PINCTRL_PIN(STN8815_PIN_A8, "GPIO78_A8"),
	PINCTRL_PIN(STN8815_PIN_C9, "GPIO79_C9"),
	PINCTRL_PIN(STN8815_PIN_B9, "GPIO80_B9"),
	PINCTRL_PIN(STN8815_PIN_A9, "GPIO81_A9"),
	PINCTRL_PIN(STN8815_PIN_C10, "GPIO82_C10"),
	PINCTRL_PIN(STN8815_PIN_K1, "GPIO83_K1"),
	PINCTRL_PIN(STN8815_PIN_K3, "GPIO84_K3"),
	PINCTRL_PIN(STN8815_PIN_K2, "GPIO85_K2"),
	PINCTRL_PIN(STN8815_PIN_J1, "GPIO86_J1"),
	PINCTRL_PIN(STN8815_PIN_J3, "GPIO87_J3"),
	PINCTRL_PIN(STN8815_PIN_J2, "GPIO88_J2"),
	PINCTRL_PIN(STN8815_PIN_H1, "GPIO89_H1"),
	PINCTRL_PIN(STN8815_PIN_H3, "GPIO90_H3"),
	PINCTRL_PIN(STN8815_PIN_H2, "GPIO91_H2"),
	PINCTRL_PIN(STN8815_PIN_G1, "GPIO92_G1"),
	PINCTRL_PIN(STN8815_PIN_G3, "GPIO93_G3"),
	PINCTRL_PIN(STN8815_PIN_G2, "GPIO94_G2"),
	PINCTRL_PIN(STN8815_PIN_F1, "GPIO95_F1"),
	PINCTRL_PIN(STN8815_PIN_T20, "GPIO96_T20"),
	PINCTRL_PIN(STN8815_PIN_R21, "GPIO97_R21"),
	PINCTRL_PIN(STN8815_PIN_R20, "GPIO98_R20"),
	PINCTRL_PIN(STN8815_PIN_U22, "GPIO99_U22"),
	PINCTRL_PIN(STN8815_PIN_N21, "GPIO100_N21"),
	PINCTRL_PIN(STN8815_PIN_N20, "GPIO101_N20"),
	PINCTRL_PIN(STN8815_PIN_P22, "GPIO102_P22"),
	PINCTRL_PIN(STN8815_PIN_N22, "GPIO103_N22"),
	PINCTRL_PIN(STN8815_PIN_V22, "GPIO104_V22"),
	PINCTRL_PIN(STN8815_PIN_V21, "GPIO105_V21"),
	PINCTRL_PIN(STN8815_PIN_K22, "GPIO106_K22"),
	PINCTRL_PIN(STN8815_PIN_K21, "GPIO107_K21"),
	PINCTRL_PIN(STN8815_PIN_H20, "GPIO108_H20"),
	PINCTRL_PIN(STN8815_PIN_G20, "GPIO109_G20"),
	PINCTRL_PIN(STN8815_PIN_L21, "GPIO110_L21"),
	PINCTRL_PIN(STN8815_PIN_H21, "GPIO111_H21"),
	PINCTRL_PIN(STN8815_PIN_J21, "GPIO112_J21"),
	PINCTRL_PIN(STN8815_PIN_H22, "GPIO113_H22"),
	PINCTRL_PIN(STN8815_PIN_K20, "GPIO114_K20"),
	PINCTRL_PIN(STN8815_PIN_L22, "GPIO115_L22"),
	PINCTRL_PIN(STN8815_PIN_G21, "GPIO116_G21"),
	PINCTRL_PIN(STN8815_PIN_J20, "GPIO117_J20"),
	PINCTRL_PIN(STN8815_PIN_G22, "GPIO118_G22"),
	PINCTRL_PIN(STN8815_PIN_U19, "GPIO119_U19"),
	PINCTRL_PIN(STN8815_PIN_G19, "GPIO120_G19"),
	PINCTRL_PIN(STN8815_PIN_M22, "GPIO121_M22"),
	PINCTRL_PIN(STN8815_PIN_M19, "GPIO122_M19"),
	PINCTRL_PIN(STN8815_PIN_J22, "GPIO123_J22"),
};

/*
 * Read the pin group names like this:
 * u0_a_1    = first groups of pins for uart0 on alt function a
 * i2c2_b_2  = second group of pins for i2c2 on alt function b
 */

/* Altfunction A */
static const unsigned u0txrx_a_1_pins[] = { STN8815_PIN_B4, STN8815_PIN_D5 };
static const unsigned u0ctsrts_a_1_pins[] = { STN8815_PIN_C5, STN8815_PIN_B6 };
/* Modem pins: DCD, DSR, RI, DTR */
static const unsigned u0modem_a_1_pins[] = { STN8815_PIN_A4, STN8815_PIN_B5,
											 STN8815_PIN_D6, STN8815_PIN_C6
										   };
static const unsigned mmcsd_a_1_pins[] = { STN8815_PIN_B10, STN8815_PIN_A10,
										   STN8815_PIN_C11, STN8815_PIN_B11, STN8815_PIN_A11, STN8815_PIN_C12,
										   STN8815_PIN_B12, STN8815_PIN_A12, STN8815_PIN_C13, STN8815_PIN_C15
										 };
static const unsigned mmcsd_b_1_pins[] = { STN8815_PIN_D15 };
static const unsigned u1_a_1_pins[] = { STN8815_PIN_M2, STN8815_PIN_L1,
										STN8815_PIN_F3, STN8815_PIN_F2
									  };
static const unsigned i2c1_a_1_pins[] = { STN8815_PIN_L4, STN8815_PIN_L3 };
static const unsigned i2c0_a_1_pins[] = { STN8815_PIN_D3, STN8815_PIN_D2 };
/* Altfunction B */
static const unsigned u1_b_1_pins[] = { STN8815_PIN_B16, STN8815_PIN_A16 };
static const unsigned i2cusb_b_1_pins[] = { STN8815_PIN_C21, STN8815_PIN_C20 };
static const unsigned clcd_16_23_b_1_pins[] = { STN8815_PIN_AB6,
												STN8815_PIN_AA6, STN8815_PIN_Y6, STN8815_PIN_Y5, STN8815_PIN_AA5,
												STN8815_PIN_AB5, STN8815_PIN_AB4, STN8815_PIN_Y4
											  };


#define STN8815_PIN_GROUP(a, b) { .name = #a, .pins = a##_pins,		\
			.npins = ARRAY_SIZE(a##_pins), .altsetting = b }

static const struct nmk_pingroup nmk_stn8815_groups[] =
{
	STN8815_PIN_GROUP(u0txrx_a_1, NMK_GPIO_ALT_A),
	STN8815_PIN_GROUP(u0ctsrts_a_1, NMK_GPIO_ALT_A),
	STN8815_PIN_GROUP(u0modem_a_1, NMK_GPIO_ALT_A),
	STN8815_PIN_GROUP(mmcsd_a_1, NMK_GPIO_ALT_A),
	STN8815_PIN_GROUP(mmcsd_b_1, NMK_GPIO_ALT_B),
	STN8815_PIN_GROUP(u1_a_1, NMK_GPIO_ALT_A),
	STN8815_PIN_GROUP(i2c1_a_1, NMK_GPIO_ALT_A),
	STN8815_PIN_GROUP(i2c0_a_1, NMK_GPIO_ALT_A),
	STN8815_PIN_GROUP(u1_b_1, NMK_GPIO_ALT_B),
	STN8815_PIN_GROUP(i2cusb_b_1, NMK_GPIO_ALT_B),
	STN8815_PIN_GROUP(clcd_16_23_b_1, NMK_GPIO_ALT_B),
};

/* We use this macro to define the groups applicable to a function */
#define STN8815_FUNC_GROUPS(a, b...)	   \
	static const char * const a##_groups[] = { b };

STN8815_FUNC_GROUPS(u0, "u0txrx_a_1", "u0ctsrts_a_1", "u0modem_a_1");
STN8815_FUNC_GROUPS(mmcsd, "mmcsd_a_1", "mmcsd_b_1");
STN8815_FUNC_GROUPS(u1, "u1_a_1", "u1_b_1");
STN8815_FUNC_GROUPS(i2c1, "i2c1_a_1");
STN8815_FUNC_GROUPS(i2c0, "i2c0_a_1");
STN8815_FUNC_GROUPS(i2cusb, "i2cusb_b_1");
STN8815_FUNC_GROUPS(clcd, "clcd_16_23_b_1");

#define FUNCTION(fname)					\
	{						\
		.name = #fname,				\
				.groups = fname##_groups,		\
						  .ngroups = ARRAY_SIZE(fname##_groups),	\
	}

static const struct nmk_function nmk_stn8815_functions[] =
{
	FUNCTION(u0),
	FUNCTION(mmcsd),
	FUNCTION(u1),
	FUNCTION(i2c1),
	FUNCTION(i2c0),
	FUNCTION(i2cusb),
	FUNCTION(clcd),
};

static const struct nmk_pinctrl_soc_data nmk_stn8815_soc =
{
	.pins = nmk_stn8815_pins,
	.npins = ARRAY_SIZE(nmk_stn8815_pins),
	.functions = nmk_stn8815_functions,
	.nfunctions = ARRAY_SIZE(nmk_stn8815_functions),
	.groups = nmk_stn8815_groups,
	.ngroups = ARRAY_SIZE(nmk_stn8815_groups),
};

void nmk_pinctrl_stn8815_init(const struct nmk_pinctrl_soc_data **soc)
{
	*soc = &nmk_stn8815_soc;
}
