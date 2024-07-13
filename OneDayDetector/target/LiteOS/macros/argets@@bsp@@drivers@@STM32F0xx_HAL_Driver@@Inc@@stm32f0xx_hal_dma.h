#define IS_DMA_BUFFER_SIZE(SIZE) (((SIZE) >= 0x1U) && ((SIZE) < 0x10000U))
#define IS_DMA_DIRECTION(DIRECTION) (((DIRECTION) == DMA_PERIPH_TO_MEMORY ) || \
                                     ((DIRECTION) == DMA_MEMORY_TO_PERIPH)  || \
                                     ((DIRECTION) == DMA_MEMORY_TO_MEMORY)) 
#define IS_DMA_MEMORY_DATA_SIZE(SIZE) (((SIZE) == DMA_MDATAALIGN_BYTE)     || \
                                       ((SIZE) == DMA_MDATAALIGN_HALFWORD) || \
                                       ((SIZE) == DMA_MDATAALIGN_WORD ))
#define IS_DMA_MEMORY_INC_STATE(STATE) (((STATE) == DMA_MINC_ENABLE)  || \
                                        ((STATE) == DMA_MINC_DISABLE))
#define IS_DMA_MODE(MODE) (((MODE) == DMA_NORMAL )  || \
                           ((MODE) == DMA_CIRCULAR))
#define IS_DMA_PERIPHERAL_DATA_SIZE(SIZE) (((SIZE) == DMA_PDATAALIGN_BYTE)     || \
                                           ((SIZE) == DMA_PDATAALIGN_HALFWORD) || \
                                           ((SIZE) == DMA_PDATAALIGN_WORD))
#define IS_DMA_PERIPHERAL_INC_STATE(STATE) (((STATE) == DMA_PINC_ENABLE) || \
                                            ((STATE) == DMA_PINC_DISABLE))
#define IS_DMA_PRIORITY(PRIORITY) (((PRIORITY) == DMA_PRIORITY_LOW )   || \
                                   ((PRIORITY) == DMA_PRIORITY_MEDIUM) || \
                                   ((PRIORITY) == DMA_PRIORITY_HIGH)   || \
                                   ((PRIORITY) == DMA_PRIORITY_VERY_HIGH)) 
#define IS_DMA_REMAP(RMP) (((RMP) == DMA_REMAP_ADC_DMA_CH2)          || \
                              ((RMP) == DMA_REMAP_USART1_TX_DMA_CH4) || \
                              ((RMP) == DMA_REMAP_USART1_RX_DMA_CH5) || \
                              ((RMP) == DMA_REMAP_TIM16_DMA_CH4)     || \
                              ((RMP) == DMA_REMAP_TIM17_DMA_CH2)     || \
                              ((RMP) == DMA_REMAP_TIM16_DMA_CH6)     || \
                              ((RMP) == DMA_REMAP_TIM17_DMA_CH7)     || \
                              ((RMP) == DMA_REMAP_SPI2_DMA_CH67)     || \
                              ((RMP) == DMA_REMAP_USART2_DMA_CH67)   || \
                              ((RMP) == DMA_REMAP_USART3_DMA_CH32)   || \
                              ((RMP) == DMA_REMAP_I2C1_DMA_CH76)     || \
                              ((RMP) == DMA_REMAP_TIM1_DMA_CH6)      || \
                              ((RMP) == DMA_REMAP_TIM2_DMA_CH7)      || \
                              ((RMP) == DMA_REMAP_TIM3_DMA_CH6))
#define IS_DMA_REMAP(RMP)     (((RMP) == DMA_REMAP_USART3_DMA_CH32)  || \
                              ((RMP) == DMA_REMAP_ADC_DMA_CH2)       || \
                              ((RMP) == DMA_REMAP_USART1_TX_DMA_CH4) || \
                              ((RMP) == DMA_REMAP_USART1_RX_DMA_CH5) || \
                              ((RMP) == DMA_REMAP_TIM16_DMA_CH4)     || \
                              ((RMP) == DMA_REMAP_TIM17_DMA_CH2))
#define IS_DMA_REMAP(RMP)     (((RMP) == DMA_REMAP_ADC_DMA_CH2)      || \
                              ((RMP) == DMA_REMAP_USART1_TX_DMA_CH4) || \
                              ((RMP) == DMA_REMAP_USART1_RX_DMA_CH5) || \
                              ((RMP) == DMA_REMAP_TIM16_DMA_CH4)     || \
                              ((RMP) == DMA_REMAP_TIM17_DMA_CH2))
#define __HAL_DMA_DISABLE(__HANDLE__)       ((__HANDLE__)->Instance->CCR &= ~DMA_CCR_EN)
#define __HAL_DMA_DISABLE_IT(__HANDLE__, __INTERRUPT__)  ((__HANDLE__)->Instance->CCR &= ~(__INTERRUPT__))
#define __HAL_DMA_ENABLE(__HANDLE__)        ((__HANDLE__)->Instance->CCR |= DMA_CCR_EN)
#define __HAL_DMA_ENABLE_IT(__HANDLE__, __INTERRUPT__)   ((__HANDLE__)->Instance->CCR |= (__INTERRUPT__))
#define __HAL_DMA_GET_COUNTER(__HANDLE__) ((__HANDLE__)->Instance->CNDTR)
#define __HAL_DMA_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__)  (((__HANDLE__)->Instance->CCR & (__INTERRUPT__)))
#define __HAL_DMA_REMAP_CHANNEL_DISABLE(__DMA_REMAP__)  do {assert_param(IS_DMA_REMAP((__DMA_REMAP__)));                  \
                                                           SYSCFG->CFGR1 &= ~(__DMA_REMAP__);                             \
                                                         }while(0)
#define __HAL_DMA_REMAP_CHANNEL_ENABLE(__DMA_REMAP__)   do {assert_param(IS_DMA_REMAP((__DMA_REMAP__)));                  \
                                                           SYSCFG->CFGR1 |= (__DMA_REMAP__);                              \
                                                         }while(0)
#define __HAL_DMA_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_DMA_STATE_RESET)
