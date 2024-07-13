#define IS_IRDA_BAUDRATE(__BAUDRATE__) ((__BAUDRATE__) < 115201U)
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
#define IS_IRDA_PRESCALER(__PRESCALER__) ((__PRESCALER__) > 0U)
#define IS_IRDA_REQUEST_PARAMETER(__PARAM__) (((__PARAM__) == IRDA_AUTOBAUD_REQUEST) || \
                                              ((__PARAM__) == IRDA_RXDATA_FLUSH_REQUEST) || \
                                              ((__PARAM__) == IRDA_TXDATA_FLUSH_REQUEST))
#define IS_IRDA_STATE(__STATE__) (((__STATE__) == IRDA_STATE_DISABLE) || \
                                  ((__STATE__) == IRDA_STATE_ENABLE))
#define IS_IRDA_TX_RX_MODE(__MODE__) ((((__MODE__) & (~((uint32_t)(IRDA_MODE_TX_RX)))) == 0x00U) && ((__MODE__) != 0x00U))
#define __HAL_IRDA_CLEAR_FEFLAG(__HANDLE__)    __HAL_IRDA_CLEAR_FLAG((__HANDLE__), IRDA_CLEAR_FEF)
#define __HAL_IRDA_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->ICR = (__FLAG__))
#define __HAL_IRDA_CLEAR_IDLEFLAG(__HANDLE__)   __HAL_IRDA_CLEAR_FLAG((__HANDLE__), IRDA_CLEAR_IDLEF)
#define __HAL_IRDA_CLEAR_IT(__HANDLE__, __IT_CLEAR__) ((__HANDLE__)->Instance->ICR = (uint32_t)(__IT_CLEAR__))
#define __HAL_IRDA_CLEAR_NEFLAG(__HANDLE__)    __HAL_IRDA_CLEAR_FLAG((__HANDLE__), IRDA_CLEAR_NEF)
#define __HAL_IRDA_CLEAR_OREFLAG(__HANDLE__)    __HAL_IRDA_CLEAR_FLAG((__HANDLE__), IRDA_CLEAR_OREF)
#define __HAL_IRDA_CLEAR_PEFLAG(__HANDLE__)    __HAL_IRDA_CLEAR_FLAG((__HANDLE__), IRDA_CLEAR_PEF)
#define __HAL_IRDA_DISABLE(__HANDLE__)                  ((__HANDLE__)->Instance->CR1 &=  ~USART_CR1_UE)
#define __HAL_IRDA_DISABLE_IT(__HANDLE__, __INTERRUPT__)  (((((__INTERRUPT__) & IRDA_CR_MASK) >> IRDA_CR_POS) == 1U)? ((__HANDLE__)->Instance->CR1 &= ~ ((uint32_t)1U << ((__INTERRUPT__) & IRDA_IT_MASK))): \
                                                           ((((__INTERRUPT__) & IRDA_CR_MASK) >> IRDA_CR_POS) == 2U)? ((__HANDLE__)->Instance->CR2 &= ~ ((uint32_t)1U << ((__INTERRUPT__) & IRDA_IT_MASK))): \
                                                           ((__HANDLE__)->Instance->CR3 &= ~ ((uint32_t)1U << ((__INTERRUPT__) & IRDA_IT_MASK))))
#define __HAL_IRDA_ENABLE(__HANDLE__)                   ((__HANDLE__)->Instance->CR1 |=  USART_CR1_UE)
#define __HAL_IRDA_ENABLE_IT(__HANDLE__, __INTERRUPT__)   (((((__INTERRUPT__) & IRDA_CR_MASK) >> IRDA_CR_POS) == 1U)? ((__HANDLE__)->Instance->CR1 |= ((uint32_t)1U << ((__INTERRUPT__) & IRDA_IT_MASK))): \
                                                           ((((__INTERRUPT__) & IRDA_CR_MASK) >> IRDA_CR_POS) == 2U)? ((__HANDLE__)->Instance->CR2 |= ((uint32_t)1U << ((__INTERRUPT__) & IRDA_IT_MASK))): \
                                                           ((__HANDLE__)->Instance->CR3 |= ((uint32_t)1U << ((__INTERRUPT__) & IRDA_IT_MASK))))
#define __HAL_IRDA_FLUSH_DRREGISTER(__HANDLE__)                            \
    do{                                                                    \
         SET_BIT((__HANDLE__)->Instance->RQR, IRDA_RXDATA_FLUSH_REQUEST); \
         SET_BIT((__HANDLE__)->Instance->RQR, IRDA_TXDATA_FLUSH_REQUEST); \
      } while(0U)
#define __HAL_IRDA_GET_FLAG(__HANDLE__, __FLAG__) (((__HANDLE__)->Instance->ISR & (__FLAG__)) == (__FLAG__))
#define __HAL_IRDA_GET_IT(__HANDLE__, __INTERRUPT__) ((((__HANDLE__)->Instance->ISR & (0x01U << (((__INTERRUPT__) & IRDA_ISR_MASK)>> IRDA_ISR_POS))) != 0U) ? SET : RESET)
#define __HAL_IRDA_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((((((((__INTERRUPT__) & IRDA_CR_MASK) >> IRDA_CR_POS) == 0x01U)? (__HANDLE__)->Instance->CR1 : \
                                                               (((((__INTERRUPT__) & IRDA_CR_MASK) >> IRDA_CR_POS) == 0x02U)? (__HANDLE__)->Instance->CR2 : \
                                                               (__HANDLE__)->Instance->CR3)) & ((uint32_t)0x01U << (((uint16_t)(__INTERRUPT__)) & IRDA_IT_MASK))) != 0U) ? SET : RESET)
#define __HAL_IRDA_ONE_BIT_SAMPLE_DISABLE(__HANDLE__) ((__HANDLE__)->Instance->CR3 &= (uint32_t)~((uint32_t)USART_CR3_ONEBIT))
#define __HAL_IRDA_ONE_BIT_SAMPLE_ENABLE(__HANDLE__) ((__HANDLE__)->Instance->CR3|= USART_CR3_ONEBIT)
#define __HAL_IRDA_RESET_HANDLE_STATE(__HANDLE__)  do{                                                   \
                                                       (__HANDLE__)->gState = HAL_IRDA_STATE_RESET;      \
                                                       (__HANDLE__)->RxState = HAL_IRDA_STATE_RESET;     \
                                                       (__HANDLE__)->MspInitCallback = NULL;             \
                                                       (__HANDLE__)->MspDeInitCallback = NULL;           \
                                                     } while(0U)
#define __HAL_IRDA_RESET_HANDLE_STATE(__HANDLE__)  do{                                                   \
                                                       (__HANDLE__)->gState = HAL_IRDA_STATE_RESET;      \
                                                       (__HANDLE__)->RxState = HAL_IRDA_STATE_RESET;     \
                                                     } while(0U)
#define __HAL_IRDA_SEND_REQ(__HANDLE__, __REQ__) ((__HANDLE__)->Instance->RQR |= (uint16_t)(__REQ__))
