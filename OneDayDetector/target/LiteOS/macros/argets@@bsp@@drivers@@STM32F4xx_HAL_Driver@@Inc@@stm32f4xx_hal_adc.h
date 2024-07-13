#define ADC_CLEAR_ERRORCODE(__HANDLE__)                                        \
  ((__HANDLE__)->ErrorCode = HAL_ADC_ERROR_NONE)
#define ADC_CR1_DISCONTINUOUS(_NBR_DISCONTINUOUSCONV_) (((_NBR_DISCONTINUOUSCONV_) - 1U) << ADC_CR1_DISCNUM_Pos)
#define ADC_CR1_SCANCONV(_SCANCONV_MODE_) ((_SCANCONV_MODE_) << 8U)
#define ADC_CR2_CONTINUOUS(_CONTINUOUS_MODE_) ((_CONTINUOUS_MODE_) << 1U)
#define ADC_CR2_DMAContReq(_DMAContReq_MODE_) ((_DMAContReq_MODE_) << 9U)
#define ADC_CR2_EOCSelection(_EOCSelection_MODE_) ((_EOCSelection_MODE_) << 10U)
#define ADC_GET_RESOLUTION(__HANDLE__) (((__HANDLE__)->Instance->CR1) & ADC_CR1_RES)
#define ADC_IS_ENABLE(__HANDLE__)                                              \
  ((( ((__HANDLE__)->Instance->SR & ADC_SR_ADONS) == ADC_SR_ADONS )            \
  ) ? SET : RESET)
#define ADC_IS_SOFTWARE_START_INJECTED(__HANDLE__)                             \
  (((__HANDLE__)->Instance->CR2 & ADC_CR2_JEXTEN) == RESET)
#define ADC_IS_SOFTWARE_START_REGULAR(__HANDLE__)                              \
  (((__HANDLE__)->Instance->CR2 & ADC_CR2_EXTEN) == RESET)
#define ADC_SMPR1(_SAMPLETIME_, _CHANNELNB_) ((_SAMPLETIME_) << (3U * (((uint32_t)((uint16_t)(_CHANNELNB_))) - 10U)))
#define ADC_SMPR2(_SAMPLETIME_, _CHANNELNB_) ((_SAMPLETIME_) << (3U * ((uint32_t)((uint16_t)(_CHANNELNB_)))))
#define ADC_SQR1(_NbrOfConversion_) (((_NbrOfConversion_) - (uint8_t)1U) << 20U)
#define ADC_SQR1_RK(_CHANNELNB_, _RANKNB_) (((uint32_t)((uint16_t)(_CHANNELNB_))) << (5U * ((_RANKNB_) - 13U)))
#define ADC_SQR2_RK(_CHANNELNB_, _RANKNB_) (((uint32_t)((uint16_t)(_CHANNELNB_))) << (5U * ((_RANKNB_) - 7U)))
#define ADC_SQR3_RK(_CHANNELNB_, _RANKNB_) (((uint32_t)((uint16_t)(_CHANNELNB_))) << (5U * ((_RANKNB_) - 1U)))
#define IS_ADC_ANALOG_WATCHDOG(WATCHDOG) (((WATCHDOG) == ADC_ANALOGWATCHDOG_SINGLE_REG)        || \
                                          ((WATCHDOG) == ADC_ANALOGWATCHDOG_SINGLE_INJEC)      || \
                                          ((WATCHDOG) == ADC_ANALOGWATCHDOG_SINGLE_REGINJEC)   || \
                                          ((WATCHDOG) == ADC_ANALOGWATCHDOG_ALL_REG)           || \
                                          ((WATCHDOG) == ADC_ANALOGWATCHDOG_ALL_INJEC)         || \
                                          ((WATCHDOG) == ADC_ANALOGWATCHDOG_ALL_REGINJEC)      || \
                                          ((WATCHDOG) == ADC_ANALOGWATCHDOG_NONE))
#define IS_ADC_CHANNELS_TYPE(CHANNEL_TYPE) (((CHANNEL_TYPE) == ADC_ALL_CHANNELS) || \
                                            ((CHANNEL_TYPE) == ADC_REGULAR_CHANNELS) || \
                                            ((CHANNEL_TYPE) == ADC_INJECTED_CHANNELS))
#define IS_ADC_CLOCKPRESCALER(ADC_CLOCK)     (((ADC_CLOCK) == ADC_CLOCK_SYNC_PCLK_DIV2) || \
                                              ((ADC_CLOCK) == ADC_CLOCK_SYNC_PCLK_DIV4) || \
                                              ((ADC_CLOCK) == ADC_CLOCK_SYNC_PCLK_DIV6) || \
                                              ((ADC_CLOCK) == ADC_CLOCK_SYNC_PCLK_DIV8))
#define IS_ADC_DATA_ALIGN(ALIGN) (((ALIGN) == ADC_DATAALIGN_RIGHT) || \
                                  ((ALIGN) == ADC_DATAALIGN_LEFT))
#define IS_ADC_EOCSelection(EOCSelection) (((EOCSelection) == ADC_EOC_SINGLE_CONV)   || \
                                           ((EOCSelection) == ADC_EOC_SEQ_CONV)  || \
                                           ((EOCSelection) == ADC_EOC_SINGLE_SEQ_CONV))
#define IS_ADC_EVENT_TYPE(EVENT) (((EVENT) == ADC_AWD_EVENT) || \
                                  ((EVENT) == ADC_OVR_EVENT))
#define IS_ADC_EXT_TRIG(REGTRIG) (((REGTRIG) == ADC_EXTERNALTRIGCONV_T1_CC1)  || \
                                  ((REGTRIG) == ADC_EXTERNALTRIGCONV_T1_CC2)  || \
                                  ((REGTRIG) == ADC_EXTERNALTRIGCONV_T1_CC3)  || \
                                  ((REGTRIG) == ADC_EXTERNALTRIGCONV_T2_CC2)  || \
                                  ((REGTRIG) == ADC_EXTERNALTRIGCONV_T2_CC3)  || \
                                  ((REGTRIG) == ADC_EXTERNALTRIGCONV_T2_CC4)  || \
                                  ((REGTRIG) == ADC_EXTERNALTRIGCONV_T2_TRGO) || \
                                  ((REGTRIG) == ADC_EXTERNALTRIGCONV_T3_CC1)  || \
                                  ((REGTRIG) == ADC_EXTERNALTRIGCONV_T3_TRGO) || \
                                  ((REGTRIG) == ADC_EXTERNALTRIGCONV_T4_CC4)  || \
                                  ((REGTRIG) == ADC_EXTERNALTRIGCONV_T5_CC1)  || \
                                  ((REGTRIG) == ADC_EXTERNALTRIGCONV_T5_CC2)  || \
                                  ((REGTRIG) == ADC_EXTERNALTRIGCONV_T5_CC3)  || \
                                  ((REGTRIG) == ADC_EXTERNALTRIGCONV_T8_CC1)  || \
                                  ((REGTRIG) == ADC_EXTERNALTRIGCONV_T8_TRGO) || \
                                  ((REGTRIG) == ADC_EXTERNALTRIGCONV_Ext_IT11)|| \
                                  ((REGTRIG) == ADC_SOFTWARE_START))
#define IS_ADC_EXT_TRIG_EDGE(EDGE) (((EDGE) == ADC_EXTERNALTRIGCONVEDGE_NONE)    || \
                                    ((EDGE) == ADC_EXTERNALTRIGCONVEDGE_RISING)  || \
                                    ((EDGE) == ADC_EXTERNALTRIGCONVEDGE_FALLING) || \
                                    ((EDGE) == ADC_EXTERNALTRIGCONVEDGE_RISINGFALLING))
#define IS_ADC_RANGE(RESOLUTION, ADC_VALUE)                                     \
   ((((RESOLUTION) == ADC_RESOLUTION_12B) && ((ADC_VALUE) <= 0x0FFFU)) || \
    (((RESOLUTION) == ADC_RESOLUTION_10B) && ((ADC_VALUE) <= 0x03FFU)) || \
    (((RESOLUTION) == ADC_RESOLUTION_8B)  && ((ADC_VALUE) <= 0x00FFU)) || \
    (((RESOLUTION) == ADC_RESOLUTION_6B)  && ((ADC_VALUE) <= 0x003FU)))
#define IS_ADC_REGULAR_DISC_NUMBER(NUMBER) (((NUMBER) >= 1U) && ((NUMBER) <= 8U))
#define IS_ADC_REGULAR_LENGTH(LENGTH) (((LENGTH) >= 1U) && ((LENGTH) <= 16U))
#define IS_ADC_REGULAR_RANK(RANK) (((RANK) >= 1U) && ((RANK) <= (16U)))
#define IS_ADC_RESOLUTION(RESOLUTION) (((RESOLUTION) == ADC_RESOLUTION_12B) || \
                                       ((RESOLUTION) == ADC_RESOLUTION_10B) || \
                                       ((RESOLUTION) == ADC_RESOLUTION_8B)  || \
                                       ((RESOLUTION) == ADC_RESOLUTION_6B))
#define IS_ADC_SAMPLE_TIME(TIME) (((TIME) == ADC_SAMPLETIME_3CYCLES)   || \
                                  ((TIME) == ADC_SAMPLETIME_15CYCLES)  || \
                                  ((TIME) == ADC_SAMPLETIME_28CYCLES)  || \
                                  ((TIME) == ADC_SAMPLETIME_56CYCLES)  || \
                                  ((TIME) == ADC_SAMPLETIME_84CYCLES)  || \
                                  ((TIME) == ADC_SAMPLETIME_112CYCLES) || \
                                  ((TIME) == ADC_SAMPLETIME_144CYCLES) || \
                                  ((TIME) == ADC_SAMPLETIME_480CYCLES))
#define IS_ADC_SAMPLING_DELAY(DELAY) (((DELAY) == ADC_TWOSAMPLINGDELAY_5CYCLES)  || \
                                      ((DELAY) == ADC_TWOSAMPLINGDELAY_6CYCLES)  || \
                                      ((DELAY) == ADC_TWOSAMPLINGDELAY_7CYCLES)  || \
                                      ((DELAY) == ADC_TWOSAMPLINGDELAY_8CYCLES)  || \
                                      ((DELAY) == ADC_TWOSAMPLINGDELAY_9CYCLES)  || \
                                      ((DELAY) == ADC_TWOSAMPLINGDELAY_10CYCLES) || \
                                      ((DELAY) == ADC_TWOSAMPLINGDELAY_11CYCLES) || \
                                      ((DELAY) == ADC_TWOSAMPLINGDELAY_12CYCLES) || \
                                      ((DELAY) == ADC_TWOSAMPLINGDELAY_13CYCLES) || \
                                      ((DELAY) == ADC_TWOSAMPLINGDELAY_14CYCLES) || \
                                      ((DELAY) == ADC_TWOSAMPLINGDELAY_15CYCLES) || \
                                      ((DELAY) == ADC_TWOSAMPLINGDELAY_16CYCLES) || \
                                      ((DELAY) == ADC_TWOSAMPLINGDELAY_17CYCLES) || \
                                      ((DELAY) == ADC_TWOSAMPLINGDELAY_18CYCLES) || \
                                      ((DELAY) == ADC_TWOSAMPLINGDELAY_19CYCLES) || \
                                      ((DELAY) == ADC_TWOSAMPLINGDELAY_20CYCLES))
#define IS_ADC_THRESHOLD(THRESHOLD) ((THRESHOLD) <= 0xFFFU)
#define __HAL_ADC_CLEAR_FLAG(__HANDLE__, __FLAG__) (((__HANDLE__)->Instance->SR) = ~(__FLAG__))
#define __HAL_ADC_DISABLE(__HANDLE__) ((__HANDLE__)->Instance->CR2 &=  ~ADC_CR2_ADON)
#define __HAL_ADC_DISABLE_IT(__HANDLE__, __INTERRUPT__) (((__HANDLE__)->Instance->CR1) &= ~(__INTERRUPT__))
#define __HAL_ADC_ENABLE(__HANDLE__) ((__HANDLE__)->Instance->CR2 |=  ADC_CR2_ADON)
#define __HAL_ADC_ENABLE_IT(__HANDLE__, __INTERRUPT__) (((__HANDLE__)->Instance->CR1) |= (__INTERRUPT__))
#define __HAL_ADC_GET_FLAG(__HANDLE__, __FLAG__) ((((__HANDLE__)->Instance->SR) & (__FLAG__)) == (__FLAG__))
#define __HAL_ADC_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__)  (((__HANDLE__)->Instance->CR1 & (__INTERRUPT__)) == (__INTERRUPT__))
#define __HAL_ADC_RESET_HANDLE_STATE(__HANDLE__)                               \
  do{                                                                          \
     (__HANDLE__)->State = HAL_ADC_STATE_RESET;                               \
     (__HANDLE__)->MspInitCallback = NULL;                                     \
     (__HANDLE__)->MspDeInitCallback = NULL;                                   \
    } while(0)
#define __HAL_ADC_RESET_HANDLE_STATE(__HANDLE__)                               \
  ((__HANDLE__)->State = HAL_ADC_STATE_RESET)
