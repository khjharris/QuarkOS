/*
    Created by Kenwood Harris
    For use please contact khjr@bu.edu

    This file contains register definitions for Intel Quark
*/

/**************************** GPIO Registers ****************************************/

//GPIO Base Address
#define GPIO_BASE_ADDR      0xB0000C00
//PORT A Data
#define GPIO_SWPORTA_DR     (0x0 + GPIO_BASE_ADDR) 
//PORT A Direction
#define GPIO_SWPORTA_DDR    (0x4 + GPIO_BASE_ADDR)
//PORT A Data Source
#define GPIO_SWPORTA_CTL    (0x8 + GPIO_BASE_ADDR)
//Interuupt enable
#define GPIO_INTEN          (0x30 + GPIO_BASE_ADDR)
//Interrupt mask
#define GPIO_INTMASK        (0x34 + GPIO_BASE_ADDR)
//Interrupt type
#define GPIO_INTTYPE_LEVEL  (0x38 + GPIO_BASE_ADDR)
//Interrupt Poloarity
#define GPIO_INT_POLARITY   (0x3C + GPIO_BASE_ADDR)
//Interrupt status
#define GPIO_INTSTATUS      (0x40 + GPIO_BASE_ADDR)
//Raw Interrupt status
#define GPIO_RAW_INTSTATUS  (0x44 + GPIO_BASE_ADDR)
//Debounce enable
#define GPIO_DEBOUNCE       (0x48 + GPIO_BASE_ADDR)
//Clear Interrupt
#define GPIO_PORTA_EOI      (0x4C + GPIO_BASE_ADDR)
//Interrupt both edge type
#define GPIO_INT_BOTHEDGE   (0x68 + GPIO_BASE_ADDR)
//GPIO Configuration Register 2
#define GPIO_CONFIG_REG2    (0x70 + GPIO_BASE_ADDR)
//GPIO Configuration Register 1
#define GPIO_CONFIG_REG1    (0x74 + GPIO_BASE_ADDR)
//Port A External Port
#define GPIO_EXT_PORTA      (0x50 + GPIO_BASE_ADDR)
//Synchronization Level
#define GPIO_LS_SYNC        (0x60 + GPIO_BASE_ADDR)

/******************************** USB Registers **********************************/

//USB base address
#define USB_BASE_ADDR       0xB0500000
//OTG Control Register
#define GOTGCTL             (0x0 + USB_BASE_ADDR)
//OTG Interrupt Register
#define GOTGINT             (0x4 + USB_BASE_ADDR)
//AHB Configuration Register
#define GAHBCFG             (0x8 + USB_BASE_ADDR)
//USB Configuration Register
#define GUSBCFG             (0xC + USB_BASE_ADDR)
//Reset Register
#define RSTCTL              (0x10 + USB_BASE_ADDR)
//Interrupt Status Register
#define GINTSTS             (0x14 + USB_BASE_ADDR)
//Interrupt Mask Register
#define GINTMSK             (0x18 + USB_BASE_ADDR)
//Receive Status Read /Pop Register
#define GRXSTSR             (0x1C + USB_BASE_ADDR)
//Receive Status Read /Pop Register
#define GRXSTSP             (0x20 + USB_BASE_ADDR)
//Receive FIFO Size Register
#define GRXFSIZ             (0x24 + USB_BASE_ADDR)
//Non-periodic Transmit FIFO Size Register
#define GNPTXFSIZ           (0x28 + USB_BASE_ADDR)
//ID Register
#define GSNPSID             (0x40 + USB_BASE_ADDR)
//Hardware configuration register 1
#define GHWCFG1             (0x44 + USB_BASE_ADDR)
//Hardware configuration register 2
#define GHWCFG2             (0x48 + USB_BASE_ADDR)
//Hardware configuration register 3
#define GHWCFG3             (0x4C + USB_BASE_ADDR)
//Hardware configuration register 4
#define GHWCFG4             (0x50 + USB_BASE_ADDR)
//Global DFIFO Configuration Register
#define GDFIFOCFG           (0x54 + USB_BASE_ADDR)
//Device IN Endpoint Transmit FIFO Size Register 1
#define DIEPTXF1            (0x104 + USB_BASE_ADDR)
//Device IN Endpoint Transmit FIFO Size Register 2
#define DIEPTXF2            (0x108 + USB_BASE_ADDR)
//Device IN Endpoint Transmit FIFO Size Register 3
#define DIEPTXF3            (0x10C + USB_BASE_ADDR)
//Device IN Endpoint Transmit FIFO Size Register 4
#define DIEPTXF4            (0x110 + USB_BASE_ADDR)
//Device IN Endpoint Transmit FIFO Size Register 5
#define DIEPTXF5            (0x114 + USB_BASE_ADDR)
//Device Configuration Register
#define DCFG                (0x800 + USB_BASE_ADDR)
//Device Control Register
#define DCTL                (0x804 + USB_BASE_ADDR)
//Device Status Register
#define DSTS                (0x808 + USB_BASE_ADDR)
//Device IN Endpoint Common Interrupt Mask Register
#define DIEPMSK             (0x810 + USB_BASE_ADDR)
//Device OUT Endpoint Common Interrupt Mask Register
#define DOEPMSK             (0x814 + USB_BASE_ADDR)
//Device Interrupt Register
#define DAINT               (0x818 + USB_BASE_ADDR)
//Device Interrupt Mask Register
#define DAINTMSK            (0x81C + USB_BASE_ADDR)
//Device VBUS Discharge Time Register
#define DVBUSDIS            (0x828 + USB_BASE_ADDR)
//Device VBUS Discharge Time Register
#define DVBUSPULSE          (0x82C + USB_BASE_ADDR)
//Device Threshold Control Register
#define DTHRCTL             (0x830 + USB_BASE_ADDR)
//Device IN Endpoint FIFO Empty Interrupt Mask Register
#define DIEPEMPMSK          (0x834 + USB_BASE_ADDR)
//Device IN End Point Control Register 0
#define DIEPCTL0            (0x900 + USB_BASE_ADDR)
//Device In EP0 Interrupt Register
#define DIEPINT0            (0x908 + USB_BASE_ADDR)
//Device IN Size Register 0
#define DIEPTSIZ0           (0x910 + USB_BASE_ADDR)
//Device OUT End Point DMA Address Register 0
#define DIEPDMA0            (0x914 + USB_BASE_ADDR)
//Device IN Endpoint Transmit FIFO Status Register 0
#define DTXFSTS0            (0x918 + USB_BASE_ADDR)
//Device In EP1 Interrupt Register
#define DIEPINT1            (0x928 + USB_BASE_ADDR)
//Device IN End Point Control Register 1
#define DIEPCTL1            (0x920 + USB_BASE_ADDR)
//Device IN Size Register 1
#define DIEPTSIZ1           (0x930 + USB_BASE_ADDR)
//Device OUT End Point DMA Address Register 1
#define DIEPDMA1            (0x934 + USB_BASE_ADDR)
//Device IN Endpoint Transmit FIFO Status Register 1
#define DTXFSTS1            (0x938 + USB_BASE_ADDR)
//Device IN End Point Control Register 2
#define DIEPCTL2            (0x940 + USB_BASE_ADDR)
//Device In EP2 Interrupt Register
#define DIEPINT2            (0x948 + USB_BASE_ADDR)
//Device IN Size Register 2
#define DIEPTSIZ2           (0x950 + USB_BASE_ADDR)
//Device OUT End Point DMA Address Register 2
#define DIEPDMA2            (0x954 + USB_BASE_ADDR)
//Device IN Endpoint Transmit FIFO Status Register 2
#define DTXFSTS2            (0x958 + USB_BASE_ADDR)
//Device IN End Point Control Register 3
#define DIEPCTL3            (0x960 + USB_BASE_ADDR)
//Device In EP3 Interrupt Register
#define DIEPINT3            (0x968 + USB_BASE_ADDR)
//Device IN Size Register 
#define DIEPTSIZ3           (0x970 + USB_BASE_ADDR)
//Device OUT End Point DMA Address Register 3
#define DIEPDMA3            (0x974 + USB_BASE_ADDR)
//Device IN Endpoint Transmit FIFO Status Register 3
#define DTXFSTS3            (0x978 + USB_BASE_ADDR)
//Device OUT End Point DMA Address Register 4
#define DIEPDMA4            (0x994 + USB_BASE_ADDR)
//Device In EP4 Interrupt Register
#define DIEPINT4            (0x988 + USB_BASE_ADDR)
//Device IN End Point Control Register 4
#define DIEPCTL4            (0x980 + USB_BASE_ADDR)
//Device IN Size Register 4
#define DIEPTSIZ4           (0x990 + USB_BASE_ADDR)
//Device IN Endpoint Transmit FIFO Status Register 4
#define DTXFSTS4            (0x998 + USB_BASE_ADDR)
//Device IN End Point Control Register 5
#define DIEPCTL5            (0x9A0 + USB_BASE_ADDR)
//Device In EP5 Interrupt Register
#define DIEPINT5            (0x9A8 + USB_BASE_ADDR)
//Device OUT End Point DMA Address Register 5
#define DIEPDMA5            (0x9B4 + USB_BASE_ADDR)
//Device IN Size Register 5
#define DIEPTSIZ5           (0x9B0 + USB_BASE_ADDR)
//Device IN Endpoint Transmit FIFO Status Register 5
#define DTXFSTS5            (0x9B8 + USB_BASE_ADDR)
//Device OUT End Point Control Register 0
#define DOEPCTL0            (0xB00 + USB_BASE_ADDR)
//Device Out EP0 Interrupt Register
#define DOEPINT0            (0xB08 + USB_BASE_ADDR)
//Device OUT Size Register 0
#define DOEPTSIZ0           (0xB10 + USB_BASE_ADDR)
//Device OUT End Point DMA Address Register 0
#define DOEPDMA0            (0xB14 + USB_BASE_ADDR)
//Device Out EP1 Interrupt Register
#define DOEPINT1            (0xB28 + USB_BASE_ADDR)
//Device OUT End Point Control Register 1
#define DOEPCTL1            (0xB20 + USB_BASE_ADDR)
//Device OUT Size Register 1
#define DOEPTSIZ1           (0xB30 + USB_BASE_ADDR)
//Device OUT End Point DMA Address Register 1
#define DOEPDMA1            (0xB34 + USB_BASE_ADDR)
//Device OUT End Point Control Register 2
#define DOEPCTL2            (0xB40 + USB_BASE_ADDR)
////Device Out EP2 Interrupt Register
#define DOEPINT2            (0xB48 + USB_BASE_ADDR)
//Device OUT Size Register 2
#define DOEPTSIZ2           (0xB50 + USB_BASE_ADDR)
//Device OUT End Point DMA Address Register 2
#define DOEPDMA2            (0xB54 + USB_BASE_ADDR)
//Device OUT End Point Control Register 3
#define DOEPCTL3            (0xB60 + USB_BASE_ADDR)
////Device Out EP3 Interrupt Register
#define DOEPINT3            (0xB68 + USB_BASE_ADDR)
//Device OUT End Point DMA Address Register 3
#define DOEPDMA3            (0xB74 + USB_BASE_ADDR)
//Device OUT Size Register 3
#define DOEPTSIZ3           (0xB70 + USB_BASE_ADDR)
//Power and Clock Gating Control Register
#define PCGCCTL             (0xE00 + USB_BASE_ADDR)

/******************************** I2C Registers **********************************/

//I2C Base address
#define I2C_BASE_ADDR       0xB0002800
//Control Register
#define IC_CON              (0x0 + I2C_BASE_ADDR)
//Master Target Address
#define IC_TAR              (0x4 + I2C_BASE_ADDR)
//Slave Address
#define IC_SAR              (0x8 + I2C_BASE_ADDR)
//High Speed Master ID
#define IC_HS_MADDR         (0xC + I2C_BASE_ADDR)
//Data Buffer and Command
#define IC_DATA_CMD         (0x10 + I2C_BASE_ADDR)
//Standard Speed Clock SCL High Count
#define IC_SS_SCL_HCNT      (0x14 + I2C_BASE_ADDR)
//Standard Speed Clock SCL Low Count
#define IC_SS_SCL_LCNT      (0x18 + I2C_BASE_ADDR)
//Fast Speed Clock SCL High Count
#define IC_FS_SCL_HCNT      (0x1C + I2C_BASE_ADDR)
//Fast Speed I2C Clock SCL Low Count
#define IC_FS_SCL_LCNT      (0x20 + I2C_BASE_ADDR)
//High Speed I2C Clock SCL High Count
#define IC_HS_SCL_HCNT      (0x24 + I2C_BASE_ADDR)
//High Speed I2C Clock SCL Low Count
#define IC_HS_SCL_LCNT      (0x28 + I2C_BASE_ADDR)
//Interrupt Status
#define IC_INTR_STAT        (0x2C + I2C_BASE_ADDR)
//Interrupt Mask
#define IC_INTR_MASK        (0x30 + I2C_BASE_ADDR)
//Raw Interrupt Status
#define IC_RAW_INTR_STAT    (0x34 + I2C_BASE_ADDR)
//Receive FIFO Threshold Level
#define IC_RX_TL            (0x38 + I2C_BASE_ADDR)
//Transmit FIFO Threshold Level
#define IC_TX_TL            (0x3C + I2C_BASE_ADDR)
//Clear Combined and Individual Interrupt
#define IC_CLR_INTR         (0x40 + I2C_BASE_ADDR)
//Clear RX_UNDER Interrupt
#define IC_CLR_RX_UNDER     (0x44 + I2C_BASE_ADDR)
//Clear RX_OVER Interrupt
#define IC_CLR_RX_OVER      (0x48 + I2C_BASE_ADDR)
//Clear TX_OVER Interrupt
#define IC_CLR_TX_OVER      (0x4C + I2C_BASE_ADDR)
//Clear RD_REQ Interrupt
#define IC_CLR_RD_REQ       (0x50 + I2C_BASE_ADDR)
//Clear TX_ABRT Interrupt
#define IC_CLR_TX_ABRT      (0x54 + I2C_BASE_ADDR)
//Clear RX_DONE Interrupt
#define IC_CLR_RX_DONE      (0x58 + I2C_BASE_ADDR)
//Clear ACTIVITY Interrupt
#define IC_CLR_ACTIVITY     (0x5C + I2C_BASE_ADDR)
//Clear STOP_DET Interrupt
#define IC_CLR_STOP_DET     (0x60 + I2C_BASE_ADDR)
//Clear START_DET Interrupt
#define IC_CLR_START_DET    (0x64 + I2C_BASE_ADDR)
//Clear GEN_CALL Interrupt 
#define IC_CLR_GEN_CALL     (0x68 + I2C_BASE_ADDR)
//Enable    
#define IC_ENABLE           (0x6C + I2C_BASE_ADDR)
//Status
#define IC_STATUS           (0x70 + I2C_BASE_ADDR)
//Transmit FIFO Level
#define IC_TXFLR            (0x74 + I2C_BASE_ADDR)
//Receive FIFO Level
#define IC_RXFLR            (0x78 + I2C_BASE_ADDR)
//SDA Hold
#define IC_SDA_HOLD         (0x70 + I2C_BASE_ADDR)
//Transmit Abort Source
#define IC_TX_ABRT_SOURCE   (0x74 + I2C_BASE_ADDR)
//SDA Setup
#define IC_DMA_CR           (0x88 + I2C_BASE_ADDR)
//DMA Transmit Data Level Register
#define IC_DMA_TDLR         (0x8C + I2C_BASE_ADDR)
//I2C Receive Data Level Register
#define IC_DMA_RDLR         (0x90 + I2C_BASE_ADDR)
//SDA Setup
#define IC_SDA_SETUP        (0x94 + I2C_BASE_ADDR)
//General Call Ack
#define IC_ACK_GENERAL_CALL (0x98 + I2C_BASE_ADDR)
//Enable Status
#define IC_ENABLE_STATUS    (0x9C + I2C_BASE_ADDR)
//SS and FS Spike Suppression Limit
#define IC_FS_SPKLEN        (0xA0 + I2C_BASE_ADDR)
//Configuration Parameters. RSVD (Reserved)
#define IC_COMP_PARAM_1     (0xF4 + I2C_BASE_ADDR)
//Component Version. RSVD (Reserved)
#define IC_COMP_VERSION     (0xF8 + I2C_BASE_ADDR)
//Component Type. RSVD (Reserved)
#define IC_COMP_TYPE        (0xFC + I2C_BASE_ADDR)

/******************************** UART Registers **********************************/

//UART Base Address
#define UART_BASE_ADDR      0xB0002000
//Receive Buffer / Transmit Holding / Divisor Latch Low
#define RBR_THR_DLL         (0x0 + UART_BASE_ADDR)
//Interrupt Enable / Divisor Latch High
#define IER_DLH             (0x4 + UART_BASE_ADDR)
//Interrupt Identification / FIFO Control
#define IIR_FCR             (0x8 + UART_BASE_ADDR)
//Line Control
#define LCR                 (0xC + UART_BASE_ADDR)
//MODEM Control
#define MCR                 (0x10 + UART_BASE_ADDR)
//Line Status
#define LSR                 (0x14 + UART_BASE_ADDR)
//Modem Status
#define MSR                 (0x18 + UART_BASE_ADDR)
//Scratchpad
#define SCR                 (0x1C + UART_BASE_ADDR)
//UART Status
#define USR                 (0x7C + UART_BASE_ADDR)
//Halt Transmission
#define TX                  (0xA4 + UART_BASE_ADDR)
//DMA Software Acknowledge
#define DMASA               (0xA8 + UART_BASE_ADDR)
//Divisor Latch Fraction.
#define DLF                 (0xC0 + UART_BASE_ADDR)