#define IRDA_BRR(_PCLK_, _BAUD_)            (((IRDA_DIVMANT((_PCLK_), (_BAUD_)) << 4) + \
                                             (IRDA_DIVFRAQ((_PCLK_), (_BAUD_)) & 0xF0)) + \
                                             (IRDA_DIVFRAQ((_PCLK_), (_BAUD_)) & 0x0F))
#define IRDA_DIV(__PCLK__, __BAUD__)                    (((__PCLK__)*25)/(4*(__BAUD__)))
#define IRDA_DIVFRAQ(__PCLK__, __BAUD__)                (((IRDA_DIV((__PCLK__), (__BAUD__)) - (IRDA_DIVMANT((__PCLK__), (__BAUD__)) * 100)) * 16 + 50) / 100)
#define IRDA_DIVMANT(__PCLK__, __BAUD__)                (IRDA_DIV((__PCLK__), (__BAUD__))/100)
#define IS_IRDA_BAUDRATE(__BAUDRATE__) ((__BAUDRATE__) < 115201)
#define IS_IRDA_MODE(MODE)             ((((MODE) & (~((uint32_t)IRDA_MODE_TX_RX))) == 0x00) && \
                                        ((MODE) != (uint32_t)0x00000000))
#define IS_IRDA_PARITY(PARITY)         (((PARITY) == IRDA_PARITY_NONE) || \
                                        ((PARITY) == IRDA_PARITY_EVEN) || \
                                        ((PARITY) == IRDA_PARITY_ODD))
#define IS_IRDA_POWERMODE(MODE)        (((MODE) == IRDA_POWERMODE_LOWPOWER) || \
                                        ((MODE) == IRDA_POWERMODE_NORMAL))
#define IS_IRDA_WORD_LENGTH(LENGTH)    (((LENGTH) == IRDA_WORDLENGTH_8B) || \
                                        ((LENGTH) == IRDA_WORDLENGTH_9B))
#define __HAL_IRDA_CLEAR_FEFLAG(__HANDLE__) __HAL_IRDA_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_IRDA_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->SR = ~(__FLAG__))
#define __HAL_IRDA_CLEAR_IDLEFLAG(__HANDLE__) __HAL_IRDA_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_IRDA_CLEAR_NEFLAG(__HANDLE__) __HAL_IRDA_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_IRDA_CLEAR_OREFLAG(__HANDLE__) __HAL_IRDA_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_IRDA_CLEAR_PEFLAG(__HANDLE__) \
do{                                         \
  __IO uint32_t tmpreg;                     \
  tmpreg = (__HANDLE__)->Instance->SR;      \
  tmpreg = (__HANDLE__)->Instance->DR;      \
  UNUSED(tmpreg);                           \
  }while(0)                                 \
    
#define __HAL_IRDA_DISABLE(__HANDLE__)                  (CLEAR_BIT((__HANDLE__)->Instance->CR1, USART_CR1_UE))
#define __HAL_IRDA_DISABLE_IT(__HANDLE__, __INTERRUPT__)  ((((__INTERRUPT__) >> 28) == IRDA_CR1_REG_INDEX)? ((__HANDLE__)->Instance->CR1 &= ~((__INTERRUPT__) & IRDA_IT_MASK)): \
                                                           (((__INTERRUPT__) >> 28) == IRDA_CR2_REG_INDEX)? ((__HANDLE__)->Instance->CR2 &= ~((__INTERRUPT__) & IRDA_IT_MASK)): \
                                                           ((__HANDLE__)->Instance->CR3 &= ~ ((__INTERRUPT__) & IRDA_IT_MASK)))
#define __HAL_IRDA_ENABLE(__HANDLE__)                   (SET_BIT((__HANDLE__)->Instance->CR1, USART_CR1_UE))
#define __HAL_IRDA_ENABLE_IT(__HANDLE__, __INTERRUPT__)   ((((__INTERRUPT__) >> 28) == IRDA_CR1_REG_INDEX)? ((__HANDLE__)->Instance->CR1 |= ((__INTERRUPT__) & IRDA_IT_MASK)): \
                                                           (((__INTERRUPT__) >> 28) == IRDA_CR2_REG_INDEX)? ((__HANDLE__)->Instance->CR2 |=  ((__INTERRUPT__) & IRDA_IT_MASK)): \
                                                           ((__HANDLE__)->Instance->CR3 |= ((__INTERRUPT__) & IRDA_IT_MASK)))
#define __HAL_IRDA_FLUSH_DRREGISTER(__HANDLE__) ((__HANDLE__)->Instance->DR)
#define __HAL_IRDA_GET_FLAG(__HANDLE__, __FLAG__) (((__HANDLE__)->Instance->SR & (__FLAG__)) == (__FLAG__))
#define __HAL_IRDA_GET_IT_SOURCE(__HANDLE__, __IT__) (((((__IT__) >> 28) == IRDA_CR1_REG_INDEX)? (__HANDLE__)->Instance->CR1:((((__IT__) >> 28) == IRDA_CR2_REG_INDEX)? \
                                                      (__HANDLE__)->Instance->CR2 : (__HANDLE__)->Instance->CR3)) & (((uint32_t)(__IT__)) & IRDA_IT_MASK))
#define __HAL_IRDA_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_IRDA_STATE_RESET)
