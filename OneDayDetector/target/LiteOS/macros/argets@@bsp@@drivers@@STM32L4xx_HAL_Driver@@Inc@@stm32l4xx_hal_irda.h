#define IRDA_MASK_COMPUTATION(__HANDLE__)                             \
  do {                                                                \
  if ((__HANDLE__)->Init.WordLength == IRDA_WORDLENGTH_9B)            \
  {                                                                   \
     if ((__HANDLE__)->Init.Parity == IRDA_PARITY_NONE)               \
     {                                                                \
        (__HANDLE__)->Mask = 0x01FF ;                                 \
     }                                                                \
     else                                                             \
     {                                                                \
        (__HANDLE__)->Mask = 0x00FF ;                                 \
     }                                                                \
  }                                                                   \
  else if ((__HANDLE__)->Init.WordLength == IRDA_WORDLENGTH_8B)       \
  {                                                                   \
     if ((__HANDLE__)->Init.Parity == IRDA_PARITY_NONE)               \
     {                                                                \
        (__HANDLE__)->Mask = 0x00FF ;                                 \
     }                                                                \
     else                                                             \
     {                                                                \
        (__HANDLE__)->Mask = 0x007F ;                                 \
     }                                                                \
  }                                                                   \
  else if ((__HANDLE__)->Init.WordLength == IRDA_WORDLENGTH_7B)       \
  {                                                                   \
     if ((__HANDLE__)->Init.Parity == IRDA_PARITY_NONE)               \
     {                                                                \
        (__HANDLE__)->Mask = 0x007F ;                                 \
     }                                                                \
     else                                                             \
     {                                                                \
        (__HANDLE__)->Mask = 0x003F ;                                 \
     }                                                                \
  }                                                                   \
} while(0)
#define IS_IRDA_BAUDRATE(__BAUDRATE__) ((__BAUDRATE__) < 115201)
#define IS_IRDA_CLOCKPRESCALER(__CLOCKPRESCALER__) (((__CLOCKPRESCALER__) == IRDA_PRESCALER_DIV1) || \
              ((__CLOCKPRESCALER__) == IRDA_PRESCALER_DIV2)   || \
              ((__CLOCKPRESCALER__) == IRDA_PRESCALER_DIV4)   || \
              ((__CLOCKPRESCALER__) == IRDA_PRESCALER_DIV6)   || \
              ((__CLOCKPRESCALER__) == IRDA_PRESCALER_DIV8)   || \
              ((__CLOCKPRESCALER__) == IRDA_PRESCALER_DIV10)  || \
              ((__CLOCKPRESCALER__) == IRDA_PRESCALER_DIV12)  || \
              ((__CLOCKPRESCALER__) == IRDA_PRESCALER_DIV16)  || \
              ((__CLOCKPRESCALER__) == IRDA_PRESCALER_DIV32)  || \
              ((__CLOCKPRESCALER__) == IRDA_PRESCALER_DIV64)  || \
              ((__CLOCKPRESCALER__) == IRDA_PRESCALER_DIV128) || \
              ((__CLOCKPRESCALER__) == IRDA_PRESCALER_DIV256))
#define IS_IRDA_DMA_RX(__DMARX__) (((__DMARX__) == IRDA_DMA_RX_DISABLE) || \
                                   ((__DMARX__) == IRDA_DMA_RX_ENABLE))
#define IS_IRDA_DMA_TX(__DMATX__)     (((__DMATX__) == IRDA_DMA_TX_DISABLE) || \
                                       ((__DMATX__) == IRDA_DMA_TX_ENABLE))
#define IS_IRDA_MODE(__MODE__)  (((__MODE__) == IRDA_MODE_DISABLE) || \
                                 ((__MODE__) == IRDA_MODE_ENABLE))
#define IS_IRDA_ONE_BIT_SAMPLE(__ONEBIT__)      (((__ONEBIT__) == IRDA_ONE_BIT_SAMPLE_DISABLE) || \
                                                 ((__ONEBIT__) == IRDA_ONE_BIT_SAMPLE_ENABLE))
#define IS_IRDA_PARITY(__PARITY__) (((__PARITY__) == IRDA_PARITY_NONE) || \
                                    ((__PARITY__) == IRDA_PARITY_EVEN) || \
                                    ((__PARITY__) == IRDA_PARITY_ODD))
#define IS_IRDA_POWERMODE(__MODE__) (((__MODE__) == IRDA_POWERMODE_LOWPOWER) || \
                                     ((__MODE__) == IRDA_POWERMODE_NORMAL))
#define IS_IRDA_PRESCALER(__PRESCALER__) ((__PRESCALER__) > 0)
#define IS_IRDA_REQUEST_PARAMETER(__PARAM__) (((__PARAM__) == IRDA_AUTOBAUD_REQUEST) || \
                                              ((__PARAM__) == IRDA_RXDATA_FLUSH_REQUEST) || \
                                              ((__PARAM__) == IRDA_TXDATA_FLUSH_REQUEST))
#define IS_IRDA_STATE(__STATE__) (((__STATE__) == IRDA_STATE_DISABLE) || \
                                  ((__STATE__) == IRDA_STATE_ENABLE))
#define IS_IRDA_TX_RX_MODE(__MODE__) ((((__MODE__) & (~((uint32_t)(IRDA_MODE_TX_RX)))) == (uint32_t)0x00) && ((__MODE__) != (uint32_t)0x00))
#define IS_IRDA_WORD_LENGTH(__LENGTH__) (((__LENGTH__) == IRDA_WORDLENGTH_7B) || \
                                         ((__LENGTH__) == IRDA_WORDLENGTH_8B) || \
                                         ((__LENGTH__) == IRDA_WORDLENGTH_9B))
#define __HAL_IRDA_CLEAR_FEFLAG(__HANDLE__)    __HAL_IRDA_CLEAR_FLAG((__HANDLE__), IRDA_CLEAR_FEF)
#define __HAL_IRDA_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->ICR = (__FLAG__))
#define __HAL_IRDA_CLEAR_IDLEFLAG(__HANDLE__)   __HAL_IRDA_CLEAR_FLAG((__HANDLE__), IRDA_CLEAR_IDLEF)
#define __HAL_IRDA_CLEAR_IT(__HANDLE__, __IT_CLEAR__) ((__HANDLE__)->Instance->ICR = (uint32_t)(__IT_CLEAR__))
#define __HAL_IRDA_CLEAR_NEFLAG(__HANDLE__)    __HAL_IRDA_CLEAR_FLAG((__HANDLE__), IRDA_CLEAR_NEF)
#define __HAL_IRDA_CLEAR_OREFLAG(__HANDLE__)    __HAL_IRDA_CLEAR_FLAG((__HANDLE__), IRDA_CLEAR_OREF)
#define __HAL_IRDA_CLEAR_PEFLAG(__HANDLE__)    __HAL_IRDA_CLEAR_FLAG((__HANDLE__), IRDA_CLEAR_PEF)
#define __HAL_IRDA_DISABLE(__HANDLE__)                  ((__HANDLE__)->Instance->CR1 &=  ~USART_CR1_UE)
#define __HAL_IRDA_DISABLE_IT(__HANDLE__, __INTERRUPT__)  (((((uint8_t)(__INTERRUPT__)) >> 5U) == 1)? ((__HANDLE__)->Instance->CR1 &= ~ (1U << ((__INTERRUPT__) & IRDA_IT_MASK))): \
                                                           ((((uint8_t)(__INTERRUPT__)) >> 5U) == 2)? ((__HANDLE__)->Instance->CR2 &= ~ (1U << ((__INTERRUPT__) & IRDA_IT_MASK))): \
                                                           ((__HANDLE__)->Instance->CR3 &= ~ (1U << ((__INTERRUPT__) & IRDA_IT_MASK))))
#define __HAL_IRDA_ENABLE(__HANDLE__)                   ((__HANDLE__)->Instance->CR1 |=  USART_CR1_UE)
#define __HAL_IRDA_ENABLE_IT(__HANDLE__, __INTERRUPT__)   (((((uint8_t)(__INTERRUPT__)) >> 5U) == 1)? ((__HANDLE__)->Instance->CR1 |= (1U << ((__INTERRUPT__) & IRDA_IT_MASK))): \
                                                           ((((uint8_t)(__INTERRUPT__)) >> 5U) == 2)? ((__HANDLE__)->Instance->CR2 |= (1U << ((__INTERRUPT__) & IRDA_IT_MASK))): \
                                                           ((__HANDLE__)->Instance->CR3 |= (1U << ((__INTERRUPT__) & IRDA_IT_MASK))))
#define __HAL_IRDA_FLUSH_DRREGISTER(__HANDLE__)                            \
    do{                                                                    \
         SET_BIT((__HANDLE__)->Instance->RQR, IRDA_RXDATA_FLUSH_REQUEST); \
         SET_BIT((__HANDLE__)->Instance->RQR, IRDA_TXDATA_FLUSH_REQUEST); \
      } while(0)
#define __HAL_IRDA_GET_FLAG(__HANDLE__, __FLAG__) (((__HANDLE__)->Instance->ISR & (__FLAG__)) == (__FLAG__))
#define __HAL_IRDA_GET_IT(__HANDLE__, __INTERRUPT__) ((((__HANDLE__)->Instance->ISR & (0x01U << ((__INTERRUPT__)>> 0x08U))) != RESET) ? SET : RESET)
#define __HAL_IRDA_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((((((((uint8_t)(__INTERRUPT__)) >> 0x05U) == 0x01U)? (__HANDLE__)->Instance->CR1 : \
                                                               (((((uint8_t)(__INTERRUPT__)) >> 0x05U) == 0x02U)? (__HANDLE__)->Instance->CR2 : \
                                                               (__HANDLE__)->Instance->CR3)) & (0x01U << (((uint16_t)(__INTERRUPT__)) & IRDA_IT_MASK)))  != RESET) ? SET : RESET)
#define __HAL_IRDA_ONE_BIT_SAMPLE_DISABLE(__HANDLE__) ((__HANDLE__)->Instance->CR3 &= (uint32_t)~((uint32_t)USART_CR3_ONEBIT))
#define __HAL_IRDA_ONE_BIT_SAMPLE_ENABLE(__HANDLE__) ((__HANDLE__)->Instance->CR3|= USART_CR3_ONEBIT)
#define __HAL_IRDA_RESET_HANDLE_STATE(__HANDLE__)  do{                                                   \
                                                       (__HANDLE__)->gState = HAL_IRDA_STATE_RESET;      \
                                                       (__HANDLE__)->RxState = HAL_IRDA_STATE_RESET;     \
                                                     } while(0)
#define __HAL_IRDA_SEND_REQ(__HANDLE__, __REQ__) ((__HANDLE__)->Instance->RQR |= (uint16_t)(__REQ__))
