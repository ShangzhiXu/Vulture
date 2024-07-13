#define IS_RTC_BKP(__BKP__)               ((__BKP__) < (uint32_t) RTC_BKP_NUMBER)
#define IS_RTC_CALIB_OUTPUT(__OUTPUT__)  (((__OUTPUT__) == RTC_CALIBOUTPUT_512HZ) || \
                                          ((__OUTPUT__) == RTC_CALIBOUTPUT_1HZ))
#define IS_RTC_OUTPUT(__OUTPUT__)      (((__OUTPUT__) == RTC_OUTPUT_DISABLE) || \
                                        ((__OUTPUT__) == RTC_OUTPUT_ALARMA)  || \
                                        ((__OUTPUT__) == RTC_OUTPUT_ALARMB)  || \
                                        ((__OUTPUT__) == RTC_OUTPUT_WAKEUP))
#define IS_RTC_SHIFT_ADD1S(__SEL__) (((__SEL__) == RTC_SHIFTADD1S_RESET) || \
                                     ((__SEL__) == RTC_SHIFTADD1S_SET))
#define IS_RTC_SHIFT_SUBFS(__FS__) ((__FS__) <= 0x00007FFF)
#define  IS_RTC_SMOOTH_CALIB_MINUS(__VALUE__) ((__VALUE__) <= 0x000001FF)
#define IS_RTC_SMOOTH_CALIB_PERIOD(__PERIOD__) (((__PERIOD__) == RTC_SMOOTHCALIB_PERIOD_32SEC) || \
                                                ((__PERIOD__) == RTC_SMOOTHCALIB_PERIOD_16SEC) || \
                                                ((__PERIOD__) == RTC_SMOOTHCALIB_PERIOD_8SEC))
#define IS_RTC_SMOOTH_CALIB_PLUS(__PLUS__) (((__PLUS__) == RTC_SMOOTHCALIB_PLUSPULSES_SET) || \
                                            ((__PLUS__) == RTC_SMOOTHCALIB_PLUSPULSES_RESET))
#define IS_RTC_TAMPER(__TAMPER__)   ((((__TAMPER__) & ((uint32_t)(0xFFFFFFFFU ^ RTC_TAMPCR_TAMPXE))) == 0x00U) && ((__TAMPER__) != (uint32_t)RESET))
#define IS_RTC_TAMPER_ERASE_MODE(__MODE__)             (((__MODE__) == RTC_TAMPER_ERASE_BACKUP_ENABLE) || \
                                                        ((__MODE__) == RTC_TAMPER_ERASE_BACKUP_DISABLE))
#define IS_RTC_TAMPER_FILTER(__FILTER__)  (((__FILTER__) == RTC_TAMPERFILTER_DISABLE) || \
                                       ((__FILTER__) == RTC_TAMPERFILTER_2SAMPLE) || \
                                       ((__FILTER__) == RTC_TAMPERFILTER_4SAMPLE) || \
                                       ((__FILTER__) == RTC_TAMPERFILTER_8SAMPLE))
#define IS_RTC_TAMPER_INTERRUPT(__INTERRUPT__)  ((((__INTERRUPT__) & (uint32_t)(0xFFFFFFFFU ^ RTC_TAMPCR_TAMPXIE)) == 0x00U) && ((__INTERRUPT__) != (uint32_t)RESET))
#define IS_RTC_TAMPER_MASKFLAG_STATE(__STATE__)     (((__STATE__) == RTC_TAMPERMASK_FLAG_ENABLE) || \
                                                     ((__STATE__) == RTC_TAMPERMASK_FLAG_DISABLE))
#define IS_RTC_TAMPER_PRECHARGE_DURATION(__DURATION__) (((__DURATION__) == RTC_TAMPERPRECHARGEDURATION_1RTCCLK) || \
                                                    ((__DURATION__) == RTC_TAMPERPRECHARGEDURATION_2RTCCLK) || \
                                                    ((__DURATION__) == RTC_TAMPERPRECHARGEDURATION_4RTCCLK) || \
                                                    ((__DURATION__) == RTC_TAMPERPRECHARGEDURATION_8RTCCLK))
#define IS_RTC_TAMPER_PULLUP_STATE(__STATE__) (((__STATE__) == RTC_TAMPER_PULLUP_ENABLE) || \
                                       ((__STATE__) == RTC_TAMPER_PULLUP_DISABLE))
#define IS_RTC_TAMPER_SAMPLING_FREQ(__FREQ__) (((__FREQ__) == RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV32768)|| \
                                           ((__FREQ__) == RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV16384)|| \
                                           ((__FREQ__) == RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV8192) || \
                                           ((__FREQ__) == RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV4096) || \
                                           ((__FREQ__) == RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV2048) || \
                                           ((__FREQ__) == RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV1024) || \
                                           ((__FREQ__) == RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV512)  || \
                                           ((__FREQ__) == RTC_TAMPERSAMPLINGFREQ_RTCCLK_DIV256))
#define IS_RTC_TAMPER_TIMESTAMPONTAMPER_DETECTION(__DETECTION__) (((__DETECTION__) == RTC_TIMESTAMPONTAMPERDETECTION_ENABLE) || \
                                                              ((__DETECTION__) == RTC_TIMESTAMPONTAMPERDETECTION_DISABLE))
#define IS_RTC_TAMPER_TRIGGER(__TRIGGER__) (((__TRIGGER__) == RTC_TAMPERTRIGGER_RISINGEDGE) || \
                                        ((__TRIGGER__) == RTC_TAMPERTRIGGER_FALLINGEDGE) || \
                                        ((__TRIGGER__) == RTC_TAMPERTRIGGER_LOWLEVEL) || \
                                        ((__TRIGGER__) == RTC_TAMPERTRIGGER_HIGHLEVEL))
#define IS_RTC_TIMESTAMP_PIN(__PIN__) (((__PIN__) == RTC_TIMESTAMPPIN_DEFAULT) || \
                                       ((__PIN__) == RTC_TIMESTAMPPIN_POS1)  || \
                                       ((__PIN__) == RTC_TIMESTAMPPIN_POS2))
#define IS_RTC_WAKEUP_CLOCK(__CLOCK__) (((__CLOCK__) == RTC_WAKEUPCLOCK_RTCCLK_DIV16)       || \
                                    ((__CLOCK__) == RTC_WAKEUPCLOCK_RTCCLK_DIV8)    || \
                                    ((__CLOCK__) == RTC_WAKEUPCLOCK_RTCCLK_DIV4)    || \
                                    ((__CLOCK__) == RTC_WAKEUPCLOCK_RTCCLK_DIV2)    || \
                                    ((__CLOCK__) == RTC_WAKEUPCLOCK_CK_SPRE_16BITS) || \
                                    ((__CLOCK__) == RTC_WAKEUPCLOCK_CK_SPRE_17BITS))
#define IS_RTC_WAKEUP_COUNTER(__COUNTER__)  ((__COUNTER__) <= 0xFFFF)
#define IS_TIMESTAMP_EDGE(__EDGE__) (((__EDGE__) == RTC_TIMESTAMPEDGE_RISING) || \
                                     ((__EDGE__) == RTC_TIMESTAMPEDGE_FALLING))
#define __HAL_RTC_CALIBRATION_OUTPUT_DISABLE(__HANDLE__)               ((__HANDLE__)->Instance->CR &= ~(RTC_CR_COE))
#define __HAL_RTC_CALIBRATION_OUTPUT_ENABLE(__HANDLE__)                ((__HANDLE__)->Instance->CR |= (RTC_CR_COE))
#define __HAL_RTC_CLOCKREF_DETECTION_DISABLE(__HANDLE__)               ((__HANDLE__)->Instance->CR &= ~(RTC_CR_REFCKON))
#define __HAL_RTC_CLOCKREF_DETECTION_ENABLE(__HANDLE__)                ((__HANDLE__)->Instance->CR |= (RTC_CR_REFCKON))
#define __HAL_RTC_INTERNAL_TIMESTAMP_CLEAR_FLAG(__HANDLE__, __FLAG__)  ((__HANDLE__)->Instance->ISR) = (~(((__FLAG__) | RTC_ISR_INIT)& 0x0003FFFF)|((__HANDLE__)->Instance->ISR & RTC_ISR_INIT))
#define __HAL_RTC_INTERNAL_TIMESTAMP_DISABLE(__HANDLE__)               ((__HANDLE__)->Instance->CR &= ~(RTC_CR_ITSE))
#define __HAL_RTC_INTERNAL_TIMESTAMP_ENABLE(__HANDLE__)                ((__HANDLE__)->Instance->CR |= (RTC_CR_ITSE))
#define __HAL_RTC_INTERNAL_TIMESTAMP_GET_FLAG(__HANDLE__, __FLAG__)    (((((__HANDLE__)->Instance->ISR) & (__FLAG__)) != RESET) ? SET : RESET)
#define __HAL_RTC_SHIFT_GET_FLAG(__HANDLE__, __FLAG__)         (((((__HANDLE__)->Instance->ISR) & (__FLAG__)) != RESET) ? SET : RESET)
#define __HAL_RTC_TAMPER1_DISABLE(__HANDLE__)                        ((__HANDLE__)->Instance->TAMPCR &= ~(RTC_TAMPCR_TAMP1E))
#define __HAL_RTC_TAMPER1_ENABLE(__HANDLE__)                         ((__HANDLE__)->Instance->TAMPCR |= (RTC_TAMPCR_TAMP1E))
#define __HAL_RTC_TAMPER2_DISABLE(__HANDLE__)                        ((__HANDLE__)->Instance->TAMPCR &= ~(RTC_TAMPCR_TAMP2E))
#define __HAL_RTC_TAMPER2_ENABLE(__HANDLE__)                         ((__HANDLE__)->Instance->TAMPCR |= (RTC_TAMPCR_TAMP2E))
#define __HAL_RTC_TAMPER3_DISABLE(__HANDLE__)                        ((__HANDLE__)->Instance->TAMPCR &= ~(RTC_TAMPCR_TAMP3E))
#define __HAL_RTC_TAMPER3_ENABLE(__HANDLE__)                         ((__HANDLE__)->Instance->TAMPCR |= (RTC_TAMPCR_TAMP3E))
#define __HAL_RTC_TAMPER_CLEAR_FLAG(__HANDLE__, __FLAG__)      ((__HANDLE__)->Instance->ISR) = (~((__FLAG__) | RTC_ISR_INIT)|((__HANDLE__)->Instance->ISR & RTC_ISR_INIT))
#define __HAL_RTC_TAMPER_GET_FLAG(__HANDLE__, __FLAG__)        (((((__HANDLE__)->Instance->ISR) & (__FLAG__)) != RESET) ? SET : RESET)
#define __HAL_RTC_TAMPER_GET_IT(__HANDLE__, __INTERRUPT__)           (((__INTERRUPT__) == RTC_IT_TAMP1) ? (((((__HANDLE__)->Instance->ISR) & ((__INTERRUPT__)>> 3)) != RESET) ? SET : RESET) : \
                                                                      ((__INTERRUPT__) == RTC_IT_TAMP2) ? (((((__HANDLE__)->Instance->ISR) & ((__INTERRUPT__)>> 5)) != RESET) ? SET : RESET) : \
                                                                                                          (((((__HANDLE__)->Instance->ISR) & ((__INTERRUPT__)>> 7)) != RESET) ? SET : RESET))
#define __HAL_RTC_TAMPER_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__)    (((((__HANDLE__)->Instance->TAMPCR) & (__INTERRUPT__)) != RESET) ? SET : RESET)
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_CLEAR_FLAG()       (EXTI->PR = RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT)
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_DISABLE_EVENT()   (EXTI->EMR &= ~(RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT))
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_DISABLE_FALLING_EDGE()  (EXTI->FTSR &= ~(RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT))
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_DISABLE_IT()       (EXTI->IMR &= ~(RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT))
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_DISABLE_RISING_EDGE()   (EXTI->RTSR &= ~(RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT))
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_DISABLE_RISING_FALLING_EDGE() __HAL_RTC_TAMPER_TIMESTAMP_EXTI_DISABLE_RISING_EDGE();__HAL_RTC_TAMPER_TIMESTAMP_EXTI_DISABLE_FALLING_EDGE();
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_ENABLE_EVENT()    (EXTI->EMR |= RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT)
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_ENABLE_FALLING_EDGE()   (EXTI->FTSR |= RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT)
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_ENABLE_IT()        (EXTI->IMR |= RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT)
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_ENABLE_RISING_EDGE()    (EXTI->RTSR |= RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT)
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_ENABLE_RISING_FALLING_EDGE() __HAL_RTC_TAMPER_TIMESTAMP_EXTI_ENABLE_RISING_EDGE();__HAL_RTC_TAMPER_TIMESTAMP_EXTI_ENABLE_FALLING_EDGE();
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_GENERATE_SWIT()    (EXTI->SWIER |= RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT)
#define __HAL_RTC_TAMPER_TIMESTAMP_EXTI_GET_FLAG()         (EXTI->PR & RTC_EXTI_LINE_TAMPER_TIMESTAMP_EVENT)
#define __HAL_RTC_TIMESTAMP_CLEAR_FLAG(__HANDLE__, __FLAG__)   ((__HANDLE__)->Instance->ISR) = (~((__FLAG__) | RTC_ISR_INIT)|((__HANDLE__)->Instance->ISR & RTC_ISR_INIT))
#define __HAL_RTC_TIMESTAMP_DISABLE(__HANDLE__)                      ((__HANDLE__)->Instance->CR &= ~(RTC_CR_TSE))
#define __HAL_RTC_TIMESTAMP_DISABLE_IT(__HANDLE__, __INTERRUPT__)    ((__HANDLE__)->Instance->CR &= ~(__INTERRUPT__))
#define __HAL_RTC_TIMESTAMP_ENABLE(__HANDLE__)                       ((__HANDLE__)->Instance->CR |= (RTC_CR_TSE))
#define __HAL_RTC_TIMESTAMP_ENABLE_IT(__HANDLE__, __INTERRUPT__)     ((__HANDLE__)->Instance->CR |= (__INTERRUPT__))
#define __HAL_RTC_TIMESTAMP_GET_FLAG(__HANDLE__, __FLAG__)     (((((__HANDLE__)->Instance->ISR) & (__FLAG__)) != RESET) ? SET : RESET)
#define __HAL_RTC_TIMESTAMP_GET_IT(__HANDLE__, __INTERRUPT__)        (((((__HANDLE__)->Instance->ISR) & ((__INTERRUPT__)>> 4)) != RESET) ? SET : RESET)
#define __HAL_RTC_TIMESTAMP_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__)     (((((__HANDLE__)->Instance->CR) & (__INTERRUPT__)) != RESET) ? SET : RESET)
#define __HAL_RTC_WAKEUPTIMER_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->ISR) = (~((__FLAG__) | RTC_ISR_INIT)|((__HANDLE__)->Instance->ISR & RTC_ISR_INIT))    
#define __HAL_RTC_WAKEUPTIMER_DISABLE(__HANDLE__)                    ((__HANDLE__)->Instance->CR &= ~(RTC_CR_WUTE))
#define __HAL_RTC_WAKEUPTIMER_DISABLE_IT(__HANDLE__, __INTERRUPT__)   ((__HANDLE__)->Instance->CR &= ~(__INTERRUPT__))
#define __HAL_RTC_WAKEUPTIMER_ENABLE(__HANDLE__)                     ((__HANDLE__)->Instance->CR |= (RTC_CR_WUTE))
#define __HAL_RTC_WAKEUPTIMER_ENABLE_IT(__HANDLE__, __INTERRUPT__)    ((__HANDLE__)->Instance->CR |= (__INTERRUPT__))
#define __HAL_RTC_WAKEUPTIMER_EXTI_CLEAR_FLAG()            (EXTI->PR = RTC_EXTI_LINE_WAKEUPTIMER_EVENT)
#define __HAL_RTC_WAKEUPTIMER_EXTI_DISABLE_EVENT()   (EXTI->EMR &= ~(RTC_EXTI_LINE_WAKEUPTIMER_EVENT))
#define __HAL_RTC_WAKEUPTIMER_EXTI_DISABLE_FALLING_EDGE()  (EXTI->FTSR &= ~(RTC_EXTI_LINE_WAKEUPTIMER_EVENT))
#define __HAL_RTC_WAKEUPTIMER_EXTI_DISABLE_IT()      (EXTI->IMR &= ~(RTC_EXTI_LINE_WAKEUPTIMER_EVENT))
#define __HAL_RTC_WAKEUPTIMER_EXTI_DISABLE_RISING_EDGE()   (EXTI->RTSR &= ~(RTC_EXTI_LINE_WAKEUPTIMER_EVENT))
#define __HAL_RTC_WAKEUPTIMER_EXTI_DISABLE_RISING_FALLING_EDGE() __HAL_RTC_WAKEUPTIMER_EXTI_DISABLE_RISING_EDGE();__HAL_RTC_WAKEUPTIMER_EXTI_DISABLE_FALLING_EDGE();
#define __HAL_RTC_WAKEUPTIMER_EXTI_ENABLE_EVENT()    (EXTI->EMR |= RTC_EXTI_LINE_WAKEUPTIMER_EVENT)
#define __HAL_RTC_WAKEUPTIMER_EXTI_ENABLE_FALLING_EDGE()   (EXTI->FTSR |= RTC_EXTI_LINE_WAKEUPTIMER_EVENT)
#define __HAL_RTC_WAKEUPTIMER_EXTI_ENABLE_IT()       (EXTI->IMR |= RTC_EXTI_LINE_WAKEUPTIMER_EVENT)
#define __HAL_RTC_WAKEUPTIMER_EXTI_ENABLE_RISING_EDGE()    (EXTI->RTSR |= RTC_EXTI_LINE_WAKEUPTIMER_EVENT)
#define __HAL_RTC_WAKEUPTIMER_EXTI_ENABLE_RISING_FALLING_EDGE() __HAL_RTC_WAKEUPTIMER_EXTI_ENABLE_RISING_EDGE();__HAL_RTC_WAKEUPTIMER_EXTI_ENABLE_FALLING_EDGE();
#define __HAL_RTC_WAKEUPTIMER_EXTI_GENERATE_SWIT()         (EXTI->SWIER |= RTC_EXTI_LINE_WAKEUPTIMER_EVENT)
#define __HAL_RTC_WAKEUPTIMER_EXTI_GET_FLAG()              (EXTI->PR & RTC_EXTI_LINE_WAKEUPTIMER_EVENT)
#define __HAL_RTC_WAKEUPTIMER_GET_FLAG(__HANDLE__, __FLAG__)   (((((__HANDLE__)->Instance->ISR) & (__FLAG__)) != RESET) ? SET : RESET)
#define __HAL_RTC_WAKEUPTIMER_GET_IT(__HANDLE__, __INTERRUPT__)       (((((__HANDLE__)->Instance->ISR) & ((__INTERRUPT__)>> 4)) != RESET) ? SET : RESET)
#define __HAL_RTC_WAKEUPTIMER_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__)   (((((__HANDLE__)->Instance->CR) & (__INTERRUPT__)) != RESET) ? SET : RESET)
