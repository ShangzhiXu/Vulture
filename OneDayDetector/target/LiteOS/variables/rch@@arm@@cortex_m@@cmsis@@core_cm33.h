  __IOM uint32_t ACPR;                   /*!< Offset: 0x010 (R/W)  Asynchronous Clock Prescaler Register */
  __IOM uint32_t ACTLR;                  /*!< Offset: 0x008 (R/W)  Auxiliary Control Register */
  __IOM uint32_t AFSR;                   /*!< Offset: 0x03C (R/W)  Auxiliary Fault Status Register */
  __IOM uint32_t AIRCR;                  /*!< Offset: 0x00C (R/W)  Application Interrupt and Reset Control Register */
  __IOM uint32_t BFAR;                   /*!< Offset: 0x038 (R/W)  BusFault Address Register */
    uint32_t C:1;                        /*!< bit:     29  Carry condition code flag */
    uint32_t C:1;                        /*!< bit:     29  Carry condition code flag */
  __IM  uint32_t CALIB;                  /*!< Offset: 0x00C (R/ )  SysTick Calibration Register */
  __IOM uint32_t CCR;                    /*!< Offset: 0x014 (R/W)  Configuration Control Register */
  __IM  uint32_t CCSIDR;                 /*!< Offset: 0x080 (R/ )  Cache Size ID Register */
  __IOM uint32_t CFSR;                   /*!< Offset: 0x028 (R/W)  Configurable Fault Status Register */
  __IM  uint32_t CID0;                   /*!< Offset: 0xFF0 (R/ )  ITM Component  Identification Register #0 */
  __IM  uint32_t CID1;                   /*!< Offset: 0xFF4 (R/ )  ITM Component  Identification Register #1 */
  __IM  uint32_t CID2;                   /*!< Offset: 0xFF8 (R/ )  ITM Component  Identification Register #2 */
  __IM  uint32_t CID3;                   /*!< Offset: 0xFFC (R/ )  ITM Component  Identification Register #3 */
  __IOM uint32_t CLAIMCLR;               /*!< Offset: 0xFA4 (R/W)  Claim tag clear */
  __IOM uint32_t CLAIMSET;               /*!< Offset: 0xFA0 (R/W)  Claim tag set */
  __IM  uint32_t CLIDR;                  /*!< Offset: 0x078 (R/ )  Cache Level ID register */
  __IOM uint32_t COMP0;                  /*!< Offset: 0x020 (R/W)  Comparator Register 0 */
  __IOM uint32_t COMP1;                  /*!< Offset: 0x030 (R/W)  Comparator Register 1 */
  __IOM uint32_t COMP10;                 /*!< Offset: 0x0C0 (R/W)  Comparator Register 10 */
  __IOM uint32_t COMP11;                 /*!< Offset: 0x0D0 (R/W)  Comparator Register 11 */
  __IOM uint32_t COMP12;                 /*!< Offset: 0x0E0 (R/W)  Comparator Register 12 */
  __IOM uint32_t COMP13;                 /*!< Offset: 0x0F0 (R/W)  Comparator Register 13 */
  __IOM uint32_t COMP14;                 /*!< Offset: 0x100 (R/W)  Comparator Register 14 */
  __IOM uint32_t COMP15;                 /*!< Offset: 0x110 (R/W)  Comparator Register 15 */
  __IOM uint32_t COMP2;                  /*!< Offset: 0x040 (R/W)  Comparator Register 2 */
  __IOM uint32_t COMP3;                  /*!< Offset: 0x050 (R/W)  Comparator Register 3 */
  __IOM uint32_t COMP4;                  /*!< Offset: 0x060 (R/W)  Comparator Register 4 */
  __IOM uint32_t COMP5;                  /*!< Offset: 0x070 (R/W)  Comparator Register 5 */
  __IOM uint32_t COMP6;                  /*!< Offset: 0x080 (R/W)  Comparator Register 6 */
  __IOM uint32_t COMP7;                  /*!< Offset: 0x090 (R/W)  Comparator Register 7 */
  __IOM uint32_t COMP8;                  /*!< Offset: 0x0A0 (R/W)  Comparator Register 8 */
  __IOM uint32_t COMP9;                  /*!< Offset: 0x0B0 (R/W)  Comparator Register 9 */
  __IOM uint32_t CPACR;                  /*!< Offset: 0x088 (R/W)  Coprocessor Access Control Register */
  __IOM uint32_t CPICNT;                 /*!< Offset: 0x008 (R/W)  CPI Count Register */
  __IOM uint32_t CPPWR;                  /*!< Offset: 0x00C (R/W)  Coprocessor Power Control  Register */
  __IM  uint32_t CPUID;                  /*!< Offset: 0x000 (R/ )  CPUID Base Register */
  __IOM uint32_t CSPSR;                  /*!< Offset: 0x004 (R/W)  Current Parallel Port Size Register */
  __IOM uint32_t CSSELR;                 /*!< Offset: 0x084 (R/W)  Cache Size Selection Register */
  __IM  uint32_t CTR;                    /*!< Offset: 0x07C (R/ )  Cache Type register */
  __IOM uint32_t CTRL;                   /*!< Offset: 0x000 (R/W)  Control Register */
  __IOM uint32_t CTRL;                   /*!< Offset: 0x000 (R/W)  SAU Control Register */
  __IOM uint32_t CTRL;                   /*!< Offset: 0x000 (R/W)  SysTick Control and Status Register */
  __IOM uint32_t CTRL;                   /*!< Offset: 0x004 (R/W)  MPU Control Register */
  __IOM uint32_t CYCCNT;                 /*!< Offset: 0x004 (R/W)  Cycle Count Register */
  __IOM uint32_t DAUTHCTRL;              /*!< Offset: 0x014 (R/W)  Debug Authentication Control Register */
  __IOM uint32_t DAUTHCTRL;              /*!< Offset: 0x014 (R/W)  Debug Authentication Control Register */
  __IM  uint32_t DAUTHSTATUS;            /*!< Offset: 0x008 (R/ )  Debug Authentication Status Register */
  __OM  uint32_t DCCIMVAC;               /*!< Offset: 0x270 ( /W)  D-Cache Clean and Invalidate by MVA to PoC */
  __OM  uint32_t DCCISW;                 /*!< Offset: 0x274 ( /W)  D-Cache Clean and Invalidate by Set-way */
  __OM  uint32_t DCCMVAC;                /*!< Offset: 0x268 ( /W)  D-Cache Clean by MVA to PoC */
  __OM  uint32_t DCCMVAU;                /*!< Offset: 0x264 ( /W)  D-Cache Clean by MVA to PoU */
  __OM  uint32_t DCCSW;                  /*!< Offset: 0x26C ( /W)  D-Cache Clean by Set-way */
  __OM  uint32_t DCIMVAC;                /*!< Offset: 0x25C ( /W)  D-Cache Invalidate by MVA to PoC */
  __OM  uint32_t DCISW;                  /*!< Offset: 0x260 ( /W)  D-Cache Invalidate by Set-way */
  __IOM uint32_t DCRDR;                  /*!< Offset: 0x008 (R/W)  Debug Core Register Data Register */
  __IOM uint32_t DCRDR;                  /*!< Offset: 0x008 (R/W)  Debug Core Register Data Register */
  __OM  uint32_t DCRSR;                  /*!< Offset: 0x004 ( /W)  Debug Core Register Selector Register */
  __OM  uint32_t DCRSR;                  /*!< Offset: 0x004 ( /W)  Debug Core Register Selector Register */
  __IM  uint32_t DDEVARCH;               /*!< Offset: 0x00C (R/ )  SCS Device Architecture Register */
  __IM  uint32_t DDEVTYPE;               /*!< Offset: 0x010 (R/ )  SCS Device Type Register */
  __IOM uint32_t DEMCR;                  /*!< Offset: 0x00C (R/W)  Debug Exception and Monitor Control Register */
  __IOM uint32_t DEMCR;                  /*!< Offset: 0x00C (R/W)  Debug Exception and Monitor Control Register */
  __IM  uint32_t DEVARCH;                /*!< Offset: 0xFBC (R/ )  Device Architecture Register */
  __IM  uint32_t DEVARCH;                /*!< Offset: 0xFBC (R/ )  ITM Device Architecture Register */
  __IM  uint32_t DEVID;                  /*!< Offset: 0xFC8 (R/ )  Device Configuration Register */
  __IM  uint32_t DEVTYPE;                /*!< Offset: 0xFCC (R/ )  Device Type Identifier Register */
  __IOM uint32_t DFSR;                   /*!< Offset: 0x030 (R/W)  Debug Fault Status Register */
  __IOM uint32_t DHCSR;                  /*!< Offset: 0x000 (R/W)  Debug Halting Control and Status Register */
  __IOM uint32_t DHCSR;                  /*!< Offset: 0x000 (R/W)  Debug Halting Control and Status Register */
  __OM  uint32_t DLAR;                   /*!< Offset: 0x000 ( /W)  SCS Software Lock Access Register */
  __IM  uint32_t DLSR;                   /*!< Offset: 0x004 (R/ )  SCS Software Lock Status Register */
  __IOM uint32_t DSCSR;                  /*!< Offset: 0x018 (R/W)  Debug Security Control and Status Register */
  __IOM uint32_t DSCSR;                  /*!< Offset: 0x018 (R/W)  Debug Security Control and Status Register */
  __IOM uint32_t EXCCNT;                 /*!< Offset: 0x00C (R/W)  Exception Overhead Count Register */
  __IOM uint32_t FFCR;                   /*!< Offset: 0x304 (R/W)  Formatter and Flush Control Register */
  __IM  uint32_t FFSR;                   /*!< Offset: 0x300 (R/ )  Formatter and Flush Status Register */
  __IOM uint32_t FOLDCNT;                /*!< Offset: 0x018 (R/W)  Folded-instruction Count Register */
    uint32_t FPCA:1;                     /*!< bit:      2  Floating-point context active */
  __IOM uint32_t FPCAR;                  /*!< Offset: 0x008 (R/W)  Floating-Point Context Address Register */
  __IOM uint32_t FPCCR;                  /*!< Offset: 0x004 (R/W)  Floating-Point Context Control Register */
  __IOM uint32_t FPDSCR;                 /*!< Offset: 0x00C (R/W)  Floating-Point Default Status Control Register */
  __IOM uint32_t FUNCTION0;              /*!< Offset: 0x028 (R/W)  Function Register 0 */
  __IOM uint32_t FUNCTION1;              /*!< Offset: 0x038 (R/W)  Function Register 1 */
  __IOM uint32_t FUNCTION10;             /*!< Offset: 0x0C8 (R/W)  Function Register 10 */
  __IOM uint32_t FUNCTION11;             /*!< Offset: 0x0D8 (R/W)  Function Register 11 */
  __IOM uint32_t FUNCTION12;             /*!< Offset: 0x0E8 (R/W)  Function Register 12 */
  __IOM uint32_t FUNCTION13;             /*!< Offset: 0x0F8 (R/W)  Function Register 13 */
  __IOM uint32_t FUNCTION14;             /*!< Offset: 0x108 (R/W)  Function Register 14 */
  __IOM uint32_t FUNCTION15;             /*!< Offset: 0x118 (R/W)  Function Register 15 */
  __IOM uint32_t FUNCTION2;              /*!< Offset: 0x048 (R/W)  Function Register 2 */
  __IOM uint32_t FUNCTION3;              /*!< Offset: 0x058 (R/W)  Function Register 3 */
  __IOM uint32_t FUNCTION4;              /*!< Offset: 0x068 (R/W)  Function Register 4 */
  __IOM uint32_t FUNCTION5;              /*!< Offset: 0x078 (R/W)  Function Register 5 */
  __IOM uint32_t FUNCTION6;              /*!< Offset: 0x088 (R/W)  Function Register 6 */
  __IOM uint32_t FUNCTION7;              /*!< Offset: 0x098 (R/W)  Function Register 7 */
  __IOM uint32_t FUNCTION8;              /*!< Offset: 0x0A8 (R/W)  Function Register 8 */
  __IOM uint32_t FUNCTION9;              /*!< Offset: 0x0B8 (R/W)  Function Register 9 */
    uint32_t GE:4;                       /*!< bit: 16..19  Greater than or Equal flags */
    uint32_t GE:4;                       /*!< bit: 16..19  Greater than or Equal flags */
  __IOM uint32_t HFSR;                   /*!< Offset: 0x02C (R/W)  HardFault Status Register */
  __IOM uint32_t IABR[16U];              /*!< Offset: 0x200 (R/W)  Interrupt Active bit Register */
  __IOM uint32_t ICER[16U];              /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register */
  __OM  uint32_t ICIALLU;                /*!< Offset: 0x250 ( /W)  I-Cache Invalidate All to PoU */
  __OM  uint32_t ICIMVAU;                /*!< Offset: 0x258 ( /W)  I-Cache Invalidate by MVA to PoU */
  __IOM uint32_t ICPR[16U];              /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register */
  __IOM uint32_t ICSR;                   /*!< Offset: 0x004 (R/W)  Interrupt Control and State Register */
  __IM  uint32_t ICTR;                   /*!< Offset: 0x004 (R/ )  Interrupt Controller Type Register */
  __IM  uint32_t ID_ADR;                 /*!< Offset: 0x04C (R/ )  Auxiliary Feature Register */
  __IM  uint32_t ID_DFR;                 /*!< Offset: 0x048 (R/ )  Debug Feature Register */
  __IM  uint32_t ID_ISAR[6U];            /*!< Offset: 0x060 (R/ )  Instruction Set Attributes Register */
  __IM  uint32_t ID_MMFR[4U];            /*!< Offset: 0x050 (R/ )  Memory Model Feature Register */
  __IM  uint32_t ID_PFR[2U];             /*!< Offset: 0x040 (R/ )  Processor Feature Register */
  __IOM uint8_t  IPR[496U];              /*!< Offset: 0x300 (R/W)  Interrupt Priority Register (8Bit wide) */
  __IOM uint32_t ISER[16U];              /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register */
  __IOM uint32_t ISPR[16U];              /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register */
    uint32_t ISR:9;                      /*!< bit:  0.. 8  Exception number */
    uint32_t ISR:9;                      /*!< bit:  0.. 8  Exception number */
    uint32_t IT:2;                       /*!< bit: 25..26  saved IT state   (read 0) */
  __IM  uint32_t ITATBCTR0;              /*!< Offset: 0xEF8 (R/ )  Integration Test ATB Control Register 0 */
  __IOM uint32_t ITATBCTR2;              /*!< Offset: 0xEF0 (R/W)  Integration Test ATB Control Register 2 */
  __IOM uint32_t ITCTRL;                 /*!< Offset: 0xF00 (R/W)  Integration Mode Control */
  __IM  uint32_t ITFTTD0;                /*!< Offset: 0xEEC (R/ )  Integration Test FIFO Test Data 0 Register */
  __IM  uint32_t ITFTTD1;                /*!< Offset: 0xEFC (R/ )  Integration Test FIFO Test Data 1 Register */
  __IOM uint32_t ITNS[16U];              /*!< Offset: 0x280 (R/W)  Interrupt Non-Secure State Register */
  __OM  uint32_t LAR;                    /*!< Offset: 0xFB0 ( /W)  ITM Lock Access Register */
  __IOM uint32_t LOAD;                   /*!< Offset: 0x004 (R/W)  SysTick Reload Value Register */
  __IM  uint32_t LSR;                    /*!< Offset: 0xFB4 (R  )  Lock Status Register */
  __IM  uint32_t LSR;                    /*!< Offset: 0xFB4 (R/ )  ITM Lock Status Register */
  __IOM uint32_t LSUCNT;                 /*!< Offset: 0x014 (R/W)  LSU Count Register */
  __IOM uint32_t MAIR[2];
  __IOM uint32_t MAIR0;                  /*!< Offset: 0x030 (R/W)  MPU Memory Attribute Indirection Register 0 */
  __IOM uint32_t MAIR1;                  /*!< Offset: 0x034 (R/W)  MPU Memory Attribute Indirection Register 1 */
  __IOM uint32_t MMFAR;                  /*!< Offset: 0x034 (R/W)  MemManage Fault Address Register */
  __IM  uint32_t MVFR0;                  /*!< Offset: 0x010 (R/ )  Media and VFP Feature Register 0 */
  __IM  uint32_t MVFR0;                  /*!< Offset: 0x240 (R/ )  Media and VFP Feature Register 0 */
  __IM  uint32_t MVFR1;                  /*!< Offset: 0x014 (R/ )  Media and VFP Feature Register 1 */
  __IM  uint32_t MVFR1;                  /*!< Offset: 0x244 (R/ )  Media and VFP Feature Register 1 */
  __IM  uint32_t MVFR2;                  /*!< Offset: 0x018 (R/ )  Media and VFP Feature Register 2 */
  __IM  uint32_t MVFR2;                  /*!< Offset: 0x248 (R/ )  Media and VFP Feature Register 2 */
    uint32_t N:1;                        /*!< bit:     31  Negative condition code flag */
    uint32_t N:1;                        /*!< bit:     31  Negative condition code flag */
  __IOM uint32_t NSACR;                  /*!< Offset: 0x08C (R/W)  Non-Secure Access Control Register */
  __IM  uint32_t PCSR;                   /*!< Offset: 0x01C (R/ )  Program Counter Sample Register */
  __IM  uint32_t PID0;                   /*!< Offset: 0xFE0 (R/ )  ITM Peripheral Identification Register #0 */
  __IM  uint32_t PID1;                   /*!< Offset: 0xFE4 (R/ )  ITM Peripheral Identification Register #1 */
  __IM  uint32_t PID2;                   /*!< Offset: 0xFE8 (R/ )  ITM Peripheral Identification Register #2 */
  __IM  uint32_t PID3;                   /*!< Offset: 0xFEC (R/ )  ITM Peripheral Identification Register #3 */
  __IM  uint32_t PID4;                   /*!< Offset: 0xFD0 (R/ )  ITM Peripheral Identification Register #4 */
  __IM  uint32_t PID5;                   /*!< Offset: 0xFD4 (R/ )  ITM Peripheral Identification Register #5 */
  __IM  uint32_t PID6;                   /*!< Offset: 0xFD8 (R/ )  ITM Peripheral Identification Register #6 */
  __IM  uint32_t PID7;                   /*!< Offset: 0xFDC (R/ )  ITM Peripheral Identification Register #7 */
  }  PORT [32U];                         /*!< Offset: 0x000 ( /W)  ITM Stimulus Port Registers */
  __IOM uint32_t PSCR;                   /*!< Offset: 0x308 (R/W)  Periodic Synchronization Control Register */
    uint32_t Q:1;                        /*!< bit:     27  Saturation condition flag */
    uint32_t Q:1;                        /*!< bit:     27  Saturation condition flag */
  __IOM uint32_t RBAR;                   /*!< Offset: 0x00C (R/W)  MPU Region Base Address Register */
  __IOM uint32_t RBAR;                   /*!< Offset: 0x00C (R/W)  SAU Region Base Address Register */
  __IOM uint32_t RBAR_A1;                /*!< Offset: 0x014 (R/W)  MPU Region Base Address Register Alias 1 */
  __IOM uint32_t RBAR_A2;                /*!< Offset: 0x01C (R/W)  MPU Region Base Address Register Alias 2 */
  __IOM uint32_t RBAR_A3;                /*!< Offset: 0x024 (R/W)  MPU Region Base Address Register Alias 3 */
        uint32_t RESERVED0[16U];
        uint32_t RESERVED0[1U];
        uint32_t RESERVED0[1U];
        uint32_t RESERVED0[1U];
        uint32_t RESERVED0[1U];
        uint32_t RESERVED0[1];
        uint32_t RESERVED0[2U];
        uint32_t RESERVED0[3];
        uint32_t RESERVED0[864U];
        uint32_t RESERVED1[15U];
        uint32_t RESERVED1[1U];
        uint32_t RESERVED1[55U];
        uint32_t RESERVED10[1U];
        uint32_t RESERVED11[1U];
        uint32_t RESERVED12[1U];
        uint32_t RESERVED13[1U];
        uint32_t RESERVED14[1U];
        uint32_t RESERVED15[1U];
        uint32_t RESERVED16[1U];
        uint32_t RESERVED17[1U];
        uint32_t RESERVED18[1U];
        uint32_t RESERVED19[1U];
        uint32_t RESERVED2[131U];
        uint32_t RESERVED2[15U];
        uint32_t RESERVED2[16U];
        uint32_t RESERVED2[1U];
        uint32_t RESERVED20[1U];
        uint32_t RESERVED21[1U];
        uint32_t RESERVED22[1U];
        uint32_t RESERVED23[1U];
        uint32_t RESERVED24[1U];
        uint32_t RESERVED25[1U];
        uint32_t RESERVED26[1U];
        uint32_t RESERVED27[1U];
        uint32_t RESERVED28[1U];
        uint32_t RESERVED29[1U];
        uint32_t RESERVED3[16U];
        uint32_t RESERVED3[1U];
        uint32_t RESERVED3[32U];
        uint32_t RESERVED3[759U];
        uint32_t RESERVED3[92U];
        uint32_t RESERVED30[1U];
        uint32_t RESERVED31[1U];
        uint32_t RESERVED32[934U];
        uint32_t RESERVED33[1U];
        uint32_t RESERVED4[15U];
        uint32_t RESERVED4[16U];
        uint32_t RESERVED4[1U];
        uint32_t RESERVED4[1U];
        uint32_t RESERVED4[43U];
        uint32_t RESERVED5[16U];
        uint32_t RESERVED5[1U];
        uint32_t RESERVED5[1U];
        uint32_t RESERVED5[1U];
        uint32_t RESERVED5[39U];
        uint32_t RESERVED6[1U];
        uint32_t RESERVED6[1U];
        uint32_t RESERVED6[4U];
        uint32_t RESERVED6[580U];
        uint32_t RESERVED7[1U];
        uint32_t RESERVED7[8U];
        uint32_t RESERVED8[1U];
        uint32_t RESERVED9[1U];
  __IOM uint32_t RLAR;                   /*!< Offset: 0x010 (R/W)  MPU Region Limit Address Register */
  __IOM uint32_t RLAR;                   /*!< Offset: 0x010 (R/W)  SAU Region Limit Address Register */
  __IOM uint32_t RLAR_A1;                /*!< Offset: 0x018 (R/W)  MPU Region Limit Address Register Alias 1 */
  __IOM uint32_t RLAR_A2;                /*!< Offset: 0x020 (R/W)  MPU Region Limit Address Register Alias 2 */
  __IOM uint32_t RLAR_A3;                /*!< Offset: 0x028 (R/W)  MPU Region Limit Address Register Alias 3 */
  __IOM uint32_t RNR;                    /*!< Offset: 0x008 (R/W)  MPU Region Number Register */
  __IOM uint32_t RNR;                    /*!< Offset: 0x008 (R/W)  SAU Region Number Register */
        uint32_t RSERVED1[16U];
  __IOM uint32_t SCR;                    /*!< Offset: 0x010 (R/W)  System Control Register */
  __IOM uint32_t SFAR;                   /*!< Offset: 0x018 (R/W)  Secure Fault Address Register */
    uint32_t SFPA:1;                     /*!< bit:      3  Secure floating-point active */
  __IOM uint32_t SFSR;                   /*!< Offset: 0x014 (R/W)  Secure Fault Status Register */
  __IOM uint32_t SHCSR;                  /*!< Offset: 0x024 (R/W)  System Handler Control and State Register */
  __IOM uint8_t  SHPR[12U];              /*!< Offset: 0x018 (R/W)  System Handlers Priority Registers (4-7, 8-11, 12-15) */
  __IOM uint32_t SLEEPCNT;               /*!< Offset: 0x010 (R/W)  Sleep Count Register */
  __IOM uint32_t SPPR;                   /*!< Offset: 0x0F0 (R/W)  Selected Pin Protocol Register */
    uint32_t SPSEL:1;                    /*!< bit:      1  Stack-pointer select */
  __IM  uint32_t SSPSR;                  /*!< Offset: 0x000 (R/ )  Supported Parallel Port Size Register */
  __OM  uint32_t STIR;                   /*!< Offset: 0x200 ( /W)  Software Triggered Interrupt Register */
  __OM  uint32_t STIR;                   /*!< Offset: 0xE00 ( /W)  Software Trigger Interrupt Register */
    uint32_t T:1;                        /*!< bit:     24  Thumb bit        (read 0) */
  __IOM uint32_t TCR;                    /*!< Offset: 0xE80 (R/W)  ITM Trace Control Register */
  __IOM uint32_t TER;                    /*!< Offset: 0xE00 (R/W)  ITM Trace Enable Register */
  __IOM uint32_t TPR;                    /*!< Offset: 0xE40 (R/W)  ITM Trace Privilege Register */
  __IM  uint32_t TRIGGER;                /*!< Offset: 0xEE8 (R/ )  TRIGGER Register */
  __IM  uint32_t TYPE;                   /*!< Offset: 0x000 (R/ )  MPU Type Register */
  __IM  uint32_t TYPE;                   /*!< Offset: 0x004 (R/ )  SAU Type Register */
    uint32_t V:1;                        /*!< bit:     28  Overflow condition code flag */
    uint32_t V:1;                        /*!< bit:     28  Overflow condition code flag */
  __IOM uint32_t VAL;                    /*!< Offset: 0x008 (R/W)  SysTick Current Value Register */
  __IOM uint32_t VTOR;                   /*!< Offset: 0x008 (R/W)  Vector Table Offset Register */
    uint32_t Z:1;                        /*!< bit:     30  Zero condition code flag */
    uint32_t Z:1;                        /*!< bit:     30  Zero condition code flag */
    uint32_t _reserved0:16;              /*!< bit:  0..15  Reserved */
    uint32_t _reserved0:23;              /*!< bit:  9..31  Reserved */
    uint32_t _reserved0:7;               /*!< bit:  9..15  Reserved */
    uint32_t _reserved1:28;              /*!< bit:  4..31  Reserved */
    uint32_t _reserved1:4;               /*!< bit: 20..23  Reserved */
    uint32_t _reserved1:7;               /*!< bit: 20..26  Reserved */
  } b;                                   /*!< Structure used for bit  access */
  } b;                                   /*!< Structure used for bit  access */
  } b;                                   /*!< Structure used for bit  access */
  } b;                                   /*!< Structure used for bit  access */
    uint32_t nPRIV:1;                    /*!< bit:      0  Execution privilege in Thread mode */
    __OM  uint16_t   u16;                /*!< Offset: 0x000 ( /W)  ITM Stimulus Port 16-bit */
    __OM  uint32_t   u32;                /*!< Offset: 0x000 ( /W)  ITM Stimulus Port 32-bit */
    __OM  uint8_t    u8;                 /*!< Offset: 0x000 ( /W)  ITM Stimulus Port 8-bit */
  uint32_t w;                            /*!< Type      used for word access */
  uint32_t w;                            /*!< Type      used for word access */
  uint32_t w;                            /*!< Type      used for word access */
  uint32_t w;                            /*!< Type      used for word access */
