#define IS_HAL_DMA1_REMAP(REQUEST)  (((REQUEST) == HAL_DMA1_CH1_DEFAULT)  ||\
                                    ((REQUEST) == HAL_DMA1_CH1_ADC)       ||\
                                    ((REQUEST) == HAL_DMA1_CH1_TIM17_CH1) ||\
                                    ((REQUEST) == HAL_DMA1_CH1_TIM17_UP)  ||\
                                    ((REQUEST) == HAL_DMA1_CH1_USART1_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH1_USART2_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH1_USART3_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH1_USART4_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH1_USART5_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH1_USART6_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH1_USART7_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH1_USART8_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH2_DEFAULT)   ||\
                                    ((REQUEST) == HAL_DMA1_CH2_ADC)       ||\
                                    ((REQUEST) == HAL_DMA1_CH2_I2C1_TX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH2_SPI1_RX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH2_TIM1_CH1)  ||\
                                    ((REQUEST) == HAL_DMA1_CH2_I2C1_TX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH2_TIM17_CH1) ||\
                                    ((REQUEST) == HAL_DMA1_CH2_TIM17_UP)  ||\
                                    ((REQUEST) == HAL_DMA1_CH2_USART1_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH2_USART2_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH2_USART3_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH2_USART4_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH2_USART5_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH2_USART6_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH2_USART7_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH2_USART8_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH3_DEFAULT)   ||\
                                    ((REQUEST) == HAL_DMA1_CH3_TIM6_UP)   ||\
                                    ((REQUEST) == HAL_DMA1_CH3_DAC_CH1)   ||\
                                    ((REQUEST) == HAL_DMA1_CH3_I2C1_RX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH3_SPI1_TX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH3_TIM1_CH2)  ||\
                                    ((REQUEST) == HAL_DMA1_CH3_TIM2_CH2)  ||\
                                    ((REQUEST) == HAL_DMA1_CH3_TIM16_CH1) ||\
                                    ((REQUEST) == HAL_DMA1_CH3_TIM16_UP)  ||\
                                    ((REQUEST) == HAL_DMA1_CH3_USART1_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH3_USART2_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH3_USART3_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH3_USART4_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH3_USART5_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH3_USART6_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH3_USART7_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH3_USART8_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH4_DEFAULT)   ||\
                                    ((REQUEST) == HAL_DMA1_CH4_TIM7_UP)   ||\
                                    ((REQUEST) == HAL_DMA1_CH4_DAC_CH2)   ||\
                                    ((REQUEST) == HAL_DMA1_CH4_I2C2_TX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH4_SPI2_RX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH4_TIM2_CH4)  ||\
                                    ((REQUEST) == HAL_DMA1_CH4_TIM3_CH1)  ||\
                                    ((REQUEST) == HAL_DMA1_CH4_TIM3_TRIG) ||\
                                    ((REQUEST) == HAL_DMA1_CH4_TIM16_CH1) ||\
                                    ((REQUEST) == HAL_DMA1_CH4_TIM16_UP)  ||\
                                    ((REQUEST) == HAL_DMA1_CH4_USART1_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH4_USART2_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH4_USART3_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH4_USART4_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH4_USART5_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH4_USART6_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH4_USART7_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH4_USART8_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH5_DEFAULT)   ||\
                                    ((REQUEST) == HAL_DMA1_CH5_I2C2_RX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH5_SPI2_TX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH5_TIM1_CH3)  ||\
                                    ((REQUEST) == HAL_DMA1_CH5_USART1_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH5_USART2_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH5_USART3_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH5_USART4_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH5_USART5_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH5_USART6_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH5_USART7_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH5_USART8_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH6_DEFAULT)   ||\
                                    ((REQUEST) == HAL_DMA1_CH6_I2C1_TX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH6_SPI2_RX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH6_TIM1_CH1)  ||\
                                    ((REQUEST) == HAL_DMA1_CH6_TIM1_CH2)  ||\
                                    ((REQUEST) == HAL_DMA1_CH6_TIM1_CH3)  ||\
                                    ((REQUEST) == HAL_DMA1_CH6_TIM3_CH1)  ||\
                                    ((REQUEST) == HAL_DMA1_CH6_TIM3_TRIG) ||\
                                    ((REQUEST) == HAL_DMA1_CH6_TIM16_CH1) ||\
                                    ((REQUEST) == HAL_DMA1_CH6_TIM16_UP)  ||\
                                    ((REQUEST) == HAL_DMA1_CH6_USART1_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH6_USART2_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH6_USART3_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH6_USART4_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH6_USART5_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH6_USART6_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH6_USART7_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH6_USART8_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH7_DEFAULT)   ||\
                                    ((REQUEST) == HAL_DMA1_CH7_I2C1_RX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH7_SPI2_TX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH7_TIM2_CH2)  ||\
                                    ((REQUEST) == HAL_DMA1_CH7_TIM2_CH4)  ||\
                                    ((REQUEST) == HAL_DMA1_CH7_TIM17_CH1) ||\
                                    ((REQUEST) == HAL_DMA1_CH7_TIM17_UP)  ||\
                                    ((REQUEST) == HAL_DMA1_CH7_USART1_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH7_USART2_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH7_USART3_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH7_USART4_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH7_USART5_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH7_USART6_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH7_USART7_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH7_USART8_TX))
#define IS_HAL_DMA1_REMAP(REQUEST)  (((REQUEST) == HAL_DMA1_CH1_DEFAULT)  ||\
                                    ((REQUEST) == HAL_DMA1_CH1_ADC)       ||\
                                    ((REQUEST) == HAL_DMA1_CH1_TIM17_CH1) ||\
                                    ((REQUEST) == HAL_DMA1_CH1_TIM17_UP)  ||\
                                    ((REQUEST) == HAL_DMA1_CH1_USART1_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH1_USART2_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH1_USART3_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH1_USART4_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH1_USART5_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH1_USART6_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH2_DEFAULT)   ||\
                                    ((REQUEST) == HAL_DMA1_CH2_ADC)       ||\
                                    ((REQUEST) == HAL_DMA1_CH2_I2C1_TX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH2_SPI1_RX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH2_TIM1_CH1)  ||\
                                    ((REQUEST) == HAL_DMA1_CH2_I2C1_TX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH2_TIM17_CH1) ||\
                                    ((REQUEST) == HAL_DMA1_CH2_TIM17_UP)  ||\
                                    ((REQUEST) == HAL_DMA1_CH2_USART1_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH2_USART2_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH2_USART3_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH2_USART4_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH2_USART5_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH2_USART6_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH3_DEFAULT)   ||\
                                    ((REQUEST) == HAL_DMA1_CH3_TIM6_UP)   ||\
                                    ((REQUEST) == HAL_DMA1_CH3_I2C1_RX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH3_SPI1_TX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH3_TIM1_CH2)  ||\
                                    ((REQUEST) == HAL_DMA1_CH3_TIM16_CH1) ||\
                                    ((REQUEST) == HAL_DMA1_CH3_TIM16_UP)  ||\
                                    ((REQUEST) == HAL_DMA1_CH3_USART1_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH3_USART2_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH3_USART3_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH3_USART4_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH3_USART5_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH3_USART6_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH4_DEFAULT)   ||\
                                    ((REQUEST) == HAL_DMA1_CH4_TIM7_UP)   ||\
                                    ((REQUEST) == HAL_DMA1_CH4_I2C2_TX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH4_SPI2_RX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH4_TIM3_CH1)  ||\
                                    ((REQUEST) == HAL_DMA1_CH4_TIM3_TRIG) ||\
                                    ((REQUEST) == HAL_DMA1_CH4_TIM16_CH1) ||\
                                    ((REQUEST) == HAL_DMA1_CH4_TIM16_UP)  ||\
                                    ((REQUEST) == HAL_DMA1_CH4_USART1_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH4_USART2_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH4_USART3_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH4_USART4_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH4_USART5_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH4_USART6_TX) ||\
                                    ((REQUEST) == HAL_DMA1_CH5_DEFAULT)   ||\
                                    ((REQUEST) == HAL_DMA1_CH5_I2C2_RX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH5_SPI2_TX)   ||\
                                    ((REQUEST) == HAL_DMA1_CH5_TIM1_CH3)  ||\
                                    ((REQUEST) == HAL_DMA1_CH5_USART1_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH5_USART2_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH5_USART3_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH5_USART4_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH5_USART5_RX) ||\
                                    ((REQUEST) == HAL_DMA1_CH5_USART6_RX))
#define IS_HAL_DMA2_REMAP(REQUEST)  (((REQUEST) == HAL_DMA2_CH1_DEFAULT)   ||\
                                    ((REQUEST) == HAL_DMA2_CH1_I2C2_TX)   ||\
                                    ((REQUEST) == HAL_DMA2_CH1_USART1_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH1_USART2_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH1_USART3_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH1_USART4_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH1_USART5_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH1_USART6_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH1_USART7_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH1_USART8_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH2_DEFAULT)   ||\
                                    ((REQUEST) == HAL_DMA2_CH2_I2C2_RX)   ||\
                                    ((REQUEST) == HAL_DMA2_CH2_USART1_RX) ||\
                                    ((REQUEST) == HAL_DMA2_CH2_USART2_RX) ||\
                                    ((REQUEST) == HAL_DMA2_CH2_USART3_RX) ||\
                                    ((REQUEST) == HAL_DMA2_CH2_USART4_RX) ||\
                                    ((REQUEST) == HAL_DMA2_CH2_USART5_RX) ||\
                                    ((REQUEST) == HAL_DMA2_CH2_USART6_RX) ||\
                                    ((REQUEST) == HAL_DMA2_CH2_USART7_RX) ||\
                                    ((REQUEST) == HAL_DMA2_CH2_USART8_RX) ||\
                                    ((REQUEST) == HAL_DMA2_CH3_DEFAULT)   ||\
                                    ((REQUEST) == HAL_DMA2_CH3_TIM6_UP)   ||\
                                    ((REQUEST) == HAL_DMA2_CH3_DAC_CH1)   ||\
                                    ((REQUEST) == HAL_DMA2_CH3_SPI1_RX)   ||\
                                    ((REQUEST) == HAL_DMA2_CH3_USART1_RX) ||\
                                    ((REQUEST) == HAL_DMA2_CH3_USART2_RX) ||\
                                    ((REQUEST) == HAL_DMA2_CH3_USART3_RX) ||\
                                    ((REQUEST) == HAL_DMA2_CH3_USART4_RX) ||\
                                    ((REQUEST) == HAL_DMA2_CH3_USART5_RX) ||\
                                    ((REQUEST) == HAL_DMA2_CH3_USART6_RX) ||\
                                    ((REQUEST) == HAL_DMA2_CH3_USART7_RX) ||\
                                    ((REQUEST) == HAL_DMA2_CH3_USART8_RX) ||\
                                    ((REQUEST) == HAL_DMA2_CH4_DEFAULT)   ||\
                                    ((REQUEST) == HAL_DMA2_CH4_TIM7_UP)   ||\
                                    ((REQUEST) == HAL_DMA2_CH4_DAC_CH2)   ||\
                                    ((REQUEST) == HAL_DMA2_CH4_SPI1_TX)   ||\
                                    ((REQUEST) == HAL_DMA2_CH4_USART1_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH4_USART2_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH4_USART3_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH4_USART4_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH4_USART5_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH4_USART6_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH4_USART7_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH4_USART8_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH5_DEFAULT)   ||\
                                    ((REQUEST) == HAL_DMA2_CH5_ADC)       ||\
                                    ((REQUEST) == HAL_DMA2_CH5_USART1_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH5_USART2_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH5_USART3_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH5_USART4_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH5_USART5_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH5_USART6_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH5_USART7_TX) ||\
                                    ((REQUEST) == HAL_DMA2_CH5_USART8_TX ))
#define __HAL_DMA1_REMAP(__REQUEST__)                                                              \
         do { assert_param(IS_HAL_DMA1_REMAP(__REQUEST__));                                             \
              DMA1->CSELR &= ~(0x0FU << (uint32_t)(((__REQUEST__) >> 28U) * 4U)); \
              DMA1->CSELR |= (uint32_t)((__REQUEST__) & 0x0FFFFFFFU);                                     \
  }while(0)
#define __HAL_DMA2_REMAP(__REQUEST__)                                                              \
         do { assert_param(IS_HAL_DMA2_REMAP(__REQUEST__));                                             \
              DMA2->CSELR &= ~(0x0FU << (uint32_t)(((__REQUEST__) >> 28U) * 4U)); \
              DMA2->CSELR |= (uint32_t)((__REQUEST__) & 0x0FFFFFFFU);                                     \
         }while(0)
#define __HAL_DMA_CLEAR_FLAG(__HANDLE__, __FLAG__) (DMA1->IFCR = (__FLAG__))
#define __HAL_DMA_GET_FLAG(__HANDLE__, __FLAG__)   (DMA1->ISR & (__FLAG__))
#define __HAL_DMA_GET_GI_FLAG_INDEX(__HANDLE__)\
(((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel1))? DMA_FLAG_GL1 :\
 ((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel2))? DMA_FLAG_GL2 :\
 ((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel3))? DMA_FLAG_GL3 :\
 ((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel4))? DMA_FLAG_GL4 :\
 ((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel5))? DMA_FLAG_GL5 :\
 ((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel6))? DMA_FLAG_GL6 :\
   DMA_FLAG_GL7)
#define __HAL_DMA_GET_HT_FLAG_INDEX(__HANDLE__)\
(((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel1))? DMA_FLAG_HT1 :\
 ((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel2))? DMA_FLAG_HT2 :\
 ((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel3))? DMA_FLAG_HT3 :\
 ((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel4))? DMA_FLAG_HT4 :\
 ((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel5))? DMA_FLAG_HT5 :\
 ((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel6))? DMA_FLAG_HT6 :\
   DMA_FLAG_HT7)
#define __HAL_DMA_GET_TC_FLAG_INDEX(__HANDLE__) \
(((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel1))? DMA_FLAG_TC1 :\
 ((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel2))? DMA_FLAG_TC2 :\
 ((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel3))? DMA_FLAG_TC3 :\
 ((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel4))? DMA_FLAG_TC4 :\
 ((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel5))? DMA_FLAG_TC5 :\
 ((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel6))? DMA_FLAG_TC6 :\
   DMA_FLAG_TC7)
#define __HAL_DMA_GET_TE_FLAG_INDEX(__HANDLE__)\
(((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel1))? DMA_FLAG_TE1 :\
 ((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel2))? DMA_FLAG_TE2 :\
 ((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel3))? DMA_FLAG_TE3 :\
 ((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel4))? DMA_FLAG_TE4 :\
 ((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel5))? DMA_FLAG_TE5 :\
 ((uint32_t)((__HANDLE__)->Instance) == ((uint32_t)DMA1_Channel6))? DMA_FLAG_TE6 :\
   DMA_FLAG_TE7)
