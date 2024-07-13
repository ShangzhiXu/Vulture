#define IS_EXTI_GPIO_PIN(__PIN__)       ((__PIN__) < 16U)
#define IS_EXTI_LINE(__LINE__)          ((((__LINE__) & ~EXTI_IMR_IM) == 0x00U) && (__LINE__))
#define IS_EXTI_MODE(__LINE__)          ((((__LINE__) & ~EXTI_MODE_MASK) == 0x00U))
#define IS_EXTI_PENDING_EDGE(__LINE__)  (((__LINE__) == EXTI_TRIGGER_FALLING) || \
                                         ((__LINE__) == EXTI_TRIGGER_RISING)  || \
                                         ((__LINE__) == EXTI_TRIGGER_RISING_FALLING))
#define IS_EXTI_TRIGGER(__LINE__)       (((__LINE__)  & ~EXTI_TRIGGER_MASK) == 0x00U)
