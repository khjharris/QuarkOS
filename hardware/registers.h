/*
    Created by Kenwood Harris
    For use please contact khjr@bu.edu

    This file contains register definitions for Intel Quark
*/

/* GPIO Registers */

//PORT A Data
#define GPIO_SWPORTA_DR 0x0 
//PORT A Direction
#define GPIO_SWPORTA_DDR 0x4
//PORT A Data Source
#define GPIO_SWPORTA_CTL 0x8

//Interuupt enable
#define GPIO_INTEN 0x30
//Interrupt mask
#define GPIO_INTMASK 0x34
//Interrupt type
#define GPIO_INTTYPE_LEVEL 0x38
//Interrupt Poloarity
#define GPIO_INT_POLARITY 0x3C
//Interrupt status
#define GPIO_INTSTATUS 0x40
//Raw Interrupt status
#define GPIO_RAW_INTSTATUS 0x44
