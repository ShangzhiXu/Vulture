#define IS_PWR_PVD_LEVEL(LEVEL) (((LEVEL) == PWR_PVDLEVEL_0) || ((LEVEL) == PWR_PVDLEVEL_1)|| \
                                 ((LEVEL) == PWR_PVDLEVEL_2) || ((LEVEL) == PWR_PVDLEVEL_3)|| \
                                 ((LEVEL) == PWR_PVDLEVEL_4) || ((LEVEL) == PWR_PVDLEVEL_5)|| \
                                 ((LEVEL) == PWR_PVDLEVEL_6) || ((LEVEL) == PWR_PVDLEVEL_7))
#define IS_PWR_PVD_MODE(MODE) (((MODE) == PWR_PVD_MODE_IT_RISING)|| ((MODE) == PWR_PVD_MODE_IT_FALLING) || \
                              ((MODE) == PWR_PVD_MODE_IT_RISING_FALLING) || ((MODE) == PWR_PVD_MODE_EVENT_RISING) || \
                              ((MODE) == PWR_PVD_MODE_EVENT_FALLING) || ((MODE) == PWR_PVD_MODE_EVENT_RISING_FALLING) || \
                              ((MODE) == PWR_PVD_MODE_NORMAL))
#define IS_PWR_WAKEUP_PIN(PIN) (((PIN) == PWR_WAKEUP_PIN1) || \
                                ((PIN) == PWR_WAKEUP_PIN2) || \
                                ((PIN) == PWR_WAKEUP_PIN4) || \
                                ((PIN) == PWR_WAKEUP_PIN5) || \
                                ((PIN) == PWR_WAKEUP_PIN6) || \
                                ((PIN) == PWR_WAKEUP_PIN7))
#define IS_PWR_WAKEUP_PIN(PIN) (((PIN) == PWR_WAKEUP_PIN1) || \
                                ((PIN) == PWR_WAKEUP_PIN2) || \
                                ((PIN) == PWR_WAKEUP_PIN4) || \
                                ((PIN) == PWR_WAKEUP_PIN6) || \
                                ((PIN) == PWR_WAKEUP_PIN7))
#define IS_PWR_WAKEUP_PIN(PIN) (((PIN) == PWR_WAKEUP_PIN1) || \
                                ((PIN) == PWR_WAKEUP_PIN2))
#define IS_PWR_WAKEUP_PIN(PIN) (((PIN) == PWR_WAKEUP_PIN1) || \
                                ((PIN) == PWR_WAKEUP_PIN2) || \
                                ((PIN) == PWR_WAKEUP_PIN3) || \
                                ((PIN) == PWR_WAKEUP_PIN4) || \
                                ((PIN) == PWR_WAKEUP_PIN5) || \
                                ((PIN) == PWR_WAKEUP_PIN6) || \
                                ((PIN) == PWR_WAKEUP_PIN7) || \
                                ((PIN) == PWR_WAKEUP_PIN8))
#define __HAL_PWR_PVD_EXTI_CLEAR_FLAG()     (EXTI->PR = (PWR_EXTI_LINE_PVD))
#define __HAL_PWR_PVD_EXTI_DISABLE_EVENT()  (EXTI->EMR &= ~(PWR_EXTI_LINE_PVD))
#define __HAL_PWR_PVD_EXTI_DISABLE_FALLING_EDGE()  CLEAR_BIT(EXTI->FTSR, PWR_EXTI_LINE_PVD)
#define __HAL_PWR_PVD_EXTI_DISABLE_IT()     (EXTI->IMR &= ~(PWR_EXTI_LINE_PVD))
#define __HAL_PWR_PVD_EXTI_DISABLE_RISING_EDGE()  CLEAR_BIT(EXTI->RTSR, PWR_EXTI_LINE_PVD)
#define __HAL_PWR_PVD_EXTI_DISABLE_RISING_FALLING_EDGE()  __HAL_PWR_PVD_EXTI_DISABLE_RISING_EDGE();__HAL_PWR_PVD_EXTI_DISABLE_FALLING_EDGE();
#define __HAL_PWR_PVD_EXTI_ENABLE_EVENT()   (EXTI->EMR |= (PWR_EXTI_LINE_PVD))
#define __HAL_PWR_PVD_EXTI_ENABLE_FALLING_EDGE()  EXTI->FTSR |= (PWR_EXTI_LINE_PVD)
#define __HAL_PWR_PVD_EXTI_ENABLE_IT()      (EXTI->IMR |= (PWR_EXTI_LINE_PVD))
#define __HAL_PWR_PVD_EXTI_ENABLE_RISING_EDGE()   EXTI->RTSR |= (PWR_EXTI_LINE_PVD)
#define __HAL_PWR_PVD_EXTI_ENABLE_RISING_FALLING_EDGE()   __HAL_PWR_PVD_EXTI_ENABLE_RISING_EDGE();__HAL_PWR_PVD_EXTI_ENABLE_FALLING_EDGE();
#define __HAL_PWR_PVD_EXTI_GENERATE_SWIT()  (EXTI->SWIER |= (PWR_EXTI_LINE_PVD))
#define __HAL_PWR_PVD_EXTI_GET_FLAG()       (EXTI->PR & (PWR_EXTI_LINE_PVD))
#define __HAL_PWR_VDDIO2_EXTI_CLEAR_FLAG()            (EXTI->PR = (PWR_EXTI_LINE_VDDIO2))
#define __HAL_PWR_VDDIO2_EXTI_DISABLE_FALLING_EDGE()                 \
                        do{                                          \
                            EXTI->FTSR &= ~(PWR_EXTI_LINE_VDDIO2);   \
                            EXTI->RTSR &= ~(PWR_EXTI_LINE_VDDIO2);   \
                          } while(0)
#define __HAL_PWR_VDDIO2_EXTI_DISABLE_IT()            (EXTI->IMR &= ~(PWR_EXTI_LINE_VDDIO2))
#define __HAL_PWR_VDDIO2_EXTI_ENABLE_FALLING_EDGE()  EXTI->FTSR |= (PWR_EXTI_LINE_VDDIO2)
#define __HAL_PWR_VDDIO2_EXTI_ENABLE_IT()             (EXTI->IMR |= (PWR_EXTI_LINE_VDDIO2))
#define __HAL_PWR_VDDIO2_EXTI_GENERATE_SWIT()         (EXTI->SWIER |= (PWR_EXTI_LINE_VDDIO2))
#define __HAL_PWR_VDDIO2_EXTI_GET_FLAG()              (EXTI->PR & (PWR_EXTI_LINE_VDDIO2))
