#define IS_OSPIM_IO_PORT(PORT)             (((PORT) == HAL_OSPIM_IOPORT_1_LOW)  || \
                                            ((PORT) == HAL_OSPIM_IOPORT_1_HIGH) || \
                                            ((PORT) == HAL_OSPIM_IOPORT_2_LOW)  || \
                                            ((PORT) == HAL_OSPIM_IOPORT_2_HIGH))
#define IS_OSPIM_PORT(NUMBER)              (((NUMBER) >= 1) && ((NUMBER) <= 2))
#define IS_OSPI_ACCESS_TIME(NUMBER)        ((NUMBER) <= 255)
#define IS_OSPI_ADDRESS_DTR_MODE(MODE)     (((MODE) == HAL_OSPI_ADDRESS_DTR_DISABLE) || \
                                            ((MODE) == HAL_OSPI_ADDRESS_DTR_ENABLE))
#define IS_OSPI_ADDRESS_MODE(MODE)         (((MODE) == HAL_OSPI_ADDRESS_NONE)    || \
                                            ((MODE) == HAL_OSPI_ADDRESS_1_LINE)  || \
                                            ((MODE) == HAL_OSPI_ADDRESS_2_LINES) || \
                                            ((MODE) == HAL_OSPI_ADDRESS_4_LINES) || \
                                            ((MODE) == HAL_OSPI_ADDRESS_8_LINES))
#define IS_OSPI_ADDRESS_SIZE(SIZE)         (((SIZE) == HAL_OSPI_ADDRESS_8_BITS)  || \
                                            ((SIZE) == HAL_OSPI_ADDRESS_16_BITS) || \
                                            ((SIZE) == HAL_OSPI_ADDRESS_24_BITS) || \
                                            ((SIZE) == HAL_OSPI_ADDRESS_32_BITS))
#define IS_OSPI_ADDRESS_SPACE(SPACE)       (((SPACE) == HAL_OSPI_MEMORY_ADDRESS_SPACE) || \
                                            ((SPACE) == HAL_OSPI_REGISTER_ADDRESS_SPACE))
#define IS_OSPI_ALT_BYTES_DTR_MODE(MODE)   (((MODE) == HAL_OSPI_ALTERNATE_BYTES_DTR_DISABLE) || \
                                            ((MODE) == HAL_OSPI_ALTERNATE_BYTES_DTR_ENABLE))
#define IS_OSPI_ALT_BYTES_MODE(MODE)       (((MODE) == HAL_OSPI_ALTERNATE_BYTES_NONE)    || \
                                            ((MODE) == HAL_OSPI_ALTERNATE_BYTES_1_LINE)  || \
                                            ((MODE) == HAL_OSPI_ALTERNATE_BYTES_2_LINES) || \
                                            ((MODE) == HAL_OSPI_ALTERNATE_BYTES_4_LINES) || \
                                            ((MODE) == HAL_OSPI_ALTERNATE_BYTES_8_LINES))
#define IS_OSPI_ALT_BYTES_SIZE(SIZE)       (((SIZE) == HAL_OSPI_ALTERNATE_BYTES_8_BITS)  || \
                                            ((SIZE) == HAL_OSPI_ALTERNATE_BYTES_16_BITS) || \
                                            ((SIZE) == HAL_OSPI_ALTERNATE_BYTES_24_BITS) || \
                                            ((SIZE) == HAL_OSPI_ALTERNATE_BYTES_32_BITS))
#define IS_OSPI_AUTOMATIC_STOP(MODE)       (((MODE) == HAL_OSPI_AUTOMATIC_STOP_ENABLE) || \
                                            ((MODE) == HAL_OSPI_AUTOMATIC_STOP_DISABLE))
#define IS_OSPI_CLK_PRESCALER(PRESCALER)   (((PRESCALER) >= 1) && ((PRESCALER) <= 256))
#define IS_OSPI_CLOCK_MODE(MODE)           (((MODE) == HAL_OSPI_CLOCK_MODE_0) || \
                                            ((MODE) == HAL_OSPI_CLOCK_MODE_3))
#define IS_OSPI_CS_BOUNDARY(BOUNDARY)      ((BOUNDARY) <= 31)
#define IS_OSPI_CS_HIGH_TIME(TIME)         (((TIME) >= 1) && ((TIME) <= 8))
#define IS_OSPI_DATA_DTR_MODE(MODE)        (((MODE) == HAL_OSPI_DATA_DTR_DISABLE) || \
                                            ((MODE) == HAL_OSPI_DATA_DTR_ENABLE))
#define IS_OSPI_DATA_MODE(MODE)            (((MODE) == HAL_OSPI_DATA_NONE)    || \
                                            ((MODE) == HAL_OSPI_DATA_1_LINE)  || \
                                            ((MODE) == HAL_OSPI_DATA_2_LINES) || \
                                            ((MODE) == HAL_OSPI_DATA_4_LINES) || \
                                            ((MODE) == HAL_OSPI_DATA_8_LINES))
#define IS_OSPI_DEVICE_SIZE(SIZE)          (((SIZE) >= 1) && ((SIZE) <= 32))
#define IS_OSPI_DHQC(CYCLE)                (((CYCLE) == HAL_OSPI_DHQC_DISABLE) || \
                                            ((CYCLE) == HAL_OSPI_DHQC_ENABLE))
#define IS_OSPI_DQS_MODE(MODE)             (((MODE) == HAL_OSPI_DQS_DISABLE) || \
                                            ((MODE) == HAL_OSPI_DQS_ENABLE))
#define IS_OSPI_DUALQUAD_MODE(MODE)        (((MODE) == HAL_OSPI_DUALQUAD_DISABLE) || \
                                            ((MODE) == HAL_OSPI_DUALQUAD_ENABLE))
#define IS_OSPI_DUMMY_CYCLES(NUMBER)       ((NUMBER) <= 31)
#define IS_OSPI_FIFO_THRESHOLD(THRESHOLD)  (((THRESHOLD) >= 1) && ((THRESHOLD) <= 32))
#define IS_OSPI_FLASH_ID(FLASH)            (((FLASH) == HAL_OSPI_FLASH_ID_1) || \
                                            ((FLASH) == HAL_OSPI_FLASH_ID_2))
#define IS_OSPI_FREE_RUN_CLK(CLK)          (((CLK) == HAL_OSPI_FREERUNCLK_DISABLE) || \
                                            ((CLK) == HAL_OSPI_FREERUNCLK_ENABLE))
#define IS_OSPI_INSTRUCTION_DTR_MODE(MODE) (((MODE) == HAL_OSPI_INSTRUCTION_DTR_DISABLE) || \
                                            ((MODE) == HAL_OSPI_INSTRUCTION_DTR_ENABLE))
#define IS_OSPI_INSTRUCTION_MODE(MODE)     (((MODE) == HAL_OSPI_INSTRUCTION_NONE)    || \
                                            ((MODE) == HAL_OSPI_INSTRUCTION_1_LINE)  || \
                                            ((MODE) == HAL_OSPI_INSTRUCTION_2_LINES) || \
                                            ((MODE) == HAL_OSPI_INSTRUCTION_4_LINES) || \
                                            ((MODE) == HAL_OSPI_INSTRUCTION_8_LINES))
#define IS_OSPI_INSTRUCTION_SIZE(SIZE)     (((SIZE) == HAL_OSPI_INSTRUCTION_8_BITS)  || \
                                            ((SIZE) == HAL_OSPI_INSTRUCTION_16_BITS) || \
                                            ((SIZE) == HAL_OSPI_INSTRUCTION_24_BITS) || \
                                            ((SIZE) == HAL_OSPI_INSTRUCTION_32_BITS))
#define IS_OSPI_INTERVAL(INTERVAL)         ((INTERVAL) <= 0xFFFF)
#define IS_OSPI_LATENCY_MODE(MODE)         (((MODE) == HAL_OSPI_VARIABLE_LATENCY) || \
                                            ((MODE) == HAL_OSPI_FIXED_LATENCY))
#define IS_OSPI_MATCH_MODE(MODE)           (((MODE) == HAL_OSPI_MATCH_MODE_AND) || \
                                            ((MODE) == HAL_OSPI_MATCH_MODE_OR))
#define IS_OSPI_MEMORY_TYPE(TYPE)          (((TYPE) == HAL_OSPI_MEMTYPE_MICRON)       || \
                                            ((TYPE) == HAL_OSPI_MEMTYPE_MACRONIX)     || \
                                            ((TYPE) == HAL_OSPI_MEMTYPE_HYPERBUS))
#define IS_OSPI_NUMBER_DATA(NUMBER)        ((NUMBER) >= 1)
#define IS_OSPI_OPERATION_TYPE(TYPE)       (((TYPE) == HAL_OSPI_OPTYPE_COMMON_CFG) || \
                                            ((TYPE) == HAL_OSPI_OPTYPE_READ_CFG)   || \
                                            ((TYPE) == HAL_OSPI_OPTYPE_WRITE_CFG))
#define IS_OSPI_RW_RECOVERY_TIME(NUMBER)   ((NUMBER) <= 255)
#define IS_OSPI_SAMPLE_SHIFTING(CYCLE)     (((CYCLE) == HAL_OSPI_SAMPLE_SHIFTING_NONE)      || \
                                            ((CYCLE) == HAL_OSPI_SAMPLE_SHIFTING_HALFCYCLE))
#define IS_OSPI_SIOO_MODE(MODE)            (((MODE) == HAL_OSPI_SIOO_INST_EVERY_CMD) || \
                                            ((MODE) == HAL_OSPI_SIOO_INST_ONLY_FIRST_CMD))
#define IS_OSPI_STATUS_BYTES_SIZE(SIZE)    (((SIZE) >= 1) && ((SIZE) <= 4)) 
#define IS_OSPI_TIMEOUT_ACTIVATION(MODE)   (((MODE) == HAL_OSPI_TIMEOUT_COUNTER_DISABLE) || \
                                            ((MODE) == HAL_OSPI_TIMEOUT_COUNTER_ENABLE)) 
#define IS_OSPI_TIMEOUT_PERIOD(PERIOD)     ((PERIOD) <= 0xFFFF)
#define IS_OSPI_WRAP_SIZE(SIZE)            (((SIZE) == HAL_OSPI_WRAP_NOT_SUPPORTED) || \
                                            ((SIZE) == HAL_OSPI_WRAP_16_BYTES)      || \
                                            ((SIZE) == HAL_OSPI_WRAP_32_BYTES)      || \
                                            ((SIZE) == HAL_OSPI_WRAP_64_BYTES)      || \
                                            ((SIZE) == HAL_OSPI_WRAP_128_BYTES))
#define IS_OSPI_WRITE_ZERO_LATENCY(MODE)   (((MODE) == HAL_OSPI_LATENCY_ON_WRITE) || \
                                            ((MODE) == HAL_OSPI_NO_LATENCY_ON_WRITE))
#define __HAL_OSPI_CLEAR_FLAG(__HANDLE__, __FLAG__)         WRITE_REG((__HANDLE__)->Instance->FCR, (__FLAG__))
#define __HAL_OSPI_DISABLE(__HANDLE__)                      CLEAR_BIT((__HANDLE__)->Instance->CR, OCTOSPI_CR_EN)
#define __HAL_OSPI_DISABLE_IT(__HANDLE__, __INTERRUPT__)    CLEAR_BIT((__HANDLE__)->Instance->CR, (__INTERRUPT__))
#define __HAL_OSPI_ENABLE(__HANDLE__)                       SET_BIT((__HANDLE__)->Instance->CR, OCTOSPI_CR_EN)
#define __HAL_OSPI_ENABLE_IT(__HANDLE__, __INTERRUPT__)     SET_BIT((__HANDLE__)->Instance->CR, (__INTERRUPT__))
#define __HAL_OSPI_GET_FLAG(__HANDLE__, __FLAG__)           ((READ_BIT((__HANDLE__)->Instance->SR, (__FLAG__)) != 0) ? SET : RESET)
#define __HAL_OSPI_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) (READ_BIT((__HANDLE__)->Instance->CR, (__INTERRUPT__)) == (__INTERRUPT__)) 
#define __HAL_OSPI_RESET_HANDLE_STATE(__HANDLE__)           ((__HANDLE__)->State = HAL_OSPI_STATE_RESET)
