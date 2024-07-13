  __IOM uint32_t AIRCR;                  /*!< Offset: 0x00C (R/W)  Application Interrupt and Reset Control Register */
    uint32_t C:1;                        /*!< bit:     29  Carry condition code flag */
    uint32_t C:1;                        /*!< bit:     29  Carry condition code flag */
  __IM  uint32_t CALIB;                  /*!< Offset: 0x00C (R/ )  SysTick Calibration Register */
  __IOM uint32_t CCR;                    /*!< Offset: 0x014 (R/W)  Configuration Control Register */
  __IM  uint32_t CPUID;                  /*!< Offset: 0x000 (R/ )  CPUID Base Register */
  __IOM uint32_t CTRL;                   /*!< Offset: 0x000 (R/W)  SysTick Control and Status Register */
  __IOM uint32_t CTRL;                   /*!< Offset: 0x004 (R/W)  MPU Control Register */
  __IOM uint32_t ICER[1U];               /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register */
  __IOM uint32_t ICPR[1U];               /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register */
  __IOM uint32_t ICSR;                   /*!< Offset: 0x004 (R/W)  Interrupt Control and State Register */
  __IOM uint32_t IP[8U];                 /*!< Offset: 0x300 (R/W)  Interrupt Priority Register */
  __IOM uint32_t ISER[1U];               /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register */
  __IOM uint32_t ISPR[1U];               /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register */
    uint32_t ISR:9;                      /*!< bit:  0.. 8  Exception number */
    uint32_t ISR:9;                      /*!< bit:  0.. 8  Exception number */
  __IOM uint32_t LOAD;                   /*!< Offset: 0x004 (R/W)  SysTick Reload Value Register */
    uint32_t N:1;                        /*!< bit:     31  Negative condition code flag */
    uint32_t N:1;                        /*!< bit:     31  Negative condition code flag */
  __IOM uint32_t RASR;                   /*!< Offset: 0x010 (R/W)  MPU Region Attribute and Size Register */
  __IOM uint32_t RBAR;                   /*!< Offset: 0x00C (R/W)  MPU Region Base Address Register */
        uint32_t RESERVED0;
        uint32_t RESERVED0[31U];
        uint32_t RESERVED1;
        uint32_t RESERVED1[31U];
        uint32_t RESERVED2[31U];
        uint32_t RESERVED3[31U];
        uint32_t RESERVED4[64U];
  __IOM uint32_t RNR;                    /*!< Offset: 0x008 (R/W)  MPU Region RNRber Register */
  __IOM uint32_t SCR;                    /*!< Offset: 0x010 (R/W)  System Control Register */
  __IOM uint32_t SHCSR;                  /*!< Offset: 0x024 (R/W)  System Handler Control and State Register */
  __IOM uint32_t SHP[2U];                /*!< Offset: 0x01C (R/W)  System Handlers Priority Registers. [0] is RESERVED */
    uint32_t SPSEL:1;                    /*!< bit:      1  Stack to be used */
    uint32_t T:1;                        /*!< bit:     24  Thumb bit        (read 0) */
  __IM  uint32_t TYPE;                   /*!< Offset: 0x000 (R/ )  MPU Type Register */
    uint32_t V:1;                        /*!< bit:     28  Overflow condition code flag */
    uint32_t V:1;                        /*!< bit:     28  Overflow condition code flag */
  __IOM uint32_t VAL;                    /*!< Offset: 0x008 (R/W)  SysTick Current Value Register */
  __IOM uint32_t VTOR;                   /*!< Offset: 0x008 (R/W)  Vector Table Offset Register */
    uint32_t Z:1;                        /*!< bit:     30  Zero condition code flag */
    uint32_t Z:1;                        /*!< bit:     30  Zero condition code flag */
    uint32_t _reserved0:15;              /*!< bit:  9..23  Reserved */
    uint32_t _reserved0:23;              /*!< bit:  9..31  Reserved */
    uint32_t _reserved0:28;              /*!< bit:  0..27  Reserved */
    uint32_t _reserved1:30;              /*!< bit:  2..31  Reserved */
    uint32_t _reserved1:3;               /*!< bit: 25..27  Reserved */
  } b;                                   /*!< Structure used for bit  access */
  } b;                                   /*!< Structure used for bit  access */
  } b;                                   /*!< Structure used for bit  access */
  } b;                                   /*!< Structure used for bit  access */
    uint32_t nPRIV:1;                    /*!< bit:      0  Execution privilege in Thread mode */
  uint32_t w;                            /*!< Type      used for word access */
  uint32_t w;                            /*!< Type      used for word access */
  uint32_t w;                            /*!< Type      used for word access */
  uint32_t w;                            /*!< Type      used for word access */
