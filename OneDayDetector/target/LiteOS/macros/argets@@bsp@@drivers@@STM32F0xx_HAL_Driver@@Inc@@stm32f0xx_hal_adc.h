#define ADC_AWD1THRESHOLD_SHIFT_RESOLUTION(__HANDLE__, _Threshold_)            \
  ((_Threshold_) << ((((__HANDLE__)->Instance->CFGR1 & ADC_CFGR1_RES) >> 3U)*2))
#define ADC_CFGR1_AUTOOFF(_AUTOOFF_)                                           \
  ((_AUTOOFF_) << 15U)
#define ADC_CFGR1_AUTOWAIT(_AUTOWAIT_)                                         \
  ((_AUTOWAIT_) << 14U)
#define ADC_CFGR1_CONTINUOUS(_CONTINUOUS_MODE_)                                \
  ((_CONTINUOUS_MODE_) << 13U)
#define ADC_CFGR1_DMACONTREQ(_DMACONTREQ_MODE_)                                \
  ((_DMACONTREQ_MODE_) << 1U)
#define ADC_CFGR1_OVERRUN(_OVERRUN_MODE_)                                      \
  ( ( (_OVERRUN_MODE_) != (ADC_OVR_DATA_PRESERVED)                             \
    )? (ADC_CFGR1_OVRMOD) : (0x00000000)                                       \
  )
#define ADC_CFGR1_REG_DISCCONTINUOUS(_REG_DISCONTINUOUS_MODE_)                 \
  ((_REG_DISCONTINUOUS_MODE_) << 16U)
#define ADC_CFGR_AWDCH(_CHANNEL_)                                              \
  ((_CHANNEL_) << 26U)
#define ADC_CHSELR_CHANNEL(_CHANNEL_)                                          \
  ( 1U << (_CHANNEL_))       
#define ADC_CLEAR_ERRORCODE(__HANDLE__)                                        \
  ((__HANDLE__)->ErrorCode = HAL_ADC_ERROR_NONE)
#define ADC_DISABLING_CONDITIONS(__HANDLE__)                                   \
  (( ( ((__HANDLE__)->Instance->CR) &                                          \
       (ADC_CR_ADSTART | ADC_CR_ADEN)) == ADC_CR_ADEN                          \
   ) ? SET : RESET)
#define ADC_ENABLING_CONDITIONS(__HANDLE__)                                        \
  (( ( ((__HANDLE__)->Instance->CR) &                                              \
       (ADC_CR_ADCAL | ADC_CR_ADSTP | ADC_CR_ADSTART | ADC_CR_ADDIS | ADC_CR_ADEN) \
      ) == RESET                                                                   \
   ) ? SET : RESET)
#define ADC_GET_RESOLUTION(__HANDLE__)                                         \
  (((__HANDLE__)->Instance->CFGR1) & ADC_CFGR1_RES)
#define ADC_GET_SAMPLINGTIME(__HANDLE__)                                       \
  (((__HANDLE__)->Instance->SMPR) & ADC_SMPR_SMP)
#define ADC_IS_CONVERSION_ONGOING_REGULAR(__HANDLE__)                          \
  (( (((__HANDLE__)->Instance->CR) & ADC_CR_ADSTART) == RESET                  \
  ) ? RESET : SET)
#define ADC_IS_ENABLE(__HANDLE__)                                                       \
  (( ((((__HANDLE__)->Instance->CR) & (ADC_CR_ADEN | ADC_CR_ADDIS)) == ADC_CR_ADEN) &&  \
     (((((__HANDLE__)->Instance->ISR) & ADC_FLAG_RDY) == ADC_FLAG_RDY)          ||      \
      ((((__HANDLE__)->Instance->CFGR1) & ADC_CFGR1_AUTOFF) == ADC_CFGR1_AUTOFF)  )     \
   ) ? SET : RESET)
#define ADC_IS_SOFTWARE_START_REGULAR(__HANDLE__)                              \
  (((__HANDLE__)->Instance->CFGR1 & ADC_CFGR1_EXTEN) == RESET)
#define ADC_SCANDIR(_SCAN_MODE_)                                               \
  ( ( (_SCAN_MODE_) == (ADC_SCAN_DIRECTION_BACKWARD)                           \
    )? (ADC_CFGR1_SCANDIR) : (0x00000000)                                      \
  )
#define ADC_SMPR_SET(_SAMPLETIME_)                                             \
  ((_SAMPLETIME_) & (ADC_SMPR_SMP))
#define ADC_TRX_HIGHTHRESHOLD(_Threshold_)                                     \
  ((_Threshold_) << 16U) 
#define IS_ADC_ANALOG_WATCHDOG_MODE(WATCHDOG) (((WATCHDOG) == ADC_ANALOGWATCHDOG_NONE)             || \
                                               ((WATCHDOG) == ADC_ANALOGWATCHDOG_SINGLE_REG)       || \
                                               ((WATCHDOG) == ADC_ANALOGWATCHDOG_ALL_REG)            )
#define IS_ADC_CLOCKPRESCALER(ADC_CLOCK) (((ADC_CLOCK) == ADC_CLOCK_ASYNC_DIV1)     || \
                                          ((ADC_CLOCK) == ADC_CLOCK_SYNC_PCLK_DIV2) || \
                                          ((ADC_CLOCK) == ADC_CLOCK_SYNC_PCLK_DIV4)   )
#define IS_ADC_DATA_ALIGN(ALIGN) (((ALIGN) == ADC_DATAALIGN_RIGHT) || \
                                  ((ALIGN) == ADC_DATAALIGN_LEFT)    )
#define IS_ADC_EOC_SELECTION(EOC_SELECTION) (((EOC_SELECTION) == ADC_EOC_SINGLE_CONV)    || \
                                             ((EOC_SELECTION) == ADC_EOC_SEQ_CONV)  )
#define IS_ADC_EVENT_TYPE(EVENT) (((EVENT) == ADC_AWD_EVENT) || \
                                  ((EVENT) == ADC_OVR_EVENT)   )
#define IS_ADC_EXTTRIG_EDGE(EDGE) (((EDGE) == ADC_EXTERNALTRIGCONVEDGE_NONE)         || \
                                   ((EDGE) == ADC_EXTERNALTRIGCONVEDGE_RISING)       || \
                                   ((EDGE) == ADC_EXTERNALTRIGCONVEDGE_FALLING)      || \
                                   ((EDGE) == ADC_EXTERNALTRIGCONVEDGE_RISINGFALLING)  )
#define IS_ADC_OVERRUN(OVR) (((OVR) == ADC_OVR_DATA_PRESERVED)  || \
                             ((OVR) == ADC_OVR_DATA_OVERWRITTEN)  )
#define IS_ADC_RANGE(RESOLUTION, ADC_VALUE)                                         \
   ((((RESOLUTION) == ADC_RESOLUTION_12B) && ((ADC_VALUE) <= (0x0FFFU))) || \
    (((RESOLUTION) == ADC_RESOLUTION_10B) && ((ADC_VALUE) <= (0x03FFU))) || \
    (((RESOLUTION) == ADC_RESOLUTION_8B)  && ((ADC_VALUE) <= (0x00FFU))) || \
    (((RESOLUTION) == ADC_RESOLUTION_6B)  && ((ADC_VALUE) <= (0x003FU)))   )
#define IS_ADC_RANK(WATCHDOG) (((WATCHDOG) == ADC_RANK_CHANNEL_NUMBER) || \
                               ((WATCHDOG) == ADC_RANK_NONE)             )
#define IS_ADC_REGULAR_RANK(RANK) (((RANK) >= (1U)) && ((RANK) <= (16U)))
#define IS_ADC_RESOLUTION(RESOLUTION) (((RESOLUTION) == ADC_RESOLUTION_12B) || \
                                       ((RESOLUTION) == ADC_RESOLUTION_10B) || \
                                       ((RESOLUTION) == ADC_RESOLUTION_8B)  || \
                                       ((RESOLUTION) == ADC_RESOLUTION_6B)    )
#define IS_ADC_SAMPLE_TIME(TIME) (((TIME) == ADC_SAMPLETIME_1CYCLE_5)    || \
                                  ((TIME) == ADC_SAMPLETIME_7CYCLES_5)   || \
                                  ((TIME) == ADC_SAMPLETIME_13CYCLES_5)  || \
                                  ((TIME) == ADC_SAMPLETIME_28CYCLES_5)  || \
                                  ((TIME) == ADC_SAMPLETIME_41CYCLES_5)  || \
                                  ((TIME) == ADC_SAMPLETIME_55CYCLES_5)  || \
                                  ((TIME) == ADC_SAMPLETIME_71CYCLES_5)  || \
                                  ((TIME) == ADC_SAMPLETIME_239CYCLES_5)   )
#define IS_ADC_SCAN_MODE(SCAN_MODE) (((SCAN_MODE) == ADC_SCAN_DIRECTION_FORWARD) || \
                                     ((SCAN_MODE) == ADC_SCAN_DIRECTION_BACKWARD)  )
#define __HAL_ADC_CLEAR_FLAG(__HANDLE__, __FLAG__)                             \
  (((__HANDLE__)->Instance->ISR) = (__FLAG__))
#define __HAL_ADC_DISABLE(__HANDLE__)                                          \
  do{                                                                          \
      (__HANDLE__)->Instance->CR |= ADC_CR_ADDIS;                              \
      __HAL_ADC_CLEAR_FLAG((__HANDLE__), (ADC_FLAG_EOSMP | ADC_FLAG_RDY));     \
  } while(0)
#define __HAL_ADC_DISABLE_IT(__HANDLE__, __INTERRUPT__)                        \
  (((__HANDLE__)->Instance->IER) &= ~(__INTERRUPT__))
#define __HAL_ADC_ENABLE(__HANDLE__)                                           \
  ((__HANDLE__)->Instance->CR |= ADC_CR_ADEN)
#define __HAL_ADC_ENABLE_IT(__HANDLE__, __INTERRUPT__)                         \
  (((__HANDLE__)->Instance->IER) |= (__INTERRUPT__))
#define __HAL_ADC_GET_FLAG(__HANDLE__, __FLAG__)                               \
  ((((__HANDLE__)->Instance->ISR) & (__FLAG__)) == (__FLAG__))
#define __HAL_ADC_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__)                     \
  (((__HANDLE__)->Instance->IER & (__INTERRUPT__)) == (__INTERRUPT__))
#define __HAL_ADC_RESET_HANDLE_STATE(__HANDLE__)                               \
  do{                                                                          \
     (__HANDLE__)->State = HAL_ADC_STATE_RESET;                                \
     (__HANDLE__)->MspInitCallback = NULL;                                     \
     (__HANDLE__)->MspDeInitCallback = NULL;                                   \
    } while(0)
#define __HAL_ADC_RESET_HANDLE_STATE(__HANDLE__)                               \
  ((__HANDLE__)->State = HAL_ADC_STATE_RESET)
