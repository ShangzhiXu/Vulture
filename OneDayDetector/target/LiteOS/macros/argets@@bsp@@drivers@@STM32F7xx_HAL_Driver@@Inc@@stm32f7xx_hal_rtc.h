#define IS_RTC_ALARM(__ALARM__)      (((__ALARM__) == RTC_ALARM_A) || ((__ALARM__) == RTC_ALARM_B))
#define IS_RTC_ALARM_DATE_WEEKDAY_DATE(__DATE__) (((__DATE__) >0U) && ((__DATE__) <= 31U))
#define IS_RTC_ALARM_DATE_WEEKDAY_SEL(__SEL__) (((__SEL__) == RTC_ALARMDATEWEEKDAYSEL_DATE) || \
                                                ((__SEL__) == RTC_ALARMDATEWEEKDAYSEL_WEEKDAY))
#define IS_RTC_ALARM_DATE_WEEKDAY_WEEKDAY(__WEEKDAY__) (((__WEEKDAY__) == RTC_WEEKDAY_MONDAY)    || \
                                                        ((__WEEKDAY__) == RTC_WEEKDAY_TUESDAY)   || \
                                                        ((__WEEKDAY__) == RTC_WEEKDAY_WEDNESDAY) || \
                                                        ((__WEEKDAY__) == RTC_WEEKDAY_THURSDAY)  || \
                                                        ((__WEEKDAY__) == RTC_WEEKDAY_FRIDAY)    || \
                                                        ((__WEEKDAY__) == RTC_WEEKDAY_SATURDAY)  || \
                                                        ((__WEEKDAY__) == RTC_WEEKDAY_SUNDAY))
#define IS_RTC_ALARM_MASK(__MASK__)  (((__MASK__) & 0x7F7F7F7FU) == (uint32_t)RESET)
#define IS_RTC_ALARM_SUB_SECOND_MASK(__MASK__)   (((__MASK__) == RTC_ALARMSUBSECONDMASK_ALL) || \
                                                  ((__MASK__) == RTC_ALARMSUBSECONDMASK_SS14_1) || \
                                                  ((__MASK__) == RTC_ALARMSUBSECONDMASK_SS14_2) || \
                                                  ((__MASK__) == RTC_ALARMSUBSECONDMASK_SS14_3) || \
                                                  ((__MASK__) == RTC_ALARMSUBSECONDMASK_SS14_4) || \
                                                  ((__MASK__) == RTC_ALARMSUBSECONDMASK_SS14_5) || \
                                                  ((__MASK__) == RTC_ALARMSUBSECONDMASK_SS14_6) || \
                                                  ((__MASK__) == RTC_ALARMSUBSECONDMASK_SS14_7) || \
                                                  ((__MASK__) == RTC_ALARMSUBSECONDMASK_SS14_8) || \
                                                  ((__MASK__) == RTC_ALARMSUBSECONDMASK_SS14_9) || \
                                                  ((__MASK__) == RTC_ALARMSUBSECONDMASK_SS14_10) || \
                                                  ((__MASK__) == RTC_ALARMSUBSECONDMASK_SS14_11) || \
                                                  ((__MASK__) == RTC_ALARMSUBSECONDMASK_SS14_12) || \
                                                  ((__MASK__) == RTC_ALARMSUBSECONDMASK_SS14_13) || \
                                                  ((__MASK__) == RTC_ALARMSUBSECONDMASK_SS14) || \
                                                  ((__MASK__) == RTC_ALARMSUBSECONDMASK_NONE))
#define IS_RTC_ALARM_SUB_SECOND_VALUE(__VALUE__) ((__VALUE__) <= 0x00007FFFU)
#define IS_RTC_ASYNCH_PREDIV(__PREDIV__)   ((__PREDIV__) <= 0x7FU)
#define IS_RTC_DATE(__DATE__)              (((__DATE__) >= 1U) && ((__DATE__) <= 31U))
#define IS_RTC_DAYLIGHT_SAVING(__SAVE__) (((__SAVE__) == RTC_DAYLIGHTSAVING_SUB1H) || \
                                          ((__SAVE__) == RTC_DAYLIGHTSAVING_ADD1H) || \
                                          ((__SAVE__) == RTC_DAYLIGHTSAVING_NONE))
#define IS_RTC_FORMAT(__FORMAT__) (((__FORMAT__) == RTC_FORMAT_BIN) || ((__FORMAT__) == RTC_FORMAT_BCD))
#define IS_RTC_HOUR12(__HOUR__)            (((__HOUR__) > 0U) && ((__HOUR__) <= 12U))
#define IS_RTC_HOUR24(__HOUR__)            ((__HOUR__) <= 23U)
#define IS_RTC_HOURFORMAT12(__PM__)  (((__PM__) == RTC_HOURFORMAT12_AM) || ((__PM__) == RTC_HOURFORMAT12_PM))
#define IS_RTC_HOUR_FORMAT(__FORMAT__) (((__FORMAT__) == RTC_HOURFORMAT_12) || \
                                        ((__FORMAT__) == RTC_HOURFORMAT_24))
#define IS_RTC_MINUTES(__MINUTES__)        ((__MINUTES__) <= 59U)
#define IS_RTC_MONTH(__MONTH__)            (((__MONTH__) >= 1U) && ((__MONTH__) <= 12U))
#define IS_RTC_OUTPUT_POL(__POL__)     (((__POL__) == RTC_OUTPUT_POLARITY_HIGH) || \
                                        ((__POL__) == RTC_OUTPUT_POLARITY_LOW))
#define IS_RTC_OUTPUT_TYPE(__TYPE__)   (((__TYPE__) == RTC_OUTPUT_TYPE_OPENDRAIN) || \
                                        ((__TYPE__) == RTC_OUTPUT_TYPE_PUSHPULL))
#define IS_RTC_SECONDS(__SECONDS__)        ((__SECONDS__) <= 59U)
#define IS_RTC_STORE_OPERATION(__OPERATION__) (((__OPERATION__) == RTC_STOREOPERATION_RESET) || \
                                               ((__OPERATION__) == RTC_STOREOPERATION_SET))
#define IS_RTC_SYNCH_PREDIV(__PREDIV__)    ((__PREDIV__) <= 0x7FFFU)
#define IS_RTC_WEEKDAY(__WEEKDAY__) (((__WEEKDAY__) == RTC_WEEKDAY_MONDAY)    || \
                                     ((__WEEKDAY__) == RTC_WEEKDAY_TUESDAY)   || \
                                     ((__WEEKDAY__) == RTC_WEEKDAY_WEDNESDAY) || \
                                     ((__WEEKDAY__) == RTC_WEEKDAY_THURSDAY)  || \
                                     ((__WEEKDAY__) == RTC_WEEKDAY_FRIDAY)    || \
                                     ((__WEEKDAY__) == RTC_WEEKDAY_SATURDAY)  || \
                                     ((__WEEKDAY__) == RTC_WEEKDAY_SUNDAY))
#define IS_RTC_YEAR(__YEAR__)              ((__YEAR__) <= 99U)
#define __HAL_RTC_ALARMA_DISABLE(__HANDLE__)                          ((__HANDLE__)->Instance->CR &= ~(RTC_CR_ALRAE))
#define __HAL_RTC_ALARMA_ENABLE(__HANDLE__)                           ((__HANDLE__)->Instance->CR |= (RTC_CR_ALRAE))
#define __HAL_RTC_ALARMB_DISABLE(__HANDLE__)                          ((__HANDLE__)->Instance->CR &= ~(RTC_CR_ALRBE))
#define __HAL_RTC_ALARMB_ENABLE(__HANDLE__)                           ((__HANDLE__)->Instance->CR |= (RTC_CR_ALRBE))
#define __HAL_RTC_ALARM_CLEAR_FLAG(__HANDLE__, __FLAG__)                  ((__HANDLE__)->Instance->ISR) = (~(((__FLAG__) | RTC_ISR_INIT)& 0x0000FFFFU)|((__HANDLE__)->Instance->ISR & RTC_ISR_INIT))
#define __HAL_RTC_ALARM_DISABLE_IT(__HANDLE__, __INTERRUPT__)         ((__HANDLE__)->Instance->CR &= ~(__INTERRUPT__))
#define __HAL_RTC_ALARM_ENABLE_IT(__HANDLE__, __INTERRUPT__)          ((__HANDLE__)->Instance->CR |= (__INTERRUPT__))
#define __HAL_RTC_ALARM_EXTI_CLEAR_FLAG()            (EXTI->PR = RTC_EXTI_LINE_ALARM_EVENT)
#define __HAL_RTC_ALARM_EXTI_DISABLE_EVENT()         (EXTI->EMR &= ~(RTC_EXTI_LINE_ALARM_EVENT))
#define __HAL_RTC_ALARM_EXTI_DISABLE_FALLING_EDGE()  (EXTI->FTSR &= ~(RTC_EXTI_LINE_ALARM_EVENT))
#define __HAL_RTC_ALARM_EXTI_DISABLE_IT()           (EXTI->IMR &= ~(RTC_EXTI_LINE_ALARM_EVENT))
#define __HAL_RTC_ALARM_EXTI_DISABLE_RISING_EDGE()   (EXTI->RTSR &= ~(RTC_EXTI_LINE_ALARM_EVENT))
#define __HAL_RTC_ALARM_EXTI_DISABLE_RISING_FALLING_EDGE() __HAL_RTC_ALARM_EXTI_DISABLE_RISING_EDGE();__HAL_RTC_ALARM_EXTI_DISABLE_FALLING_EDGE();
#define __HAL_RTC_ALARM_EXTI_ENABLE_EVENT()         (EXTI->EMR |= RTC_EXTI_LINE_ALARM_EVENT)
#define __HAL_RTC_ALARM_EXTI_ENABLE_FALLING_EDGE()   (EXTI->FTSR |= RTC_EXTI_LINE_ALARM_EVENT)
#define __HAL_RTC_ALARM_EXTI_ENABLE_IT()            (EXTI->IMR |= RTC_EXTI_LINE_ALARM_EVENT)
#define __HAL_RTC_ALARM_EXTI_ENABLE_RISING_EDGE()    (EXTI->RTSR |= RTC_EXTI_LINE_ALARM_EVENT)
#define __HAL_RTC_ALARM_EXTI_ENABLE_RISING_FALLING_EDGE() __HAL_RTC_ALARM_EXTI_ENABLE_RISING_EDGE();__HAL_RTC_ALARM_EXTI_ENABLE_FALLING_EDGE();
#define __HAL_RTC_ALARM_EXTI_GENERATE_SWIT()         (EXTI->SWIER |= RTC_EXTI_LINE_ALARM_EVENT)
#define __HAL_RTC_ALARM_EXTI_GET_FLAG()              (EXTI->PR & RTC_EXTI_LINE_ALARM_EVENT)
#define __HAL_RTC_ALARM_GET_FLAG(__HANDLE__, __FLAG__)                (((((__HANDLE__)->Instance->ISR) & (__FLAG__)) != RESET)? SET : RESET)
#define __HAL_RTC_ALARM_GET_IT(__HANDLE__, __INTERRUPT__)                  ((((((__HANDLE__)->Instance->ISR)& ((__INTERRUPT__)>> 4U)) & 0x0000FFFFU) != RESET)? SET : RESET)
#define __HAL_RTC_ALARM_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__)     (((((__HANDLE__)->Instance->CR) & (__INTERRUPT__)) != RESET) ? SET : RESET)
#define __HAL_RTC_RESET_HANDLE_STATE(__HANDLE__) do{\
                                                      (__HANDLE__)->State = HAL_RTC_STATE_RESET;\
                                                      (__HANDLE__)->MspInitCallback = NULL;\
                                                      (__HANDLE__)->MspDeInitCallback = NULL;\
                                                     }while(0u)
#define __HAL_RTC_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_RTC_STATE_RESET)
#define __HAL_RTC_WRITEPROTECTION_DISABLE(__HANDLE__)             \
                        do{                                       \
                            (__HANDLE__)->Instance->WPR = 0xCAU;   \
                            (__HANDLE__)->Instance->WPR = 0x53U;   \
                          } while(0U)
#define __HAL_RTC_WRITEPROTECTION_ENABLE(__HANDLE__)              \
                        do{                                       \
                            (__HANDLE__)->Instance->WPR = 0xFFU;   \
                          } while(0U)
