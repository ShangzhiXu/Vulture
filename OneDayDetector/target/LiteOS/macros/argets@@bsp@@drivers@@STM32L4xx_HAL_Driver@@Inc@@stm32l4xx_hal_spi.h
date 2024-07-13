#define IS_SPI_BAUDRATE_PRESCALER(__PRESCALER__) (((__PRESCALER__) == SPI_BAUDRATEPRESCALER_2)   || \
                                                  ((__PRESCALER__) == SPI_BAUDRATEPRESCALER_4)   || \
                                                  ((__PRESCALER__) == SPI_BAUDRATEPRESCALER_8)   || \
                                                  ((__PRESCALER__) == SPI_BAUDRATEPRESCALER_16)  || \
                                                  ((__PRESCALER__) == SPI_BAUDRATEPRESCALER_32)  || \
                                                  ((__PRESCALER__) == SPI_BAUDRATEPRESCALER_64)  || \
                                                  ((__PRESCALER__) == SPI_BAUDRATEPRESCALER_128) || \
                                                  ((__PRESCALER__) == SPI_BAUDRATEPRESCALER_256))
#define IS_SPI_CPHA(__CPHA__) (((__CPHA__) == SPI_PHASE_1EDGE) || \
                               ((__CPHA__) == SPI_PHASE_2EDGE))
#define IS_SPI_CPOL(__CPOL__) (((__CPOL__) == SPI_POLARITY_LOW) || \
                               ((__CPOL__) == SPI_POLARITY_HIGH))
#define IS_SPI_CRC_CALCULATION(__CALCULATION__) (((__CALCULATION__) == SPI_CRCCALCULATION_DISABLE) || \
                                                 ((__CALCULATION__) == SPI_CRCCALCULATION_ENABLE))
#define IS_SPI_CRC_LENGTH(__LENGTH__) (((__LENGTH__) == SPI_CRC_LENGTH_DATASIZE) ||\
                                       ((__LENGTH__) == SPI_CRC_LENGTH_8BIT)  ||   \
                                       ((__LENGTH__) == SPI_CRC_LENGTH_16BIT))
#define IS_SPI_CRC_POLYNOMIAL(__POLYNOMIAL__) (((__POLYNOMIAL__) >= 0x1U) && ((__POLYNOMIAL__) <= 0xFFFFU) && (((__POLYNOMIAL__)&0x1U) != 0U))
#define IS_SPI_DATASIZE(__DATASIZE__) (((__DATASIZE__) == SPI_DATASIZE_16BIT) || \
                                       ((__DATASIZE__) == SPI_DATASIZE_15BIT) || \
                                       ((__DATASIZE__) == SPI_DATASIZE_14BIT) || \
                                       ((__DATASIZE__) == SPI_DATASIZE_13BIT) || \
                                       ((__DATASIZE__) == SPI_DATASIZE_12BIT) || \
                                       ((__DATASIZE__) == SPI_DATASIZE_11BIT) || \
                                       ((__DATASIZE__) == SPI_DATASIZE_10BIT) || \
                                       ((__DATASIZE__) == SPI_DATASIZE_9BIT)  || \
                                       ((__DATASIZE__) == SPI_DATASIZE_8BIT)  || \
                                       ((__DATASIZE__) == SPI_DATASIZE_7BIT)  || \
                                       ((__DATASIZE__) == SPI_DATASIZE_6BIT)  || \
                                       ((__DATASIZE__) == SPI_DATASIZE_5BIT)  || \
                                       ((__DATASIZE__) == SPI_DATASIZE_4BIT))
#define IS_SPI_DIRECTION(__MODE__) (((__MODE__) == SPI_DIRECTION_2LINES)        || \
                                    ((__MODE__) == SPI_DIRECTION_2LINES_RXONLY) || \
                                    ((__MODE__) == SPI_DIRECTION_1LINE))
#define IS_SPI_DIRECTION_2LINES(__MODE__) ((__MODE__) == SPI_DIRECTION_2LINES)
#define IS_SPI_DIRECTION_2LINES_OR_1LINE(__MODE__) (((__MODE__) == SPI_DIRECTION_2LINES) || \
                                                    ((__MODE__) == SPI_DIRECTION_1LINE))
#define IS_SPI_DMA_HANDLE(__HANDLE__) ((__HANDLE__) != NULL)
#define IS_SPI_FIRST_BIT(__BIT__) (((__BIT__) == SPI_FIRSTBIT_MSB) || \
                                   ((__BIT__) == SPI_FIRSTBIT_LSB))
#define IS_SPI_MODE(__MODE__) (((__MODE__) == SPI_MODE_SLAVE) || \
                               ((__MODE__) == SPI_MODE_MASTER))
#define IS_SPI_NSS(__NSS__) (((__NSS__) == SPI_NSS_SOFT)       || \
                             ((__NSS__) == SPI_NSS_HARD_INPUT) || \
                             ((__NSS__) == SPI_NSS_HARD_OUTPUT))
#define IS_SPI_NSSP(__NSSP__) (((__NSSP__) == SPI_NSS_PULSE_ENABLE) || \
                               ((__NSSP__) == SPI_NSS_PULSE_DISABLE))
#define IS_SPI_TIMODE(__MODE__) (((__MODE__) == SPI_TIMODE_DISABLE) || \
                                 ((__MODE__) == SPI_TIMODE_ENABLE))
#define SPI_1LINE_RX(__HANDLE__)  CLEAR_BIT((__HANDLE__)->Instance->CR1, SPI_CR1_BIDIOE)
#define SPI_1LINE_TX(__HANDLE__)  SET_BIT((__HANDLE__)->Instance->CR1, SPI_CR1_BIDIOE)
#define SPI_RESET_CRC(__HANDLE__) do{CLEAR_BIT((__HANDLE__)->Instance->CR1, SPI_CR1_CRCEN);\
                                       SET_BIT((__HANDLE__)->Instance->CR1, SPI_CR1_CRCEN);}while(0U)
#define __HAL_SPI_CLEAR_CRCERRFLAG(__HANDLE__) ((__HANDLE__)->Instance->SR = (uint16_t)(~SPI_FLAG_CRCERR))
#define __HAL_SPI_CLEAR_FREFLAG(__HANDLE__)        \
  do{                                              \
  __IO uint32_t tmpreg_fre = 0x00U;                \
  tmpreg_fre = (__HANDLE__)->Instance->SR;         \
  UNUSED(tmpreg_fre);                              \
  }while(0U)
#define __HAL_SPI_CLEAR_MODFFLAG(__HANDLE__)             \
  do{                                                    \
    __IO uint32_t tmpreg_modf = 0x00U;                   \
    tmpreg_modf = (__HANDLE__)->Instance->SR;            \
    CLEAR_BIT((__HANDLE__)->Instance->CR1, SPI_CR1_SPE); \
    UNUSED(tmpreg_modf);                                 \
  } while(0U)
#define __HAL_SPI_CLEAR_OVRFLAG(__HANDLE__)        \
  do{                                              \
    __IO uint32_t tmpreg_ovr = 0x00U;              \
    tmpreg_ovr = (__HANDLE__)->Instance->DR;       \
    tmpreg_ovr = (__HANDLE__)->Instance->SR;       \
    UNUSED(tmpreg_ovr);                            \
  } while(0U)
#define __HAL_SPI_DISABLE(__HANDLE__) CLEAR_BIT((__HANDLE__)->Instance->CR1, SPI_CR1_SPE)
#define __HAL_SPI_DISABLE_IT(__HANDLE__, __INTERRUPT__)  CLEAR_BIT((__HANDLE__)->Instance->CR2, (__INTERRUPT__))
#define __HAL_SPI_ENABLE(__HANDLE__)  SET_BIT((__HANDLE__)->Instance->CR1, SPI_CR1_SPE)
#define __HAL_SPI_ENABLE_IT(__HANDLE__, __INTERRUPT__)   SET_BIT((__HANDLE__)->Instance->CR2, (__INTERRUPT__))
#define __HAL_SPI_GET_FLAG(__HANDLE__, __FLAG__) ((((__HANDLE__)->Instance->SR) & (__FLAG__)) == (__FLAG__))
#define __HAL_SPI_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((((__HANDLE__)->Instance->CR2 & (__INTERRUPT__)) == (__INTERRUPT__)) ? SET : RESET)
#define __HAL_SPI_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_SPI_STATE_RESET)
