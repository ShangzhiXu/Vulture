#define IS_SDMMC_BLOCK_SIZE(SIZE) (((SIZE) == SDMMC_DATABLOCK_SIZE_1B)    || \
                                   ((SIZE) == SDMMC_DATABLOCK_SIZE_2B)    || \
                                   ((SIZE) == SDMMC_DATABLOCK_SIZE_4B)    || \
                                   ((SIZE) == SDMMC_DATABLOCK_SIZE_8B)    || \
                                   ((SIZE) == SDMMC_DATABLOCK_SIZE_16B)   || \
                                   ((SIZE) == SDMMC_DATABLOCK_SIZE_32B)   || \
                                   ((SIZE) == SDMMC_DATABLOCK_SIZE_64B)   || \
                                   ((SIZE) == SDMMC_DATABLOCK_SIZE_128B)  || \
                                   ((SIZE) == SDMMC_DATABLOCK_SIZE_256B)  || \
                                   ((SIZE) == SDMMC_DATABLOCK_SIZE_512B)  || \
                                   ((SIZE) == SDMMC_DATABLOCK_SIZE_1024B) || \
                                   ((SIZE) == SDMMC_DATABLOCK_SIZE_2048B) || \
                                   ((SIZE) == SDMMC_DATABLOCK_SIZE_4096B) || \
                                   ((SIZE) == SDMMC_DATABLOCK_SIZE_8192B) || \
                                   ((SIZE) == SDMMC_DATABLOCK_SIZE_16384B)) 
#define IS_SDMMC_BUS_WIDE(WIDE) (((WIDE) == SDMMC_BUS_WIDE_1B) || \
                                 ((WIDE) == SDMMC_BUS_WIDE_4B) || \
                                 ((WIDE) == SDMMC_BUS_WIDE_8B))
#define IS_SDMMC_CLKDIV(DIV)   ((DIV) <= 0xFF)
#define IS_SDMMC_CLOCK_BYPASS(BYPASS) (((BYPASS) == SDMMC_CLOCK_BYPASS_DISABLE) || \
                                       ((BYPASS) == SDMMC_CLOCK_BYPASS_ENABLE))
#define IS_SDMMC_CLOCK_EDGE(EDGE) (((EDGE) == SDMMC_CLOCK_EDGE_RISING) || \
                                   ((EDGE) == SDMMC_CLOCK_EDGE_FALLING))
#define IS_SDMMC_CLOCK_POWER_SAVE(SAVE) (((SAVE) == SDMMC_CLOCK_POWER_SAVE_DISABLE) || \
                                         ((SAVE) == SDMMC_CLOCK_POWER_SAVE_ENABLE))
#define IS_SDMMC_CMD_INDEX(INDEX)            ((INDEX) < 0x40)
#define IS_SDMMC_CPSM(CPSM) (((CPSM) == SDMMC_CPSM_DISABLE) || \
                             ((CPSM) == SDMMC_CPSM_ENABLE))
#define IS_SDMMC_DATA_LENGTH(LENGTH) ((LENGTH) <= 0x01FFFFFF)
#define IS_SDMMC_DPSM(DPSM) (((DPSM) == SDMMC_DPSM_DISABLE) ||\
                             ((DPSM) == SDMMC_DPSM_ENABLE))
#define IS_SDMMC_HARDWARE_FLOW_CONTROL(CONTROL) (((CONTROL) == SDMMC_HARDWARE_FLOW_CONTROL_DISABLE) || \
                                                 ((CONTROL) == SDMMC_HARDWARE_FLOW_CONTROL_ENABLE))
#define IS_SDMMC_READWAIT_MODE(MODE) (((MODE) == SDMMC_READ_WAIT_MODE_CLK) || \
                                      ((MODE) == SDMMC_READ_WAIT_MODE_DATA2))
#define IS_SDMMC_RESP(RESP) (((RESP) == SDMMC_RESP1) || \
                             ((RESP) == SDMMC_RESP2) || \
                             ((RESP) == SDMMC_RESP3) || \
                             ((RESP) == SDMMC_RESP4))
#define IS_SDMMC_RESPONSE(RESPONSE) (((RESPONSE) == SDMMC_RESPONSE_NO)    || \
                                     ((RESPONSE) == SDMMC_RESPONSE_SHORT) || \
                                     ((RESPONSE) == SDMMC_RESPONSE_LONG))
#define IS_SDMMC_TRANSFER_DIR(DIR) (((DIR) == SDMMC_TRANSFER_DIR_TO_CARD) || \
                                    ((DIR) == SDMMC_TRANSFER_DIR_TO_SDMMC))
#define IS_SDMMC_TRANSFER_MODE(MODE) (((MODE) == SDMMC_TRANSFER_MODE_BLOCK) || \
                                      ((MODE) == SDMMC_TRANSFER_MODE_STREAM))
#define IS_SDMMC_WAIT(WAIT) (((WAIT) == SDMMC_WAIT_NO) || \
                             ((WAIT) == SDMMC_WAIT_IT) || \
                             ((WAIT) == SDMMC_WAIT_PEND))
#define __SDMMC_CLEAR_FLAG(__INSTANCE__, __FLAG__)  ((__INSTANCE__)->ICR = (__FLAG__))
#define __SDMMC_CLEAR_IT(__INSTANCE__, __INTERRUPT__)  ((__INSTANCE__)->ICR = (__INTERRUPT__))
#define __SDMMC_DISABLE(__INSTANCE__)  ((__INSTANCE__)->CLKCR &= ~SDMMC_CLKCR_CLKEN)
#define __SDMMC_DISABLE_IT(__INSTANCE__, __INTERRUPT__)  ((__INSTANCE__)->MASK &= ~(__INTERRUPT__))
#define __SDMMC_DMA_DISABLE(__INSTANCE__)  ((__INSTANCE__)->DCTRL &= ~SDMMC_DCTRL_DMAEN)
#define __SDMMC_DMA_ENABLE(__INSTANCE__)  ((__INSTANCE__)->DCTRL |= SDMMC_DCTRL_DMAEN)
#define __SDMMC_ENABLE(__INSTANCE__)  ((__INSTANCE__)->CLKCR |= SDMMC_CLKCR_CLKEN)
#define __SDMMC_ENABLE_IT(__INSTANCE__, __INTERRUPT__)  ((__INSTANCE__)->MASK |= (__INTERRUPT__))
#define __SDMMC_GET_FLAG(__INSTANCE__, __FLAG__)  (((__INSTANCE__)->STA &(__FLAG__)) != RESET)
#define __SDMMC_OPERATION_DISABLE(__INSTANCE__)  ((__INSTANCE__)->DCTRL &= ~SDMMC_DCTRL_SDIOEN) 
#define __SDMMC_OPERATION_ENABLE(__INSTANCE__)  ((__INSTANCE__)->DCTRL |= SDMMC_DCTRL_SDIOEN) 
#define __SDMMC_START_READWAIT_DISABLE(__INSTANCE__)  ((__INSTANCE__)->DCTRL &= ~SDMMC_DCTRL_RWSTART)
#define __SDMMC_START_READWAIT_ENABLE(__INSTANCE__)  ((__INSTANCE__)->DCTRL |= SDMMC_DCTRL_RWSTART)
#define __SDMMC_STOP_READWAIT_DISABLE(__INSTANCE__)  ((__INSTANCE__)->DCTRL &= ~SDMMC_DCTRL_RWSTOP)
#define __SDMMC_STOP_READWAIT_ENABLE(__INSTANCE__)  ((__INSTANCE__)->DCTRL |= SDMMC_DCTRL_RWSTOP)
#define __SDMMC_SUSPEND_CMD_DISABLE(__INSTANCE__)  ((__INSTANCE__)->CMD &= ~SDMMC_CMD_SDIOSUSPEND) 
#define __SDMMC_SUSPEND_CMD_ENABLE(__INSTANCE__)  ((__INSTANCE__)->CMD |= SDMMC_CMD_SDIOSUSPEND) 
