#define IS_UART_ADDRESS(__ADDRESS__) ((__ADDRESS__) <= 0xF)
#define IS_UART_BAUDRATE(__BAUDRATE__) ((__BAUDRATE__) < 4500001)
#define IS_UART_HARDWARE_FLOW_CONTROL(CONTROL)\
                                       (((CONTROL) == UART_HWCONTROL_NONE) || \
                                        ((CONTROL) == UART_HWCONTROL_RTS) || \
                                        ((CONTROL) == UART_HWCONTROL_CTS) || \
                                        ((CONTROL) == UART_HWCONTROL_RTS_CTS))
#define IS_UART_LIN_BREAK_DETECT_LENGTH(LENGTH) (((LENGTH) == UART_LINBREAKDETECTLENGTH_10B) || \
                                                 ((LENGTH) == UART_LINBREAKDETECTLENGTH_11B))
#define IS_UART_LIN_OVERSAMPLING(SAMPLING)  ((SAMPLING) == UART_OVERSAMPLING_16)
#define IS_UART_LIN_WORD_LENGTH(LENGTH)   ((LENGTH) == UART_WORDLENGTH_8B)
#define IS_UART_MODE(MODE)             ((((MODE) & (~((uint32_t)UART_MODE_TX_RX))) == 0x00) && \
                                        ((MODE) != (uint32_t)0x00000000))
#define IS_UART_OVERSAMPLING(SAMPLING)      ((SAMPLING) == UART_OVERSAMPLING_16)
#define IS_UART_PARITY(PARITY)         (((PARITY) == UART_PARITY_NONE) || \
                                        ((PARITY) == UART_PARITY_EVEN) || \
                                        ((PARITY) == UART_PARITY_ODD))
#define IS_UART_STATE(STATE)           (((STATE) == UART_STATE_DISABLE) || \
                                        ((STATE) == UART_STATE_ENABLE))
#define IS_UART_STOPBITS(STOPBITS)     (((STOPBITS) == UART_STOPBITS_1) || \
                                        ((STOPBITS) == UART_STOPBITS_2))
#define IS_UART_WAKEUPMETHOD(WAKEUP)   (((WAKEUP) == UART_WAKEUPMETHOD_IDLELINE) || \
                                        ((WAKEUP) == UART_WAKEUPMETHOD_ADDRESSMARK))
#define IS_UART_WORD_LENGTH(LENGTH)       (((LENGTH) == UART_WORDLENGTH_8B) || \
                                           ((LENGTH) == UART_WORDLENGTH_9B))
#define UART_BRR_SAMPLING16(_PCLK_, _BAUD_)            (((UART_DIVMANT_SAMPLING16((_PCLK_), (_BAUD_)) << 4) + \
                                                        (UART_DIVFRAQ_SAMPLING16((_PCLK_), (_BAUD_)) & 0xF0)) + \
                                                        (UART_DIVFRAQ_SAMPLING16((_PCLK_), (_BAUD_)) & 0x0F))
#define UART_DIVFRAQ_SAMPLING16(_PCLK_, _BAUD_)     (((UART_DIV_SAMPLING16((_PCLK_), (_BAUD_)) - (UART_DIVMANT_SAMPLING16((_PCLK_), (_BAUD_)) * 100)) * 16 + 50) / 100)
#define UART_DIVMANT_SAMPLING16(_PCLK_, _BAUD_)     (UART_DIV_SAMPLING16((_PCLK_), (_BAUD_))/100)
#define UART_DIV_SAMPLING16(_PCLK_, _BAUD_)         (((_PCLK_)*25)/(4*(_BAUD_)))
#define __HAL_UART_CLEAR_FEFLAG(__HANDLE__) __HAL_UART_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_UART_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->SR = ~(__FLAG__))
#define __HAL_UART_CLEAR_IDLEFLAG(__HANDLE__) __HAL_UART_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_UART_CLEAR_NEFLAG(__HANDLE__) __HAL_UART_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_UART_CLEAR_OREFLAG(__HANDLE__) __HAL_UART_CLEAR_PEFLAG(__HANDLE__)
#define __HAL_UART_CLEAR_PEFLAG(__HANDLE__) \
do{                                         \
  __IO uint32_t tmpreg;                     \
  tmpreg = (__HANDLE__)->Instance->SR;      \
  tmpreg = (__HANDLE__)->Instance->DR;      \
  UNUSED(tmpreg);                           \
}while(0)
#define __HAL_UART_DISABLE(__HANDLE__)              ((__HANDLE__)->Instance->CR1 &=  ~USART_CR1_UE)
#define __HAL_UART_DISABLE_IT(__HANDLE__, __INTERRUPT__)  ((((__INTERRUPT__) >> 28) == UART_CR1_REG_INDEX)? ((__HANDLE__)->Instance->CR1 &= ~((__INTERRUPT__) & UART_IT_MASK)): \
                                                           (((__INTERRUPT__) >> 28) == UART_CR2_REG_INDEX)? ((__HANDLE__)->Instance->CR2 &= ~((__INTERRUPT__) & UART_IT_MASK)): \
                                                           ((__HANDLE__)->Instance->CR3 &= ~ ((__INTERRUPT__) & UART_IT_MASK)))
#define __HAL_UART_ENABLE(__HANDLE__)               ((__HANDLE__)->Instance->CR1 |=  USART_CR1_UE)
#define __HAL_UART_ENABLE_IT(__HANDLE__, __INTERRUPT__)   ((((__INTERRUPT__) >> 28) == UART_CR1_REG_INDEX)? ((__HANDLE__)->Instance->CR1 |= ((__INTERRUPT__) & UART_IT_MASK)): \
                                                           (((__INTERRUPT__) >> 28) == UART_CR2_REG_INDEX)? ((__HANDLE__)->Instance->CR2 |=  ((__INTERRUPT__) & UART_IT_MASK)): \
                                                           ((__HANDLE__)->Instance->CR3 |= ((__INTERRUPT__) & UART_IT_MASK)))
#define __HAL_UART_FLUSH_DRREGISTER(__HANDLE__) ((__HANDLE__)->Instance->DR)
#define __HAL_UART_GET_FLAG(__HANDLE__, __FLAG__) (((__HANDLE__)->Instance->SR & (__FLAG__)) == (__FLAG__))   
#define __HAL_UART_GET_IT_SOURCE(__HANDLE__, __IT__) (((((__IT__) >> 28) == UART_CR1_REG_INDEX)? (__HANDLE__)->Instance->CR1:(((((uint32_t)(__IT__)) >> 28) == UART_CR2_REG_INDEX)? \
                                                      (__HANDLE__)->Instance->CR2 : (__HANDLE__)->Instance->CR3)) & (((uint32_t)(__IT__)) & UART_IT_MASK))
#define __HAL_UART_HWCONTROL_CTS_DISABLE(__HANDLE__)        \
  do{                                                       \
    CLEAR_BIT((__HANDLE__)->Instance->CR3, USART_CR3_CTSE); \
    (__HANDLE__)->Init.HwFlowCtl &= ~(USART_CR3_CTSE);      \
  } while(0)
#define __HAL_UART_HWCONTROL_CTS_ENABLE(__HANDLE__)        \
  do{                                                      \
    SET_BIT((__HANDLE__)->Instance->CR3, USART_CR3_CTSE);  \
    (__HANDLE__)->Init.HwFlowCtl |= USART_CR3_CTSE;        \
  } while(0)
#define __HAL_UART_HWCONTROL_RTS_DISABLE(__HANDLE__)       \
  do{                                                      \
    CLEAR_BIT((__HANDLE__)->Instance->CR3, USART_CR3_RTSE);\
    (__HANDLE__)->Init.HwFlowCtl &= ~(USART_CR3_RTSE);     \
  } while(0)
#define __HAL_UART_HWCONTROL_RTS_ENABLE(__HANDLE__)       \
  do{                                                     \
    SET_BIT((__HANDLE__)->Instance->CR3, USART_CR3_RTSE); \
    (__HANDLE__)->Init.HwFlowCtl |= USART_CR3_RTSE;       \
  } while(0)
#define __HAL_UART_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_UART_STATE_RESET)
