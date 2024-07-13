#define IS_RTC_ALARM(ALARM)      (((ALARM) == RTC_ALARM_A) || ((ALARM) == RTC_ALARM_B))
#define IS_RTC_ALARM_DATE_WEEKDAY_DATE(DATE) (((DATE) >(uint32_t) 0) && ((DATE) <= (uint32_t)31))
#define IS_RTC_ALARM_DATE_WEEKDAY_SEL(SEL) (((SEL) == RTC_ALARMDATEWEEKDAYSEL_DATE) || \
                                            ((SEL) == RTC_ALARMDATEWEEKDAYSEL_WEEKDAY))
#define IS_RTC_ALARM_DATE_WEEKDAY_WEEKDAY(WEEKDAY) (((WEEKDAY) == RTC_WEEKDAY_MONDAY)    || \
                                                    ((WEEKDAY) == RTC_WEEKDAY_TUESDAY)   || \
                                                    ((WEEKDAY) == RTC_WEEKDAY_WEDNESDAY) || \
                                                    ((WEEKDAY) == RTC_WEEKDAY_THURSDAY)  || \
                                                    ((WEEKDAY) == RTC_WEEKDAY_FRIDAY)    || \
                                                    ((WEEKDAY) == RTC_WEEKDAY_SATURDAY)  || \
                                                    ((WEEKDAY) == RTC_WEEKDAY_SUNDAY))
#define IS_RTC_ALARM_MASK(MASK)  (((MASK) & 0x7F7F7F7F) == (uint32_t)RESET)
#define IS_RTC_ALARM_SUB_SECOND_MASK(MASK)   (((MASK) == RTC_ALARMSUBSECONDMASK_ALL) || \
                                              ((MASK) == RTC_ALARMSUBSECONDMASK_SS14_1) || \
                                              ((MASK) == RTC_ALARMSUBSECONDMASK_SS14_2) || \
                                              ((MASK) == RTC_ALARMSUBSECONDMASK_SS14_3) || \
                                              ((MASK) == RTC_ALARMSUBSECONDMASK_SS14_4) || \
                                              ((MASK) == RTC_ALARMSUBSECONDMASK_SS14_5) || \
                                              ((MASK) == RTC_ALARMSUBSECONDMASK_SS14_6) || \
                                              ((MASK) == RTC_ALARMSUBSECONDMASK_SS14_7) || \
                                              ((MASK) == RTC_ALARMSUBSECONDMASK_SS14_8) || \
                                              ((MASK) == RTC_ALARMSUBSECONDMASK_SS14_9) || \
                                              ((MASK) == RTC_ALARMSUBSECONDMASK_SS14_10) || \
                                              ((MASK) == RTC_ALARMSUBSECONDMASK_SS14_11) || \
                                              ((MASK) == RTC_ALARMSUBSECONDMASK_SS14_12) || \
                                              ((MASK) == RTC_ALARMSUBSECONDMASK_SS14_13) || \
                                              ((MASK) == RTC_ALARMSUBSECONDMASK_SS14) || \
                                              ((MASK) == RTC_ALARMSUBSECONDMASK_NONE))
#define IS_RTC_ALARM_SUB_SECOND_VALUE(VALUE) ((VALUE) <= (uint32_t)0x00007FFF)
#define IS_RTC_ASYNCH_PREDIV(PREDIV)   ((PREDIV) <= (uint32_t)0x7F)
#define IS_RTC_DATE(DATE)              (((DATE) >= (uint32_t)1) && ((DATE) <= (uint32_t)31))
#define IS_RTC_DAYLIGHT_SAVING(SAVE) (((SAVE) == RTC_DAYLIGHTSAVING_SUB1H) || \
                                      ((SAVE) == RTC_DAYLIGHTSAVING_ADD1H) || \
                                      ((SAVE) == RTC_DAYLIGHTSAVING_NONE))
#define IS_RTC_FORMAT(FORMAT) (((FORMAT) == RTC_FORMAT_BIN) || ((FORMAT) == RTC_FORMAT_BCD))
#define IS_RTC_HOUR12(HOUR)            (((HOUR) > (uint32_t)0) && ((HOUR) <= (uint32_t)12))
#define IS_RTC_HOUR24(HOUR)            ((HOUR) <= (uint32_t)23)
#define IS_RTC_HOURFORMAT12(PM)  (((PM) == RTC_HOURFORMAT12_AM) || ((PM) == RTC_HOURFORMAT12_PM))
#define IS_RTC_HOUR_FORMAT(FORMAT)     (((FORMAT) == RTC_HOURFORMAT_12) || \
                                        ((FORMAT) == RTC_HOURFORMAT_24))
#define IS_RTC_MINUTES(MINUTES)        ((MINUTES) <= (uint32_t)59)
#define IS_RTC_MONTH(MONTH)            (((MONTH) >= (uint32_t)1) && ((MONTH) <= (uint32_t)12))
#define IS_RTC_OUTPUT_POL(POL) (((POL) == RTC_OUTPUT_POLARITY_HIGH) || \
                                ((POL) == RTC_OUTPUT_POLARITY_LOW))
#define IS_RTC_OUTPUT_REMAP(REMAP)   (((REMAP) == RTC_OUTPUT_REMAP_NONE) || \
                                      ((REMAP) == RTC_OUTPUT_REMAP_POS1))
#define IS_RTC_OUTPUT_TYPE(TYPE) (((TYPE) == RTC_OUTPUT_TYPE_OPENDRAIN) || \
                                  ((TYPE) == RTC_OUTPUT_TYPE_PUSHPULL))
#define IS_RTC_SECONDS(SECONDS)        ((SECONDS) <= (uint32_t)59)
#define IS_RTC_STORE_OPERATION(OPERATION) (((OPERATION) == RTC_STOREOPERATION_RESET) || \
                                           ((OPERATION) == RTC_STOREOPERATION_SET))
#define IS_RTC_SYNCH_PREDIV(PREDIV)    ((PREDIV) <= (uint32_t)0x7FFF)
#define IS_RTC_WEEKDAY(WEEKDAY) (((WEEKDAY) == RTC_WEEKDAY_MONDAY)    || \
                                 ((WEEKDAY) == RTC_WEEKDAY_TUESDAY)   || \
                                 ((WEEKDAY) == RTC_WEEKDAY_WEDNESDAY) || \
                                 ((WEEKDAY) == RTC_WEEKDAY_THURSDAY)  || \
                                 ((WEEKDAY) == RTC_WEEKDAY_FRIDAY)    || \
                                 ((WEEKDAY) == RTC_WEEKDAY_SATURDAY)  || \
                                 ((WEEKDAY) == RTC_WEEKDAY_SUNDAY))
#define IS_RTC_YEAR(YEAR)              ((YEAR) <= (uint32_t)99)
#define __HAL_RTC_ALARMA_DISABLE(__HANDLE__)                         ((__HANDLE__)->Instance->CR &= ~(RTC_CR_ALRAE))
#define __HAL_RTC_ALARMA_ENABLE(__HANDLE__)                          ((__HANDLE__)->Instance->CR |= (RTC_CR_ALRAE))
#define __HAL_RTC_ALARMB_DISABLE(__HANDLE__)                         ((__HANDLE__)->Instance->CR &= ~(RTC_CR_ALRBE))
#define __HAL_RTC_ALARMB_ENABLE(__HANDLE__)                          ((__HANDLE__)->Instance->CR |= (RTC_CR_ALRBE))
#define __HAL_RTC_ALARM_CLEAR_FLAG(__HANDLE__, __FLAG__)             ((__HANDLE__)->Instance->ISR) = (~((__FLAG__) | RTC_ISR_INIT)|((__HANDLE__)->Instance->ISR & RTC_ISR_INIT))
#define __HAL_RTC_ALARM_DISABLE_IT(__HANDLE__, __INTERRUPT__)        ((__HANDLE__)->Instance->CR &= ~(__INTERRUPT__))
#define __HAL_RTC_ALARM_ENABLE_IT(__HANDLE__, __INTERRUPT__)         ((__HANDLE__)->Instance->CR |= (__INTERRUPT__))
#define __HAL_RTC_ALARM_EXTI_CLEAR_FLAG()            (EXTI->PR1 = RTC_EXTI_LINE_ALARM_EVENT)
#define __HAL_RTC_ALARM_EXTI_DISABLE_EVENT()         (EXTI->EMR1 &= ~(RTC_EXTI_LINE_ALARM_EVENT))
#define __HAL_RTC_ALARM_EXTI_DISABLE_FALLING_EDGE()  (EXTI->FTSR1 &= ~(RTC_EXTI_LINE_ALARM_EVENT))
#define __HAL_RTC_ALARM_EXTI_DISABLE_IT()           (EXTI->IMR1 &= ~(RTC_EXTI_LINE_ALARM_EVENT))
#define __HAL_RTC_ALARM_EXTI_DISABLE_RISING_EDGE()   (EXTI->RTSR1 &= ~(RTC_EXTI_LINE_ALARM_EVENT))
#define __HAL_RTC_ALARM_EXTI_DISABLE_RISING_FALLING_EDGE() do { \
                                                             __HAL_RTC_ALARM_EXTI_DISABLE_RISING_EDGE();  \
                                                             __HAL_RTC_ALARM_EXTI_DISABLE_FALLING_EDGE(); \
                                                           } while(0)
#define __HAL_RTC_ALARM_EXTI_ENABLE_EVENT()         (EXTI->EMR1 |= RTC_EXTI_LINE_ALARM_EVENT)
#define __HAL_RTC_ALARM_EXTI_ENABLE_FALLING_EDGE()   (EXTI->FTSR1 |= RTC_EXTI_LINE_ALARM_EVENT)
#define __HAL_RTC_ALARM_EXTI_ENABLE_IT()            (EXTI->IMR1 |= RTC_EXTI_LINE_ALARM_EVENT)
#define __HAL_RTC_ALARM_EXTI_ENABLE_RISING_EDGE()    (EXTI->RTSR1 |= RTC_EXTI_LINE_ALARM_EVENT)
#define __HAL_RTC_ALARM_EXTI_ENABLE_RISING_FALLING_EDGE()  do { \
                                                             __HAL_RTC_ALARM_EXTI_ENABLE_RISING_EDGE();  \
                                                             __HAL_RTC_ALARM_EXTI_ENABLE_FALLING_EDGE(); \
                                                           } while(0)
#define __HAL_RTC_ALARM_EXTI_GENERATE_SWIT()         (EXTI->SWIER1 |= RTC_EXTI_LINE_ALARM_EVENT)
#define __HAL_RTC_ALARM_EXTI_GET_FLAG()              (EXTI->PR1 & RTC_EXTI_LINE_ALARM_EVENT)
#define __HAL_RTC_ALARM_GET_FLAG(__HANDLE__, __FLAG__)               (((((__HANDLE__)->Instance->ISR) & (__FLAG__)) != RESET) ? SET : RESET)
#define __HAL_RTC_ALARM_GET_IT(__HANDLE__, __INTERRUPT__)            (((((__HANDLE__)->Instance->ISR)& ((__INTERRUPT__)>> 4)) != RESET) ? SET : RESET)
#define __HAL_RTC_ALARM_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__)     (((((__HANDLE__)->Instance->CR) & (__INTERRUPT__)) != RESET) ? SET : RESET)
#define __HAL_RTC_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_RTC_STATE_RESET)
#define __HAL_RTC_WRITEPROTECTION_DISABLE(__HANDLE__)             \
                        do{                                       \
                            (__HANDLE__)->Instance->WPR = 0xCA;   \
                            (__HANDLE__)->Instance->WPR = 0x53;   \
                          } while(0)
#define __HAL_RTC_WRITEPROTECTION_ENABLE(__HANDLE__)              \
                        do{                                       \
                            (__HANDLE__)->Instance->WPR = 0xFF;   \
                          } while(0)
