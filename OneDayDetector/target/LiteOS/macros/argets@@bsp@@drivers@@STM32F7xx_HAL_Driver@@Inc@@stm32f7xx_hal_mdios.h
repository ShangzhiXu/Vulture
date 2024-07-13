#define IS_MDIOS_PORTADDRESS(__ADDR__) ((__ADDR__) < 32)
#define IS_MDIOS_PREAMBLECHECK(__PREAMBLECHECK__) (((__PREAMBLECHECK__) == MDIOS_PREAMBLE_CHECK_ENABLE) || \
                                                   ((__PREAMBLECHECK__) == MDIOS_PREAMBLE_CHECK_DISABLE))
#define IS_MDIOS_REGISTER(__REGISTER__) ((__REGISTER__) < 32)
#define __HAL_MDIOS_CLEAR_ERROR_FLAG(__HANDLE__, __FLAG__)       ((__HANDLE__)->Instance->CLRFR) |= (__FLAG__)
#define __HAL_MDIOS_DISABLE(__HANDLE__) ((__HANDLE__)->Instance->CR &= ~MDIOS_CR_EN)
#define __HAL_MDIOS_DISABLE_IT(__HANDLE__, __INTERRUPT__)  ((__HANDLE__)->Instance->CR &= ~(__INTERRUPT__))
#define __HAL_MDIOS_ENABLE(__HANDLE__) ((__HANDLE__)->Instance->CR |= MDIOS_CR_EN)
#define __HAL_MDIOS_ENABLE_IT(__HANDLE__, __INTERRUPT__)  ((__HANDLE__)->Instance->CR |= (__INTERRUPT__))
#define __HAL_MDIOS_GET_ERROR_FLAG(__HANDLE__, __FLAG__)       ((__HANDLE__)->Instance->SR &  (__FLAG__))
#define __HAL_MDIOS_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((__HANDLE__)->Instance->CR & (__INTERRUPT__))
#define __HAL_MDIOS_GET_READ_FLAG(__HANDLE__, __FLAG__)        ((__HANDLE__)->Instance->RDFR &  (__FLAG__))
#define __HAL_MDIOS_GET_WRITE_FLAG(__HANDLE__, __FLAG__)      ((__HANDLE__)->Instance->WRFR &  (__FLAG__))
#define __HAL_MDIOS_RESET_HANDLE_STATE(__HANDLE__)  do{                                                  \
                                                       (__HANDLE__)->State = HAL_MDIOS_STATE_RESET;      \
                                                       (__HANDLE__)->MspInitCallback = NULL;             \
                                                       (__HANDLE__)->MspDeInitCallback = NULL;           \
                                                     } while(0)
#define __HAL_MDIOS_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_MDIOS_STATE_RESET)
#define __HAL_MDIOS_WAKEUP_EXTI_CLEAR_FLAG() (EXTI->PR = (MDIOS_WAKEUP_EXTI_LINE))
#define __HAL_MDIOS_WAKEUP_EXTI_DISABLE_EVENT()   (EXTI->EMR &= ~(MDIOS_WAKEUP_EXTI_LINE))   
#define __HAL_MDIOS_WAKEUP_EXTI_DISABLE_FALLINGRISING_TRIGGER()  EXTI->RTSR &= ~(MDIOS_WAKEUP_EXTI_LINE);\
                                                                 EXTI->FTSR &= ~(MDIOS_WAKEUP_EXTI_LINE)
#define __HAL_MDIOS_WAKEUP_EXTI_DISABLE_FALLING_EDGE_TRIGGER()  EXTI->FTSR &= ~(MDIOS_WAKEUP_EXTI_LINE)
#define __HAL_MDIOS_WAKEUP_EXTI_DISABLE_IT()   (EXTI->IMR &= ~(MDIOS_WAKEUP_EXTI_LINE)) 
#define __HAL_MDIOS_WAKEUP_EXTI_DISABLE_RISING_EDGE_TRIGGER()  EXTI->RTSR &= ~(MDIOS_WAKEUP_EXTI_LINE)                                                          
#define __HAL_MDIOS_WAKEUP_EXTI_ENABLE_EVENT()   (EXTI->EMR |= (MDIOS_WAKEUP_EXTI_LINE))
#define __HAL_MDIOS_WAKEUP_EXTI_ENABLE_FALLINGRISING_TRIGGER()  EXTI->RTSR |= MDIOS_WAKEUP_EXTI_LINE;\
                                                                EXTI->FTSR |= MDIOS_WAKEUP_EXTI_LINE
#define __HAL_MDIOS_WAKEUP_EXTI_ENABLE_FALLING_EDGE_TRIGGER()  EXTI->FTSR |= (MDIOS_WAKEUP_EXTI_LINE)
#define __HAL_MDIOS_WAKEUP_EXTI_ENABLE_IT()   (EXTI->IMR |= (MDIOS_WAKEUP_EXTI_LINE))
#define __HAL_MDIOS_WAKEUP_EXTI_ENABLE_RISING_EDGE_TRIGGER()  EXTI->RTSR |= MDIOS_WAKEUP_EXTI_LINE
#define __HAL_MDIOS_WAKEUP_EXTI_GENERATE_SWIT() (EXTI->SWIER |= (MDIOS_WAKEUP_EXTI_LINE))  
#define __HAL_MDIOS_WAKEUP_EXTI_GET_FLAG()  (EXTI->PR & (MDIOS_WAKEUP_EXTI_LINE))
