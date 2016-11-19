#ifndef __iop_fifo_in_extra_defs_asm_h
#define __iop_fifo_in_extra_defs_asm_h

/*
 * This file is autogenerated from
 *   file:           ../../inst/io_proc/rtl/iop_fifo_in_extra.r
 *     id:           <not found>
 *     last modfied: Mon Apr 11 16:10:08 2005
 *
 *   by /n/asic/design/tools/rdesc/src/rdes2c -asm --outfile asm/iop_fifo_in_extra_defs_asm.h ../../inst/io_proc/rtl/iop_fifo_in_extra.r
 *      id: $Id: iop_fifo_in_extra_defs_asm.h,v 1.1 2005/04/24 18:31:06 starvik Exp $
 * Any changes here will be lost.
 *
 * -*- buffer-read-only: t -*-
 */

#ifndef REG_FIELD
#define REG_FIELD( scope, reg, field, value ) \
	REG_FIELD_X_( value, reg_##scope##_##reg##___##field##___lsb )
#define REG_FIELD_X_( value, shift ) ((value) << shift)
#endif

#ifndef REG_STATE
#define REG_STATE( scope, reg, field, symbolic_value ) \
	REG_STATE_X_( regk_##scope##_##symbolic_value, reg_##scope##_##reg##___##field##___lsb )
#define REG_STATE_X_( k, shift ) (k << shift)
#endif

#ifndef REG_MASK
#define REG_MASK( scope, reg, field ) \
	REG_MASK_X_( reg_##scope##_##reg##___##field##___width, reg_##scope##_##reg##___##field##___lsb )
#define REG_MASK_X_( width, lsb ) (((1 << width)-1) << lsb)
#endif

#ifndef REG_LSB
	#define REG_LSB( scope, reg, field ) reg_##scope##_##reg##___##field##___lsb
#endif

#ifndef REG_BIT
	#define REG_BIT( scope, reg, field ) reg_##scope##_##reg##___##field##___bit
#endif

#ifndef REG_ADDR
	#define REG_ADDR( scope, inst, reg ) REG_ADDR_X_(inst, reg_##scope##_##reg##_offset)
	#define REG_ADDR_X_( inst, offs ) ((inst) + offs)
#endif

#ifndef REG_ADDR_VECT
#define REG_ADDR_VECT( scope, inst, reg, index ) \
	REG_ADDR_VECT_X_(inst, reg_##scope##_##reg##_offset, index, \
					 STRIDE_##scope##_##reg )
#define REG_ADDR_VECT_X_( inst, offs, index, stride ) \
	((inst) + offs + (index) * stride)
#endif

/* Register rw_wr_data, scope iop_fifo_in_extra, type rw */
#define reg_iop_fifo_in_extra_rw_wr_data_offset 0

/* Register r_stat, scope iop_fifo_in_extra, type r */
#define reg_iop_fifo_in_extra_r_stat___avail_bytes___lsb 0
#define reg_iop_fifo_in_extra_r_stat___avail_bytes___width 4
#define reg_iop_fifo_in_extra_r_stat___last___lsb 4
#define reg_iop_fifo_in_extra_r_stat___last___width 8
#define reg_iop_fifo_in_extra_r_stat___dif_in_en___lsb 12
#define reg_iop_fifo_in_extra_r_stat___dif_in_en___width 1
#define reg_iop_fifo_in_extra_r_stat___dif_in_en___bit 12
#define reg_iop_fifo_in_extra_r_stat___dif_out_en___lsb 13
#define reg_iop_fifo_in_extra_r_stat___dif_out_en___width 1
#define reg_iop_fifo_in_extra_r_stat___dif_out_en___bit 13
#define reg_iop_fifo_in_extra_r_stat_offset 4

/* Register rw_strb_dif_in, scope iop_fifo_in_extra, type rw */
#define reg_iop_fifo_in_extra_rw_strb_dif_in___last___lsb 0
#define reg_iop_fifo_in_extra_rw_strb_dif_in___last___width 2
#define reg_iop_fifo_in_extra_rw_strb_dif_in_offset 8

/* Register rw_intr_mask, scope iop_fifo_in_extra, type rw */
#define reg_iop_fifo_in_extra_rw_intr_mask___urun___lsb 0
#define reg_iop_fifo_in_extra_rw_intr_mask___urun___width 1
#define reg_iop_fifo_in_extra_rw_intr_mask___urun___bit 0
#define reg_iop_fifo_in_extra_rw_intr_mask___last_data___lsb 1
#define reg_iop_fifo_in_extra_rw_intr_mask___last_data___width 1
#define reg_iop_fifo_in_extra_rw_intr_mask___last_data___bit 1
#define reg_iop_fifo_in_extra_rw_intr_mask___dav___lsb 2
#define reg_iop_fifo_in_extra_rw_intr_mask___dav___width 1
#define reg_iop_fifo_in_extra_rw_intr_mask___dav___bit 2
#define reg_iop_fifo_in_extra_rw_intr_mask___avail___lsb 3
#define reg_iop_fifo_in_extra_rw_intr_mask___avail___width 1
#define reg_iop_fifo_in_extra_rw_intr_mask___avail___bit 3
#define reg_iop_fifo_in_extra_rw_intr_mask___orun___lsb 4
#define reg_iop_fifo_in_extra_rw_intr_mask___orun___width 1
#define reg_iop_fifo_in_extra_rw_intr_mask___orun___bit 4
#define reg_iop_fifo_in_extra_rw_intr_mask_offset 12

/* Register rw_ack_intr, scope iop_fifo_in_extra, type rw */
#define reg_iop_fifo_in_extra_rw_ack_intr___urun___lsb 0
#define reg_iop_fifo_in_extra_rw_ack_intr___urun___width 1
#define reg_iop_fifo_in_extra_rw_ack_intr___urun___bit 0
#define reg_iop_fifo_in_extra_rw_ack_intr___last_data___lsb 1
#define reg_iop_fifo_in_extra_rw_ack_intr___last_data___width 1
#define reg_iop_fifo_in_extra_rw_ack_intr___last_data___bit 1
#define reg_iop_fifo_in_extra_rw_ack_intr___dav___lsb 2
#define reg_iop_fifo_in_extra_rw_ack_intr___dav___width 1
#define reg_iop_fifo_in_extra_rw_ack_intr___dav___bit 2
#define reg_iop_fifo_in_extra_rw_ack_intr___avail___lsb 3
#define reg_iop_fifo_in_extra_rw_ack_intr___avail___width 1
#define reg_iop_fifo_in_extra_rw_ack_intr___avail___bit 3
#define reg_iop_fifo_in_extra_rw_ack_intr___orun___lsb 4
#define reg_iop_fifo_in_extra_rw_ack_intr___orun___width 1
#define reg_iop_fifo_in_extra_rw_ack_intr___orun___bit 4
#define reg_iop_fifo_in_extra_rw_ack_intr_offset 16

/* Register r_intr, scope iop_fifo_in_extra, type r */
#define reg_iop_fifo_in_extra_r_intr___urun___lsb 0
#define reg_iop_fifo_in_extra_r_intr___urun___width 1
#define reg_iop_fifo_in_extra_r_intr___urun___bit 0
#define reg_iop_fifo_in_extra_r_intr___last_data___lsb 1
#define reg_iop_fifo_in_extra_r_intr___last_data___width 1
#define reg_iop_fifo_in_extra_r_intr___last_data___bit 1
#define reg_iop_fifo_in_extra_r_intr___dav___lsb 2
#define reg_iop_fifo_in_extra_r_intr___dav___width 1
#define reg_iop_fifo_in_extra_r_intr___dav___bit 2
#define reg_iop_fifo_in_extra_r_intr___avail___lsb 3
#define reg_iop_fifo_in_extra_r_intr___avail___width 1
#define reg_iop_fifo_in_extra_r_intr___avail___bit 3
#define reg_iop_fifo_in_extra_r_intr___orun___lsb 4
#define reg_iop_fifo_in_extra_r_intr___orun___width 1
#define reg_iop_fifo_in_extra_r_intr___orun___bit 4
#define reg_iop_fifo_in_extra_r_intr_offset 20

/* Register r_masked_intr, scope iop_fifo_in_extra, type r */
#define reg_iop_fifo_in_extra_r_masked_intr___urun___lsb 0
#define reg_iop_fifo_in_extra_r_masked_intr___urun___width 1
#define reg_iop_fifo_in_extra_r_masked_intr___urun___bit 0
#define reg_iop_fifo_in_extra_r_masked_intr___last_data___lsb 1
#define reg_iop_fifo_in_extra_r_masked_intr___last_data___width 1
#define reg_iop_fifo_in_extra_r_masked_intr___last_data___bit 1
#define reg_iop_fifo_in_extra_r_masked_intr___dav___lsb 2
#define reg_iop_fifo_in_extra_r_masked_intr___dav___width 1
#define reg_iop_fifo_in_extra_r_masked_intr___dav___bit 2
#define reg_iop_fifo_in_extra_r_masked_intr___avail___lsb 3
#define reg_iop_fifo_in_extra_r_masked_intr___avail___width 1
#define reg_iop_fifo_in_extra_r_masked_intr___avail___bit 3
#define reg_iop_fifo_in_extra_r_masked_intr___orun___lsb 4
#define reg_iop_fifo_in_extra_r_masked_intr___orun___width 1
#define reg_iop_fifo_in_extra_r_masked_intr___orun___bit 4
#define reg_iop_fifo_in_extra_r_masked_intr_offset 24


/* Constants */
#define regk_iop_fifo_in_extra_fifo_in            0x00000002
#define regk_iop_fifo_in_extra_no                 0x00000000
#define regk_iop_fifo_in_extra_rw_intr_mask_default  0x00000000
#define regk_iop_fifo_in_extra_yes                0x00000001
#endif /* __iop_fifo_in_extra_defs_asm_h */
