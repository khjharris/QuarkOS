/*
    Created by Kenwood Harris
    For use please contact khjr@bu.edu

    This file contains register definitions for Intel Quark
*/

/* GPIO Registers */

//PORT A Data
#define GPIO_SWPORTA_DR     0x0 
//PORT A Direction
#define GPIO_SWPORTA_DDR    0x4
//PORT A Data Source
#define GPIO_SWPORTA_CTL    0x8

//Interuupt enable
#define GPIO_INTEN          0x30
//Interrupt mask
#define GPIO_INTMASK        0x34
//Interrupt type
#define GPIO_INTTYPE_LEVEL  0x38
//Interrupt Poloarity
#define GPIO_INT_POLARITY   0x3C
//Interrupt status
#define GPIO_INTSTATUS      0x40
//Raw Interrupt status
#define GPIO_RAW_INTSTATUS  0x44
//Debounce enable
#define GPIO_DEBOUNCE       0x48
//Clear Interrupt
#define GPIO_PORTA_EOI      0x4C
//Interrupt both edge type
#define GPIO_INT_BOTHEDGE   0x68
//GPIO Configuration Register 2
#define GPIO_CONFIG_REG2    0x70
//GPIO Configuration Register 1
#define GPIO_CONFIG_REG1    0x74

//Port A External Port
#define GPIO_EXT_PORTA      0x50

//Synchronization Level
#define GPIO_LS_SYNC        0x60


