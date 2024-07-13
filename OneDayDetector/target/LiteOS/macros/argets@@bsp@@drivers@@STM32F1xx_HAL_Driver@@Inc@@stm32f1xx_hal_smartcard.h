#define IS_SMARTCARD_BAUDRATE(__BAUDRATE__) ((__BAUDRATE__) < 4500001)
#define IS_SMARTCARD_LASTBIT(LASTBIT)       (((LASTBIT) == SMARTCARD_LASTBIT_DISABLE) || \
                                             ((LASTBIT) == SMARTCARD_LASTBIT_ENABLE))
#define IS_SMARTCARD_MODE(MODE)             ((((MODE) & (~((uint32_t)SMARTCARD_MODE_TX_RX))) == 0x00) && \
                                             ((MODE) != (uint32_t)0x00000000))
#define IS_SMARTCARD_NACK_STATE(NACK)       (((NACK) == SMARTCARD_NACK_ENABLE) || \
                                             ((NACK) == SMARTCARD_NACK_DISABLE))
#define IS_SMARTCARD_PARITY(PARITY)         (((PARITY) == SMARTCARD_PARITY_EVEN) || \
                                             ((PARITY) == SMARTCARD_PARITY_ODD))
#define IS_SMARTCARD_PHASE(CPHA)            (((CPHA) == SMARTCARD_PHASE_1EDGE) || ((CPHA) == SMARTCARD_PHASE_2EDGE))
#define IS_SMARTCARD_POLARITY(CPOL)         (((CPOL) == SMARTCARD_POLARITY_LOW) || ((CPOL) == SMARTCARD_POLARITY_HIGH))
#define IS_SMARTCARD_PRESCALER(PRESCALER)   (((PRESCALER) >= SMARTCARD_PRESCALER_SYSCLK_DIV2) && \
                                             ((PRESCALER) <= SMARTCARD_PRESCALER_SYSCLK_DIV62) )
#define IS_SMARTCARD_STOPBITS(STOPBITS)     (((STOPBITS) == SMARTCARD_STOPBITS_0_5) || \
                                             ((STOPBITS) == SMARTCARD_STOPBITS_1_5))
#define IS_SMARTCARD_WORD_LENGTH(LENGTH)    ((LENGTH) == SMARTCARD_WORDLENGTH_9B)
#define SMARTCARD_BRR(_PCLK_, _BAUD_)            (((SMARTCARD_DIVMANT((_PCLK_), (_BAUD_)) << 4) + \
                                                  (SMARTCARD_DIVFRAQ((_PCLK_), (_BAUD_)) & 0xF0)) + \
                                                  (SMARTCARD_DIVFRAQ((_PCLK_), (_BAUD_)) & 0x0F))
#define SMARTCARD_DIV(__PCLK__, __BAUD__)                (((__PCLK__)*25)/(4*(__BAUD__)))
#define SMARTCARD_DIVFRAQ(__PCLK__, __BAUD__)            (((SMARTCARD_DIV((__PCLK__), (__BAUD__)) - (SMARTCARD_DIVMANT((__PCLK__), (__BAUD__)) * 100)) * 16 + 50) / 100)
#define SMARTCARD_DIVMANT(__PCLK__, __BAUD__)            (SMARTCARD_DIV((__PCLK__), (__BAUD__))/100)
#define __HAL_SMARTCARD_CLEAR_FEFLAG(__HANDLE__) __HAL_SMARTCARD_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_SMARTCARD_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->SR = ~(__FLAG__))
#define __HAL_SMARTCARD_CLEAR_IDLEFLAG(__HANDLE__) __HAL_SMARTCARD_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_SMARTCARD_CLEAR_NEFLAG(__HANDLE__) __HAL_SMARTCARD_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_SMARTCARD_CLEAR_OREFLAG(__HANDLE__) __HAL_SMARTCARD_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_SMARTCARD_CLEAR_PEFLAG(__HANDLE__) \
do{                                                        \
    __IO uint32_t tmpreg;                                  \
    tmpreg = (__HANDLE__)->Instance->SR;                   \
    tmpreg = (__HANDLE__)->Instance->DR;                   \
    UNUSED(tmpreg);                                        \
}while(0)  
#define __HAL_SMARTCARD_DISABLE(__HANDLE__)              (CLEAR_BIT((__HANDLE__)->Instance->CR1, USART_CR1_UE))
#define __HAL_SMARTCARD_DISABLE_IT(__HANDLE__, __INTERRUPT__)  ((((__INTERRUPT__) >> 28) == SMARTCARD_CR1_REG_INDEX)? ((__HANDLE__)->Instance->CR1 &= ~((__INTERRUPT__) & SMARTCARD_IT_MASK)): \
                                                               ((__HANDLE__)->Instance->CR3 &= ~ ((__INTERRUPT__) & SMARTCARD_IT_MASK)))
#define __HAL_SMARTCARD_DMA_REQUEST_DISABLE(__HANDLE__, __REQUEST__)   (CLEAR_BIT((__HANDLE__)->Instance->CR3, (__REQUEST__)))
#define __HAL_SMARTCARD_DMA_REQUEST_ENABLE(__HANDLE__, __REQUEST__)    (SET_BIT((__HANDLE__)->Instance->CR3, (__REQUEST__)))
#define __HAL_SMARTCARD_ENABLE(__HANDLE__)               (SET_BIT((__HANDLE__)->Instance->CR1, USART_CR1_UE))
#define __HAL_SMARTCARD_ENABLE_IT(__HANDLE__, __INTERRUPT__)   ((((__INTERRUPT__) >> 28) == SMARTCARD_CR1_REG_INDEX)? ((__HANDLE__)->Instance->CR1 |= ((__INTERRUPT__) & SMARTCARD_IT_MASK)): \
                                                               ((__HANDLE__)->Instance->CR3 |= ((__INTERRUPT__) & SMARTCARD_IT_MASK)))
#define __HAL_SMARTCARD_FLUSH_DRREGISTER(__HANDLE__) ((__HANDLE__)->Instance->DR)
#define __HAL_SMARTCARD_GET_FLAG(__HANDLE__, __FLAG__) (((__HANDLE__)->Instance->SR & (__FLAG__)) == (__FLAG__))
#define __HAL_SMARTCARD_GET_IT_SOURCE(__HANDLE__, __IT__) (((((__IT__) >> 28) == SMARTCARD_CR1_REG_INDEX)? (__HANDLE__)->Instance->CR1: (__HANDLE__)->Instance->CR3) & (((uint32_t)(__IT__)) & SMARTCARD_IT_MASK))
#define __HAL_SMARTCARD_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_SMARTCARD_STATE_RESET)
