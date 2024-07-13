#define IS_SMARTCARD_ADVFEATURE_DATAINV(__DATAINV__) (((__DATAINV__) == SMARTCARD_ADVFEATURE_DATAINV_DISABLE) || \
                                                      ((__DATAINV__) == SMARTCARD_ADVFEATURE_DATAINV_ENABLE))
#define IS_SMARTCARD_ADVFEATURE_DMAONRXERROR(__DMA__) (((__DMA__) == SMARTCARD_ADVFEATURE_DMA_ENABLEONRXERROR) || \
                                                       ((__DMA__) == SMARTCARD_ADVFEATURE_DMA_DISABLEONRXERROR))
#define IS_SMARTCARD_ADVFEATURE_INIT(__INIT__) ((__INIT__) <= (SMARTCARD_ADVFEATURE_NO_INIT                | \
                                                               SMARTCARD_ADVFEATURE_TXINVERT_INIT          | \
                                                               SMARTCARD_ADVFEATURE_RXINVERT_INIT          | \
                                                               SMARTCARD_ADVFEATURE_DATAINVERT_INIT        | \
                                                               SMARTCARD_ADVFEATURE_SWAP_INIT              | \
                                                               SMARTCARD_ADVFEATURE_RXOVERRUNDISABLE_INIT  | \
                                                               SMARTCARD_ADVFEATURE_DMADISABLEONERROR_INIT | \
                                                               SMARTCARD_ADVFEATURE_MSBFIRST_INIT))
#define IS_SMARTCARD_ADVFEATURE_MSBFIRST(__MSBFIRST__) (((__MSBFIRST__) == SMARTCARD_ADVFEATURE_MSBFIRST_DISABLE) || \
                                                        ((__MSBFIRST__) == SMARTCARD_ADVFEATURE_MSBFIRST_ENABLE))
#define IS_SMARTCARD_ADVFEATURE_RXINV(__RXINV__) (((__RXINV__) == SMARTCARD_ADVFEATURE_RXINV_DISABLE) || \
                                                  ((__RXINV__) == SMARTCARD_ADVFEATURE_RXINV_ENABLE))
#define IS_SMARTCARD_ADVFEATURE_SWAP(__SWAP__) (((__SWAP__) == SMARTCARD_ADVFEATURE_SWAP_DISABLE) || \
                                                ((__SWAP__) == SMARTCARD_ADVFEATURE_SWAP_ENABLE))
#define IS_SMARTCARD_ADVFEATURE_TXINV(__TXINV__) (((__TXINV__) == SMARTCARD_ADVFEATURE_TXINV_DISABLE) || \
                                                  ((__TXINV__) == SMARTCARD_ADVFEATURE_TXINV_ENABLE))
#define IS_SMARTCARD_AUTORETRY_COUNT(__COUNT__)         ((__COUNT__) <= 0x7U)
#define IS_SMARTCARD_BAUDRATE(__BAUDRATE__) ((__BAUDRATE__) < 5000001)
#define IS_SMARTCARD_BLOCKLENGTH(__LENGTH__) ((__LENGTH__) <= 0xFFU)
#define IS_SMARTCARD_CLOCKPRESCALER(__CLOCKPRESCALER__) (((__CLOCKPRESCALER__) == SMARTCARD_PRESCALER_DIV1) || \
              ((__CLOCKPRESCALER__) == SMARTCARD_PRESCALER_DIV2)   || \
              ((__CLOCKPRESCALER__) == SMARTCARD_PRESCALER_DIV4)   || \
              ((__CLOCKPRESCALER__) == SMARTCARD_PRESCALER_DIV6)   || \
              ((__CLOCKPRESCALER__) == SMARTCARD_PRESCALER_DIV8)   || \
              ((__CLOCKPRESCALER__) == SMARTCARD_PRESCALER_DIV10)  || \
              ((__CLOCKPRESCALER__) == SMARTCARD_PRESCALER_DIV12)  || \
              ((__CLOCKPRESCALER__) == SMARTCARD_PRESCALER_DIV16)  || \
              ((__CLOCKPRESCALER__) == SMARTCARD_PRESCALER_DIV32)  || \
              ((__CLOCKPRESCALER__) == SMARTCARD_PRESCALER_DIV64)  || \
              ((__CLOCKPRESCALER__) == SMARTCARD_PRESCALER_DIV128) || \
              ((__CLOCKPRESCALER__) == SMARTCARD_PRESCALER_DIV256))
#define IS_SMARTCARD_FIFOMODE_STATE(__STATE__) (((__STATE__) == SMARTCARD_FIFOMODE_DISABLE ) || \
                                         ((__STATE__) == SMARTCARD_FIFOMODE_ENABLE))
#define IS_SMARTCARD_LASTBIT(__LASTBIT__) (((__LASTBIT__) == SMARTCARD_LASTBIT_DISABLE) || \
                                           ((__LASTBIT__) == SMARTCARD_LASTBIT_ENABLE))
#define IS_SMARTCARD_MODE(__MODE__) ((((__MODE__) & 0xFFF3U) == 0x00U) && ((__MODE__) != 0x00U))
#define IS_SMARTCARD_NACK(__NACK__) (((__NACK__) == SMARTCARD_NACK_ENABLE) || \
                                     ((__NACK__) == SMARTCARD_NACK_DISABLE))
#define IS_SMARTCARD_ONE_BIT_SAMPLE(__ONEBIT__) (((__ONEBIT__) == SMARTCARD_ONE_BIT_SAMPLE_DISABLE) || \
                                                 ((__ONEBIT__) == SMARTCARD_ONE_BIT_SAMPLE_ENABLE))
#define IS_SMARTCARD_OVERRUN(__OVERRUN__) (((__OVERRUN__) == SMARTCARD_ADVFEATURE_OVERRUN_ENABLE) || \
                                           ((__OVERRUN__) == SMARTCARD_ADVFEATURE_OVERRUN_DISABLE))
#define IS_SMARTCARD_PARITY(__PARITY__) (((__PARITY__) == SMARTCARD_PARITY_EVEN) || \
                                         ((__PARITY__) == SMARTCARD_PARITY_ODD))
#define IS_SMARTCARD_PHASE(__CPHA__) (((__CPHA__) == SMARTCARD_PHASE_1EDGE) || ((__CPHA__) == SMARTCARD_PHASE_2EDGE))
#define IS_SMARTCARD_POLARITY(__CPOL__) (((__CPOL__) == SMARTCARD_POLARITY_LOW) || ((__CPOL__) == SMARTCARD_POLARITY_HIGH))
#define IS_SMARTCARD_REQUEST_PARAMETER(__PARAM__) (((__PARAM__) == SMARTCARD_RXDATA_FLUSH_REQUEST) || \
                                                   ((__PARAM__) == SMARTCARD_TXDATA_FLUSH_REQUEST))
#define IS_SMARTCARD_RXFIFO_THRESHOLD(__THRESHOLD__) (((__THRESHOLD__) == SMARTCARD_RXFIFO_THRESHOLD_1_8) || \
                                          ((__THRESHOLD__) == SMARTCARD_RXFIFO_THRESHOLD_1_4)             || \
                                          ((__THRESHOLD__) == SMARTCARD_RXFIFO_THRESHOLD_1_2)             || \
                                          ((__THRESHOLD__) == SMARTCARD_RXFIFO_THRESHOLD_3_4)             || \
                                          ((__THRESHOLD__) == SMARTCARD_RXFIFO_THRESHOLD_7_8)             || \
                                          ((__THRESHOLD__) == SMARTCARD_RXFIFO_THRESHOLD_8_8))
#define IS_SMARTCARD_STOPBITS(__STOPBITS__) (((__STOPBITS__) == SMARTCARD_STOPBITS_0_5) ||\
                                             ((__STOPBITS__) == SMARTCARD_STOPBITS_1_5))
#define IS_SMARTCARD_TIMEOUT(__TIMEOUT__) (((__TIMEOUT__) == SMARTCARD_TIMEOUT_DISABLE) || \
                                           ((__TIMEOUT__) == SMARTCARD_TIMEOUT_ENABLE))
#define IS_SMARTCARD_TIMEOUT_VALUE(__TIMEOUTVALUE__)    ((__TIMEOUTVALUE__) <= 0xFFFFFFU)
#define IS_SMARTCARD_TXFIFO_THRESHOLD(__THRESHOLD__) (((__THRESHOLD__) == SMARTCARD_TXFIFO_THRESHOLD_1_8) || \
                                          ((__THRESHOLD__) == SMARTCARD_TXFIFO_THRESHOLD_1_4)             || \
                                          ((__THRESHOLD__) == SMARTCARD_TXFIFO_THRESHOLD_1_2)             || \
                                          ((__THRESHOLD__) == SMARTCARD_TXFIFO_THRESHOLD_3_4)             || \
                                          ((__THRESHOLD__) == SMARTCARD_TXFIFO_THRESHOLD_7_8)             || \
                                          ((__THRESHOLD__) == SMARTCARD_TXFIFO_THRESHOLD_8_8))                                          
#define IS_SMARTCARD_WORD_LENGTH(__LENGTH__) ((__LENGTH__) == SMARTCARD_WORDLENGTH_9B)
#define __HAL_SMARTCARD_CLEAR_FEFLAG(__HANDLE__)   __HAL_SMARTCARD_CLEAR_FLAG((__HANDLE__), SMARTCARD_CLEAR_FEF)
#define __HAL_SMARTCARD_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->ICR = (__FLAG__))
#define __HAL_SMARTCARD_CLEAR_IDLEFLAG(__HANDLE__)   __HAL_SMARTCARD_CLEAR_FLAG((__HANDLE__), SMARTCARD_CLEAR_IDLEF)
#define __HAL_SMARTCARD_CLEAR_IT(__HANDLE__, __IT_CLEAR__) ((__HANDLE__)->Instance->ICR |= (uint32_t)(__IT_CLEAR__))
#define __HAL_SMARTCARD_CLEAR_NEFLAG(__HANDLE__)   __HAL_SMARTCARD_CLEAR_FLAG((__HANDLE__), SMARTCARD_CLEAR_NEF)
#define __HAL_SMARTCARD_CLEAR_OREFLAG(__HANDLE__)   __HAL_SMARTCARD_CLEAR_FLAG((__HANDLE__), SMARTCARD_CLEAR_OREF)
#define __HAL_SMARTCARD_CLEAR_PEFLAG(__HANDLE__)   __HAL_SMARTCARD_CLEAR_FLAG((__HANDLE__), SMARTCARD_CLEAR_PEF)
#define __HAL_SMARTCARD_DISABLE(__HANDLE__)              ((__HANDLE__)->Instance->CR1 &=  ~USART_CR1_UE)
#define __HAL_SMARTCARD_DISABLE_IT(__HANDLE__, __INTERRUPT__)  (((((uint8_t)(__INTERRUPT__)) >> 5U) == 1)? ((__HANDLE__)->Instance->CR1 &= ~ (1U << ((__INTERRUPT__) & SMARTCARD_IT_MASK))): \
                                                                ((((uint8_t)(__INTERRUPT__)) >> 5U) == 2)? ((__HANDLE__)->Instance->CR2 &= ~ (1U << ((__INTERRUPT__) & SMARTCARD_IT_MASK))): \
                                                                ((__HANDLE__)->Instance->CR3 &= ~ (1U << ((__INTERRUPT__) & SMARTCARD_IT_MASK))))
#define __HAL_SMARTCARD_ENABLE(__HANDLE__)               ((__HANDLE__)->Instance->CR1 |=  USART_CR1_UE)
#define __HAL_SMARTCARD_ENABLE_IT(__HANDLE__, __INTERRUPT__)   (((((uint8_t)(__INTERRUPT__)) >> 5U) == 1)? ((__HANDLE__)->Instance->CR1 |= (1U << ((__INTERRUPT__) & SMARTCARD_IT_MASK))): \
                                                                ((((uint8_t)(__INTERRUPT__)) >> 5U) == 2)? ((__HANDLE__)->Instance->CR2 |= (1U << ((__INTERRUPT__) & SMARTCARD_IT_MASK))): \
                                                                ((__HANDLE__)->Instance->CR3 |= (1U << ((__INTERRUPT__) & SMARTCARD_IT_MASK))))
#define __HAL_SMARTCARD_FLUSH_DRREGISTER(__HANDLE__)                                 \
    do{                                                                              \
      SET_BIT((__HANDLE__)->Instance->RQR, SMARTCARD_RXDATA_FLUSH_REQUEST); \
      SET_BIT((__HANDLE__)->Instance->RQR, SMARTCARD_TXDATA_FLUSH_REQUEST); \
      } while(0)
#define __HAL_SMARTCARD_GET_FLAG(__HANDLE__, __FLAG__) (((__HANDLE__)->Instance->ISR & (__FLAG__)) == (__FLAG__))
#define __HAL_SMARTCARD_GET_IT(__HANDLE__, __INTERRUPT__) ((((__HANDLE__)->Instance->ISR & (0x01U << ((__INTERRUPT__)>> 0x08U))) != RESET) ? SET : RESET)
#define __HAL_SMARTCARD_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((((((((uint8_t)(__INTERRUPT__)) >> 0x05U) == 0x01U)? (__HANDLE__)->Instance->CR1 : \
                                                             (((((uint8_t)(__INTERRUPT__)) >> 0x05U) == 0x01U)? (__HANDLE__)->Instance->CR2 : \
                                                             (__HANDLE__)->Instance->CR3)) & (0x01U << (((uint16_t)(__INTERRUPT__)) & SMARTCARD_IT_MASK)))  != RESET) ? SET : RESET)
#define __HAL_SMARTCARD_ONE_BIT_SAMPLE_DISABLE(__HANDLE__) ((__HANDLE__)->Instance->CR3 &= (uint32_t)~((uint32_t)USART_CR3_ONEBIT))
#define __HAL_SMARTCARD_ONE_BIT_SAMPLE_ENABLE(__HANDLE__) ((__HANDLE__)->Instance->CR3|= USART_CR3_ONEBIT)
#define __HAL_SMARTCARD_RESET_HANDLE_STATE(__HANDLE__)  do{                                                       \
                                                           (__HANDLE__)->gState = HAL_SMARTCARD_STATE_RESET;      \
                                                           (__HANDLE__)->RxState = HAL_SMARTCARD_STATE_RESET;     \
                                                          } while(0)
#define __HAL_SMARTCARD_SEND_REQ(__HANDLE__, __REQ__) ((__HANDLE__)->Instance->RQR |= (uint16_t)(__REQ__))
