#define IS_PWR_REGULATOR_UNDERDRIVE(REGULATOR) (((REGULATOR) == PWR_MAINREGULATOR_UNDERDRIVE_ON) || \
                                                ((REGULATOR) == PWR_LOWPOWERREGULATOR_UNDERDRIVE_ON))
#define IS_PWR_WAKEUP_PIN(__PIN__)         (((__PIN__) == PWR_WAKEUP_PIN1)       || \
                                            ((__PIN__) == PWR_WAKEUP_PIN2)       || \
                                            ((__PIN__) == PWR_WAKEUP_PIN3)       || \
                                            ((__PIN__) == PWR_WAKEUP_PIN4)       || \
                                            ((__PIN__) == PWR_WAKEUP_PIN5)       || \
                                            ((__PIN__) == PWR_WAKEUP_PIN6)  		 || \
                                            ((__PIN__) == PWR_WAKEUP_PIN1_HIGH)  || \
                                            ((__PIN__) == PWR_WAKEUP_PIN2_HIGH)  || \
                                            ((__PIN__) == PWR_WAKEUP_PIN3_HIGH)  || \
                                            ((__PIN__) == PWR_WAKEUP_PIN4_HIGH)  || \
                                            ((__PIN__) == PWR_WAKEUP_PIN5_HIGH)  || \
                                            ((__PIN__) == PWR_WAKEUP_PIN6_HIGH)  || \
                                            ((__PIN__) == PWR_WAKEUP_PIN1_LOW)   || \
                                            ((__PIN__) == PWR_WAKEUP_PIN2_LOW)   || \
                                            ((__PIN__) == PWR_WAKEUP_PIN3_LOW)   || \
                                            ((__PIN__) == PWR_WAKEUP_PIN4_LOW)   || \
                                            ((__PIN__) == PWR_WAKEUP_PIN5_LOW)	 || \
                                            ((__PIN__) == PWR_WAKEUP_PIN6_LOW))
#define __HAL_PWR_CLEAR_ODRUDR_FLAG() (PWR->CSR1 |= PWR_FLAG_UDRDY)
#define __HAL_PWR_CLEAR_WAKEUP_FLAG(__WUFLAG__) (PWR->CR2 |=  (__WUFLAG__))
#define __HAL_PWR_GET_ODRUDR_FLAG(__FLAG__) ((PWR->CSR1 & (__FLAG__)) == (__FLAG__))
#define __HAL_PWR_GET_WAKEUP_FLAG(__WUFLAG__) (PWR->CSR2 & (__WUFLAG__))
#define __HAL_PWR_OVERDRIVESWITCHING_DISABLE() (PWR->CR1 &= (uint32_t)(~PWR_CR1_ODSWEN))
#define __HAL_PWR_OVERDRIVESWITCHING_ENABLE() (PWR->CR1 |= (uint32_t)PWR_CR1_ODSWEN)
#define __HAL_PWR_OVERDRIVE_DISABLE() (PWR->CR1 &= (uint32_t)(~PWR_CR1_ODEN))
#define __HAL_PWR_OVERDRIVE_ENABLE() (PWR->CR1 |= (uint32_t)PWR_CR1_ODEN)
#define __HAL_PWR_UNDERDRIVE_DISABLE() (PWR->CR1 &= (uint32_t)(~PWR_CR1_UDEN))
#define __HAL_PWR_UNDERDRIVE_ENABLE() (PWR->CR1 |= (uint32_t)PWR_CR1_UDEN)
