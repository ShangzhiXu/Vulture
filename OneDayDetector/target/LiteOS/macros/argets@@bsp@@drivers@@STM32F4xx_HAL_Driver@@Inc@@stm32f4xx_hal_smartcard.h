#define IS_SMARTCARD_BAUDRATE(BAUDRATE)     ((BAUDRATE) < 10500001U)
#define IS_SMARTCARD_LASTBIT(LASTBIT)       (((LASTBIT) == SMARTCARD_LASTBIT_DISABLE) || \
                                             ((LASTBIT) == SMARTCARD_LASTBIT_ENABLE))
#define IS_SMARTCARD_MODE(MODE)             ((((MODE) & 0x0000FFF3U) == 0x00U) && ((MODE) != 0x000000U))
#define IS_SMARTCARD_NACK_STATE(NACK)       (((NACK) == SMARTCARD_NACK_ENABLE) || \
                                             ((NACK) == SMARTCARD_NACK_DISABLE))
#define IS_SMARTCARD_PARITY(PARITY)         (((PARITY) == SMARTCARD_PARITY_EVEN) || \
                                             ((PARITY) == SMARTCARD_PARITY_ODD))
#define IS_SMARTCARD_PHASE(CPHA)            (((CPHA) == SMARTCARD_PHASE_1EDGE) || ((CPHA) == SMARTCARD_PHASE_2EDGE))
#define IS_SMARTCARD_POLARITY(CPOL)         (((CPOL) == SMARTCARD_POLARITY_LOW) || ((CPOL) == SMARTCARD_POLARITY_HIGH))
#define IS_SMARTCARD_STOPBITS(STOPBITS)     (((STOPBITS) == SMARTCARD_STOPBITS_0_5) || \
                                             ((STOPBITS) == SMARTCARD_STOPBITS_1_5))
#define IS_SMARTCARD_WORD_LENGTH(LENGTH)    ((LENGTH) == SMARTCARD_WORDLENGTH_9B)
#define SMARTCARD_BRR(__PCLK__, __BAUD__)       (((SMARTCARD_DIVMANT((__PCLK__), (__BAUD__)) << 4U) + \
                                                 (SMARTCARD_DIVFRAQ((__PCLK__), (__BAUD__)) & 0xF0U)) + \
                                                 (SMARTCARD_DIVFRAQ((__PCLK__), (__BAUD__)) & 0x0FU))
#define SMARTCARD_DIV(__PCLK__, __BAUD__)                ((uint32_t)((((uint64_t)(__PCLK__))*25U)/(4U*((uint64_t)(__BAUD__)))))
#define SMARTCARD_DIVFRAQ(__PCLK__, __BAUD__)            ((((SMARTCARD_DIV((__PCLK__), (__BAUD__)) - (SMARTCARD_DIVMANT((__PCLK__), (__BAUD__)) * 100U)) * 16U) + 50U) / 100U)
#define SMARTCARD_DIVMANT(__PCLK__, __BAUD__)            (SMARTCARD_DIV((__PCLK__), (__BAUD__))/100U)
#define __HAL_SMARTCARD_CLEAR_FEFLAG(__HANDLE__) __HAL_SMARTCARD_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_SMARTCARD_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->SR = ~(__FLAG__))
#define __HAL_SMARTCARD_CLEAR_IDLEFLAG(__HANDLE__) __HAL_SMARTCARD_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_SMARTCARD_CLEAR_NEFLAG(__HANDLE__) __HAL_SMARTCARD_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_SMARTCARD_CLEAR_OREFLAG(__HANDLE__) __HAL_SMARTCARD_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_SMARTCARD_CLEAR_PEFLAG(__HANDLE__)  \
    do{                                           \
      __IO uint32_t tmpreg = 0x00U;               \
      tmpreg = (__HANDLE__)->Instance->SR;        \
      tmpreg = (__HANDLE__)->Instance->DR;        \
      UNUSED(tmpreg);                             \
    } while(0U)
#define __HAL_SMARTCARD_DISABLE(__HANDLE__)  ((__HANDLE__)->Instance->CR1 &=  ~USART_CR1_UE)
#define __HAL_SMARTCARD_DISABLE_IT(__HANDLE__, __INTERRUPT__)  ((((__INTERRUPT__) >> 28U) == SMARTCARD_CR1_REG_INDEX)? ((__HANDLE__)->Instance->CR1 &= ~((__INTERRUPT__) & SMARTCARD_IT_MASK)): \
                                                                 ((__HANDLE__)->Instance->CR3 &= ~ ((__INTERRUPT__) & SMARTCARD_IT_MASK)))
#define __HAL_SMARTCARD_DMA_REQUEST_DISABLE(__HANDLE__, __REQUEST__)   ((__HANDLE__)->Instance->CR3 &=  ~(__REQUEST__))
#define __HAL_SMARTCARD_DMA_REQUEST_ENABLE(__HANDLE__, __REQUEST__)    ((__HANDLE__)->Instance->CR3 |=  (__REQUEST__))
#define __HAL_SMARTCARD_ENABLE(__HANDLE__)  ((__HANDLE__)->Instance->CR1 |=  USART_CR1_UE)
#define __HAL_SMARTCARD_ENABLE_IT(__HANDLE__, __INTERRUPT__)   ((((__INTERRUPT__) >> 28U) == SMARTCARD_CR1_REG_INDEX)? ((__HANDLE__)->Instance->CR1 |= ((__INTERRUPT__) & SMARTCARD_IT_MASK)): \
                                                                 ((__HANDLE__)->Instance->CR3 |= ((__INTERRUPT__) & SMARTCARD_IT_MASK)))
#define __HAL_SMARTCARD_FLUSH_DRREGISTER(__HANDLE__) ((__HANDLE__)->Instance->DR)
#define __HAL_SMARTCARD_GET_FLAG(__HANDLE__, __FLAG__) (((__HANDLE__)->Instance->SR & (__FLAG__)) == (__FLAG__))
#define __HAL_SMARTCARD_GET_IT_SOURCE(__HANDLE__, __IT__) (((((__IT__) >> 28U) == SMARTCARD_CR1_REG_INDEX)? (__HANDLE__)->Instance->CR1: (__HANDLE__)->Instance->CR3) & (((uint32_t)(__IT__)) & SMARTCARD_IT_MASK))
#define __HAL_SMARTCARD_ONE_BIT_SAMPLE_DISABLE(__HANDLE__) ((__HANDLE__)->Instance->CR3 &= (uint16_t)~((uint16_t)USART_CR3_ONEBIT))
#define __HAL_SMARTCARD_ONE_BIT_SAMPLE_ENABLE(__HANDLE__) ((__HANDLE__)->Instance->CR3|= USART_CR3_ONEBIT)
#define __HAL_SMARTCARD_RESET_HANDLE_STATE(__HANDLE__)  do{                                                       \
                                                           (__HANDLE__)->gState = HAL_SMARTCARD_STATE_RESET;      \
                                                           (__HANDLE__)->RxState = HAL_SMARTCARD_STATE_RESET;     \
                                                           (__HANDLE__)->MspInitCallback = NULL;                  \
                                                           (__HANDLE__)->MspDeInitCallback = NULL;                \
                                                          } while(0U)
#define __HAL_SMARTCARD_RESET_HANDLE_STATE(__HANDLE__)  do{                                                       \
                                                           (__HANDLE__)->gState = HAL_SMARTCARD_STATE_RESET;      \
                                                           (__HANDLE__)->RxState = HAL_SMARTCARD_STATE_RESET;     \
                                                          } while(0U)
