
/*
 *	The firmware this driver downloads into the Localtalk card is a
 *	separate program and is not GPL'd source code, even though the Linux
 *	side driver and the routine that loads this data into the card are.
 *
 *	It is taken from the COPS SDK and is under the following license
 *
 *	This material is licensed to you strictly for use in conjunction with
 *	the use of COPS LocalTalk adapters.
 *	There is no charge for this SDK. And no waranty express or implied
 *	about its fitness for any purpose. However, we will cheerefully
 *	refund every penny you paid for this SDK...
 *	Regards,
 *
 *	Thomas F. Divine
 *	Chief Scientist
 */


/*      cops_ffdrv.h: LocalTalk driver firmware dump for Linux.
 *
 *      Authors:
 *      - Jay Schulist <jschlst@samba.org>
 */


#ifdef CONFIG_COPS_DAYNA

static const unsigned char ffdrv_code[] =
{
	58, 3, 0, 50, 228, 149, 33, 255, 255, 34, 226, 149,
	249, 17, 40, 152, 33, 202, 154, 183, 237, 82, 77, 68,
	11, 107, 98, 19, 54, 0, 237, 176, 175, 50, 80, 0,
	62, 128, 237, 71, 62, 32, 237, 57, 51, 62, 12, 237,
	57, 50, 237, 57, 54, 62, 6, 237, 57, 52, 62, 12,
	237, 57, 49, 33, 107, 137, 34, 32, 128, 33, 83, 130,
	34, 40, 128, 33, 86, 130, 34, 42, 128, 33, 112, 130,
	34, 36, 128, 33, 211, 130, 34, 38, 128, 62, 0, 237,
	57, 16, 33, 63, 148, 34, 34, 128, 237, 94, 205, 15,
	130, 251, 205, 168, 145, 24, 141, 67, 111, 112, 121, 114,
	105, 103, 104, 116, 32, 40, 67, 41, 32, 49, 57, 56,
	56, 32, 45, 32, 68, 97, 121, 110, 97, 32, 67, 111,
	109, 109, 117, 110, 105, 99, 97, 116, 105, 111, 110, 115,
	32, 32, 32, 65, 108, 108, 32, 114, 105, 103, 104, 116,
	115, 32, 114, 101, 115, 101, 114, 118, 101, 100, 46, 32,
	32, 40, 68, 40, 68, 7, 16, 8, 34, 7, 22, 6,
	16, 5, 12, 4, 8, 3, 6, 140, 0, 16, 39, 128,
	0, 4, 96, 10, 224, 6, 0, 7, 126, 2, 64, 11,
	118, 12, 6, 13, 0, 14, 193, 15, 0, 5, 96, 3,
	192, 1, 64, 9, 8, 62, 9, 211, 66, 62, 192, 211,
	66, 62, 100, 61, 32, 253, 6, 28, 33, 205, 129, 14,
	66, 237, 163, 194, 253, 129, 6, 28, 33, 205, 129, 14,
	64, 237, 163, 194, 9, 130, 201, 62, 47, 50, 71, 152,
	62, 47, 211, 68, 58, 203, 129, 237, 57, 20, 58, 204,
	129, 237, 57, 21, 33, 77, 152, 54, 132, 205, 233, 129,
	58, 228, 149, 254, 209, 40, 6, 56, 4, 62, 0, 24,
	2, 219, 96, 33, 233, 149, 119, 230, 62, 33, 232, 149,
	119, 213, 33, 8, 152, 17, 7, 0, 25, 119, 19, 25,
	119, 209, 201, 251, 237, 77, 245, 197, 213, 229, 221, 229,
	205, 233, 129, 62, 1, 50, 106, 137, 205, 158, 139, 221,
	225, 225, 209, 193, 241, 251, 237, 77, 245, 197, 213, 219,
	72, 237, 56, 16, 230, 46, 237, 57, 16, 237, 56, 12,
	58, 72, 152, 183, 32, 26, 6, 20, 17, 128, 2, 237,
	56, 46, 187, 32, 35, 237, 56, 47, 186, 32, 29, 219,
	72, 230, 1, 32, 3, 5, 32, 232, 175, 50, 72, 152,
	229, 221, 229, 62, 1, 50, 106, 137, 205, 158, 139, 221,
	225, 225, 24, 25, 62, 1, 50, 72, 152, 58, 201, 129,
	237, 57, 12, 58, 202, 129, 237, 57, 13, 237, 56, 16,
	246, 17, 237, 57, 16, 209, 193, 241, 251, 237, 77, 245,
	197, 229, 213, 221, 229, 237, 56, 16, 230, 17, 237, 57,
	16, 237, 56, 20, 58, 34, 152, 246, 16, 246, 8, 211,
	68, 62, 6, 61, 32, 253, 58, 34, 152, 246, 8, 211,
	68, 58, 203, 129, 237, 57, 20, 58, 204, 129, 237, 57,
	21, 237, 56, 16, 246, 34, 237, 57, 16, 221, 225, 209,
	225, 193, 241, 251, 237, 77, 33, 2, 0, 57, 126, 230,
	3, 237, 100, 1, 40, 2, 246, 128, 230, 130, 245, 62,
	5, 211, 64, 241, 211, 64, 201, 229, 213, 243, 237, 56,
	16, 230, 46, 237, 57, 16, 237, 56, 12, 251, 70, 35,
	35, 126, 254, 175, 202, 77, 133, 254, 129, 202, 15, 133,
	230, 128, 194, 191, 132, 43, 58, 44, 152, 119, 33, 76,
	152, 119, 35, 62, 132, 119, 120, 254, 255, 40, 4, 58,
	49, 152, 119, 219, 72, 43, 43, 112, 17, 3, 0, 237,
	56, 52, 230, 248, 237, 57, 52, 219, 72, 230, 1, 194,
	141, 131, 209, 225, 237, 56, 52, 246, 6, 237, 57, 52,
	62, 1, 55, 251, 201, 62, 3, 211, 66, 62, 192, 211,
	66, 62, 48, 211, 66, 0, 0, 219, 66, 230, 1, 40,
	4, 219, 67, 24, 240, 205, 203, 135, 58, 75, 152, 254,
	255, 202, 128, 132, 58, 49, 152, 254, 161, 250, 207, 131,
	58, 34, 152, 211, 68, 62, 10, 211, 66, 62, 128, 211,
	66, 62, 11, 211, 66, 62, 6, 211, 66, 24, 0, 62,
	14, 211, 66, 62, 33, 211, 66, 62, 1, 211, 66, 62,
	64, 211, 66, 62, 3, 211, 66, 62, 209, 211, 66, 62,
	100, 71, 219, 66, 230, 1, 32, 6, 5, 32, 247, 195,
	248, 132, 219, 67, 71, 58, 44, 152, 184, 194, 248, 132,
	62, 100, 71, 219, 66, 230, 1, 32, 6, 5, 32, 247,
	195, 248, 132, 219, 67, 62, 100, 71, 219, 66, 230, 1,
	32, 6, 5, 32, 247, 195, 248, 132, 219, 67, 254, 133,
	32, 7, 62, 0, 50, 74, 152, 24, 17, 254, 173, 32,
	7, 62, 1, 50, 74, 152, 24, 6, 254, 141, 194, 248,
	132, 71, 209, 225, 58, 49, 152, 254, 132, 32, 10, 62,
	50, 205, 2, 134, 205, 144, 135, 24, 27, 254, 140, 32,
	15, 62, 110, 205, 2, 134, 62, 141, 184, 32, 5, 205,
	144, 135, 24, 8, 62, 10, 205, 2, 134, 205, 8, 134,
	62, 1, 50, 106, 137, 205, 158, 139, 237, 56, 52, 246,
	6, 237, 57, 52, 175, 183, 251, 201, 62, 20, 135, 237,
	57, 20, 175, 237, 57, 21, 237, 56, 16, 246, 2, 237,
	57, 16, 237, 56, 20, 95, 237, 56, 21, 123, 254, 10,
	48, 244, 237, 56, 16, 230, 17, 237, 57, 16, 209, 225,
	205, 144, 135, 62, 1, 50, 106, 137, 205, 158, 139, 237,
	56, 52, 246, 6, 237, 57, 52, 175, 183, 251, 201, 209,
	225, 243, 219, 72, 230, 1, 40, 13, 62, 10, 211, 66,
	0, 0, 219, 66, 230, 192, 202, 226, 132, 237, 56, 52,
	246, 6, 237, 57, 52, 62, 1, 55, 251, 201, 205, 203,
	135, 62, 1, 50, 106, 137, 205, 158, 139, 237, 56, 52,
	246, 6, 237, 57, 52, 183, 251, 201, 209, 225, 62, 1,
	50, 106, 137, 205, 158, 139, 237, 56, 52, 246, 6, 237,
	57, 52, 62, 2, 55, 251, 201, 209, 225, 243, 219, 72,
	230, 1, 202, 213, 132, 62, 10, 211, 66, 0, 0, 219,
	66, 230, 192, 194, 213, 132, 229, 62, 1, 50, 106, 137,
	42, 40, 152, 205, 65, 143, 225, 17, 3, 0, 205, 111,
	136, 62, 6, 211, 66, 58, 44, 152, 211, 66, 237, 56,
	52, 246, 6, 237, 57, 52, 183, 251, 201, 209, 197, 237,
	56, 52, 230, 248, 237, 57, 52, 219, 72, 230, 1, 32,
	15, 193, 225, 237, 56, 52, 246, 6, 237, 57, 52, 62,
	1, 55, 251, 201, 14, 23, 58, 37, 152, 254, 0, 40,
	14, 14, 2, 254, 1, 32, 5, 62, 140, 119, 24, 3,
	62, 132, 119, 43, 43, 197, 205, 203, 135, 193, 62, 1,
	211, 66, 62, 64, 211, 66, 62, 3, 211, 66, 62, 193,
	211, 66, 62, 100, 203, 39, 71, 219, 66, 230, 1, 32,
	6, 5, 32, 247, 195, 229, 133, 33, 238, 151, 219, 67,
	71, 58, 44, 152, 184, 194, 229, 133, 119, 62, 100, 71,
	219, 66, 230, 1, 32, 6, 5, 32, 247, 195, 229, 133,
	219, 67, 35, 119, 13, 32, 234, 193, 225, 62, 1, 50,
	106, 137, 205, 158, 139, 237, 56, 52, 246, 6, 237, 57,
	52, 175, 183, 251, 201, 33, 234, 151, 35, 35, 62, 255,
	119, 193, 225, 62, 1, 50, 106, 137, 205, 158, 139, 237,
	56, 52, 246, 6, 237, 57, 52, 175, 251, 201, 243, 61,
	32, 253, 251, 201, 62, 3, 211, 66, 62, 192, 211, 66,
	58, 49, 152, 254, 140, 32, 19, 197, 229, 213, 17, 181,
	129, 33, 185, 129, 1, 2, 0, 237, 176, 209, 225, 193,
	24, 27, 229, 213, 33, 187, 129, 58, 49, 152, 230, 15,
	87, 30, 2, 237, 92, 25, 17, 181, 129, 126, 18, 19,
	35, 126, 18, 209, 225, 58, 34, 152, 246, 8, 211, 68,
	58, 49, 152, 254, 165, 40, 14, 254, 164, 40, 10, 62,
	10, 211, 66, 62, 224, 211, 66, 24, 25, 58, 74, 152,
	254, 0, 40, 10, 62, 10, 211, 66, 62, 160, 211, 66,
	24, 8, 62, 10, 211, 66, 62, 128, 211, 66, 62, 11,
	211, 66, 62, 6, 211, 66, 205, 147, 143, 62, 5, 211,
	66, 62, 224, 211, 66, 62, 5, 211, 66, 62, 96, 211,
	66, 62, 5, 61, 32, 253, 62, 5, 211, 66, 62, 224,
	211, 66, 62, 14, 61, 32, 253, 62, 5, 211, 66, 62,
	233, 211, 66, 62, 128, 211, 66, 58, 181, 129, 61, 32,
	253, 62, 1, 211, 66, 62, 192, 211, 66, 1, 254, 19,
	237, 56, 46, 187, 32, 6, 13, 32, 247, 195, 226, 134,
	62, 192, 211, 66, 0, 0, 219, 66, 203, 119, 40, 250,
	219, 66, 203, 87, 40, 250, 243, 237, 56, 16, 230, 17,
	237, 57, 16, 237, 56, 20, 251, 62, 5, 211, 66, 62,
	224, 211, 66, 58, 182, 129, 61, 32, 253, 229, 33, 181,
	129, 58, 183, 129, 203, 63, 119, 35, 58, 184, 129, 119,
	225, 62, 10, 211, 66, 62, 224, 211, 66, 62, 11, 211,
	66, 62, 118, 211, 66, 62, 47, 211, 68, 62, 5, 211,
	66, 62, 233, 211, 66, 58, 181, 129, 61, 32, 253, 62,
	5, 211, 66, 62, 224, 211, 66, 58, 182, 129, 61, 32,
	253, 62, 5, 211, 66, 62, 96, 211, 66, 201, 229, 213,
	58, 50, 152, 230, 15, 87, 30, 2, 237, 92, 33, 187,
	129, 25, 17, 181, 129, 126, 18, 35, 19, 126, 18, 209,
	225, 58, 71, 152, 246, 8, 211, 68, 58, 50, 152, 254,
	165, 40, 14, 254, 164, 40, 10, 62, 10, 211, 66, 62,
	224, 211, 66, 24, 8, 62, 10, 211, 66, 62, 128, 211,
	66, 62, 11, 211, 66, 62, 6, 211, 66, 195, 248, 135,
	62, 3, 211, 66, 62, 192, 211, 66, 197, 229, 213, 17,
	181, 129, 33, 183, 129, 1, 2, 0, 237, 176, 209, 225,
	193, 62, 47, 211, 68, 62, 10, 211, 66, 62, 224, 211,
	66, 62, 11, 211, 66, 62, 118, 211, 66, 62, 1, 211,
	66, 62, 0, 211, 66, 205, 147, 143, 195, 16, 136, 62,
	3, 211, 66, 62, 192, 211, 66, 197, 229, 213, 17, 181,
	129, 33, 183, 129, 1, 2, 0, 237, 176, 209, 225, 193,
	62, 47, 211, 68, 62, 10, 211, 66, 62, 224, 211, 66,
	62, 11, 211, 66, 62, 118, 211, 66, 205, 147, 143, 62,
	5, 211, 66, 62, 224, 211, 66, 62, 5, 211, 66, 62,
	96, 211, 66, 62, 5, 61, 32, 253, 62, 5, 211, 66,
	62, 224, 211, 66, 62, 14, 61, 32, 253, 62, 5, 211,
	66, 62, 233, 211, 66, 62, 128, 211, 66, 58, 181, 129,
	61, 32, 253, 62, 1, 211, 66, 62, 192, 211, 66, 1,
	254, 19, 237, 56, 46, 187, 32, 6, 13, 32, 247, 195,
	88, 136, 62, 192, 211, 66, 0, 0, 219, 66, 203, 119,
	40, 250, 219, 66, 203, 87, 40, 250, 62, 5, 211, 66,
	62, 224, 211, 66, 58, 182, 129, 61, 32, 253, 62, 5,
	211, 66, 62, 96, 211, 66, 201, 197, 14, 67, 6, 0,
	62, 3, 211, 66, 62, 192, 211, 66, 62, 48, 211, 66,
	0, 0, 219, 66, 230, 1, 40, 4, 219, 67, 24, 240,
	62, 5, 211, 66, 62, 233, 211, 66, 62, 128, 211, 66,
	58, 181, 129, 61, 32, 253, 237, 163, 29, 62, 192, 211,
	66, 219, 66, 230, 4, 40, 250, 237, 163, 29, 32, 245,
	219, 66, 230, 4, 40, 250, 62, 255, 71, 219, 66, 230,
	4, 40, 3, 5, 32, 247, 219, 66, 230, 4, 40, 250,
	62, 5, 211, 66, 62, 224, 211, 66, 58, 182, 129, 61,
	32, 253, 62, 5, 211, 66, 62, 96, 211, 66, 58, 71,
	152, 254, 1, 202, 18, 137, 62, 16, 211, 66, 62, 56,
	211, 66, 62, 14, 211, 66, 62, 33, 211, 66, 62, 1,
	211, 66, 62, 248, 211, 66, 237, 56, 48, 246, 153, 230,
	207, 237, 57, 48, 62, 3, 211, 66, 62, 221, 211, 66,
	193, 201, 58, 71, 152, 211, 68, 62, 10, 211, 66, 62,
	128, 211, 66, 62, 11, 211, 66, 62, 6, 211, 66, 62,
	6, 211, 66, 58, 44, 152, 211, 66, 62, 16, 211, 66,
	62, 56, 211, 66, 62, 48, 211, 66, 0, 0, 62, 14,
	211, 66, 62, 33, 211, 66, 62, 1, 211, 66, 62, 248,
	211, 66, 237, 56, 48, 246, 145, 246, 8, 230, 207, 237,
	57, 48, 62, 3, 211, 66, 62, 221, 211, 66, 193, 201,
	44, 3, 1, 0, 70, 69, 1, 245, 197, 213, 229, 175,
	50, 72, 152, 237, 56, 16, 230, 46, 237, 57, 16, 237,
	56, 12, 62, 1, 211, 66, 0, 0, 219, 66, 95, 230,
	160, 32, 3, 195, 20, 139, 123, 230, 96, 194, 72, 139,
	62, 48, 211, 66, 62, 1, 211, 66, 62, 64, 211, 66,
	237, 91, 40, 152, 205, 207, 143, 25, 43, 55, 237, 82,
	218, 70, 139, 34, 42, 152, 98, 107, 58, 44, 152, 190,
	194, 210, 138, 35, 35, 62, 130, 190, 194, 200, 137, 62,
	1, 50, 48, 152, 62, 175, 190, 202, 82, 139, 62, 132,
	190, 32, 44, 50, 50, 152, 62, 47, 50, 71, 152, 229,
	175, 50, 106, 137, 42, 40, 152, 205, 65, 143, 225, 54,
	133, 43, 70, 58, 44, 152, 119, 43, 112, 17, 3, 0,
	62, 10, 205, 2, 134, 205, 111, 136, 195, 158, 138, 62,
	140, 190, 32, 19, 50, 50, 152, 58, 233, 149, 230, 4,
	202, 222, 138, 62, 1, 50, 71, 152, 195, 219, 137, 126,
	254, 160, 250, 185, 138, 254, 166, 242, 185, 138, 50, 50,
	152, 43, 126, 35, 229, 213, 33, 234, 149, 95, 22, 0,
	25, 126, 254, 132, 40, 18, 254, 140, 40, 14, 58, 50,
	152, 230, 15, 87, 126, 31, 21, 242, 65, 138, 56, 2,
	175, 119, 58, 50, 152, 230, 15, 87, 58, 233, 149, 230,
	62, 31, 21, 242, 85, 138, 218, 98, 138, 209, 225, 195,
	20, 139, 58, 50, 152, 33, 100, 137, 230, 15, 95, 22,
	0, 25, 126, 50, 71, 152, 209, 225, 58, 50, 152, 254,
	164, 250, 135, 138, 58, 73, 152, 254, 0, 40, 4, 54,
	173, 24, 2, 54, 133, 43, 70, 58, 44, 152, 119, 43,
	112, 17, 3, 0, 205, 70, 135, 175, 50, 106, 137, 205,
	208, 139, 58, 199, 129, 237, 57, 12, 58, 200, 129, 237,
	57, 13, 237, 56, 16, 246, 17, 237, 57, 16, 225, 209,
	193, 241, 251, 237, 77, 62, 129, 190, 194, 227, 138, 54,
	130, 43, 70, 58, 44, 152, 119, 43, 112, 17, 3, 0,
	205, 144, 135, 195, 20, 139, 35, 35, 126, 254, 132, 194,
	227, 138, 175, 50, 106, 137, 205, 158, 139, 24, 42, 58,
	201, 154, 254, 1, 40, 7, 62, 1, 50, 106, 137, 24,
	237, 58, 106, 137, 254, 1, 202, 222, 138, 62, 128, 166,
	194, 222, 138, 221, 229, 221, 33, 67, 152, 205, 127, 142,
	205, 109, 144, 221, 225, 225, 209, 193, 241, 251, 237, 77,
	58, 106, 137, 254, 1, 202, 44, 139, 58, 50, 152, 254,
	164, 250, 44, 139, 58, 73, 152, 238, 1, 50, 73, 152,
	221, 229, 221, 33, 51, 152, 205, 127, 142, 221, 225, 62,
	1, 50, 106, 137, 205, 158, 139, 195, 13, 139, 24, 208,
	24, 206, 24, 204, 230, 64, 40, 3, 195, 20, 139, 195,
	20, 139, 43, 126, 33, 8, 152, 119, 35, 58, 44, 152,
	119, 43, 237, 91, 35, 152, 205, 203, 135, 205, 158, 139,
	195, 13, 139, 175, 50, 78, 152, 62, 3, 211, 66, 62,
	192, 211, 66, 201, 197, 33, 4, 0, 57, 126, 35, 102,
	111, 62, 1, 50, 106, 137, 219, 72, 205, 141, 139, 193,
	201, 62, 1, 50, 78, 152, 34, 40, 152, 54, 0, 35,
	35, 54, 0, 195, 163, 139, 58, 78, 152, 183, 200, 229,
	33, 181, 129, 58, 183, 129, 119, 35, 58, 184, 129, 119,
	225, 62, 47, 211, 68, 62, 14, 211, 66, 62, 193, 211,
	66, 62, 10, 211, 66, 62, 224, 211, 66, 62, 11, 211,
	66, 62, 118, 211, 66, 195, 3, 140, 58, 78, 152, 183,
	200, 58, 71, 152, 211, 68, 254, 69, 40, 4, 254, 70,
	32, 17, 58, 73, 152, 254, 0, 40, 10, 62, 10, 211,
	66, 62, 160, 211, 66, 24, 8, 62, 10, 211, 66, 62,
	128, 211, 66, 62, 11, 211, 66, 62, 6, 211, 66, 62,
	6, 211, 66, 58, 44, 152, 211, 66, 62, 16, 211, 66,
	62, 56, 211, 66, 62, 48, 211, 66, 0, 0, 219, 66,
	230, 1, 40, 4, 219, 67, 24, 240, 62, 14, 211, 66,
	62, 33, 211, 66, 42, 40, 152, 205, 65, 143, 62, 1,
	211, 66, 62, 248, 211, 66, 237, 56, 48, 246, 145, 246,
	8, 230, 207, 237, 57, 48, 62, 3, 211, 66, 62, 221,
	211, 66, 201, 62, 16, 211, 66, 62, 56, 211, 66, 62,
	48, 211, 66, 0, 0, 219, 66, 230, 1, 40, 4, 219,
	67, 24, 240, 62, 14, 211, 66, 62, 33, 211, 66, 62,
	1, 211, 66, 62, 248, 211, 66, 237, 56, 48, 246, 153,
	230, 207, 237, 57, 48, 62, 3, 211, 66, 62, 221, 211,
	66, 201, 229, 213, 33, 234, 149, 95, 22, 0, 25, 126,
	254, 132, 40, 4, 254, 140, 32, 2, 175, 119, 123, 209,
	225, 201, 6, 8, 14, 0, 31, 48, 1, 12, 16, 250,
	121, 201, 33, 4, 0, 57, 94, 35, 86, 33, 2, 0,
	57, 126, 35, 102, 111, 221, 229, 34, 89, 152, 237, 83,
	91, 152, 221, 33, 63, 152, 205, 127, 142, 58, 81, 152,
	50, 82, 152, 58, 80, 152, 135, 50, 80, 152, 205, 162,
	140, 254, 3, 56, 16, 58, 81, 152, 135, 60, 230, 15,
	50, 81, 152, 175, 50, 80, 152, 24, 23, 58, 79, 152,
	205, 162, 140, 254, 3, 48, 13, 58, 81, 152, 203, 63,
	50, 81, 152, 62, 255, 50, 79, 152, 58, 81, 152, 50,
	82, 152, 58, 79, 152, 135, 50, 79, 152, 62, 32, 50,
	83, 152, 50, 84, 152, 237, 56, 16, 230, 17, 237, 57,
	16, 219, 72, 62, 192, 50, 93, 152, 62, 93, 50, 94,
	152, 58, 93, 152, 61, 50, 93, 152, 32, 9, 58, 94,
	152, 61, 50, 94, 152, 40, 44, 62, 170, 237, 57, 20,
	175, 237, 57, 21, 237, 56, 16, 246, 2, 237, 57, 16,
	219, 72, 230, 1, 202, 29, 141, 237, 56, 20, 71, 237,
	56, 21, 120, 254, 10, 48, 237, 237, 56, 16, 230, 17,
	237, 57, 16, 243, 62, 14, 211, 66, 62, 65, 211, 66,
	251, 58, 39, 152, 23, 23, 60, 50, 39, 152, 71, 58,
	82, 152, 160, 230, 15, 40, 22, 71, 14, 10, 219, 66,
	230, 16, 202, 186, 141, 219, 72, 230, 1, 202, 186, 141,
	13, 32, 239, 16, 235, 42, 89, 152, 237, 91, 91, 152,
	205, 47, 131, 48, 7, 61, 202, 186, 141, 195, 227, 141,
	221, 225, 33, 0, 0, 201, 221, 33, 55, 152, 205, 127,
	142, 58, 84, 152, 61, 50, 84, 152, 40, 19, 58, 82,
	152, 246, 1, 50, 82, 152, 58, 79, 152, 246, 1, 50,
	79, 152, 195, 29, 141, 221, 225, 33, 1, 0, 201, 221,
	33, 59, 152, 205, 127, 142, 58, 80, 152, 246, 1, 50,
	80, 152, 58, 82, 152, 135, 246, 1, 50, 82, 152, 58,
	83, 152, 61, 50, 83, 152, 194, 29, 141, 221, 225, 33,
	2, 0, 201, 221, 229, 33, 0, 0, 57, 17, 4, 0,
	25, 126, 50, 44, 152, 230, 128, 50, 85, 152, 58, 85,
	152, 183, 40, 6, 221, 33, 88, 2, 24, 4, 221, 33,
	150, 0, 58, 44, 152, 183, 40, 53, 60, 40, 50, 60,
	40, 47, 61, 61, 33, 86, 152, 119, 35, 119, 35, 54,
	129, 175, 50, 48, 152, 221, 43, 221, 229, 225, 124, 181,
	40, 42, 33, 86, 152, 17, 3, 0, 205, 189, 140, 17,
	232, 3, 27, 123, 178, 32, 251, 58, 48, 152, 183, 40,
	224, 58, 44, 152, 71, 62, 7, 128, 230, 127, 71, 58,
	85, 152, 176, 50, 44, 152, 24, 162, 221, 225, 201, 183,
	221, 52, 0, 192, 221, 52, 1, 192, 221, 52, 2, 192,
	221, 52, 3, 192, 55, 201, 245, 62, 1, 211, 100, 241,
	201, 245, 62, 1, 211, 96, 241, 201, 33, 2, 0, 57,
	126, 35, 102, 111, 237, 56, 48, 230, 175, 237, 57, 48,
	62, 48, 237, 57, 49, 125, 237, 57, 32, 124, 237, 57,
	33, 62, 0, 237, 57, 34, 62, 88, 237, 57, 35, 62,
	0, 237, 57, 36, 237, 57, 37, 33, 128, 2, 125, 237,
	57, 38, 124, 237, 57, 39, 237, 56, 48, 246, 97, 230,
	207, 237, 57, 48, 62, 0, 237, 57, 0, 62, 0, 211,
	96, 211, 100, 201, 33, 2, 0, 57, 126, 35, 102, 111,
	237, 56, 48, 230, 175, 237, 57, 48, 62, 12, 237, 57,
	49, 62, 76, 237, 57, 32, 62, 0, 237, 57, 33, 237,
	57, 34, 125, 237, 57, 35, 124, 237, 57, 36, 62, 0,
	237, 57, 37, 33, 128, 2, 125, 237, 57, 38, 124, 237,
	57, 39, 237, 56, 48, 246, 97, 230, 207, 237, 57, 48,
	62, 1, 211, 96, 201, 33, 2, 0, 57, 126, 35, 102,
	111, 229, 237, 56, 48, 230, 87, 237, 57, 48, 125, 237,
	57, 40, 124, 237, 57, 41, 62, 0, 237, 57, 42, 62,
	67, 237, 57, 43, 62, 0, 237, 57, 44, 58, 106, 137,
	254, 1, 32, 5, 33, 6, 0, 24, 3, 33, 128, 2,
	125, 237, 57, 46, 124, 237, 57, 47, 237, 56, 50, 230,
	252, 246, 2, 237, 57, 50, 225, 201, 33, 4, 0, 57,
	94, 35, 86, 33, 2, 0, 57, 126, 35, 102, 111, 237,
	56, 48, 230, 87, 237, 57, 48, 125, 237, 57, 40, 124,
	237, 57, 41, 62, 0, 237, 57, 42, 62, 67, 237, 57,
	43, 62, 0, 237, 57, 44, 123, 237, 57, 46, 122, 237,
	57, 47, 237, 56, 50, 230, 244, 246, 0, 237, 57, 50,
	237, 56, 48, 246, 145, 230, 207, 237, 57, 48, 201, 213,
	237, 56, 46, 95, 237, 56, 47, 87, 237, 56, 46, 111,
	237, 56, 47, 103, 183, 237, 82, 32, 235, 33, 128, 2,
	183, 237, 82, 209, 201, 213, 237, 56, 38, 95, 237, 56,
	39, 87, 237, 56, 38, 111, 237, 56, 39, 103, 183, 237,
	82, 32, 235, 33, 128, 2, 183, 237, 82, 209, 201, 245,
	197, 1, 52, 0, 237, 120, 230, 253, 237, 121, 193, 241,
	201, 245, 197, 1, 52, 0, 237, 120, 246, 2, 237, 121,
	193, 241, 201, 33, 2, 0, 57, 126, 35, 102, 111, 126,
	35, 110, 103, 201, 33, 0, 0, 34, 102, 152, 34, 96,
	152, 34, 98, 152, 33, 202, 154, 34, 104, 152, 237, 91,
	104, 152, 42, 226, 149, 183, 237, 82, 17, 0, 255, 25,
	34, 100, 152, 203, 124, 40, 6, 33, 0, 125, 34, 100,
	152, 42, 104, 152, 35, 35, 35, 229, 205, 120, 139, 193,
	201, 205, 186, 149, 229, 42, 40, 152, 35, 35, 35, 229,
	205, 39, 144, 193, 124, 230, 3, 103, 221, 117, 254, 221,
	116, 255, 237, 91, 42, 152, 35, 35, 35, 183, 237, 82,
	32, 12, 17, 5, 0, 42, 42, 152, 205, 171, 149, 242,
	169, 144, 42, 40, 152, 229, 205, 120, 139, 193, 195, 198,
	149, 237, 91, 42, 152, 42, 98, 152, 25, 34, 98, 152,
	19, 19, 19, 42, 102, 152, 25, 34, 102, 152, 237, 91,
	100, 152, 33, 158, 253, 25, 237, 91, 102, 152, 205, 171,
	149, 242, 214, 144, 33, 0, 0, 34, 102, 152, 62, 1,
	50, 95, 152, 205, 225, 144, 195, 198, 149, 58, 95, 152,
	183, 200, 237, 91, 96, 152, 42, 102, 152, 205, 171, 149,
	242, 5, 145, 237, 91, 102, 152, 33, 98, 2, 25, 237,
	91, 96, 152, 205, 171, 149, 250, 37, 145, 237, 91, 96,
	152, 42, 102, 152, 183, 237, 82, 32, 7, 42, 98, 152,
	125, 180, 40, 13, 237, 91, 102, 152, 42, 96, 152, 205,
	171, 149, 242, 58, 145, 237, 91, 104, 152, 42, 102, 152,
	25, 35, 35, 35, 229, 205, 120, 139, 193, 175, 50, 95,
	152, 201, 195, 107, 139, 205, 206, 149, 250, 255, 243, 205,
	225, 144, 251, 58, 230, 149, 183, 194, 198, 149, 17, 1,
	0, 42, 98, 152, 205, 171, 149, 250, 198, 149, 62, 1,
	50, 230, 149, 237, 91, 96, 152, 42, 104, 152, 25, 221,
	117, 252, 221, 116, 253, 237, 91, 104, 152, 42, 96, 152,
	25, 35, 35, 35, 221, 117, 254, 221, 116, 255, 35, 35,
	35, 229, 205, 39, 144, 124, 230, 3, 103, 35, 35, 35,
	221, 117, 250, 221, 116, 251, 235, 221, 110, 252, 221, 102,
	253, 115, 35, 114, 35, 54, 4, 62, 1, 211, 100, 211,
	84, 195, 198, 149, 33, 0, 0, 34, 102, 152, 34, 96,
	152, 34, 98, 152, 33, 202, 154, 34, 104, 152, 237, 91,
	104, 152, 42, 226, 149, 183, 237, 82, 17, 0, 255, 25,
	34, 100, 152, 33, 109, 152, 54, 0, 33, 107, 152, 229,
	205, 240, 142, 193, 62, 47, 50, 34, 152, 62, 132, 50,
	49, 152, 205, 241, 145, 205, 61, 145, 58, 39, 152, 60,
	50, 39, 152, 24, 241, 205, 206, 149, 251, 255, 33, 109,
	152, 126, 183, 202, 198, 149, 110, 221, 117, 251, 33, 109,
	152, 54, 0, 221, 126, 251, 254, 1, 40, 28, 254, 3,
	40, 101, 254, 4, 202, 190, 147, 254, 5, 202, 147, 147,
	254, 8, 40, 87, 33, 107, 152, 229, 205, 240, 142, 195,
	198, 149, 58, 201, 154, 183, 32, 21, 33, 111, 152, 126,
	50, 229, 149, 205, 52, 144, 33, 110, 152, 110, 38, 0,
	229, 205, 11, 142, 193, 237, 91, 96, 152, 42, 104, 152,
	25, 221, 117, 254, 221, 116, 255, 35, 35, 54, 2, 17,
	2, 0, 43, 43, 115, 35, 114, 58, 44, 152, 35, 35,
	119, 58, 228, 149, 35, 119, 62, 1, 211, 100, 211, 84,
	62, 1, 50, 201, 154, 24, 169, 205, 153, 142, 58, 231,
	149, 183, 40, 250, 175, 50, 231, 149, 33, 110, 152, 126,
	254, 255, 40, 91, 58, 233, 149, 230, 63, 183, 40, 83,
	94, 22, 0, 33, 234, 149, 25, 126, 183, 40, 13, 33,
	110, 152, 94, 33, 234, 150, 25, 126, 254, 3, 32, 36,
	205, 81, 148, 125, 180, 33, 110, 152, 94, 22, 0, 40,
	17, 33, 234, 149, 25, 54, 0, 33, 107, 152, 229, 205,
	240, 142, 193, 195, 198, 149, 33, 234, 150, 25, 54, 0,
	33, 110, 152, 94, 22, 0, 33, 234, 149, 25, 126, 50,
	49, 152, 254, 132, 32, 37, 62, 47, 50, 34, 152, 42,
	107, 152, 229, 33, 110, 152, 229, 205, 174, 140, 193, 193,
	125, 180, 33, 110, 152, 94, 22, 0, 33, 234, 150, 202,
	117, 147, 25, 52, 195, 120, 147, 58, 49, 152, 254, 140,
	32, 7, 62, 1, 50, 34, 152, 24, 210, 62, 32, 50,
	106, 152, 24, 19, 58, 49, 152, 95, 58, 106, 152, 163,
	183, 58, 106, 152, 32, 11, 203, 63, 50, 106, 152, 58,
	106, 152, 183, 32, 231, 254, 2, 40, 51, 254, 4, 40,
	38, 254, 8, 40, 26, 254, 16, 40, 13, 254, 32, 32,
	158, 62, 165, 50, 49, 152, 62, 69, 24, 190, 62, 164,
	50, 49, 152, 62, 70, 24, 181, 62, 163, 50, 49, 152,
	175, 24, 173, 62, 162, 50, 49, 152, 62, 1, 24, 164,
	62, 161, 50, 49, 152, 62, 3, 24, 155, 25, 54, 0,
	221, 126, 251, 254, 8, 40, 7, 58, 230, 149, 183, 202,
	32, 146, 33, 107, 152, 229, 205, 240, 142, 193, 211, 84,
	195, 198, 149, 237, 91, 96, 152, 42, 104, 152, 25, 221,
	117, 254, 221, 116, 255, 35, 35, 54, 6, 17, 2, 0,
	43, 43, 115, 35, 114, 58, 228, 149, 35, 35, 119, 58,
	233, 149, 35, 119, 205, 146, 142, 195, 32, 146, 237, 91,
	96, 152, 42, 104, 152, 25, 229, 205, 160, 142, 193, 58,
	231, 149, 183, 40, 250, 175, 50, 231, 149, 243, 237, 91,
	96, 152, 42, 104, 152, 25, 221, 117, 254, 221, 116, 255,
	78, 35, 70, 221, 113, 252, 221, 112, 253, 89, 80, 42,
	98, 152, 183, 237, 82, 34, 98, 152, 203, 124, 40, 19,
	33, 0, 0, 34, 98, 152, 34, 102, 152, 34, 96, 152,
	62, 1, 50, 95, 152, 24, 40, 221, 94, 252, 221, 86,
	253, 19, 19, 19, 42, 96, 152, 25, 34, 96, 152, 237,
	91, 100, 152, 33, 158, 253, 25, 237, 91, 96, 152, 205,
	171, 149, 242, 55, 148, 33, 0, 0, 34, 96, 152, 175,
	50, 230, 149, 251, 195, 32, 146, 245, 62, 1, 50, 231,
	149, 62, 16, 237, 57, 0, 211, 80, 241, 251, 237, 77,
	201, 205, 186, 149, 229, 229, 33, 0, 0, 34, 37, 152,
	33, 110, 152, 126, 50, 234, 151, 58, 44, 152, 33, 235,
	151, 119, 221, 54, 253, 0, 221, 54, 254, 0, 195, 230,
	148, 33, 236, 151, 54, 175, 33, 3, 0, 229, 33, 234,
	151, 229, 205, 174, 140, 193, 193, 33, 236, 151, 126, 254,
	255, 40, 74, 33, 245, 151, 110, 221, 117, 255, 33, 249,
	151, 126, 221, 166, 255, 221, 119, 255, 33, 253, 151, 126,
	221, 166, 255, 221, 119, 255, 58, 232, 149, 95, 221, 126,
	255, 163, 221, 119, 255, 183, 40, 15, 230, 191, 33, 110,
	152, 94, 22, 0, 33, 234, 149, 25, 119, 24, 12, 33,
	110, 152, 94, 22, 0, 33, 234, 149, 25, 54, 132, 33,
	0, 0, 195, 198, 149, 221, 110, 253, 221, 102, 254, 35,
	221, 117, 253, 221, 116, 254, 17, 32, 0, 221, 110, 253,
	221, 102, 254, 205, 171, 149, 250, 117, 148, 58, 233, 149,
	203, 87, 40, 84, 33, 1, 0, 34, 37, 152, 221, 54,
	253, 0, 221, 54, 254, 0, 24, 53, 33, 236, 151, 54,
	175, 33, 3, 0, 229, 33, 234, 151, 229, 205, 174, 140,
	193, 193, 33, 236, 151, 126, 254, 255, 40, 14, 33, 110,
	152, 94, 22, 0, 33, 234, 149, 25, 54, 140, 24, 159,
	221, 110, 253, 221, 102, 254, 35, 221, 117, 253, 221, 116,
	254, 17, 32, 0, 221, 110, 253, 221, 102, 254, 205, 171,
	149, 250, 12, 149, 33, 2, 0, 34, 37, 152, 221, 54,
	253, 0, 221, 54, 254, 0, 24, 54, 33, 236, 151, 54,
	175, 33, 3, 0, 229, 33, 234, 151, 229, 205, 174, 140,
	193, 193, 33, 236, 151, 126, 254, 255, 40, 15, 33, 110,
	152, 94, 22, 0, 33, 234, 149, 25, 54, 132, 195, 211,
	148, 221, 110, 253, 221, 102, 254, 35, 221, 117, 253, 221,
	116, 254, 17, 32, 0, 221, 110, 253, 221, 102, 254, 205,
	171, 149, 250, 96, 149, 33, 1, 0, 195, 198, 149, 124,
	170, 250, 179, 149, 237, 82, 201, 124, 230, 128, 237, 82,
	60, 201, 225, 253, 229, 221, 229, 221, 33, 0, 0, 221,
	57, 233, 221, 249, 221, 225, 253, 225, 201, 233, 225, 253,
	229, 221, 229, 221, 33, 0, 0, 221, 57, 94, 35, 86,
	35, 235, 57, 249, 235, 233, 0, 0, 0, 0, 0, 0,
	62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 133, 1, 0, 0, 0, 63,
	255, 255, 255, 255, 0, 0, 0, 63, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0
} ;

#endif
