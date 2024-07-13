#define IS_USART_BAUDRATE(__BAUDRATE__) ((__BAUDRATE__) < 4500001)
#define IS_USART_CLOCK(CLOCK)           (((CLOCK) == USART_CLOCK_DISABLE) || \
                                         ((CLOCK) == USART_CLOCK_ENABLE))
#define IS_USART_LASTBIT(LASTBIT)       (((LASTBIT) == USART_LASTBIT_DISABLE) || \
                                         ((LASTBIT) == USART_LASTBIT_ENABLE))
#define IS_USART_MODE(MODE)             ((((MODE) & (~((uint32_t)USART_MODE_TX_RX))) == 0x00) && ((MODE) != (uint32_t)0x00000000))
#define IS_USART_NACK_STATE(NACK)       (((NACK) == USART_NACK_ENABLE) || \
                                         ((NACK) == USART_NACK_DISABLE))
#define IS_USART_PARITY(PARITY)         (((PARITY) == USART_PARITY_NONE) || \
                                         ((PARITY) == USART_PARITY_EVEN) || \
                                         ((PARITY) == USART_PARITY_ODD))
#define IS_USART_PHASE(CPHA)            (((CPHA) == USART_PHASE_1EDGE) || ((CPHA) == USART_PHASE_2EDGE))
#define IS_USART_POLARITY(CPOL)         (((CPOL) == USART_POLARITY_LOW) || ((CPOL) == USART_POLARITY_HIGH))
#define IS_USART_STOPBITS(STOPBITS)     (((STOPBITS) == USART_STOPBITS_1) || \
                                         ((STOPBITS) == USART_STOPBITS_0_5) || \
                                         ((STOPBITS) == USART_STOPBITS_1_5) || \
                                         ((STOPBITS) == USART_STOPBITS_2))
#define IS_USART_WORD_LENGTH(LENGTH)    (((LENGTH) == USART_WORDLENGTH_8B) || \
                                         ((LENGTH) == USART_WORDLENGTH_9B))
#define USART_BRR(__PCLK__, __BAUD__)                ((USART_DIVMANT((__PCLK__), (__BAUD__)) << 4)|(USART_DIVFRAQ((__PCLK__), (__BAUD__)) & 0x0F))
#define USART_DIV(__PCLK__, __BAUD__)                (((__PCLK__)*25)/(4*(__BAUD__)))
#define USART_DIVFRAQ(__PCLK__, __BAUD__)            (((USART_DIV((__PCLK__), (__BAUD__)) - (USART_DIVMANT((__PCLK__), (__BAUD__)) * 100)) * 16 + 50) / 100)
#define USART_DIVMANT(__PCLK__, __BAUD__)            (USART_DIV((__PCLK__), (__BAUD__))/100)
#define __HAL_USART_CLEAR_FEFLAG(__HANDLE__) __HAL_USART_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_USART_CLEAR_FLAG(__HANDLE__, __FLAG__)  ((__HANDLE__)->Instance->SR = ~(__FLAG__))
#define __HAL_USART_CLEAR_IDLEFLAG(__HANDLE__) __HAL_USART_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_USART_CLEAR_NEFLAG(__HANDLE__) __HAL_USART_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_USART_CLEAR_OREFLAG(__HANDLE__) __HAL_USART_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_USART_CLEAR_PEFLAG(__HANDLE__) \
do{                                          \
  __IO uint32_t tmpreg;                      \
  tmpreg = (__HANDLE__)->Instance->SR;       \
  tmpreg = (__HANDLE__)->Instance->DR;       \
  UNUSED(tmpreg);                            \
}while(0)
#define __HAL_USART_DISABLE(__HANDLE__)              CLEAR_BIT((__HANDLE__)->Instance->CR1,(USART_CR1_UE)) 
#define __HAL_USART_DISABLE_IT(__HANDLE__, __INTERRUPT__)  ((((__INTERRUPT__) >> 28) == USART_CR1_REG_INDEX)? ((__HANDLE__)->Instance->CR1 &= ~((__INTERRUPT__) & USART_IT_MASK)): \
                                                            (((__INTERRUPT__) >> 28) == USART_CR2_REG_INDEX)? ((__HANDLE__)->Instance->CR2 &= ~((__INTERRUPT__) & USART_IT_MASK)): \
                                                            ((__HANDLE__)->Instance->CR3 &= ~ ((__INTERRUPT__) & USART_IT_MASK)))
#define __HAL_USART_ENABLE(__HANDLE__)               SET_BIT((__HANDLE__)->Instance->CR1,(USART_CR1_UE)) 
#define __HAL_USART_ENABLE_IT(__HANDLE__, __INTERRUPT__)   ((((__INTERRUPT__) >> 28) == USART_CR1_REG_INDEX)? ((__HANDLE__)->Instance->CR1 |= ((__INTERRUPT__) & USART_IT_MASK)): \
                                                            (((__INTERRUPT__) >> 28) == USART_CR2_REG_INDEX)? ((__HANDLE__)->Instance->CR2 |=  ((__INTERRUPT__) & USART_IT_MASK)): \
                                                            ((__HANDLE__)->Instance->CR3 |= ((__INTERRUPT__) & USART_IT_MASK)))
#define __HAL_USART_GET_FLAG(__HANDLE__, __FLAG__) (((__HANDLE__)->Instance->SR & (__FLAG__)) == (__FLAG__))
#define __HAL_USART_GET_IT_SOURCE(__HANDLE__, __IT__) (((((__IT__) >> 28) == USART_CR1_REG_INDEX)? (__HANDLE__)->Instance->CR1:(((((uint32_t)(__IT__)) >> 28) == USART_CR2_REG_INDEX)? \
                                                      (__HANDLE__)->Instance->CR2 : (__HANDLE__)->Instance->CR3)) & (((uint32_t)(__IT__)) & USART_IT_MASK))
#define __HAL_USART_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_USART_STATE_RESET)
