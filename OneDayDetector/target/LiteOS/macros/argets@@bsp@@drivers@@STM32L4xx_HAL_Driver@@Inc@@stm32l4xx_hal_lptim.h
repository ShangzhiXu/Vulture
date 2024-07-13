#define IS_LPTIM_AUTORELOAD(__AUTORELOAD__)     ((__AUTORELOAD__) <= 0x0000FFFF)
#define IS_LPTIM_CLOCK_POLARITY(__POLARITY__)   (((__POLARITY__) == LPTIM_CLOCKPOLARITY_RISING)  || \
                                                 ((__POLARITY__) == LPTIM_CLOCKPOLARITY_FALLING) || \
                                                 ((__POLARITY__) == LPTIM_CLOCKPOLARITY_RISING_FALLING))
#define IS_LPTIM_CLOCK_PRESCALER(__PRESCALER__) (((__PRESCALER__) ==  LPTIM_PRESCALER_DIV1  ) || \
                                                 ((__PRESCALER__) ==  LPTIM_PRESCALER_DIV2  ) || \
                                                 ((__PRESCALER__) ==  LPTIM_PRESCALER_DIV4  ) || \
                                                 ((__PRESCALER__) ==  LPTIM_PRESCALER_DIV8  ) || \
                                                 ((__PRESCALER__) ==  LPTIM_PRESCALER_DIV16 ) || \
                                                 ((__PRESCALER__) ==  LPTIM_PRESCALER_DIV32 ) || \
                                                 ((__PRESCALER__) ==  LPTIM_PRESCALER_DIV64 ) || \
                                                 ((__PRESCALER__) ==  LPTIM_PRESCALER_DIV128))
#define IS_LPTIM_CLOCK_PRESCALERDIV1(__PRESCALER__) ((__PRESCALER__) ==  LPTIM_PRESCALER_DIV1)
#define IS_LPTIM_CLOCK_SAMPLE_TIME(__SAMPLETIME__) (((__SAMPLETIME__) == LPTIM_CLOCKSAMPLETIME_DIRECTTRANSITION) || \
                                                    ((__SAMPLETIME__) == LPTIM_CLOCKSAMPLETIME_2TRANSITIONS)     || \
                                                    ((__SAMPLETIME__) == LPTIM_CLOCKSAMPLETIME_4TRANSITIONS)     || \
                                                    ((__SAMPLETIME__) == LPTIM_CLOCKSAMPLETIME_8TRANSITIONS))
#define IS_LPTIM_CLOCK_SOURCE(__SOURCE__)       (((__SOURCE__) == LPTIM_CLOCKSOURCE_ULPTIM) || \
                                                 ((__SOURCE__) == LPTIM_CLOCKSOURCE_APBCLOCK_LPOSC))
#define IS_LPTIM_COMPARE(__COMPARE__)           ((__COMPARE__) <= 0x0000FFFF)
#define IS_LPTIM_COUNTER_SOURCE(__SOURCE__)     (((__SOURCE__) == LPTIM_COUNTERSOURCE_INTERNAL) || \
                                                 ((__SOURCE__) == LPTIM_COUNTERSOURCE_EXTERNAL))
#define IS_LPTIM_EXT_TRG_POLARITY(__POLARITY__) (((__POLARITY__) == LPTIM_ACTIVEEDGE_RISING         ) || \
                                                 ((__POLARITY__) == LPTIM_ACTIVEEDGE_FALLING        ) || \
                                                 ((__POLARITY__) == LPTIM_ACTIVEEDGE_RISING_FALLING ))
#define IS_LPTIM_INPUT1_SOURCE(__INSTANCE__, __SOURCE__)  \
    ((((__INSTANCE__) == LPTIM1) &&                       \
     (((__SOURCE__) == LPTIM_INPUT1SOURCE_GPIO) ||        \
      ((__SOURCE__) == LPTIM_INPUT1SOURCE_COMP1)))        \
     ||                                                   \
     (((__INSTANCE__) == LPTIM2) &&                       \
     (((__SOURCE__) == LPTIM_INPUT1SOURCE_GPIO) ||        \
      ((__SOURCE__) == LPTIM_INPUT1SOURCE_COMP1) ||       \
      ((__SOURCE__) == LPTIM_INPUT1SOURCE_COMP2) ||       \
      ((__SOURCE__) == LPTIM_INPUT1SOURCE_COMP1_COMP2))))
#define IS_LPTIM_INPUT2_SOURCE(__INSTANCE__, __SOURCE__)  \
     (((__INSTANCE__) == LPTIM1) &&                       \
     (((__SOURCE__) == LPTIM_INPUT2SOURCE_GPIO) ||        \
      ((__SOURCE__) == LPTIM_INPUT2SOURCE_COMP2)))
#define IS_LPTIM_OUTPUT_POLARITY(__POLARITY__)  (((__POLARITY__) == LPTIM_OUTPUTPOLARITY_LOW ) || \
                                                 ((__POLARITY__) == LPTIM_OUTPUTPOLARITY_HIGH))
#define IS_LPTIM_PERIOD(__PERIOD__)             ((__PERIOD__) <= 0x0000FFFF)
#define IS_LPTIM_PULSE(__PULSE__)               ((__PULSE__) <= 0x0000FFFF)
#define IS_LPTIM_TRG_SOURCE(__TRIG__)           (((__TRIG__) == LPTIM_TRIGSOURCE_SOFTWARE) || \
                                                 ((__TRIG__) == LPTIM_TRIGSOURCE_0) || \
                                                 ((__TRIG__) == LPTIM_TRIGSOURCE_1) || \
                                                 ((__TRIG__) == LPTIM_TRIGSOURCE_2) || \
                                                 ((__TRIG__) == LPTIM_TRIGSOURCE_3) || \
                                                 ((__TRIG__) == LPTIM_TRIGSOURCE_4) || \
                                                 ((__TRIG__) == LPTIM_TRIGSOURCE_5) || \
                                                 ((__TRIG__) == LPTIM_TRIGSOURCE_6) || \
                                                 ((__TRIG__) == LPTIM_TRIGSOURCE_7))
#define IS_LPTIM_TRIG_SAMPLE_TIME(__SAMPLETIME__) (((__SAMPLETIME__) == LPTIM_TRIGSAMPLETIME_DIRECTTRANSITION) || \
                                                   ((__SAMPLETIME__) == LPTIM_TRIGSAMPLETIME_2TRANSITIONS    ) || \
                                                   ((__SAMPLETIME__) == LPTIM_TRIGSAMPLETIME_4TRANSITIONS    ) || \
                                                   ((__SAMPLETIME__) == LPTIM_TRIGSAMPLETIME_8TRANSITIONS    ))
#define IS_LPTIM_UPDATE_MODE(__MODE__)          (((__MODE__) == LPTIM_UPDATE_IMMEDIATE) || \
                                                 ((__MODE__) == LPTIM_UPDATE_ENDOFPERIOD))
#define __HAL_LPTIM_AUTORELOAD_SET(__HANDLE__ , __VALUE__)  ((__HANDLE__)->Instance->ARR =  (__VALUE__))
#define __HAL_LPTIM_CLEAR_FLAG(__HANDLE__, __FLAG__)        ((__HANDLE__)->Instance->ICR  = (__FLAG__))
#define __HAL_LPTIM_COMPARE_SET(__HANDLE__ , __VALUE__)     ((__HANDLE__)->Instance->CMP =  (__VALUE__))
#define __HAL_LPTIM_DISABLE(__HANDLE__)  ((__HANDLE__)->Instance->CR &=  ~(LPTIM_CR_ENABLE))
#define __HAL_LPTIM_DISABLE_IT(__HANDLE__, __INTERRUPT__)   ((__HANDLE__)->Instance->IER  &= (~(__INTERRUPT__)))
#define __HAL_LPTIM_ENABLE(__HANDLE__)   ((__HANDLE__)->Instance->CR |=  (LPTIM_CR_ENABLE))
#define __HAL_LPTIM_ENABLE_IT(__HANDLE__, __INTERRUPT__)    ((__HANDLE__)->Instance->IER  |= (__INTERRUPT__))
#define __HAL_LPTIM_GET_FLAG(__HANDLE__, __FLAG__)          (((__HANDLE__)->Instance->ISR &(__FLAG__)) == (__FLAG__))
#define __HAL_LPTIM_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((((__HANDLE__)->Instance->IER & (__INTERRUPT__)) == (__INTERRUPT__)) ? SET : RESET)
#define __HAL_LPTIM_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_LPTIM_STATE_RESET)
#define __HAL_LPTIM_START_CONTINUOUS(__HANDLE__)  ((__HANDLE__)->Instance->CR |=  LPTIM_CR_CNTSTRT)
#define __HAL_LPTIM_START_SINGLE(__HANDLE__)      ((__HANDLE__)->Instance->CR |=  LPTIM_CR_SNGSTRT)
