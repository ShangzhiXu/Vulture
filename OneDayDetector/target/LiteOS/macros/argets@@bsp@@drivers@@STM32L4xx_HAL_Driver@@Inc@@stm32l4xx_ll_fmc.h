#define IS_FMC_ACCESS_MODE(__MODE__) (((__MODE__) == FMC_ACCESS_MODE_A) || \
                                       ((__MODE__) == FMC_ACCESS_MODE_B) || \
                                       ((__MODE__) == FMC_ACCESS_MODE_C) || \
                                       ((__MODE__) == FMC_ACCESS_MODE_D))
#define IS_FMC_ADDRESS_HOLD_TIME(__TIME__) (((__TIME__) > 0) && ((__TIME__) <= 15))
#define IS_FMC_ADDRESS_SETUP_TIME(__TIME__) ((__TIME__) <= 15)
#define IS_FMC_ASYNWAIT(__STATE__) (((__STATE__) == FMC_ASYNCHRONOUS_WAIT_DISABLE) || \
                                     ((__STATE__) == FMC_ASYNCHRONOUS_WAIT_ENABLE))
#define IS_FMC_BURSTMODE(__STATE__) (((__STATE__) == FMC_BURST_ACCESS_MODE_DISABLE) || \
                                      ((__STATE__) == FMC_BURST_ACCESS_MODE_ENABLE))
#define IS_FMC_CLK_DIV(__DIV__) (((__DIV__) > 1) && ((__DIV__) <= 16))
#define IS_FMC_CONTINOUS_CLOCK(__CCLOCK__)     (((__CCLOCK__) == FMC_CONTINUOUS_CLOCK_SYNC_ONLY) || \
                                                ((__CCLOCK__) == FMC_CONTINUOUS_CLOCK_SYNC_ASYNC))
#define IS_FMC_DATAHOLD_TIME(__TIME__) ((__TIME__) <= 3)
#define IS_FMC_DATASETUP_TIME(__TIME__) (((__TIME__) > 0) && ((__TIME__) <= 255))
#define IS_FMC_DATA_LATENCY(__LATENCY__) (((__LATENCY__) > 1) && ((__LATENCY__) <= 17))
#define IS_FMC_ECCPAGE_SIZE(__SIZE__) (((__SIZE__) == FMC_NAND_ECC_PAGE_SIZE_256BYTE)  || \
                                   ((__SIZE__) == FMC_NAND_ECC_PAGE_SIZE_512BYTE)  || \
                                   ((__SIZE__) == FMC_NAND_ECC_PAGE_SIZE_1024BYTE) || \
                                   ((__SIZE__) == FMC_NAND_ECC_PAGE_SIZE_2048BYTE) || \
                                   ((__SIZE__) == FMC_NAND_ECC_PAGE_SIZE_4096BYTE) || \
                                   ((__SIZE__) == FMC_NAND_ECC_PAGE_SIZE_8192BYTE))
#define IS_FMC_ECC_STATE(__STATE__) (((__STATE__) == FMC_NAND_ECC_DISABLE) || \
                                 ((__STATE__) == FMC_NAND_ECC_ENABLE))
#define IS_FMC_EXTENDED_MODE(__MODE__) (((__MODE__) == FMC_EXTENDED_MODE_DISABLE) || \
                                         ((__MODE__) == FMC_EXTENDED_MODE_ENABLE))
#define IS_FMC_HIZ_TIME(__TIME__) ((__TIME__) <= 255)
#define IS_FMC_HOLD_TIME(__TIME__) ((__TIME__) <= 255)
#define IS_FMC_MEMORY(__MEMORY__) (((__MEMORY__) == FMC_MEMORY_TYPE_SRAM) || \
                                    ((__MEMORY__) == FMC_MEMORY_TYPE_PSRAM)|| \
                                    ((__MEMORY__) == FMC_MEMORY_TYPE_NOR))
#define IS_FMC_MUX(__MUX__) (((__MUX__) == FMC_DATA_ADDRESS_MUX_DISABLE) || \
                              ((__MUX__) == FMC_DATA_ADDRESS_MUX_ENABLE))
#define IS_FMC_NAND_BANK(__BANK__) ((__BANK__) == FMC_NAND_BANK3)
#define IS_FMC_NAND_DEVICE(__INSTANCE__) ((__INSTANCE__) == FMC_NAND_DEVICE)
#define IS_FMC_NAND_MEMORY_WIDTH(__WIDTH__) (((__WIDTH__) == FMC_NAND_MEM_BUS_WIDTH_8) || \
                                         ((__WIDTH__) == FMC_NAND_MEM_BUS_WIDTH_16))
#define IS_FMC_NBLSETUP_TIME(__TIME__)         ((__TIME__) <= 3)
#define IS_FMC_NORSRAM_BANK(__BANK__) (((__BANK__) == FMC_NORSRAM_BANK1) || \
                                        ((__BANK__) == FMC_NORSRAM_BANK2) || \
                                        ((__BANK__) == FMC_NORSRAM_BANK3) || \
                                        ((__BANK__) == FMC_NORSRAM_BANK4))
#define IS_FMC_NORSRAM_DEVICE(__INSTANCE__) ((__INSTANCE__) == FMC_NORSRAM_DEVICE)
#define IS_FMC_NORSRAM_EXTENDED_DEVICE(__INSTANCE__) ((__INSTANCE__) == FMC_NORSRAM_EXTENDED_DEVICE)
#define IS_FMC_NORSRAM_MEMORY_WIDTH(__WIDTH__) (((__WIDTH__) == FMC_NORSRAM_MEM_BUS_WIDTH_8)  || \
                                                 ((__WIDTH__) == FMC_NORSRAM_MEM_BUS_WIDTH_16) || \
                                                 ((__WIDTH__) == FMC_NORSRAM_MEM_BUS_WIDTH_32))
#define IS_FMC_PAGESIZE(__SIZE__)              (((__SIZE__) == FMC_PAGE_SIZE_NONE) || \
                                                ((__SIZE__) == FMC_PAGE_SIZE_128) || \
                                                ((__SIZE__) == FMC_PAGE_SIZE_256) || \
                                                ((__SIZE__) == FMC_PAGE_SIZE_512) || \
                                                ((__SIZE__) == FMC_PAGE_SIZE_1024))
#define IS_FMC_SETUP_TIME(__TIME__) ((__TIME__) <= 255)
#define IS_FMC_TAR_TIME(__TIME__) ((__TIME__) <= 255)
#define IS_FMC_TCLR_TIME(__TIME__) ((__TIME__) <= 255)
#define IS_FMC_TURNAROUND_TIME(__TIME__) ((__TIME__) <= 15)
#define IS_FMC_WAITE_SIGNAL(__SIGNAL__) (((__SIGNAL__) == FMC_WAIT_SIGNAL_DISABLE) || \
                                          ((__SIGNAL__) == FMC_WAIT_SIGNAL_ENABLE))
#define IS_FMC_WAIT_FEATURE(__FEATURE__) (((__FEATURE__) == FMC_NAND_WAIT_FEATURE_DISABLE) || \
                                      ((__FEATURE__) == FMC_NAND_WAIT_FEATURE_ENABLE))
#define IS_FMC_WAIT_POLARITY(__POLARITY__) (((__POLARITY__) == FMC_WAIT_SIGNAL_POLARITY_LOW) || \
                                             ((__POLARITY__) == FMC_WAIT_SIGNAL_POLARITY_HIGH))
#define IS_FMC_WAIT_SIGNAL_ACTIVE(__ACTIVE__) (((__ACTIVE__) == FMC_WAIT_TIMING_BEFORE_WS) || \
                                                ((__ACTIVE__) == FMC_WAIT_TIMING_DURING_WS))
#define IS_FMC_WAIT_TIME(__TIME__) ((__TIME__) <= 255)
#define IS_FMC_WRITE_BURST(__BURST__)          (((__BURST__) == FMC_WRITE_BURST_DISABLE) || \
                                                ((__BURST__) == FMC_WRITE_BURST_ENABLE))
#define IS_FMC_WRITE_FIFO(__FIFO__)            (((__FIFO__) == FMC_WRITE_FIFO_DISABLE) || \
                                                ((__FIFO__) == FMC_WRITE_FIFO_ENABLE))
#define IS_FMC_WRITE_OPERATION(__OPERATION__) (((__OPERATION__) == FMC_WRITE_OPERATION_DISABLE) || \
                                                ((__OPERATION__) == FMC_WRITE_OPERATION_ENABLE))
#define __FMC_NAND_CLEAR_FLAG(__INSTANCE__, __BANK__, __FLAG__)  CLEAR_BIT((__INSTANCE__)->SR, (__FLAG__))
#define __FMC_NAND_DISABLE(__INSTANCE__, __BANK__) CLEAR_BIT((__INSTANCE__)->PCR, FMC_PCR_PBKEN)
#define __FMC_NAND_DISABLE_IT(__INSTANCE__, __BANK__, __INTERRUPT__)  CLEAR_BIT((__INSTANCE__)->SR, (__INTERRUPT__))
#define __FMC_NAND_ENABLE(__INSTANCE__, __BANK__)  SET_BIT((__INSTANCE__)->PCR, FMC_PCR_PBKEN)
#define __FMC_NAND_ENABLE_IT(__INSTANCE__, __BANK__, __INTERRUPT__)  SET_BIT((__INSTANCE__)->SR, (__INTERRUPT__))
#define __FMC_NAND_GET_FLAG(__INSTANCE__, __BANK__, __FLAG__)  (((__INSTANCE__)->SR &(__FLAG__)) == (__FLAG__))
#define __FMC_NORSRAM_DISABLE(__INSTANCE__, __BANK__) CLEAR_BIT((__INSTANCE__)->BTCR[(__BANK__)], FMC_BCRx_MBKEN)
#define __FMC_NORSRAM_ENABLE(__INSTANCE__, __BANK__)  SET_BIT((__INSTANCE__)->BTCR[(__BANK__)], FMC_BCRx_MBKEN)
