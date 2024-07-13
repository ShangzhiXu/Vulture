#define IS_SDIO_BLOCK_SIZE(SIZE) (((SIZE) == SDIO_DATABLOCK_SIZE_1B)    || \
                                          ((SIZE) == SDIO_DATABLOCK_SIZE_2B)    || \
                                          ((SIZE) == SDIO_DATABLOCK_SIZE_4B)    || \
                                          ((SIZE) == SDIO_DATABLOCK_SIZE_8B)    || \
                                          ((SIZE) == SDIO_DATABLOCK_SIZE_16B)   || \
                                          ((SIZE) == SDIO_DATABLOCK_SIZE_32B)   || \
                                          ((SIZE) == SDIO_DATABLOCK_SIZE_64B)   || \
                                          ((SIZE) == SDIO_DATABLOCK_SIZE_128B)  || \
                                          ((SIZE) == SDIO_DATABLOCK_SIZE_256B)  || \
                                          ((SIZE) == SDIO_DATABLOCK_SIZE_512B)  || \
                                          ((SIZE) == SDIO_DATABLOCK_SIZE_1024B) || \
                                          ((SIZE) == SDIO_DATABLOCK_SIZE_2048B) || \
                                          ((SIZE) == SDIO_DATABLOCK_SIZE_4096B) || \
                                          ((SIZE) == SDIO_DATABLOCK_SIZE_8192B) || \
                                          ((SIZE) == SDIO_DATABLOCK_SIZE_16384B)) 
#define IS_SDIO_BUS_WIDE(WIDE) (((WIDE) == SDIO_BUS_WIDE_1B) || \
                                        ((WIDE) == SDIO_BUS_WIDE_4B) || \
                                        ((WIDE) == SDIO_BUS_WIDE_8B))
#define IS_SDIO_CLKDIV(DIV)   ((DIV) <= 0xFFU)
#define IS_SDIO_CLOCK_BYPASS(BYPASS) (((BYPASS) == SDIO_CLOCK_BYPASS_DISABLE) || \
                                              ((BYPASS) == SDIO_CLOCK_BYPASS_ENABLE))
#define IS_SDIO_CLOCK_EDGE(EDGE) (((EDGE) == SDIO_CLOCK_EDGE_RISING) || \
                                          ((EDGE) == SDIO_CLOCK_EDGE_FALLING))
#define IS_SDIO_CLOCK_POWER_SAVE(SAVE) (((SAVE) == SDIO_CLOCK_POWER_SAVE_DISABLE) || \
                                                ((SAVE) == SDIO_CLOCK_POWER_SAVE_ENABLE))
#define IS_SDIO_CMD_INDEX(INDEX)            ((INDEX) < 0x40U)
#define IS_SDIO_CPSM(CPSM) (((CPSM) == SDIO_CPSM_DISABLE) || \
                                    ((CPSM) == SDIO_CPSM_ENABLE))
#define IS_SDIO_DATA_LENGTH(LENGTH) ((LENGTH) <= 0x01FFFFFFU)
#define IS_SDIO_DPSM(DPSM) (((DPSM) == SDIO_DPSM_DISABLE) ||\
                                    ((DPSM) == SDIO_DPSM_ENABLE))
#define IS_SDIO_HARDWARE_FLOW_CONTROL(CONTROL) (((CONTROL) == SDIO_HARDWARE_FLOW_CONTROL_DISABLE) || \
                                                        ((CONTROL) == SDIO_HARDWARE_FLOW_CONTROL_ENABLE))
#define IS_SDIO_READWAIT_MODE(MODE) (((MODE) == SDIO_READ_WAIT_MODE_CLK) || \
                                             ((MODE) == SDIO_READ_WAIT_MODE_DATA2))
#define IS_SDIO_RESP(RESP) (((RESP) == SDIO_RESP1) || \
                                    ((RESP) == SDIO_RESP2) || \
                                    ((RESP) == SDIO_RESP3) || \
                                    ((RESP) == SDIO_RESP4))
#define IS_SDIO_RESPONSE(RESPONSE) (((RESPONSE) == SDIO_RESPONSE_NO)    || \
                                            ((RESPONSE) == SDIO_RESPONSE_SHORT) || \
                                            ((RESPONSE) == SDIO_RESPONSE_LONG))
#define IS_SDIO_TRANSFER_DIR(DIR) (((DIR) == SDIO_TRANSFER_DIR_TO_CARD) || \
                                           ((DIR) == SDIO_TRANSFER_DIR_TO_SDIO))
#define IS_SDIO_TRANSFER_MODE(MODE) (((MODE) == SDIO_TRANSFER_MODE_BLOCK) || \
                                             ((MODE) == SDIO_TRANSFER_MODE_STREAM))
#define IS_SDIO_WAIT(WAIT) (((WAIT) == SDIO_WAIT_NO) || \
                                    ((WAIT) == SDIO_WAIT_IT) || \
                                    ((WAIT) == SDIO_WAIT_PEND))
#define __SDIO_CEATA_CMD_COMPLETION_DISABLE()   (*(__IO uint32_t *) CMD_ENCMDCOMPL_BB = DISABLE)
#define __SDIO_CEATA_CMD_COMPLETION_ENABLE()   (*(__IO uint32_t *) CMD_ENCMDCOMPL_BB = ENABLE)
#define __SDIO_CEATA_DISABLE_IT()   (*(__IO uint32_t *) CMD_NIEN_BB = (uint32_t)1U)
#define __SDIO_CEATA_ENABLE_IT()   (*(__IO uint32_t *) CMD_NIEN_BB = (uint32_t)0U)
#define __SDIO_CEATA_SENDCMD_DISABLE()   (*(__IO uint32_t *) CMD_ATACMD_BB = DISABLE)
#define __SDIO_CEATA_SENDCMD_ENABLE()   (*(__IO uint32_t *) CMD_ATACMD_BB = ENABLE)
#define __SDIO_CLEAR_FLAG(__INSTANCE__, __FLAG__)  ((__INSTANCE__)->ICR = (__FLAG__))
#define __SDIO_CLEAR_IT(__INSTANCE__, __INTERRUPT__)  ((__INSTANCE__)->ICR = (__INTERRUPT__))
#define __SDIO_DISABLE(__INSTANCE__)  (*(__IO uint32_t *)CLKCR_CLKEN_BB = DISABLE)
#define __SDIO_DISABLE_IT(__INSTANCE__, __INTERRUPT__)  ((__INSTANCE__)->MASK &= ~(__INTERRUPT__))
#define __SDIO_DMA_DISABLE(__INSTANCE__)  (*(__IO uint32_t *)DCTRL_DMAEN_BB = DISABLE)
#define __SDIO_DMA_ENABLE(__INSTANCE__)  (*(__IO uint32_t *)DCTRL_DMAEN_BB = ENABLE)
#define __SDIO_ENABLE(__INSTANCE__)  (*(__IO uint32_t *)CLKCR_CLKEN_BB = ENABLE)
#define __SDIO_ENABLE_IT(__INSTANCE__, __INTERRUPT__)  ((__INSTANCE__)->MASK |= (__INTERRUPT__))
#define __SDIO_GET_FLAG(__INSTANCE__, __FLAG__)  (((__INSTANCE__)->STA &(__FLAG__)) != 0U)
#define __SDIO_OPERATION_DISABLE(__INSTANCE__)  (*(__IO uint32_t *) DCTRL_SDIOEN_BB = DISABLE)
#define __SDIO_OPERATION_ENABLE(__INSTANCE__)  (*(__IO uint32_t *) DCTRL_SDIOEN_BB = ENABLE)
#define __SDIO_START_READWAIT_DISABLE(__INSTANCE__)  (*(__IO uint32_t *) DCTRL_RWSTART_BB = DISABLE)
#define __SDIO_START_READWAIT_ENABLE(__INSTANCE__)  (*(__IO uint32_t *) DCTRL_RWSTART_BB = ENABLE)
#define __SDIO_STOP_READWAIT_DISABLE(__INSTANCE__)  (*(__IO uint32_t *) DCTRL_RWSTOP_BB = DISABLE)
#define __SDIO_STOP_READWAIT_ENABLE(__INSTANCE__)  (*(__IO uint32_t *) DCTRL_RWSTOP_BB = ENABLE)
#define __SDIO_SUSPEND_CMD_DISABLE(__INSTANCE__)  (*(__IO uint32_t *) CMD_SDIOSUSPEND_BB = DISABLE)
#define __SDIO_SUSPEND_CMD_ENABLE(__INSTANCE__)  (*(__IO uint32_t *) CMD_SDIOSUSPEND_BB = ENABLE)
