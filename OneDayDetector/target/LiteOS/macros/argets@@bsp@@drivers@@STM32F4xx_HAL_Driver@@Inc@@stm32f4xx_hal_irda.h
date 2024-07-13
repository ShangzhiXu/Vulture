#define IRDA_BRR(_PCLK_, _BAUD_)      (((IRDA_DIVMANT((_PCLK_), (_BAUD_)) << 4U) + \
                                        (IRDA_DIVFRAQ((_PCLK_), (_BAUD_)) & 0xF0U)) + \
                                        (IRDA_DIVFRAQ((_PCLK_), (_BAUD_)) & 0x0FU))
#define IRDA_DIV(_PCLK_, _BAUD_)      ((uint32_t)((((uint64_t)(_PCLK_))*25U)/(4U*(((uint64_t)(_BAUD_))))))
#define IRDA_DIVFRAQ(_PCLK_, _BAUD_)  ((((IRDA_DIV((_PCLK_), (_BAUD_)) - (IRDA_DIVMANT((_PCLK_), (_BAUD_)) * 100U)) * 16U) + 50U) / 100U)
#define IRDA_DIVMANT(_PCLK_, _BAUD_)  (IRDA_DIV((_PCLK_), (_BAUD_))/100U)
#define IS_IRDA_BAUDRATE(BAUDRATE)    ((BAUDRATE) < 115201U)
#define IS_IRDA_MODE(MODE)            ((((MODE) & 0x0000FFF3U) == 0x00U) && ((MODE) != 0x00000000U))
#define IS_IRDA_PARITY(PARITY)        (((PARITY) == IRDA_PARITY_NONE) || \
                                       ((PARITY) == IRDA_PARITY_EVEN) || \
                                       ((PARITY) == IRDA_PARITY_ODD))
#define IS_IRDA_POWERMODE(MODE)       (((MODE) == IRDA_POWERMODE_LOWPOWER) || \
                                       ((MODE) == IRDA_POWERMODE_NORMAL))
#define IS_IRDA_WORD_LENGTH(LENGTH)   (((LENGTH) == IRDA_WORDLENGTH_8B) || \
                                       ((LENGTH) == IRDA_WORDLENGTH_9B))
#define __HAL_IRDA_CLEAR_FEFLAG(__HANDLE__) __HAL_IRDA_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_IRDA_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->SR = ~(__FLAG__))
#define __HAL_IRDA_CLEAR_IDLEFLAG(__HANDLE__) __HAL_IRDA_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_IRDA_CLEAR_NEFLAG(__HANDLE__) __HAL_IRDA_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_IRDA_CLEAR_OREFLAG(__HANDLE__) __HAL_IRDA_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_IRDA_CLEAR_PEFLAG(__HANDLE__)     \
  do{                                           \
    __IO uint32_t tmpreg = 0x00U;               \
    tmpreg = (__HANDLE__)->Instance->SR;        \
    tmpreg = (__HANDLE__)->Instance->DR;        \
    UNUSED(tmpreg);                             \
  } while(0U)
#define __HAL_IRDA_DISABLE(__HANDLE__)                  (CLEAR_BIT((__HANDLE__)->Instance->CR1, USART_CR1_UE))
#define __HAL_IRDA_DISABLE_IT(__HANDLE__, __INTERRUPT__)  ((((__INTERRUPT__) >> 28U) == IRDA_CR1_REG_INDEX)? ((__HANDLE__)->Instance->CR1 &= ~((__INTERRUPT__) & IRDA_IT_MASK)): \
                                                           (((__INTERRUPT__) >> 28U) == IRDA_CR2_REG_INDEX)? ((__HANDLE__)->Instance->CR2 &= ~((__INTERRUPT__) & IRDA_IT_MASK)): \
                                                           ((__HANDLE__)->Instance->CR3 &= ~ ((__INTERRUPT__) & IRDA_IT_MASK)))
#define __HAL_IRDA_ENABLE(__HANDLE__)                   (SET_BIT((__HANDLE__)->Instance->CR1, USART_CR1_UE))
#define __HAL_IRDA_ENABLE_IT(__HANDLE__, __INTERRUPT__)   ((((__INTERRUPT__) >> 28U) == IRDA_CR1_REG_INDEX)? ((__HANDLE__)->Instance->CR1 |= ((__INTERRUPT__) & IRDA_IT_MASK)): \
                                                           (((__INTERRUPT__) >> 28U) == IRDA_CR2_REG_INDEX)? ((__HANDLE__)->Instance->CR2 |=  ((__INTERRUPT__) & IRDA_IT_MASK)): \
                                                            ((__HANDLE__)->Instance->CR3 |= ((__INTERRUPT__) & IRDA_IT_MASK)))
#define __HAL_IRDA_FLUSH_DRREGISTER(__HANDLE__) ((__HANDLE__)->Instance->DR)
#define __HAL_IRDA_GET_FLAG(__HANDLE__, __FLAG__) (((__HANDLE__)->Instance->SR & (__FLAG__)) == (__FLAG__))
#define __HAL_IRDA_GET_IT_SOURCE(__HANDLE__, __IT__) (((((__IT__) >> 28U) == IRDA_CR1_REG_INDEX)? (__HANDLE__)->Instance->CR1:(((((uint32_t)(__IT__)) >> 28U) == IRDA_CR2_REG_INDEX)? \
                                                      (__HANDLE__)->Instance->CR2 : (__HANDLE__)->Instance->CR3)) & (((uint32_t)(__IT__)) & IRDA_IT_MASK))
#define __HAL_IRDA_ONE_BIT_SAMPLE_DISABLE(__HANDLE__) ((__HANDLE__)->Instance->CR3 &= (uint16_t)~((uint16_t)USART_CR3_ONEBIT))
#define __HAL_IRDA_ONE_BIT_SAMPLE_ENABLE(__HANDLE__) ((__HANDLE__)->Instance->CR3 |= USART_CR3_ONEBIT)
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
