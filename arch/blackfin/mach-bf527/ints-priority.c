/*
 * Set up the interrupt priorities
 *
 * Copyright 2007-2008 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#include <linux/module.h>
#include <linux/irq.h>
#include <asm/blackfin.h>

void __init program_IAR(void)
{
	/* Program the IAR0 Register with the configured priority */
	bfin_write_SIC_IAR0(((CONFIG_IRQ_PLL_WAKEUP - 7) << IRQ_PLL_WAKEUP_POS) |
						((CONFIG_IRQ_DMA0_ERROR - 7) << IRQ_DMA0_ERROR_POS) |
						((CONFIG_IRQ_DMAR0_BLK - 7) << IRQ_DMAR0_BLK_POS) |
						((CONFIG_IRQ_DMAR1_BLK - 7) << IRQ_DMAR1_BLK_POS) |
						((CONFIG_IRQ_DMAR0_OVR - 7) << IRQ_DMAR0_OVR_POS) |
						((CONFIG_IRQ_DMAR1_OVR - 7) << IRQ_DMAR1_OVR_POS) |
						((CONFIG_IRQ_PPI_ERROR - 7) << IRQ_PPI_ERROR_POS) |
						((CONFIG_IRQ_MAC_ERROR - 7) << IRQ_MAC_ERROR_POS));


	bfin_write_SIC_IAR1(((CONFIG_IRQ_SPORT0_ERROR - 7) << IRQ_SPORT0_ERROR_POS) |
						((CONFIG_IRQ_SPORT1_ERROR - 7) << IRQ_SPORT1_ERROR_POS) |
						((CONFIG_IRQ_UART0_ERROR - 7) << IRQ_UART0_ERROR_POS) |
						((CONFIG_IRQ_UART1_ERROR - 7) << IRQ_UART1_ERROR_POS) |
						((CONFIG_IRQ_RTC - 7) << IRQ_RTC_POS) |
						((CONFIG_IRQ_PPI - 7) << IRQ_PPI_POS));

	bfin_write_SIC_IAR2(((CONFIG_IRQ_SPORT0_RX - 7) << IRQ_SPORT0_RX_POS) |
						((CONFIG_IRQ_SPORT0_TX - 7) << IRQ_SPORT0_TX_POS) |
						((CONFIG_IRQ_SPORT1_RX - 7) << IRQ_SPORT1_RX_POS) |
						((CONFIG_IRQ_SPORT1_TX - 7) << IRQ_SPORT1_TX_POS) |
						((CONFIG_IRQ_TWI - 7) << IRQ_TWI_POS) |
						((CONFIG_IRQ_SPI - 7) << IRQ_SPI_POS) |
						((CONFIG_IRQ_UART0_RX - 7) << IRQ_UART0_RX_POS) |
						((CONFIG_IRQ_UART0_TX - 7) << IRQ_UART0_TX_POS));

	bfin_write_SIC_IAR3(((CONFIG_IRQ_UART1_RX - 7) << IRQ_UART1_RX_POS) |
						((CONFIG_IRQ_UART1_TX - 7) << IRQ_UART1_TX_POS) |
						((CONFIG_IRQ_OPTSEC - 7) << IRQ_OPTSEC_POS) |
						((CONFIG_IRQ_CNT - 7) << IRQ_CNT_POS) |
						((CONFIG_IRQ_MAC_RX - 7) << IRQ_MAC_RX_POS) |
						((CONFIG_IRQ_PORTH_INTA - 7) << IRQ_PORTH_INTA_POS) |
						((CONFIG_IRQ_MAC_TX - 7) << IRQ_MAC_TX_POS) |
						((CONFIG_IRQ_PORTH_INTB - 7) << IRQ_PORTH_INTB_POS));

	bfin_write_SIC_IAR4(((CONFIG_IRQ_TIMER0 - 7) << IRQ_TIMER0_POS) |
						((CONFIG_IRQ_TIMER1 - 7) << IRQ_TIMER1_POS) |
						((CONFIG_IRQ_TIMER2 - 7) << IRQ_TIMER2_POS) |
						((CONFIG_IRQ_TIMER3 - 7) << IRQ_TIMER3_POS) |
						((CONFIG_IRQ_TIMER4 - 7) << IRQ_TIMER4_POS) |
						((CONFIG_IRQ_TIMER5 - 7) << IRQ_TIMER5_POS) |
						((CONFIG_IRQ_TIMER6 - 7) << IRQ_TIMER6_POS) |
						((CONFIG_IRQ_TIMER7 - 7) << IRQ_TIMER7_POS));

	bfin_write_SIC_IAR5(((CONFIG_IRQ_PORTG_INTA - 7) << IRQ_PORTG_INTA_POS) |
						((CONFIG_IRQ_PORTG_INTB - 7) << IRQ_PORTG_INTB_POS) |
						((CONFIG_IRQ_MEM_DMA0 - 7) << IRQ_MEM_DMA0_POS) |
						((CONFIG_IRQ_MEM_DMA1 - 7) << IRQ_MEM_DMA1_POS) |
						((CONFIG_IRQ_WATCH - 7) << IRQ_WATCH_POS) |
						((CONFIG_IRQ_PORTF_INTA - 7) << IRQ_PORTF_INTA_POS) |
						((CONFIG_IRQ_PORTF_INTB - 7) << IRQ_PORTF_INTB_POS) |
						((CONFIG_IRQ_SPI_ERROR - 7) << IRQ_SPI_ERROR_POS));

	bfin_write_SIC_IAR6(((CONFIG_IRQ_NFC_ERROR - 7) << IRQ_NFC_ERROR_POS) |
						((CONFIG_IRQ_HDMA_ERROR - 7) << IRQ_HDMA_ERROR_POS) |
						((CONFIG_IRQ_HDMA - 7) << IRQ_HDMA_POS) |
						((CONFIG_IRQ_USB_EINT - 7) << IRQ_USB_EINT_POS) |
						((CONFIG_IRQ_USB_INT0 - 7) << IRQ_USB_INT0_POS) |
						((CONFIG_IRQ_USB_INT1 - 7) << IRQ_USB_INT1_POS) |
						((CONFIG_IRQ_USB_INT2 - 7) << IRQ_USB_INT2_POS) |
						((CONFIG_IRQ_USB_DMA - 7) << IRQ_USB_DMA_POS));

	SSYNC();
}
