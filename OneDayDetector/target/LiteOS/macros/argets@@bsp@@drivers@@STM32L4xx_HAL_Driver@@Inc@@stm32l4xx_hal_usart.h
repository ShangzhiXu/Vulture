#define IS_USART_BAUDRATE(__BAUDRATE__) ((__BAUDRATE__) < 15000001U)
#define IS_USART_BAUDRATE(__BAUDRATE__) ((__BAUDRATE__) < 10000001U)
#define IS_USART_CLOCK(__CLOCK__) (((__CLOCK__) == USART_CLOCK_DISABLE) || \
                                   ((__CLOCK__) == USART_CLOCK_ENABLE))
#define IS_USART_LASTBIT(__LASTBIT__) (((__LASTBIT__) == USART_LASTBIT_DISABLE) || \
                                       ((__LASTBIT__) == USART_LASTBIT_ENABLE))
#define IS_USART_MODE(__MODE__) ((((__MODE__) & (uint32_t)0xFFFFFFF3U) == 0x00U) && ((__MODE__) != (uint32_t)0x00U))
#define IS_USART_OVERSAMPLING(__SAMPLING__) (((__SAMPLING__) == USART_OVERSAMPLING_16) || \
                                             ((__SAMPLING__) == USART_OVERSAMPLING_8))
#define IS_USART_PARITY(__PARITY__) (((__PARITY__) == USART_PARITY_NONE) || \
                                     ((__PARITY__) == USART_PARITY_EVEN) || \
                                     ((__PARITY__) == USART_PARITY_ODD))                                         
#define IS_USART_PHASE(__CPHA__) (((__CPHA__) == USART_PHASE_1EDGE) || ((__CPHA__) == USART_PHASE_2EDGE))
#define IS_USART_POLARITY(__CPOL__) (((__CPOL__) == USART_POLARITY_LOW) || ((__CPOL__) == USART_POLARITY_HIGH))
#define IS_USART_PRESCALER(__CLOCKPRESCALER__) (((__CLOCKPRESCALER__) == USART_PRESCALER_DIV1) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV2) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV4) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV6) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV8) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV10) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV12) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV16) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV32) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV64) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV128) || \
                                                ((__CLOCKPRESCALER__) == USART_PRESCALER_DIV256))
#define IS_USART_REQUEST_PARAMETER(__PARAM__) (((__PARAM__) == USART_RXDATA_FLUSH_REQUEST) || \
                                               ((__PARAM__) == USART_TXDATA_FLUSH_REQUEST))
#define IS_USART_STOPBITS(__STOPBITS__) (((__STOPBITS__) == USART_STOPBITS_0_5) || \
                                         ((__STOPBITS__) == USART_STOPBITS_1)   || \
                                         ((__STOPBITS__) == USART_STOPBITS_1_5) || \
                                         ((__STOPBITS__) == USART_STOPBITS_2))
#define USART_DIV_SAMPLING8(__PCLK__, __BAUD__, __CLOCKPRESCALER__)   (((((__PCLK__)/USARTPrescTable[(__CLOCKPRESCALER__)])*2) + ((__BAUD__)/2)) / (__BAUD__))
#define USART_DIV_SAMPLING8(__PCLK__, __BAUD__)   ((((__PCLK__)*2) + ((__BAUD__)/2)) / (__BAUD__))
#define __HAL_USART_CLEAR_FEFLAG(__HANDLE__)   __HAL_USART_CLEAR_FLAG((__HANDLE__), USART_CLEAR_FEF)
#define __HAL_USART_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->ICR = (__FLAG__))
#define __HAL_USART_CLEAR_IDLEFLAG(__HANDLE__)   __HAL_USART_CLEAR_FLAG((__HANDLE__), USART_CLEAR_IDLEF)
#define __HAL_USART_CLEAR_IT(__HANDLE__, __IT_CLEAR__) ((__HANDLE__)->Instance->ICR = (uint32_t)(__IT_CLEAR__))
#define __HAL_USART_CLEAR_NEFLAG(__HANDLE__)  __HAL_USART_CLEAR_FLAG((__HANDLE__), USART_CLEAR_NEF)
#define __HAL_USART_CLEAR_OREFLAG(__HANDLE__)   __HAL_USART_CLEAR_FLAG((__HANDLE__), USART_CLEAR_OREF)
#define __HAL_USART_CLEAR_PEFLAG(__HANDLE__)   __HAL_USART_CLEAR_FLAG((__HANDLE__), USART_CLEAR_PEF)
#define __HAL_USART_CLEAR_TXFECF(__HANDLE__)   __HAL_USART_CLEAR_FLAG((__HANDLE__), USART_CLEAR_TXFECF)
#define __HAL_USART_CLEAR_UDRFLAG(__HANDLE__)   __HAL_USART_CLEAR_FLAG((__HANDLE__), USART_CLEAR_UDRF)
#define __HAL_USART_DISABLE(__HANDLE__)                ((__HANDLE__)->Instance->CR1 &= ~USART_CR1_UE)
#define __HAL_USART_DISABLE_IT(__HANDLE__, __INTERRUPT__)  (((((uint8_t)(__INTERRUPT__)) >> 5U) == 1)? ((__HANDLE__)->Instance->CR1 &= ~ (1U << ((__INTERRUPT__) & USART_IT_MASK))): \
                                                            ((((uint8_t)(__INTERRUPT__)) >> 5U) == 2)? ((__HANDLE__)->Instance->CR2 &= ~ (1U << ((__INTERRUPT__) & USART_IT_MASK))): \
                                                            ((__HANDLE__)->Instance->CR3 &= ~ (1U << ((__INTERRUPT__) & USART_IT_MASK))))
#define __HAL_USART_ENABLE(__HANDLE__)                 ((__HANDLE__)->Instance->CR1 |= USART_CR1_UE)
#define __HAL_USART_ENABLE_IT(__HANDLE__, __INTERRUPT__)   (((((uint8_t)(__INTERRUPT__)) >> 5U) == 1)? ((__HANDLE__)->Instance->CR1 |= (1U << ((__INTERRUPT__) & USART_IT_MASK))): \
                                                            ((((uint8_t)(__INTERRUPT__)) >> 5U) == 2)? ((__HANDLE__)->Instance->CR2 |= (1U << ((__INTERRUPT__) & USART_IT_MASK))): \
                                                            ((__HANDLE__)->Instance->CR3 |= (1U << ((__INTERRUPT__) & USART_IT_MASK))))
#define __HAL_USART_GET_FLAG(__HANDLE__, __FLAG__) (((__HANDLE__)->Instance->ISR & (__FLAG__)) == (__FLAG__))
#define __HAL_USART_GET_IT(__HANDLE__, __INTERRUPT__) ((((__HANDLE__)->Instance->ISR & ((uint32_t)1 << ((__INTERRUPT__)>> 0x08))) != RESET) ? SET : RESET)
#define __HAL_USART_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((((((((uint8_t)(__INTERRUPT__)) >> 0x05U) == 0x01U) ? (__HANDLE__)->Instance->CR1 : \
                                                                (((((uint8_t)(__INTERRUPT__)) >> 0x05U) == 0x02U) ? (__HANDLE__)->Instance->CR2 : \
                                                                (__HANDLE__)->Instance->CR3)) & (0x01U << (((uint16_t)(__INTERRUPT__)) & USART_IT_MASK)))  != RESET) ? SET : RESET)
#define __HAL_USART_ONE_BIT_SAMPLE_DISABLE(__HANDLE__) ((__HANDLE__)->Instance->CR3 &= ~USART_CR3_ONEBIT)
#define __HAL_USART_ONE_BIT_SAMPLE_ENABLE(__HANDLE__) ((__HANDLE__)->Instance->CR3|= USART_CR3_ONEBIT)
#define __HAL_USART_RESET_HANDLE_STATE(__HANDLE__)  ((__HANDLE__)->State = HAL_USART_STATE_RESET)
#define __HAL_USART_SEND_REQ(__HANDLE__, __REQ__)      ((__HANDLE__)->Instance->RQR |= (__REQ__))
