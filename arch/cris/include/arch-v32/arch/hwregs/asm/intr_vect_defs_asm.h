#ifndef __intr_vect_defs_asm_h
#define __intr_vect_defs_asm_h

/*
 * This file is autogenerated from
 *   file:           ../../inst/intr_vect/rtl/guinness/ivmask.config.r
 *     id:           ivmask.config.r,v 1.4 2005/02/15 16:05:38 stefans Exp
 *     last modfied: Mon Apr 11 16:08:03 2005
 *
 *   by /n/asic/design/tools/rdesc/src/rdes2c -asm --outfile asm/intr_vect_defs_asm.h ../../inst/intr_vect/rtl/guinness/ivmask.config.r
 *      id: $Id: intr_vect_defs_asm.h,v 1.1 2005/04/24 18:31:04 starvik Exp $
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

/* Register rw_mask, scope intr_vect, type rw */
#define reg_intr_vect_rw_mask___memarb___lsb 0
#define reg_intr_vect_rw_mask___memarb___width 1
#define reg_intr_vect_rw_mask___memarb___bit 0
#define reg_intr_vect_rw_mask___gen_io___lsb 1
#define reg_intr_vect_rw_mask___gen_io___width 1
#define reg_intr_vect_rw_mask___gen_io___bit 1
#define reg_intr_vect_rw_mask___iop0___lsb 2
#define reg_intr_vect_rw_mask___iop0___width 1
#define reg_intr_vect_rw_mask___iop0___bit 2
#define reg_intr_vect_rw_mask___iop1___lsb 3
#define reg_intr_vect_rw_mask___iop1___width 1
#define reg_intr_vect_rw_mask___iop1___bit 3
#define reg_intr_vect_rw_mask___iop2___lsb 4
#define reg_intr_vect_rw_mask___iop2___width 1
#define reg_intr_vect_rw_mask___iop2___bit 4
#define reg_intr_vect_rw_mask___iop3___lsb 5
#define reg_intr_vect_rw_mask___iop3___width 1
#define reg_intr_vect_rw_mask___iop3___bit 5
#define reg_intr_vect_rw_mask___dma0___lsb 6
#define reg_intr_vect_rw_mask___dma0___width 1
#define reg_intr_vect_rw_mask___dma0___bit 6
#define reg_intr_vect_rw_mask___dma1___lsb 7
#define reg_intr_vect_rw_mask___dma1___width 1
#define reg_intr_vect_rw_mask___dma1___bit 7
#define reg_intr_vect_rw_mask___dma2___lsb 8
#define reg_intr_vect_rw_mask___dma2___width 1
#define reg_intr_vect_rw_mask___dma2___bit 8
#define reg_intr_vect_rw_mask___dma3___lsb 9
#define reg_intr_vect_rw_mask___dma3___width 1
#define reg_intr_vect_rw_mask___dma3___bit 9
#define reg_intr_vect_rw_mask___dma4___lsb 10
#define reg_intr_vect_rw_mask___dma4___width 1
#define reg_intr_vect_rw_mask___dma4___bit 10
#define reg_intr_vect_rw_mask___dma5___lsb 11
#define reg_intr_vect_rw_mask___dma5___width 1
#define reg_intr_vect_rw_mask___dma5___bit 11
#define reg_intr_vect_rw_mask___dma6___lsb 12
#define reg_intr_vect_rw_mask___dma6___width 1
#define reg_intr_vect_rw_mask___dma6___bit 12
#define reg_intr_vect_rw_mask___dma7___lsb 13
#define reg_intr_vect_rw_mask___dma7___width 1
#define reg_intr_vect_rw_mask___dma7___bit 13
#define reg_intr_vect_rw_mask___dma8___lsb 14
#define reg_intr_vect_rw_mask___dma8___width 1
#define reg_intr_vect_rw_mask___dma8___bit 14
#define reg_intr_vect_rw_mask___dma9___lsb 15
#define reg_intr_vect_rw_mask___dma9___width 1
#define reg_intr_vect_rw_mask___dma9___bit 15
#define reg_intr_vect_rw_mask___ata___lsb 16
#define reg_intr_vect_rw_mask___ata___width 1
#define reg_intr_vect_rw_mask___ata___bit 16
#define reg_intr_vect_rw_mask___sser0___lsb 17
#define reg_intr_vect_rw_mask___sser0___width 1
#define reg_intr_vect_rw_mask___sser0___bit 17
#define reg_intr_vect_rw_mask___sser1___lsb 18
#define reg_intr_vect_rw_mask___sser1___width 1
#define reg_intr_vect_rw_mask___sser1___bit 18
#define reg_intr_vect_rw_mask___ser0___lsb 19
#define reg_intr_vect_rw_mask___ser0___width 1
#define reg_intr_vect_rw_mask___ser0___bit 19
#define reg_intr_vect_rw_mask___ser1___lsb 20
#define reg_intr_vect_rw_mask___ser1___width 1
#define reg_intr_vect_rw_mask___ser1___bit 20
#define reg_intr_vect_rw_mask___ser2___lsb 21
#define reg_intr_vect_rw_mask___ser2___width 1
#define reg_intr_vect_rw_mask___ser2___bit 21
#define reg_intr_vect_rw_mask___ser3___lsb 22
#define reg_intr_vect_rw_mask___ser3___width 1
#define reg_intr_vect_rw_mask___ser3___bit 22
#define reg_intr_vect_rw_mask___p21___lsb 23
#define reg_intr_vect_rw_mask___p21___width 1
#define reg_intr_vect_rw_mask___p21___bit 23
#define reg_intr_vect_rw_mask___eth0___lsb 24
#define reg_intr_vect_rw_mask___eth0___width 1
#define reg_intr_vect_rw_mask___eth0___bit 24
#define reg_intr_vect_rw_mask___eth1___lsb 25
#define reg_intr_vect_rw_mask___eth1___width 1
#define reg_intr_vect_rw_mask___eth1___bit 25
#define reg_intr_vect_rw_mask___timer___lsb 26
#define reg_intr_vect_rw_mask___timer___width 1
#define reg_intr_vect_rw_mask___timer___bit 26
#define reg_intr_vect_rw_mask___bif_arb___lsb 27
#define reg_intr_vect_rw_mask___bif_arb___width 1
#define reg_intr_vect_rw_mask___bif_arb___bit 27
#define reg_intr_vect_rw_mask___bif_dma___lsb 28
#define reg_intr_vect_rw_mask___bif_dma___width 1
#define reg_intr_vect_rw_mask___bif_dma___bit 28
#define reg_intr_vect_rw_mask___ext___lsb 29
#define reg_intr_vect_rw_mask___ext___width 1
#define reg_intr_vect_rw_mask___ext___bit 29
#define reg_intr_vect_rw_mask_offset 0

/* Register r_vect, scope intr_vect, type r */
#define reg_intr_vect_r_vect___memarb___lsb 0
#define reg_intr_vect_r_vect___memarb___width 1
#define reg_intr_vect_r_vect___memarb___bit 0
#define reg_intr_vect_r_vect___gen_io___lsb 1
#define reg_intr_vect_r_vect___gen_io___width 1
#define reg_intr_vect_r_vect___gen_io___bit 1
#define reg_intr_vect_r_vect___iop0___lsb 2
#define reg_intr_vect_r_vect___iop0___width 1
#define reg_intr_vect_r_vect___iop0___bit 2
#define reg_intr_vect_r_vect___iop1___lsb 3
#define reg_intr_vect_r_vect___iop1___width 1
#define reg_intr_vect_r_vect___iop1___bit 3
#define reg_intr_vect_r_vect___iop2___lsb 4
#define reg_intr_vect_r_vect___iop2___width 1
#define reg_intr_vect_r_vect___iop2___bit 4
#define reg_intr_vect_r_vect___iop3___lsb 5
#define reg_intr_vect_r_vect___iop3___width 1
#define reg_intr_vect_r_vect___iop3___bit 5
#define reg_intr_vect_r_vect___dma0___lsb 6
#define reg_intr_vect_r_vect___dma0___width 1
#define reg_intr_vect_r_vect___dma0___bit 6
#define reg_intr_vect_r_vect___dma1___lsb 7
#define reg_intr_vect_r_vect___dma1___width 1
#define reg_intr_vect_r_vect___dma1___bit 7
#define reg_intr_vect_r_vect___dma2___lsb 8
#define reg_intr_vect_r_vect___dma2___width 1
#define reg_intr_vect_r_vect___dma2___bit 8
#define reg_intr_vect_r_vect___dma3___lsb 9
#define reg_intr_vect_r_vect___dma3___width 1
#define reg_intr_vect_r_vect___dma3___bit 9
#define reg_intr_vect_r_vect___dma4___lsb 10
#define reg_intr_vect_r_vect___dma4___width 1
#define reg_intr_vect_r_vect___dma4___bit 10
#define reg_intr_vect_r_vect___dma5___lsb 11
#define reg_intr_vect_r_vect___dma5___width 1
#define reg_intr_vect_r_vect___dma5___bit 11
#define reg_intr_vect_r_vect___dma6___lsb 12
#define reg_intr_vect_r_vect___dma6___width 1
#define reg_intr_vect_r_vect___dma6___bit 12
#define reg_intr_vect_r_vect___dma7___lsb 13
#define reg_intr_vect_r_vect___dma7___width 1
#define reg_intr_vect_r_vect___dma7___bit 13
#define reg_intr_vect_r_vect___dma8___lsb 14
#define reg_intr_vect_r_vect___dma8___width 1
#define reg_intr_vect_r_vect___dma8___bit 14
#define reg_intr_vect_r_vect___dma9___lsb 15
#define reg_intr_vect_r_vect___dma9___width 1
#define reg_intr_vect_r_vect___dma9___bit 15
#define reg_intr_vect_r_vect___ata___lsb 16
#define reg_intr_vect_r_vect___ata___width 1
#define reg_intr_vect_r_vect___ata___bit 16
#define reg_intr_vect_r_vect___sser0___lsb 17
#define reg_intr_vect_r_vect___sser0___width 1
#define reg_intr_vect_r_vect___sser0___bit 17
#define reg_intr_vect_r_vect___sser1___lsb 18
#define reg_intr_vect_r_vect___sser1___width 1
#define reg_intr_vect_r_vect___sser1___bit 18
#define reg_intr_vect_r_vect___ser0___lsb 19
#define reg_intr_vect_r_vect___ser0___width 1
#define reg_intr_vect_r_vect___ser0___bit 19
#define reg_intr_vect_r_vect___ser1___lsb 20
#define reg_intr_vect_r_vect___ser1___width 1
#define reg_intr_vect_r_vect___ser1___bit 20
#define reg_intr_vect_r_vect___ser2___lsb 21
#define reg_intr_vect_r_vect___ser2___width 1
#define reg_intr_vect_r_vect___ser2___bit 21
#define reg_intr_vect_r_vect___ser3___lsb 22
#define reg_intr_vect_r_vect___ser3___width 1
#define reg_intr_vect_r_vect___ser3___bit 22
#define reg_intr_vect_r_vect___p21___lsb 23
#define reg_intr_vect_r_vect___p21___width 1
#define reg_intr_vect_r_vect___p21___bit 23
#define reg_intr_vect_r_vect___eth0___lsb 24
#define reg_intr_vect_r_vect___eth0___width 1
#define reg_intr_vect_r_vect___eth0___bit 24
#define reg_intr_vect_r_vect___eth1___lsb 25
#define reg_intr_vect_r_vect___eth1___width 1
#define reg_intr_vect_r_vect___eth1___bit 25
#define reg_intr_vect_r_vect___timer___lsb 26
#define reg_intr_vect_r_vect___timer___width 1
#define reg_intr_vect_r_vect___timer___bit 26
#define reg_intr_vect_r_vect___bif_arb___lsb 27
#define reg_intr_vect_r_vect___bif_arb___width 1
#define reg_intr_vect_r_vect___bif_arb___bit 27
#define reg_intr_vect_r_vect___bif_dma___lsb 28
#define reg_intr_vect_r_vect___bif_dma___width 1
#define reg_intr_vect_r_vect___bif_dma___bit 28
#define reg_intr_vect_r_vect___ext___lsb 29
#define reg_intr_vect_r_vect___ext___width 1
#define reg_intr_vect_r_vect___ext___bit 29
#define reg_intr_vect_r_vect_offset 4

/* Register r_masked_vect, scope intr_vect, type r */
#define reg_intr_vect_r_masked_vect___memarb___lsb 0
#define reg_intr_vect_r_masked_vect___memarb___width 1
#define reg_intr_vect_r_masked_vect___memarb___bit 0
#define reg_intr_vect_r_masked_vect___gen_io___lsb 1
#define reg_intr_vect_r_masked_vect___gen_io___width 1
#define reg_intr_vect_r_masked_vect___gen_io___bit 1
#define reg_intr_vect_r_masked_vect___iop0___lsb 2
#define reg_intr_vect_r_masked_vect___iop0___width 1
#define reg_intr_vect_r_masked_vect___iop0___bit 2
#define reg_intr_vect_r_masked_vect___iop1___lsb 3
#define reg_intr_vect_r_masked_vect___iop1___width 1
#define reg_intr_vect_r_masked_vect___iop1___bit 3
#define reg_intr_vect_r_masked_vect___iop2___lsb 4
#define reg_intr_vect_r_masked_vect___iop2___width 1
#define reg_intr_vect_r_masked_vect___iop2___bit 4
#define reg_intr_vect_r_masked_vect___iop3___lsb 5
#define reg_intr_vect_r_masked_vect___iop3___width 1
#define reg_intr_vect_r_masked_vect___iop3___bit 5
#define reg_intr_vect_r_masked_vect___dma0___lsb 6
#define reg_intr_vect_r_masked_vect___dma0___width 1
#define reg_intr_vect_r_masked_vect___dma0___bit 6
#define reg_intr_vect_r_masked_vect___dma1___lsb 7
#define reg_intr_vect_r_masked_vect___dma1___width 1
#define reg_intr_vect_r_masked_vect___dma1___bit 7
#define reg_intr_vect_r_masked_vect___dma2___lsb 8
#define reg_intr_vect_r_masked_vect___dma2___width 1
#define reg_intr_vect_r_masked_vect___dma2___bit 8
#define reg_intr_vect_r_masked_vect___dma3___lsb 9
#define reg_intr_vect_r_masked_vect___dma3___width 1
#define reg_intr_vect_r_masked_vect___dma3___bit 9
#define reg_intr_vect_r_masked_vect___dma4___lsb 10
#define reg_intr_vect_r_masked_vect___dma4___width 1
#define reg_intr_vect_r_masked_vect___dma4___bit 10
#define reg_intr_vect_r_masked_vect___dma5___lsb 11
#define reg_intr_vect_r_masked_vect___dma5___width 1
#define reg_intr_vect_r_masked_vect___dma5___bit 11
#define reg_intr_vect_r_masked_vect___dma6___lsb 12
#define reg_intr_vect_r_masked_vect___dma6___width 1
#define reg_intr_vect_r_masked_vect___dma6___bit 12
#define reg_intr_vect_r_masked_vect___dma7___lsb 13
#define reg_intr_vect_r_masked_vect___dma7___width 1
#define reg_intr_vect_r_masked_vect___dma7___bit 13
#define reg_intr_vect_r_masked_vect___dma8___lsb 14
#define reg_intr_vect_r_masked_vect___dma8___width 1
#define reg_intr_vect_r_masked_vect___dma8___bit 14
#define reg_intr_vect_r_masked_vect___dma9___lsb 15
#define reg_intr_vect_r_masked_vect___dma9___width 1
#define reg_intr_vect_r_masked_vect___dma9___bit 15
#define reg_intr_vect_r_masked_vect___ata___lsb 16
#define reg_intr_vect_r_masked_vect___ata___width 1
#define reg_intr_vect_r_masked_vect___ata___bit 16
#define reg_intr_vect_r_masked_vect___sser0___lsb 17
#define reg_intr_vect_r_masked_vect___sser0___width 1
#define reg_intr_vect_r_masked_vect___sser0___bit 17
#define reg_intr_vect_r_masked_vect___sser1___lsb 18
#define reg_intr_vect_r_masked_vect___sser1___width 1
#define reg_intr_vect_r_masked_vect___sser1___bit 18
#define reg_intr_vect_r_masked_vect___ser0___lsb 19
#define reg_intr_vect_r_masked_vect___ser0___width 1
#define reg_intr_vect_r_masked_vect___ser0___bit 19
#define reg_intr_vect_r_masked_vect___ser1___lsb 20
#define reg_intr_vect_r_masked_vect___ser1___width 1
#define reg_intr_vect_r_masked_vect___ser1___bit 20
#define reg_intr_vect_r_masked_vect___ser2___lsb 21
#define reg_intr_vect_r_masked_vect___ser2___width 1
#define reg_intr_vect_r_masked_vect___ser2___bit 21
#define reg_intr_vect_r_masked_vect___ser3___lsb 22
#define reg_intr_vect_r_masked_vect___ser3___width 1
#define reg_intr_vect_r_masked_vect___ser3___bit 22
#define reg_intr_vect_r_masked_vect___p21___lsb 23
#define reg_intr_vect_r_masked_vect___p21___width 1
#define reg_intr_vect_r_masked_vect___p21___bit 23
#define reg_intr_vect_r_masked_vect___eth0___lsb 24
#define reg_intr_vect_r_masked_vect___eth0___width 1
#define reg_intr_vect_r_masked_vect___eth0___bit 24
#define reg_intr_vect_r_masked_vect___eth1___lsb 25
#define reg_intr_vect_r_masked_vect___eth1___width 1
#define reg_intr_vect_r_masked_vect___eth1___bit 25
#define reg_intr_vect_r_masked_vect___timer___lsb 26
#define reg_intr_vect_r_masked_vect___timer___width 1
#define reg_intr_vect_r_masked_vect___timer___bit 26
#define reg_intr_vect_r_masked_vect___bif_arb___lsb 27
#define reg_intr_vect_r_masked_vect___bif_arb___width 1
#define reg_intr_vect_r_masked_vect___bif_arb___bit 27
#define reg_intr_vect_r_masked_vect___bif_dma___lsb 28
#define reg_intr_vect_r_masked_vect___bif_dma___width 1
#define reg_intr_vect_r_masked_vect___bif_dma___bit 28
#define reg_intr_vect_r_masked_vect___ext___lsb 29
#define reg_intr_vect_r_masked_vect___ext___width 1
#define reg_intr_vect_r_masked_vect___ext___bit 29
#define reg_intr_vect_r_masked_vect_offset 8

/* Register r_nmi, scope intr_vect, type r */
#define reg_intr_vect_r_nmi___ext___lsb 0
#define reg_intr_vect_r_nmi___ext___width 1
#define reg_intr_vect_r_nmi___ext___bit 0
#define reg_intr_vect_r_nmi___watchdog___lsb 1
#define reg_intr_vect_r_nmi___watchdog___width 1
#define reg_intr_vect_r_nmi___watchdog___bit 1
#define reg_intr_vect_r_nmi_offset 12

/* Register r_guru, scope intr_vect, type r */
#define reg_intr_vect_r_guru___jtag___lsb 0
#define reg_intr_vect_r_guru___jtag___width 1
#define reg_intr_vect_r_guru___jtag___bit 0
#define reg_intr_vect_r_guru_offset 16


/* Constants */
#define regk_intr_vect_off                        0x00000000
#define regk_intr_vect_on                         0x00000001
#define regk_intr_vect_rw_mask_default            0x00000000
#endif /* __intr_vect_defs_asm_h */
