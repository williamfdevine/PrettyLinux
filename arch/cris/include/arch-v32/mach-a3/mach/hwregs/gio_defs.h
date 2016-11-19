#ifndef __gio_defs_h
#define __gio_defs_h

/*
 * This file is autogenerated from
 *   file:           gio.r
 *
 *   by ../../../tools/rdesc/bin/rdes2c -outfile gio_defs.h gio.r
 * Any changes here will be lost.
 *
 * -*- buffer-read-only: t -*-
 */
/* Main access macros */
#ifndef REG_RD
#define REG_RD( scope, inst, reg ) \
	REG_READ( reg_##scope##_##reg, \
			  (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_WR
#define REG_WR( scope, inst, reg, val ) \
	REG_WRITE( reg_##scope##_##reg, \
			   (inst) + REG_WR_ADDR_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_VECT
#define REG_RD_VECT( scope, inst, reg, index ) \
	REG_READ( reg_##scope##_##reg, \
			  (inst) + REG_RD_ADDR_##scope##_##reg + \
			  (index) * STRIDE_##scope##_##reg )
#endif

#ifndef REG_WR_VECT
#define REG_WR_VECT( scope, inst, reg, index, val ) \
	REG_WRITE( reg_##scope##_##reg, \
			   (inst) + REG_WR_ADDR_##scope##_##reg + \
			   (index) * STRIDE_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_INT
#define REG_RD_INT( scope, inst, reg ) \
	REG_READ( int, (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_WR_INT
#define REG_WR_INT( scope, inst, reg, val ) \
	REG_WRITE( int, (inst) + REG_WR_ADDR_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_INT_VECT
#define REG_RD_INT_VECT( scope, inst, reg, index ) \
	REG_READ( int, (inst) + REG_RD_ADDR_##scope##_##reg + \
			  (index) * STRIDE_##scope##_##reg )
#endif

#ifndef REG_WR_INT_VECT
#define REG_WR_INT_VECT( scope, inst, reg, index, val ) \
	REG_WRITE( int, (inst) + REG_WR_ADDR_##scope##_##reg + \
			   (index) * STRIDE_##scope##_##reg, (val) )
#endif

#ifndef REG_TYPE_CONV
#define REG_TYPE_CONV( type, orgtype, val ) \
	( { union { orgtype o; type n; } r; r.o = val; r.n; } )
#endif

#ifndef reg_page_size
	#define reg_page_size 8192
#endif

#ifndef REG_ADDR
#define REG_ADDR( scope, inst, reg ) \
	( (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_ADDR_VECT
#define REG_ADDR_VECT( scope, inst, reg, index ) \
	( (inst) + REG_RD_ADDR_##scope##_##reg + \
	  (index) * STRIDE_##scope##_##reg )
#endif

/* C-code for register scope gio */

/* Register r_pa_din, scope gio, type r */
typedef struct
{
	unsigned int data : 32;
} reg_gio_r_pa_din;
#define REG_RD_ADDR_gio_r_pa_din 0

/* Register rw_pa_dout, scope gio, type rw */
typedef struct
{
	unsigned int data : 32;
} reg_gio_rw_pa_dout;
#define REG_RD_ADDR_gio_rw_pa_dout 4
#define REG_WR_ADDR_gio_rw_pa_dout 4

/* Register rw_pa_oe, scope gio, type rw */
typedef struct
{
	unsigned int oe : 32;
} reg_gio_rw_pa_oe;
#define REG_RD_ADDR_gio_rw_pa_oe 8
#define REG_WR_ADDR_gio_rw_pa_oe 8

/* Register rw_pa_byte0_dout, scope gio, type rw */
typedef struct
{
	unsigned int data : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pa_byte0_dout;
#define REG_RD_ADDR_gio_rw_pa_byte0_dout 12
#define REG_WR_ADDR_gio_rw_pa_byte0_dout 12

/* Register rw_pa_byte0_oe, scope gio, type rw */
typedef struct
{
	unsigned int oe : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pa_byte0_oe;
#define REG_RD_ADDR_gio_rw_pa_byte0_oe 16
#define REG_WR_ADDR_gio_rw_pa_byte0_oe 16

/* Register rw_pa_byte1_dout, scope gio, type rw */
typedef struct
{
	unsigned int data : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pa_byte1_dout;
#define REG_RD_ADDR_gio_rw_pa_byte1_dout 20
#define REG_WR_ADDR_gio_rw_pa_byte1_dout 20

/* Register rw_pa_byte1_oe, scope gio, type rw */
typedef struct
{
	unsigned int oe : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pa_byte1_oe;
#define REG_RD_ADDR_gio_rw_pa_byte1_oe 24
#define REG_WR_ADDR_gio_rw_pa_byte1_oe 24

/* Register rw_pa_byte2_dout, scope gio, type rw */
typedef struct
{
	unsigned int data : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pa_byte2_dout;
#define REG_RD_ADDR_gio_rw_pa_byte2_dout 28
#define REG_WR_ADDR_gio_rw_pa_byte2_dout 28

/* Register rw_pa_byte2_oe, scope gio, type rw */
typedef struct
{
	unsigned int oe : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pa_byte2_oe;
#define REG_RD_ADDR_gio_rw_pa_byte2_oe 32
#define REG_WR_ADDR_gio_rw_pa_byte2_oe 32

/* Register rw_pa_byte3_dout, scope gio, type rw */
typedef struct
{
	unsigned int data : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pa_byte3_dout;
#define REG_RD_ADDR_gio_rw_pa_byte3_dout 36
#define REG_WR_ADDR_gio_rw_pa_byte3_dout 36

/* Register rw_pa_byte3_oe, scope gio, type rw */
typedef struct
{
	unsigned int oe : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pa_byte3_oe;
#define REG_RD_ADDR_gio_rw_pa_byte3_oe 40
#define REG_WR_ADDR_gio_rw_pa_byte3_oe 40

/* Register r_pb_din, scope gio, type r */
typedef struct
{
	unsigned int data : 32;
} reg_gio_r_pb_din;
#define REG_RD_ADDR_gio_r_pb_din 44

/* Register rw_pb_dout, scope gio, type rw */
typedef struct
{
	unsigned int data : 32;
} reg_gio_rw_pb_dout;
#define REG_RD_ADDR_gio_rw_pb_dout 48
#define REG_WR_ADDR_gio_rw_pb_dout 48

/* Register rw_pb_oe, scope gio, type rw */
typedef struct
{
	unsigned int oe : 32;
} reg_gio_rw_pb_oe;
#define REG_RD_ADDR_gio_rw_pb_oe 52
#define REG_WR_ADDR_gio_rw_pb_oe 52

/* Register rw_pb_byte0_dout, scope gio, type rw */
typedef struct
{
	unsigned int data : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pb_byte0_dout;
#define REG_RD_ADDR_gio_rw_pb_byte0_dout 56
#define REG_WR_ADDR_gio_rw_pb_byte0_dout 56

/* Register rw_pb_byte0_oe, scope gio, type rw */
typedef struct
{
	unsigned int oe : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pb_byte0_oe;
#define REG_RD_ADDR_gio_rw_pb_byte0_oe 60
#define REG_WR_ADDR_gio_rw_pb_byte0_oe 60

/* Register rw_pb_byte1_dout, scope gio, type rw */
typedef struct
{
	unsigned int data : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pb_byte1_dout;
#define REG_RD_ADDR_gio_rw_pb_byte1_dout 64
#define REG_WR_ADDR_gio_rw_pb_byte1_dout 64

/* Register rw_pb_byte1_oe, scope gio, type rw */
typedef struct
{
	unsigned int oe : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pb_byte1_oe;
#define REG_RD_ADDR_gio_rw_pb_byte1_oe 68
#define REG_WR_ADDR_gio_rw_pb_byte1_oe 68

/* Register rw_pb_byte2_dout, scope gio, type rw */
typedef struct
{
	unsigned int data : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pb_byte2_dout;
#define REG_RD_ADDR_gio_rw_pb_byte2_dout 72
#define REG_WR_ADDR_gio_rw_pb_byte2_dout 72

/* Register rw_pb_byte2_oe, scope gio, type rw */
typedef struct
{
	unsigned int oe : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pb_byte2_oe;
#define REG_RD_ADDR_gio_rw_pb_byte2_oe 76
#define REG_WR_ADDR_gio_rw_pb_byte2_oe 76

/* Register rw_pb_byte3_dout, scope gio, type rw */
typedef struct
{
	unsigned int data : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pb_byte3_dout;
#define REG_RD_ADDR_gio_rw_pb_byte3_dout 80
#define REG_WR_ADDR_gio_rw_pb_byte3_dout 80

/* Register rw_pb_byte3_oe, scope gio, type rw */
typedef struct
{
	unsigned int oe : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pb_byte3_oe;
#define REG_RD_ADDR_gio_rw_pb_byte3_oe 84
#define REG_WR_ADDR_gio_rw_pb_byte3_oe 84

/* Register r_pc_din, scope gio, type r */
typedef struct
{
	unsigned int data : 16;
	unsigned int dummy1 : 16;
} reg_gio_r_pc_din;
#define REG_RD_ADDR_gio_r_pc_din 88

/* Register rw_pc_dout, scope gio, type rw */
typedef struct
{
	unsigned int data : 16;
	unsigned int dummy1 : 16;
} reg_gio_rw_pc_dout;
#define REG_RD_ADDR_gio_rw_pc_dout 92
#define REG_WR_ADDR_gio_rw_pc_dout 92

/* Register rw_pc_oe, scope gio, type rw */
typedef struct
{
	unsigned int oe : 16;
	unsigned int dummy1 : 16;
} reg_gio_rw_pc_oe;
#define REG_RD_ADDR_gio_rw_pc_oe 96
#define REG_WR_ADDR_gio_rw_pc_oe 96

/* Register rw_pc_byte0_dout, scope gio, type rw */
typedef struct
{
	unsigned int data : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pc_byte0_dout;
#define REG_RD_ADDR_gio_rw_pc_byte0_dout 100
#define REG_WR_ADDR_gio_rw_pc_byte0_dout 100

/* Register rw_pc_byte0_oe, scope gio, type rw */
typedef struct
{
	unsigned int oe : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pc_byte0_oe;
#define REG_RD_ADDR_gio_rw_pc_byte0_oe 104
#define REG_WR_ADDR_gio_rw_pc_byte0_oe 104

/* Register rw_pc_byte1_dout, scope gio, type rw */
typedef struct
{
	unsigned int data : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pc_byte1_dout;
#define REG_RD_ADDR_gio_rw_pc_byte1_dout 108
#define REG_WR_ADDR_gio_rw_pc_byte1_dout 108

/* Register rw_pc_byte1_oe, scope gio, type rw */
typedef struct
{
	unsigned int oe : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pc_byte1_oe;
#define REG_RD_ADDR_gio_rw_pc_byte1_oe 112
#define REG_WR_ADDR_gio_rw_pc_byte1_oe 112

/* Register r_pd_din, scope gio, type r */
typedef struct
{
	unsigned int data : 32;
} reg_gio_r_pd_din;
#define REG_RD_ADDR_gio_r_pd_din 116

/* Register rw_intr_cfg, scope gio, type rw */
typedef struct
{
	unsigned int intr0 : 3;
	unsigned int intr1 : 3;
	unsigned int intr2 : 3;
	unsigned int intr3 : 3;
	unsigned int intr4 : 3;
	unsigned int intr5 : 3;
	unsigned int intr6 : 3;
	unsigned int intr7 : 3;
	unsigned int dummy1 : 8;
} reg_gio_rw_intr_cfg;
#define REG_RD_ADDR_gio_rw_intr_cfg 120
#define REG_WR_ADDR_gio_rw_intr_cfg 120

/* Register rw_intr_pins, scope gio, type rw */
typedef struct
{
	unsigned int intr0 : 4;
	unsigned int intr1 : 4;
	unsigned int intr2 : 4;
	unsigned int intr3 : 4;
	unsigned int intr4 : 4;
	unsigned int intr5 : 4;
	unsigned int intr6 : 4;
	unsigned int intr7 : 4;
} reg_gio_rw_intr_pins;
#define REG_RD_ADDR_gio_rw_intr_pins 124
#define REG_WR_ADDR_gio_rw_intr_pins 124

/* Register rw_intr_mask, scope gio, type rw */
typedef struct
{
	unsigned int intr0     : 1;
	unsigned int intr1     : 1;
	unsigned int intr2     : 1;
	unsigned int intr3     : 1;
	unsigned int intr4     : 1;
	unsigned int intr5     : 1;
	unsigned int intr6     : 1;
	unsigned int intr7     : 1;
	unsigned int i2c0_done : 1;
	unsigned int i2c1_done : 1;
	unsigned int dummy1    : 22;
} reg_gio_rw_intr_mask;
#define REG_RD_ADDR_gio_rw_intr_mask 128
#define REG_WR_ADDR_gio_rw_intr_mask 128

/* Register rw_ack_intr, scope gio, type rw */
typedef struct
{
	unsigned int intr0     : 1;
	unsigned int intr1     : 1;
	unsigned int intr2     : 1;
	unsigned int intr3     : 1;
	unsigned int intr4     : 1;
	unsigned int intr5     : 1;
	unsigned int intr6     : 1;
	unsigned int intr7     : 1;
	unsigned int i2c0_done : 1;
	unsigned int i2c1_done : 1;
	unsigned int dummy1    : 22;
} reg_gio_rw_ack_intr;
#define REG_RD_ADDR_gio_rw_ack_intr 132
#define REG_WR_ADDR_gio_rw_ack_intr 132

/* Register r_intr, scope gio, type r */
typedef struct
{
	unsigned int intr0     : 1;
	unsigned int intr1     : 1;
	unsigned int intr2     : 1;
	unsigned int intr3     : 1;
	unsigned int intr4     : 1;
	unsigned int intr5     : 1;
	unsigned int intr6     : 1;
	unsigned int intr7     : 1;
	unsigned int i2c0_done : 1;
	unsigned int i2c1_done : 1;
	unsigned int dummy1    : 22;
} reg_gio_r_intr;
#define REG_RD_ADDR_gio_r_intr 136

/* Register r_masked_intr, scope gio, type r */
typedef struct
{
	unsigned int intr0     : 1;
	unsigned int intr1     : 1;
	unsigned int intr2     : 1;
	unsigned int intr3     : 1;
	unsigned int intr4     : 1;
	unsigned int intr5     : 1;
	unsigned int intr6     : 1;
	unsigned int intr7     : 1;
	unsigned int i2c0_done : 1;
	unsigned int i2c1_done : 1;
	unsigned int dummy1    : 22;
} reg_gio_r_masked_intr;
#define REG_RD_ADDR_gio_r_masked_intr 140

/* Register rw_i2c0_start, scope gio, type rw */
typedef struct
{
	unsigned int run : 1;
	unsigned int dummy1 : 31;
} reg_gio_rw_i2c0_start;
#define REG_RD_ADDR_gio_rw_i2c0_start 144
#define REG_WR_ADDR_gio_rw_i2c0_start 144

/* Register rw_i2c0_cfg, scope gio, type rw */
typedef struct
{
	unsigned int en        : 1;
	unsigned int bit_order : 1;
	unsigned int scl_io    : 1;
	unsigned int scl_inv   : 1;
	unsigned int sda_io    : 1;
	unsigned int sda_idle  : 1;
	unsigned int dummy1    : 26;
} reg_gio_rw_i2c0_cfg;
#define REG_RD_ADDR_gio_rw_i2c0_cfg 148
#define REG_WR_ADDR_gio_rw_i2c0_cfg 148

/* Register rw_i2c0_ctrl, scope gio, type rw */
typedef struct
{
	unsigned int trf_bits    : 6;
	unsigned int switch_dir  : 6;
	unsigned int extra_start : 3;
	unsigned int early_end   : 1;
	unsigned int start_stop  : 1;
	unsigned int ack_dir0    : 1;
	unsigned int ack_dir1    : 1;
	unsigned int ack_dir2    : 1;
	unsigned int ack_dir3    : 1;
	unsigned int ack_dir4    : 1;
	unsigned int ack_dir5    : 1;
	unsigned int ack_bit     : 1;
	unsigned int start_bit   : 1;
	unsigned int freq        : 2;
	unsigned int dummy1      : 5;
} reg_gio_rw_i2c0_ctrl;
#define REG_RD_ADDR_gio_rw_i2c0_ctrl 152
#define REG_WR_ADDR_gio_rw_i2c0_ctrl 152

/* Register rw_i2c0_data, scope gio, type rw */
typedef struct
{
	unsigned int data0 : 8;
	unsigned int data1 : 8;
	unsigned int data2 : 8;
	unsigned int data3 : 8;
} reg_gio_rw_i2c0_data;
#define REG_RD_ADDR_gio_rw_i2c0_data 156
#define REG_WR_ADDR_gio_rw_i2c0_data 156

/* Register rw_i2c0_data2, scope gio, type rw */
typedef struct
{
	unsigned int data4     : 8;
	unsigned int data5     : 8;
	unsigned int start_val : 6;
	unsigned int ack_val   : 6;
	unsigned int dummy1    : 4;
} reg_gio_rw_i2c0_data2;
#define REG_RD_ADDR_gio_rw_i2c0_data2 160
#define REG_WR_ADDR_gio_rw_i2c0_data2 160

/* Register rw_i2c1_start, scope gio, type rw */
typedef struct
{
	unsigned int run : 1;
	unsigned int dummy1 : 31;
} reg_gio_rw_i2c1_start;
#define REG_RD_ADDR_gio_rw_i2c1_start 164
#define REG_WR_ADDR_gio_rw_i2c1_start 164

/* Register rw_i2c1_cfg, scope gio, type rw */
typedef struct
{
	unsigned int en        : 1;
	unsigned int bit_order : 1;
	unsigned int scl_io    : 1;
	unsigned int scl_inv   : 1;
	unsigned int sda0_io   : 1;
	unsigned int sda0_idle : 1;
	unsigned int sda1_io   : 1;
	unsigned int sda1_idle : 1;
	unsigned int sda2_io   : 1;
	unsigned int sda2_idle : 1;
	unsigned int sda3_io   : 1;
	unsigned int sda3_idle : 1;
	unsigned int sda_sel   : 2;
	unsigned int sen_idle  : 1;
	unsigned int sen_inv   : 1;
	unsigned int sen_sel   : 2;
	unsigned int dummy1    : 14;
} reg_gio_rw_i2c1_cfg;
#define REG_RD_ADDR_gio_rw_i2c1_cfg 168
#define REG_WR_ADDR_gio_rw_i2c1_cfg 168

/* Register rw_i2c1_ctrl, scope gio, type rw */
typedef struct
{
	unsigned int trf_bits    : 6;
	unsigned int switch_dir  : 6;
	unsigned int extra_start : 3;
	unsigned int early_end   : 1;
	unsigned int start_stop  : 1;
	unsigned int ack_dir0    : 1;
	unsigned int ack_dir1    : 1;
	unsigned int ack_dir2    : 1;
	unsigned int ack_dir3    : 1;
	unsigned int ack_dir4    : 1;
	unsigned int ack_dir5    : 1;
	unsigned int ack_bit     : 1;
	unsigned int start_bit   : 1;
	unsigned int freq        : 2;
	unsigned int dummy1      : 5;
} reg_gio_rw_i2c1_ctrl;
#define REG_RD_ADDR_gio_rw_i2c1_ctrl 172
#define REG_WR_ADDR_gio_rw_i2c1_ctrl 172

/* Register rw_i2c1_data, scope gio, type rw */
typedef struct
{
	unsigned int data0 : 8;
	unsigned int data1 : 8;
	unsigned int data2 : 8;
	unsigned int data3 : 8;
} reg_gio_rw_i2c1_data;
#define REG_RD_ADDR_gio_rw_i2c1_data 176
#define REG_WR_ADDR_gio_rw_i2c1_data 176

/* Register rw_i2c1_data2, scope gio, type rw */
typedef struct
{
	unsigned int data4     : 8;
	unsigned int data5     : 8;
	unsigned int start_val : 6;
	unsigned int ack_val   : 6;
	unsigned int dummy1    : 4;
} reg_gio_rw_i2c1_data2;
#define REG_RD_ADDR_gio_rw_i2c1_data2 180
#define REG_WR_ADDR_gio_rw_i2c1_data2 180

/* Register r_ppwm_stat, scope gio, type r */
typedef struct
{
	unsigned int freq : 2;
	unsigned int dummy1 : 30;
} reg_gio_r_ppwm_stat;
#define REG_RD_ADDR_gio_r_ppwm_stat 184

/* Register rw_ppwm_data, scope gio, type rw */
typedef struct
{
	unsigned int data : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_ppwm_data;
#define REG_RD_ADDR_gio_rw_ppwm_data 188
#define REG_WR_ADDR_gio_rw_ppwm_data 188

/* Register rw_pwm0_ctrl, scope gio, type rw */
typedef struct
{
	unsigned int mode         : 2;
	unsigned int ccd_override : 1;
	unsigned int ccd_val      : 1;
	unsigned int dummy1       : 28;
} reg_gio_rw_pwm0_ctrl;
#define REG_RD_ADDR_gio_rw_pwm0_ctrl 192
#define REG_WR_ADDR_gio_rw_pwm0_ctrl 192

/* Register rw_pwm0_var, scope gio, type rw */
typedef struct
{
	unsigned int lo : 13;
	unsigned int hi : 13;
	unsigned int dummy1 : 6;
} reg_gio_rw_pwm0_var;
#define REG_RD_ADDR_gio_rw_pwm0_var 196
#define REG_WR_ADDR_gio_rw_pwm0_var 196

/* Register rw_pwm0_data, scope gio, type rw */
typedef struct
{
	unsigned int data : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pwm0_data;
#define REG_RD_ADDR_gio_rw_pwm0_data 200
#define REG_WR_ADDR_gio_rw_pwm0_data 200

/* Register rw_pwm1_ctrl, scope gio, type rw */
typedef struct
{
	unsigned int mode         : 2;
	unsigned int ccd_override : 1;
	unsigned int ccd_val      : 1;
	unsigned int dummy1       : 28;
} reg_gio_rw_pwm1_ctrl;
#define REG_RD_ADDR_gio_rw_pwm1_ctrl 204
#define REG_WR_ADDR_gio_rw_pwm1_ctrl 204

/* Register rw_pwm1_var, scope gio, type rw */
typedef struct
{
	unsigned int lo : 13;
	unsigned int hi : 13;
	unsigned int dummy1 : 6;
} reg_gio_rw_pwm1_var;
#define REG_RD_ADDR_gio_rw_pwm1_var 208
#define REG_WR_ADDR_gio_rw_pwm1_var 208

/* Register rw_pwm1_data, scope gio, type rw */
typedef struct
{
	unsigned int data : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pwm1_data;
#define REG_RD_ADDR_gio_rw_pwm1_data 212
#define REG_WR_ADDR_gio_rw_pwm1_data 212

/* Register rw_pwm2_ctrl, scope gio, type rw */
typedef struct
{
	unsigned int mode         : 2;
	unsigned int ccd_override : 1;
	unsigned int ccd_val      : 1;
	unsigned int dummy1       : 28;
} reg_gio_rw_pwm2_ctrl;
#define REG_RD_ADDR_gio_rw_pwm2_ctrl 216
#define REG_WR_ADDR_gio_rw_pwm2_ctrl 216

/* Register rw_pwm2_var, scope gio, type rw */
typedef struct
{
	unsigned int lo : 13;
	unsigned int hi : 13;
	unsigned int dummy1 : 6;
} reg_gio_rw_pwm2_var;
#define REG_RD_ADDR_gio_rw_pwm2_var 220
#define REG_WR_ADDR_gio_rw_pwm2_var 220

/* Register rw_pwm2_data, scope gio, type rw */
typedef struct
{
	unsigned int data : 8;
	unsigned int dummy1 : 24;
} reg_gio_rw_pwm2_data;
#define REG_RD_ADDR_gio_rw_pwm2_data 224
#define REG_WR_ADDR_gio_rw_pwm2_data 224

/* Register rw_pwm_in_cfg, scope gio, type rw */
typedef struct
{
	unsigned int pin : 3;
	unsigned int dummy1 : 29;
} reg_gio_rw_pwm_in_cfg;
#define REG_RD_ADDR_gio_rw_pwm_in_cfg 228
#define REG_WR_ADDR_gio_rw_pwm_in_cfg 228

/* Register r_pwm_in_lo, scope gio, type r */
typedef struct
{
	unsigned int data : 32;
} reg_gio_r_pwm_in_lo;
#define REG_RD_ADDR_gio_r_pwm_in_lo 232

/* Register r_pwm_in_hi, scope gio, type r */
typedef struct
{
	unsigned int data : 32;
} reg_gio_r_pwm_in_hi;
#define REG_RD_ADDR_gio_r_pwm_in_hi 236

/* Register r_pwm_in_cnt, scope gio, type r */
typedef struct
{
	unsigned int data : 32;
} reg_gio_r_pwm_in_cnt;
#define REG_RD_ADDR_gio_r_pwm_in_cnt 240


/* Constants */
enum
{
	regk_gio_anyedge                         = 0x00000007,
	regk_gio_f100k                           = 0x00000000,
	regk_gio_f1562                           = 0x00000000,
	regk_gio_f195                            = 0x00000003,
	regk_gio_f1m                             = 0x00000002,
	regk_gio_f390                            = 0x00000002,
	regk_gio_f400k                           = 0x00000001,
	regk_gio_f5m                             = 0x00000003,
	regk_gio_f781                            = 0x00000001,
	regk_gio_hi                              = 0x00000001,
	regk_gio_in                              = 0x00000000,
	regk_gio_intr_pa0                        = 0x00000000,
	regk_gio_intr_pa1                        = 0x00000000,
	regk_gio_intr_pa10                       = 0x00000001,
	regk_gio_intr_pa11                       = 0x00000001,
	regk_gio_intr_pa12                       = 0x00000001,
	regk_gio_intr_pa13                       = 0x00000001,
	regk_gio_intr_pa14                       = 0x00000001,
	regk_gio_intr_pa15                       = 0x00000001,
	regk_gio_intr_pa16                       = 0x00000002,
	regk_gio_intr_pa17                       = 0x00000002,
	regk_gio_intr_pa18                       = 0x00000002,
	regk_gio_intr_pa19                       = 0x00000002,
	regk_gio_intr_pa2                        = 0x00000000,
	regk_gio_intr_pa20                       = 0x00000002,
	regk_gio_intr_pa21                       = 0x00000002,
	regk_gio_intr_pa22                       = 0x00000002,
	regk_gio_intr_pa23                       = 0x00000002,
	regk_gio_intr_pa24                       = 0x00000003,
	regk_gio_intr_pa25                       = 0x00000003,
	regk_gio_intr_pa26                       = 0x00000003,
	regk_gio_intr_pa27                       = 0x00000003,
	regk_gio_intr_pa28                       = 0x00000003,
	regk_gio_intr_pa29                       = 0x00000003,
	regk_gio_intr_pa3                        = 0x00000000,
	regk_gio_intr_pa30                       = 0x00000003,
	regk_gio_intr_pa31                       = 0x00000003,
	regk_gio_intr_pa4                        = 0x00000000,
	regk_gio_intr_pa5                        = 0x00000000,
	regk_gio_intr_pa6                        = 0x00000000,
	regk_gio_intr_pa7                        = 0x00000000,
	regk_gio_intr_pa8                        = 0x00000001,
	regk_gio_intr_pa9                        = 0x00000001,
	regk_gio_intr_pb0                        = 0x00000004,
	regk_gio_intr_pb1                        = 0x00000004,
	regk_gio_intr_pb10                       = 0x00000005,
	regk_gio_intr_pb11                       = 0x00000005,
	regk_gio_intr_pb12                       = 0x00000005,
	regk_gio_intr_pb13                       = 0x00000005,
	regk_gio_intr_pb14                       = 0x00000005,
	regk_gio_intr_pb15                       = 0x00000005,
	regk_gio_intr_pb16                       = 0x00000006,
	regk_gio_intr_pb17                       = 0x00000006,
	regk_gio_intr_pb18                       = 0x00000006,
	regk_gio_intr_pb19                       = 0x00000006,
	regk_gio_intr_pb2                        = 0x00000004,
	regk_gio_intr_pb20                       = 0x00000006,
	regk_gio_intr_pb21                       = 0x00000006,
	regk_gio_intr_pb22                       = 0x00000006,
	regk_gio_intr_pb23                       = 0x00000006,
	regk_gio_intr_pb24                       = 0x00000007,
	regk_gio_intr_pb25                       = 0x00000007,
	regk_gio_intr_pb26                       = 0x00000007,
	regk_gio_intr_pb27                       = 0x00000007,
	regk_gio_intr_pb28                       = 0x00000007,
	regk_gio_intr_pb29                       = 0x00000007,
	regk_gio_intr_pb3                        = 0x00000004,
	regk_gio_intr_pb30                       = 0x00000007,
	regk_gio_intr_pb31                       = 0x00000007,
	regk_gio_intr_pb4                        = 0x00000004,
	regk_gio_intr_pb5                        = 0x00000004,
	regk_gio_intr_pb6                        = 0x00000004,
	regk_gio_intr_pb7                        = 0x00000004,
	regk_gio_intr_pb8                        = 0x00000005,
	regk_gio_intr_pb9                        = 0x00000005,
	regk_gio_intr_pc0                        = 0x00000008,
	regk_gio_intr_pc1                        = 0x00000008,
	regk_gio_intr_pc10                       = 0x00000009,
	regk_gio_intr_pc11                       = 0x00000009,
	regk_gio_intr_pc12                       = 0x00000009,
	regk_gio_intr_pc13                       = 0x00000009,
	regk_gio_intr_pc14                       = 0x00000009,
	regk_gio_intr_pc15                       = 0x00000009,
	regk_gio_intr_pc2                        = 0x00000008,
	regk_gio_intr_pc3                        = 0x00000008,
	regk_gio_intr_pc4                        = 0x00000008,
	regk_gio_intr_pc5                        = 0x00000008,
	regk_gio_intr_pc6                        = 0x00000008,
	regk_gio_intr_pc7                        = 0x00000008,
	regk_gio_intr_pc8                        = 0x00000009,
	regk_gio_intr_pc9                        = 0x00000009,
	regk_gio_intr_pd0                        = 0x0000000c,
	regk_gio_intr_pd1                        = 0x0000000c,
	regk_gio_intr_pd10                       = 0x0000000d,
	regk_gio_intr_pd11                       = 0x0000000d,
	regk_gio_intr_pd12                       = 0x0000000d,
	regk_gio_intr_pd13                       = 0x0000000d,
	regk_gio_intr_pd14                       = 0x0000000d,
	regk_gio_intr_pd15                       = 0x0000000d,
	regk_gio_intr_pd16                       = 0x0000000e,
	regk_gio_intr_pd17                       = 0x0000000e,
	regk_gio_intr_pd18                       = 0x0000000e,
	regk_gio_intr_pd19                       = 0x0000000e,
	regk_gio_intr_pd2                        = 0x0000000c,
	regk_gio_intr_pd20                       = 0x0000000e,
	regk_gio_intr_pd21                       = 0x0000000e,
	regk_gio_intr_pd22                       = 0x0000000e,
	regk_gio_intr_pd23                       = 0x0000000e,
	regk_gio_intr_pd24                       = 0x0000000f,
	regk_gio_intr_pd25                       = 0x0000000f,
	regk_gio_intr_pd26                       = 0x0000000f,
	regk_gio_intr_pd27                       = 0x0000000f,
	regk_gio_intr_pd28                       = 0x0000000f,
	regk_gio_intr_pd29                       = 0x0000000f,
	regk_gio_intr_pd3                        = 0x0000000c,
	regk_gio_intr_pd30                       = 0x0000000f,
	regk_gio_intr_pd31                       = 0x0000000f,
	regk_gio_intr_pd4                        = 0x0000000c,
	regk_gio_intr_pd5                        = 0x0000000c,
	regk_gio_intr_pd6                        = 0x0000000c,
	regk_gio_intr_pd7                        = 0x0000000c,
	regk_gio_intr_pd8                        = 0x0000000d,
	regk_gio_intr_pd9                        = 0x0000000d,
	regk_gio_lo                              = 0x00000002,
	regk_gio_lsb                             = 0x00000000,
	regk_gio_msb                             = 0x00000001,
	regk_gio_negedge                         = 0x00000006,
	regk_gio_no                              = 0x00000000,
	regk_gio_no_switch                       = 0x0000003f,
	regk_gio_none                            = 0x00000007,
	regk_gio_off                             = 0x00000000,
	regk_gio_opendrain                       = 0x00000000,
	regk_gio_out                             = 0x00000001,
	regk_gio_posedge                         = 0x00000005,
	regk_gio_pwm_hfp                         = 0x00000002,
	regk_gio_pwm_pa0                         = 0x00000001,
	regk_gio_pwm_pa19                        = 0x00000004,
	regk_gio_pwm_pa6                         = 0x00000002,
	regk_gio_pwm_pa7                         = 0x00000003,
	regk_gio_pwm_pb26                        = 0x00000005,
	regk_gio_pwm_pd23                        = 0x00000006,
	regk_gio_pwm_pd31                        = 0x00000007,
	regk_gio_pwm_std                         = 0x00000001,
	regk_gio_pwm_var                         = 0x00000003,
	regk_gio_rw_i2c0_cfg_default             = 0x00000020,
	regk_gio_rw_i2c0_ctrl_default            = 0x00010000,
	regk_gio_rw_i2c0_start_default           = 0x00000000,
	regk_gio_rw_i2c1_cfg_default             = 0x00000aa0,
	regk_gio_rw_i2c1_ctrl_default            = 0x00010000,
	regk_gio_rw_i2c1_start_default           = 0x00000000,
	regk_gio_rw_intr_cfg_default             = 0x00000000,
	regk_gio_rw_intr_mask_default            = 0x00000000,
	regk_gio_rw_pa_oe_default                = 0x00000000,
	regk_gio_rw_pb_oe_default                = 0x00000000,
	regk_gio_rw_pc_oe_default                = 0x00000000,
	regk_gio_rw_ppwm_data_default            = 0x00000000,
	regk_gio_rw_pwm0_ctrl_default            = 0x00000000,
	regk_gio_rw_pwm1_ctrl_default            = 0x00000000,
	regk_gio_rw_pwm2_ctrl_default            = 0x00000000,
	regk_gio_rw_pwm_in_cfg_default           = 0x00000000,
	regk_gio_sda0                            = 0x00000000,
	regk_gio_sda1                            = 0x00000001,
	regk_gio_sda2                            = 0x00000002,
	regk_gio_sda3                            = 0x00000003,
	regk_gio_sen                             = 0x00000000,
	regk_gio_set                             = 0x00000003,
	regk_gio_yes                             = 0x00000001
};
#endif /* __gio_defs_h */
