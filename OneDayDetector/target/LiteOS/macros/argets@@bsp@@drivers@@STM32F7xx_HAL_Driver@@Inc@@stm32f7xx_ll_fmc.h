#define IS_FMC_ACCESS_MODE(__MODE__) (((__MODE__) == FMC_ACCESS_MODE_A) || \
                                       ((__MODE__) == FMC_ACCESS_MODE_B) || \
                                       ((__MODE__) == FMC_ACCESS_MODE_C) || \
                                       ((__MODE__) == FMC_ACCESS_MODE_D))
#define IS_FMC_ADDRESS_HOLD_TIME(__TIME__) (((__TIME__) > 0) && ((__TIME__) <= 15))
#define IS_FMC_ADDRESS_SETUP_TIME(__TIME__) ((__TIME__) <= 15)
#define IS_FMC_ASYNWAIT(__STATE__) (((__STATE__) == FMC_ASYNCHRONOUS_WAIT_DISABLE) || \
                                     ((__STATE__) == FMC_ASYNCHRONOUS_WAIT_ENABLE))
#define IS_FMC_AUTOREFRESH_NUMBER(__NUMBER__) (((__NUMBER__) > 0) && ((__NUMBER__) <= 16))
#define IS_FMC_BURSTMODE(__STATE__) (((__STATE__) == FMC_BURST_ACCESS_MODE_DISABLE) || \
                                      ((__STATE__) == FMC_BURST_ACCESS_MODE_ENABLE))
#define IS_FMC_CAS_LATENCY(LATENCY) (((LATENCY) == FMC_SDRAM_CAS_LATENCY_1) || \
                                     ((LATENCY) == FMC_SDRAM_CAS_LATENCY_2) || \
                                     ((LATENCY) == FMC_SDRAM_CAS_LATENCY_3))
#define IS_FMC_CLK_DIV(DIV) (((DIV) > 1) && ((DIV) <= 16))
#define IS_FMC_COLUMNBITS_NUMBER(COLUMN) (((COLUMN) == FMC_SDRAM_COLUMN_BITS_NUM_8)  || \
                                          ((COLUMN) == FMC_SDRAM_COLUMN_BITS_NUM_9)  || \
                                          ((COLUMN) == FMC_SDRAM_COLUMN_BITS_NUM_10) || \
                                          ((COLUMN) == FMC_SDRAM_COLUMN_BITS_NUM_11))
#define IS_FMC_COMMAND_MODE(__COMMAND__) (((__COMMAND__) == FMC_SDRAM_CMD_NORMAL_MODE)      || \
                                          ((__COMMAND__) == FMC_SDRAM_CMD_CLK_ENABLE)       || \
                                          ((__COMMAND__) == FMC_SDRAM_CMD_PALL)             || \
                                          ((__COMMAND__) == FMC_SDRAM_CMD_AUTOREFRESH_MODE) || \
                                          ((__COMMAND__) == FMC_SDRAM_CMD_LOAD_MODE)        || \
                                          ((__COMMAND__) == FMC_SDRAM_CMD_SELFREFRESH_MODE) || \
                                          ((__COMMAND__) == FMC_SDRAM_CMD_POWERDOWN_MODE))
#define IS_FMC_COMMAND_TARGET(__TARGET__) (((__TARGET__) == FMC_SDRAM_CMD_TARGET_BANK1) || \
                                           ((__TARGET__) == FMC_SDRAM_CMD_TARGET_BANK2) || \
                                           ((__TARGET__) == FMC_SDRAM_CMD_TARGET_BANK1_2)) 										  
#define IS_FMC_CONTINOUS_CLOCK(CCLOCK) (((CCLOCK) == FMC_CONTINUOUS_CLOCK_SYNC_ONLY) || \
                                        ((CCLOCK) == FMC_CONTINUOUS_CLOCK_SYNC_ASYNC))
#define IS_FMC_DATASETUP_TIME(__TIME__) (((__TIME__) > 0) && ((__TIME__) <= 255))
#define IS_FMC_DATA_LATENCY(__LATENCY__) (((__LATENCY__) > 1) && ((__LATENCY__) <= 17))
#define IS_FMC_ECCPAGE_SIZE(SIZE) (((SIZE) == FMC_NAND_ECC_PAGE_SIZE_256BYTE)  || \
                                   ((SIZE) == FMC_NAND_ECC_PAGE_SIZE_512BYTE)  || \
                                   ((SIZE) == FMC_NAND_ECC_PAGE_SIZE_1024BYTE) || \
                                   ((SIZE) == FMC_NAND_ECC_PAGE_SIZE_2048BYTE) || \
                                   ((SIZE) == FMC_NAND_ECC_PAGE_SIZE_4096BYTE) || \
                                   ((SIZE) == FMC_NAND_ECC_PAGE_SIZE_8192BYTE))
#define IS_FMC_ECC_STATE(STATE) (((STATE) == FMC_NAND_ECC_DISABLE) || \
                                 ((STATE) == FMC_NAND_ECC_ENABLE))
#define IS_FMC_EXITSELFREFRESH_DELAY(__DELAY__) (((__DELAY__) > 0) && ((__DELAY__) <= 16))
#define IS_FMC_EXTENDED_MODE(__MODE__) (((__MODE__) == FMC_EXTENDED_MODE_DISABLE) || \
                                         ((__MODE__) == FMC_EXTENDED_MODE_ENABLE))
#define IS_FMC_HIZ_TIME(TIME) ((TIME) <= 254)
#define IS_FMC_HOLD_TIME(TIME) ((TIME) <= 254)
#define IS_FMC_INTERNALBANK_NUMBER(NUMBER) (((NUMBER) == FMC_SDRAM_INTERN_BANKS_NUM_2) || \
                                            ((NUMBER) == FMC_SDRAM_INTERN_BANKS_NUM_4))
#define IS_FMC_LOADTOACTIVE_DELAY(__DELAY__) (((__DELAY__) > 0) && ((__DELAY__) <= 16))
#define IS_FMC_MEMORY(__MEMORY__) (((__MEMORY__) == FMC_MEMORY_TYPE_SRAM) || \
                                    ((__MEMORY__) == FMC_MEMORY_TYPE_PSRAM)|| \
                                    ((__MEMORY__) == FMC_MEMORY_TYPE_NOR))
#define IS_FMC_MODE_REGISTER(__CONTENT__) ((__CONTENT__) <= 8191)
#define IS_FMC_MUX(__MUX__) (((__MUX__) == FMC_DATA_ADDRESS_MUX_DISABLE) || \
                              ((__MUX__) == FMC_DATA_ADDRESS_MUX_ENABLE))
#define IS_FMC_NAND_BANK(BANK) ((BANK) == FMC_NAND_BANK3)
#define IS_FMC_NAND_DEVICE(__INSTANCE__) ((__INSTANCE__) == FMC_NAND_DEVICE)
#define IS_FMC_NAND_MEMORY_WIDTH(WIDTH) (((WIDTH) == FMC_NAND_MEM_BUS_WIDTH_8) || \
                                         ((WIDTH) == FMC_NAND_MEM_BUS_WIDTH_16))
#define IS_FMC_NORSRAM_BANK(BANK) (((BANK) == FMC_NORSRAM_BANK1) || \
                                   ((BANK) == FMC_NORSRAM_BANK2) || \
                                   ((BANK) == FMC_NORSRAM_BANK3) || \
                                   ((BANK) == FMC_NORSRAM_BANK4))
#define IS_FMC_NORSRAM_DEVICE(__INSTANCE__) ((__INSTANCE__) == FMC_NORSRAM_DEVICE)
#define IS_FMC_NORSRAM_EXTENDED_DEVICE(__INSTANCE__) ((__INSTANCE__) == FMC_NORSRAM_EXTENDED_DEVICE)
#define IS_FMC_NORSRAM_MEMORY_WIDTH(__WIDTH__) (((__WIDTH__) == FMC_NORSRAM_MEM_BUS_WIDTH_8)  || \
                                                 ((__WIDTH__) == FMC_NORSRAM_MEM_BUS_WIDTH_16) || \
                                                 ((__WIDTH__) == FMC_NORSRAM_MEM_BUS_WIDTH_32))
#define IS_FMC_PAGESIZE(__SIZE__) (((__SIZE__) == FMC_PAGE_SIZE_NONE) || \
                                   ((__SIZE__) == FMC_PAGE_SIZE_128) || \
                                   ((__SIZE__) == FMC_PAGE_SIZE_256) || \
                                   ((__SIZE__) == FMC_PAGE_SIZE_512) || \
                                   ((__SIZE__) == FMC_PAGE_SIZE_1024))
#define IS_FMC_RCD_DELAY(__DELAY__) (((__DELAY__) > 0) && ((__DELAY__) <= 16))
#define IS_FMC_READPIPE_DELAY(__DELAY__) (((__DELAY__) == FMC_SDRAM_RPIPE_DELAY_0) || \
                                          ((__DELAY__) == FMC_SDRAM_RPIPE_DELAY_1) || \
                                          ((__DELAY__) == FMC_SDRAM_RPIPE_DELAY_2))
#define IS_FMC_READ_BURST(__RBURST__) (((__RBURST__) == FMC_SDRAM_RBURST_DISABLE) || \
                                       ((__RBURST__) == FMC_SDRAM_RBURST_ENABLE))
#define IS_FMC_REFRESH_RATE(__RATE__) ((__RATE__) <= 8191)
#define IS_FMC_ROWBITS_NUMBER(ROW) (((ROW) == FMC_SDRAM_ROW_BITS_NUM_11) || \
                                    ((ROW) == FMC_SDRAM_ROW_BITS_NUM_12) || \
                                    ((ROW) == FMC_SDRAM_ROW_BITS_NUM_13))
#define IS_FMC_ROWCYCLE_DELAY(__DELAY__) (((__DELAY__) > 0) && ((__DELAY__) <= 16))
#define IS_FMC_RP_DELAY(__DELAY__) (((__DELAY__) > 0) && ((__DELAY__) <= 16))
#define IS_FMC_SDCLOCK_PERIOD(__PERIOD__) (((__PERIOD__) == FMC_SDRAM_CLOCK_DISABLE)  || \
                                           ((__PERIOD__) == FMC_SDRAM_CLOCK_PERIOD_2) || \
                                           ((__PERIOD__) == FMC_SDRAM_CLOCK_PERIOD_3))
#define IS_FMC_SDMEMORY_WIDTH(WIDTH) (((WIDTH) == FMC_SDRAM_MEM_BUS_WIDTH_8)  || \
                                      ((WIDTH) == FMC_SDRAM_MEM_BUS_WIDTH_16) || \
                                      ((WIDTH) == FMC_SDRAM_MEM_BUS_WIDTH_32))
#define IS_FMC_SDRAM_BANK(BANK) (((BANK) == FMC_SDRAM_BANK1) || \
                                 ((BANK) == FMC_SDRAM_BANK2))
#define IS_FMC_SDRAM_DEVICE(__INSTANCE__) ((__INSTANCE__) == FMC_SDRAM_DEVICE)
#define IS_FMC_SELFREFRESH_TIME(__TIME__) (((__TIME__) > 0) && ((__TIME__) <= 16))
#define IS_FMC_SETUP_TIME(TIME) ((TIME) <= 254)
#define IS_FMC_TAR_TIME(TIME) ((TIME) <= 255)
#define IS_FMC_TCLR_TIME(__TIME__) ((__TIME__) <= 255)
#define IS_FMC_TURNAROUND_TIME(__TIME__) ((__TIME__) <= 15)
#define IS_FMC_WAITE_SIGNAL(__SIGNAL__) (((__SIGNAL__) == FMC_WAIT_SIGNAL_DISABLE) || \
                                          ((__SIGNAL__) == FMC_WAIT_SIGNAL_ENABLE))
#define IS_FMC_WAIT_FEATURE(FEATURE) (((FEATURE) == FMC_NAND_WAIT_FEATURE_DISABLE) || \
                                      ((FEATURE) == FMC_NAND_WAIT_FEATURE_ENABLE))
#define IS_FMC_WAIT_POLARITY(__POLARITY__) (((__POLARITY__) == FMC_WAIT_SIGNAL_POLARITY_LOW) || \
                                             ((__POLARITY__) == FMC_WAIT_SIGNAL_POLARITY_HIGH))
#define IS_FMC_WAIT_SIGNAL_ACTIVE(__ACTIVE__) (((__ACTIVE__) == FMC_WAIT_TIMING_BEFORE_WS) || \
                                                ((__ACTIVE__) == FMC_WAIT_TIMING_DURING_WS)) 
#define IS_FMC_WAIT_TIME(TIME) ((TIME) <= 254)
#define IS_FMC_WRITE_BURST(__BURST__) (((__BURST__) == FMC_WRITE_BURST_DISABLE) || \
                                        ((__BURST__) == FMC_WRITE_BURST_ENABLE))
#define IS_FMC_WRITE_FIFO(__FIFO__) (((__FIFO__) == FMC_WRITE_FIFO_DISABLE) || \
                                     ((__FIFO__) == FMC_WRITE_FIFO_ENABLE))
#define IS_FMC_WRITE_OPERATION(__OPERATION__) (((__OPERATION__) == FMC_WRITE_OPERATION_DISABLE) || \
                                                ((__OPERATION__) == FMC_WRITE_OPERATION_ENABLE))
#define IS_FMC_WRITE_PROTECTION(__WRITE__) (((__WRITE__) == FMC_SDRAM_WRITE_PROTECTION_DISABLE) || \
                                            ((__WRITE__) == FMC_SDRAM_WRITE_PROTECTION_ENABLE))									  
#define IS_FMC_WRITE_RECOVERY_TIME(__TIME__) (((__TIME__) > 0) && ((__TIME__) <= 16))
#define __FMC_NAND_CLEAR_FLAG(__INSTANCE__, __FLAG__)  ((__INSTANCE__)->SR &= ~(__FLAG__))  
#define __FMC_NAND_DISABLE(__INSTANCE__) ((__INSTANCE__)->PCR &= ~FMC_PCR_PBKEN)
#define __FMC_NAND_DISABLE_IT(__INSTANCE__, __INTERRUPT__)  ((__INSTANCE__)->SR &= ~(__INTERRUPT__))
#define __FMC_NAND_ENABLE(__INSTANCE__)  ((__INSTANCE__)->PCR |= FMC_PCR_PBKEN)
#define __FMC_NAND_ENABLE_IT(__INSTANCE__, __INTERRUPT__)  ((__INSTANCE__)->SR |= (__INTERRUPT__))
#define __FMC_NAND_GET_FLAG(__INSTANCE__, __BANK__, __FLAG__)  (((__INSTANCE__)->SR &(__FLAG__)) == (__FLAG__))
#define __FMC_NORSRAM_DISABLE(__INSTANCE__, __BANK__) ((__INSTANCE__)->BTCR[(__BANK__)] &= ~FMC_BCR1_MBKEN)  
#define __FMC_NORSRAM_ENABLE(__INSTANCE__, __BANK__)  ((__INSTANCE__)->BTCR[(__BANK__)] |= FMC_BCR1_MBKEN)
#define __FMC_SDRAM_CLEAR_FLAG(__INSTANCE__, __FLAG__)  ((__INSTANCE__)->SDRTR |= (__FLAG__))
#define __FMC_SDRAM_DISABLE_IT(__INSTANCE__, __INTERRUPT__)  ((__INSTANCE__)->SDRTR &= ~(__INTERRUPT__))
#define __FMC_SDRAM_ENABLE_IT(__INSTANCE__, __INTERRUPT__)  ((__INSTANCE__)->SDRTR |= (__INTERRUPT__))
#define __FMC_SDRAM_GET_FLAG(__INSTANCE__, __FLAG__)  (((__INSTANCE__)->SDSR &(__FLAG__)) == (__FLAG__))
