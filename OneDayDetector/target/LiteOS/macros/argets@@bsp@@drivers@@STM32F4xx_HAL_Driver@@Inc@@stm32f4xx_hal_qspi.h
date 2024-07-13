#define IS_QSPI_ADDRESS_MODE(MODE)         (((MODE) == QSPI_ADDRESS_NONE)    || \
                                            ((MODE) == QSPI_ADDRESS_1_LINE)  || \
                                            ((MODE) == QSPI_ADDRESS_2_LINES) || \
                                            ((MODE) == QSPI_ADDRESS_4_LINES))
#define IS_QSPI_ADDRESS_SIZE(ADDR_SIZE)    (((ADDR_SIZE) == QSPI_ADDRESS_8_BITS)  || \
                                            ((ADDR_SIZE) == QSPI_ADDRESS_16_BITS) || \
                                            ((ADDR_SIZE) == QSPI_ADDRESS_24_BITS) || \
                                            ((ADDR_SIZE) == QSPI_ADDRESS_32_BITS))
#define IS_QSPI_ALTERNATE_BYTES_MODE(MODE) (((MODE) == QSPI_ALTERNATE_BYTES_NONE)    || \
                                            ((MODE) == QSPI_ALTERNATE_BYTES_1_LINE)  || \
                                            ((MODE) == QSPI_ALTERNATE_BYTES_2_LINES) || \
                                            ((MODE) == QSPI_ALTERNATE_BYTES_4_LINES))
#define IS_QSPI_ALTERNATE_BYTES_SIZE(SIZE) (((SIZE) == QSPI_ALTERNATE_BYTES_8_BITS)  || \
                                            ((SIZE) == QSPI_ALTERNATE_BYTES_16_BITS) || \
                                            ((SIZE) == QSPI_ALTERNATE_BYTES_24_BITS) || \
                                            ((SIZE) == QSPI_ALTERNATE_BYTES_32_BITS))
#define IS_QSPI_AUTOMATIC_STOP(APMS)       (((APMS) == QSPI_AUTOMATIC_STOP_DISABLE) || \
                                            ((APMS) == QSPI_AUTOMATIC_STOP_ENABLE))
#define IS_QSPI_CLOCK_MODE(CLKMODE)        (((CLKMODE) == QSPI_CLOCK_MODE_0) || \
                                            ((CLKMODE) == QSPI_CLOCK_MODE_3))
#define IS_QSPI_CLOCK_PRESCALER(PRESCALER) ((PRESCALER) <= 0xFFU)
#define IS_QSPI_CS_HIGH_TIME(CSHTIME)      (((CSHTIME) == QSPI_CS_HIGH_TIME_1_CYCLE) || \
                                            ((CSHTIME) == QSPI_CS_HIGH_TIME_2_CYCLE) || \
                                            ((CSHTIME) == QSPI_CS_HIGH_TIME_3_CYCLE) || \
                                            ((CSHTIME) == QSPI_CS_HIGH_TIME_4_CYCLE) || \
                                            ((CSHTIME) == QSPI_CS_HIGH_TIME_5_CYCLE) || \
                                            ((CSHTIME) == QSPI_CS_HIGH_TIME_6_CYCLE) || \
                                            ((CSHTIME) == QSPI_CS_HIGH_TIME_7_CYCLE) || \
                                            ((CSHTIME) == QSPI_CS_HIGH_TIME_8_CYCLE))
#define IS_QSPI_DATA_MODE(MODE)            (((MODE) == QSPI_DATA_NONE)    || \
                                            ((MODE) == QSPI_DATA_1_LINE)  || \
                                            ((MODE) == QSPI_DATA_2_LINES) || \
                                            ((MODE) == QSPI_DATA_4_LINES))
#define IS_QSPI_DDR_HHC(DDR_HHC)           (((DDR_HHC) == QSPI_DDR_HHC_ANALOG_DELAY) || \
                                            ((DDR_HHC) == QSPI_DDR_HHC_HALF_CLK_DELAY))
#define IS_QSPI_DDR_MODE(DDR_MODE)         (((DDR_MODE) == QSPI_DDR_MODE_DISABLE) || \
                                            ((DDR_MODE) == QSPI_DDR_MODE_ENABLE))
#define IS_QSPI_DUAL_FLASH_MODE(MODE)      (((MODE) == QSPI_DUALFLASH_ENABLE) || \
                                            ((MODE) == QSPI_DUALFLASH_DISABLE))
#define IS_QSPI_DUMMY_CYCLES(DCY)          ((DCY) <= 31U)
#define IS_QSPI_FIFO_THRESHOLD(THR)        (((THR) > 0U) && ((THR) <= 32U))
#define IS_QSPI_FLASH_ID(FLASH_ID)         (((FLASH_ID) == QSPI_FLASH_ID_1) || \
                                            ((FLASH_ID) == QSPI_FLASH_ID_2))
#define IS_QSPI_FLASH_SIZE(FSIZE)          (((FSIZE) <= 31U))
#define IS_QSPI_INSTRUCTION(INSTRUCTION)   ((INSTRUCTION) <= 0xFFU)
#define IS_QSPI_INSTRUCTION_MODE(MODE)     (((MODE) == QSPI_INSTRUCTION_NONE)    || \
                                            ((MODE) == QSPI_INSTRUCTION_1_LINE)  || \
                                            ((MODE) == QSPI_INSTRUCTION_2_LINES) || \
                                            ((MODE) == QSPI_INSTRUCTION_4_LINES))
#define IS_QSPI_INTERVAL(INTERVAL)         ((INTERVAL) <= QUADSPI_PIR_INTERVAL)
#define IS_QSPI_MATCH_MODE(MODE)           (((MODE) == QSPI_MATCH_MODE_AND) || \
                                            ((MODE) == QSPI_MATCH_MODE_OR))
#define IS_QSPI_SIOO_MODE(SIOO_MODE)       (((SIOO_MODE) == QSPI_SIOO_INST_EVERY_CMD) || \
                                            ((SIOO_MODE) == QSPI_SIOO_INST_ONLY_FIRST_CMD))
#define IS_QSPI_SSHIFT(SSHIFT)             (((SSHIFT) == QSPI_SAMPLE_SHIFTING_NONE) || \
                                            ((SSHIFT) == QSPI_SAMPLE_SHIFTING_HALFCYCLE))
#define IS_QSPI_STATUS_BYTES_SIZE(SIZE)    (((SIZE) >= 1U) && ((SIZE) <= 4U))
#define IS_QSPI_TIMEOUT_ACTIVATION(TCEN)   (((TCEN) == QSPI_TIMEOUT_COUNTER_DISABLE) || \
                                            ((TCEN) == QSPI_TIMEOUT_COUNTER_ENABLE))
#define IS_QSPI_TIMEOUT_PERIOD(PERIOD)     ((PERIOD) <= 0xFFFFU)
#define __HAL_QSPI_CLEAR_FLAG(__HANDLE__, __FLAG__)         WRITE_REG((__HANDLE__)->Instance->FCR, (__FLAG__))
#define __HAL_QSPI_DISABLE(__HANDLE__)                      CLEAR_BIT((__HANDLE__)->Instance->CR, QUADSPI_CR_EN)
#define __HAL_QSPI_DISABLE_IT(__HANDLE__, __INTERRUPT__)    CLEAR_BIT((__HANDLE__)->Instance->CR, (__INTERRUPT__))
#define __HAL_QSPI_ENABLE(__HANDLE__)                       SET_BIT((__HANDLE__)->Instance->CR, QUADSPI_CR_EN)
#define __HAL_QSPI_ENABLE_IT(__HANDLE__, __INTERRUPT__)     SET_BIT((__HANDLE__)->Instance->CR, (__INTERRUPT__))
#define __HAL_QSPI_GET_FLAG(__HANDLE__, __FLAG__)           ((READ_BIT((__HANDLE__)->Instance->SR, (__FLAG__)) != 0U) ? SET : RESET)
#define __HAL_QSPI_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) (READ_BIT((__HANDLE__)->Instance->CR, (__INTERRUPT__)) == (__INTERRUPT__))
#define __HAL_QSPI_RESET_HANDLE_STATE(__HANDLE__)           do {                                              \
                                                                  (__HANDLE__)->State = HAL_QSPI_STATE_RESET; \
                                                                  (__HANDLE__)->MspInitCallback = NULL;       \
                                                                  (__HANDLE__)->MspDeInitCallback = NULL;     \
                                                               } while(0)
#define __HAL_QSPI_RESET_HANDLE_STATE(__HANDLE__)           ((__HANDLE__)->State = HAL_QSPI_STATE_RESET)
