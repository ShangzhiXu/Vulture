#define IS_FSMC_ACCESS_MODE(__MODE__) (((__MODE__) == FSMC_ACCESS_MODE_A) || \
                                       ((__MODE__) == FSMC_ACCESS_MODE_B) || \
                                       ((__MODE__) == FSMC_ACCESS_MODE_C) || \
                                       ((__MODE__) == FSMC_ACCESS_MODE_D))
#define IS_FSMC_ADDRESS_HOLD_TIME(__TIME__) (((__TIME__) > 0U) && ((__TIME__) <= 15U))
#define IS_FSMC_ADDRESS_SETUP_TIME(__TIME__) ((__TIME__) <= 15U)
#define IS_FSMC_ASYNWAIT(__STATE__) (((__STATE__) == FSMC_ASYNCHRONOUS_WAIT_DISABLE) || \
                                     ((__STATE__) == FSMC_ASYNCHRONOUS_WAIT_ENABLE))
#define IS_FSMC_BURSTMODE(__STATE__) (((__STATE__) == FSMC_BURST_ACCESS_MODE_DISABLE) || \
                                      ((__STATE__) == FSMC_BURST_ACCESS_MODE_ENABLE))
#define IS_FSMC_CLK_DIV(DIV) (((DIV) > 1U) && ((DIV) <= 16U))
#define IS_FSMC_CONTINOUS_CLOCK(CCLOCK) (((CCLOCK) == FSMC_CONTINUOUS_CLOCK_SYNC_ONLY) || \
                                         ((CCLOCK) == FSMC_CONTINUOUS_CLOCK_SYNC_ASYNC))
#define IS_FSMC_DATASETUP_TIME(__TIME__) (((__TIME__) > 0U) && ((__TIME__) <= 255U))
#define IS_FSMC_DATA_LATENCY(__LATENCY__) (((__LATENCY__) > 1U) && ((__LATENCY__) <= 17U))
#define IS_FSMC_ECCPAGE_SIZE(SIZE) (((SIZE) == FSMC_NAND_ECC_PAGE_SIZE_256BYTE)  || \
                                   ((SIZE) == FSMC_NAND_ECC_PAGE_SIZE_512BYTE)  || \
                                   ((SIZE) == FSMC_NAND_ECC_PAGE_SIZE_1024BYTE) || \
                                   ((SIZE) == FSMC_NAND_ECC_PAGE_SIZE_2048BYTE) || \
                                   ((SIZE) == FSMC_NAND_ECC_PAGE_SIZE_4096BYTE) || \
                                   ((SIZE) == FSMC_NAND_ECC_PAGE_SIZE_8192BYTE))
#define IS_FSMC_ECC_STATE(STATE) (((STATE) == FSMC_NAND_ECC_DISABLE) || \
                                 ((STATE) == FSMC_NAND_ECC_ENABLE))
#define IS_FSMC_EXTENDED_MODE(__MODE__) (((__MODE__) == FSMC_EXTENDED_MODE_DISABLE) || \
                                         ((__MODE__) == FSMC_EXTENDED_MODE_ENABLE))
#define IS_FSMC_HIZ_TIME(TIME) ((TIME) <= 255U)
#define IS_FSMC_HOLD_TIME(TIME) ((TIME) <= 255U)
#define IS_FSMC_MEMORY(__MEMORY__) (((__MEMORY__) == FSMC_MEMORY_TYPE_SRAM) || \
                                    ((__MEMORY__) == FSMC_MEMORY_TYPE_PSRAM)|| \
                                    ((__MEMORY__) == FSMC_MEMORY_TYPE_NOR))
#define IS_FSMC_MUX(__MUX__) (((__MUX__) == FSMC_DATA_ADDRESS_MUX_DISABLE) || \
                              ((__MUX__) == FSMC_DATA_ADDRESS_MUX_ENABLE))
#define IS_FSMC_NAND_BANK(BANK) (((BANK) == FSMC_NAND_BANK2) || \
                                ((BANK) == FSMC_NAND_BANK3))
#define IS_FSMC_NAND_DEVICE(INSTANCE) ((INSTANCE) == FSMC_NAND_DEVICE)
#define IS_FSMC_NAND_MEMORY_WIDTH(WIDTH) (((WIDTH) == FSMC_NAND_PCC_MEM_BUS_WIDTH_8) || \
                                         ((WIDTH) == FSMC_NAND_PCC_MEM_BUS_WIDTH_16))
#define IS_FSMC_NORSRAM_BANK(__BANK__) (((__BANK__) == FSMC_NORSRAM_BANK1) || \
                                        ((__BANK__) == FSMC_NORSRAM_BANK2) || \
                                        ((__BANK__) == FSMC_NORSRAM_BANK3) || \
                                        ((__BANK__) == FSMC_NORSRAM_BANK4))
#define IS_FSMC_NORSRAM_DEVICE(__INSTANCE__) ((__INSTANCE__) == FSMC_NORSRAM_DEVICE)
#define IS_FSMC_NORSRAM_EXTENDED_DEVICE(__INSTANCE__) ((__INSTANCE__) == FSMC_NORSRAM_EXTENDED_DEVICE)
#define IS_FSMC_NORSRAM_MEMORY_WIDTH(__WIDTH__) (((__WIDTH__) == FSMC_NORSRAM_MEM_BUS_WIDTH_8)  || \
                                                 ((__WIDTH__) == FSMC_NORSRAM_MEM_BUS_WIDTH_16) || \
                                                 ((__WIDTH__) == FSMC_NORSRAM_MEM_BUS_WIDTH_32))
#define IS_FSMC_PAGESIZE(SIZE) (((SIZE) == FSMC_PAGE_SIZE_NONE) || \
                                ((SIZE) == FSMC_PAGE_SIZE_128)  || \
                                ((SIZE) == FSMC_PAGE_SIZE_256)  || \
                                ((SIZE) == FSMC_PAGE_SIZE_512)  || \
                                ((SIZE) == FSMC_PAGE_SIZE_1024))
#define IS_FSMC_PCCARD_DEVICE(INSTANCE) ((INSTANCE) == FSMC_PCCARD_DEVICE)
#define IS_FSMC_SETUP_TIME(TIME) ((TIME) <= 255U)
#define IS_FSMC_TAR_TIME(TIME) ((TIME) <= 255U)
#define IS_FSMC_TCLR_TIME(TIME) ((TIME) <= 255U)
#define IS_FSMC_TURNAROUND_TIME(__TIME__) ((__TIME__) <= 15U)
#define IS_FSMC_WAITE_SIGNAL(__SIGNAL__) (((__SIGNAL__) == FSMC_WAIT_SIGNAL_DISABLE) || \
                                          ((__SIGNAL__) == FSMC_WAIT_SIGNAL_ENABLE)) 
#define IS_FSMC_WAIT_FEATURE(FEATURE) (((FEATURE) == FSMC_NAND_PCC_WAIT_FEATURE_DISABLE) || \
                                      ((FEATURE) == FSMC_NAND_PCC_WAIT_FEATURE_ENABLE))
#define IS_FSMC_WAIT_POLARITY(__POLARITY__) (((__POLARITY__) == FSMC_WAIT_SIGNAL_POLARITY_LOW) || \
                                             ((__POLARITY__) == FSMC_WAIT_SIGNAL_POLARITY_HIGH))
#define IS_FSMC_WAIT_SIGNAL_ACTIVE(__ACTIVE__) (((__ACTIVE__) == FSMC_WAIT_TIMING_BEFORE_WS) || \
                                                ((__ACTIVE__) == FSMC_WAIT_TIMING_DURING_WS)) 
#define IS_FSMC_WAIT_TIME(TIME) ((TIME) <= 255U)
#define IS_FSMC_WRAP_MODE(__MODE__) (((__MODE__) == FSMC_WRAP_MODE_DISABLE) || \
                                     ((__MODE__) == FSMC_WRAP_MODE_ENABLE)) 
#define IS_FSMC_WRITE_BURST(__BURST__) (((__BURST__) == FSMC_WRITE_BURST_DISABLE) || \
                                        ((__BURST__) == FSMC_WRITE_BURST_ENABLE)) 
#define IS_FSMC_WRITE_FIFO(FIFO) (((FIFO) == FSMC_WRITE_FIFO_DISABLE) || \
                                  ((FIFO) == FSMC_WRITE_FIFO_ENABLE))
#define IS_FSMC_WRITE_OPERATION(__OPERATION__) (((__OPERATION__) == FSMC_WRITE_OPERATION_DISABLE) || \
                                                ((__OPERATION__) == FSMC_WRITE_OPERATION_ENABLE))
#define __FSMC_NAND_CLEAR_FLAG(__INSTANCE__, __BANK__, __FLAG__)  (((__BANK__) == FSMC_NAND_BANK2)? ((__INSTANCE__)->SR2 &= ~(__FLAG__)): \
                                                                                                     ((__INSTANCE__)->SR3 &= ~(__FLAG__))) 
#define __FSMC_NAND_DISABLE(__INSTANCE__, __BANK__) (((__BANK__) == FSMC_NAND_BANK2)? ((__INSTANCE__)->PCR2 &= ~FSMC_PCR2_PBKEN): \
                                                   ((__INSTANCE__)->PCR3 &= ~FSMC_PCR3_PBKEN))
#define __FSMC_NAND_DISABLE_IT(__INSTANCE__, __BANK__, __INTERRUPT__)  (((__BANK__) == FSMC_NAND_BANK2)? ((__INSTANCE__)->SR2 &= ~(__INTERRUPT__)): \
                                                                                                          ((__INSTANCE__)->SR3 &= ~(__INTERRUPT__))) 
#define __FSMC_NAND_ENABLE(__INSTANCE__, __BANK__)  (((__BANK__) == FSMC_NAND_BANK2)? ((__INSTANCE__)->PCR2 |= FSMC_PCR2_PBKEN): \
                                                    ((__INSTANCE__)->PCR3 |= FSMC_PCR3_PBKEN))
#define __FSMC_NAND_ENABLE_IT(__INSTANCE__, __BANK__, __INTERRUPT__)  (((__BANK__) == FSMC_NAND_BANK2)? ((__INSTANCE__)->SR2 |= (__INTERRUPT__)): \
                                                                                                         ((__INSTANCE__)->SR3 |= (__INTERRUPT__)))
#define __FSMC_NAND_GET_FLAG(__INSTANCE__, __BANK__, __FLAG__)  (((__BANK__) == FSMC_NAND_BANK2)? (((__INSTANCE__)->SR2 &(__FLAG__)) == (__FLAG__)): \
                                                                                                   (((__INSTANCE__)->SR3 &(__FLAG__)) == (__FLAG__)))
#define __FSMC_NORSRAM_DISABLE(__INSTANCE__, __BANK__) ((__INSTANCE__)->BTCR[(__BANK__)] &= ~FSMC_BCR1_MBKEN)  
#define __FSMC_NORSRAM_ENABLE(__INSTANCE__, __BANK__)  ((__INSTANCE__)->BTCR[(__BANK__)] |= FSMC_BCR1_MBKEN)
#define __FSMC_PCCARD_CLEAR_FLAG(__INSTANCE__, __FLAG__)  ((__INSTANCE__)->SR4 &= ~(__FLAG__))
#define __FSMC_PCCARD_DISABLE(__INSTANCE__) ((__INSTANCE__)->PCR4 &= ~FSMC_PCR4_PBKEN)
#define __FSMC_PCCARD_DISABLE_IT(__INSTANCE__, __INTERRUPT__)  ((__INSTANCE__)->SR4 &= ~(__INTERRUPT__)) 
#define __FSMC_PCCARD_ENABLE(__INSTANCE__)  ((__INSTANCE__)->PCR4 |= FSMC_PCR4_PBKEN)
#define __FSMC_PCCARD_ENABLE_IT(__INSTANCE__, __INTERRUPT__)  ((__INSTANCE__)->SR4 |= (__INTERRUPT__))
#define __FSMC_PCCARD_GET_FLAG(__INSTANCE__, __FLAG__)  (((__INSTANCE__)->SR4 &(__FLAG__)) == (__FLAG__))
