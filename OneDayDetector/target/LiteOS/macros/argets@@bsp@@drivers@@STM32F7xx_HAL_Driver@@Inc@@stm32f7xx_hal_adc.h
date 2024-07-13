#define ADC_CLEAR_ERRORCODE(__HANDLE__)                                        \
  ((__HANDLE__)->ErrorCode = HAL_ADC_ERROR_NONE)
#define ADC_CR1_DISCONTINUOUS(_NBR_DISCONTINUOUSCONV_) (((_NBR_DISCONTINUOUSCONV_) - 1) << ADC_CR1_DISCNUM_Pos)
#define ADC_CR1_SCANCONV(_SCANCONV_MODE_) ((_SCANCONV_MODE_) << 8)
#define ADC_CR2_CONTINUOUS(_CONTINUOUS_MODE_) ((_CONTINUOUS_MODE_) << 1)
#define ADC_CR2_DMAContReq(_DMAContReq_MODE_) ((_DMAContReq_MODE_) << 9)
#define ADC_CR2_EOCSelection(_EOCSelection_MODE_) ((_EOCSelection_MODE_) << 10)
#define ADC_GET_RESOLUTION(__HANDLE__) (((__HANDLE__)->Instance->CR1) & ADC_CR1_RES)
#define ADC_IS_ENABLE(__HANDLE__)                                              \
  ((( ((__HANDLE__)->Instance->SR & ADC_SR_ADONS) == ADC_SR_ADONS )            \
  ) ? SET : RESET)
#define ADC_IS_SOFTWARE_START_INJECTED(__HANDLE__)                             \
  (((__HANDLE__)->Instance->CR2 & ADC_CR2_JEXTEN) == RESET)
#define ADC_IS_SOFTWARE_START_REGULAR(__HANDLE__)                              \
  (((__HANDLE__)->Instance->CR2 & ADC_CR2_EXTEN) == RESET)
#define ADC_SMPR1(_SAMPLETIME_, _CHANNELNB_) ((_SAMPLETIME_) << (3 * (((uint32_t)((uint16_t)(_CHANNELNB_))) - 10)))
#define ADC_SMPR2(_SAMPLETIME_, _CHANNELNB_) ((_SAMPLETIME_) << (3 * ((uint32_t)((uint16_t)(_CHANNELNB_)))))
#define ADC_SQR1(_NbrOfConversion_) (((_NbrOfConversion_) - (uint8_t)1) << 20)
#define ADC_SQR1_RK(_CHANNELNB_, _RANKNB_) (((uint32_t)((uint16_t)(_CHANNELNB_))) << (5 * ((_RANKNB_) - 13)))
#define ADC_SQR2_RK(_CHANNELNB_, _RANKNB_) (((uint32_t)((uint16_t)(_CHANNELNB_))) << (5 * ((_RANKNB_) - 7)))
#define ADC_SQR3_RK(_CHANNELNB_, _RANKNB_) (((uint32_t)((uint16_t)(_CHANNELNB_))) << (5 * ((_RANKNB_) - 1)))
#define IS_ADC_ANALOG_WATCHDOG(__WATCHDOG__) (((__WATCHDOG__) == ADC_ANALOGWATCHDOG_SINGLE_REG)        || \
                                              ((__WATCHDOG__) == ADC_ANALOGWATCHDOG_SINGLE_INJEC)      || \
                                              ((__WATCHDOG__) == ADC_ANALOGWATCHDOG_SINGLE_REGINJEC)   || \
                                              ((__WATCHDOG__) == ADC_ANALOGWATCHDOG_ALL_REG)           || \
                                              ((__WATCHDOG__) == ADC_ANALOGWATCHDOG_ALL_INJEC)         || \
                                              ((__WATCHDOG__) == ADC_ANALOGWATCHDOG_ALL_REGINJEC)      || \
                                              ((__WATCHDOG__) == ADC_ANALOGWATCHDOG_NONE))
#define IS_ADC_CHANNELS_TYPE(CHANNEL_TYPE) (((CHANNEL_TYPE) == ADC_ALL_CHANNELS) || \
                                            ((CHANNEL_TYPE) == ADC_REGULAR_CHANNELS) || \
                                            ((CHANNEL_TYPE) == ADC_INJECTED_CHANNELS))
#define IS_ADC_CLOCKPRESCALER(__ADC_CLOCK__)     (((__ADC_CLOCK__) == ADC_CLOCK_SYNC_PCLK_DIV2) || \
                                                  ((__ADC_CLOCK__) == ADC_CLOCK_SYNC_PCLK_DIV4) || \
                                                  ((__ADC_CLOCK__) == ADC_CLOCK_SYNC_PCLK_DIV6) || \
                                                  ((__ADC_CLOCK__) == ADC_CLOCK_SYNC_PCLK_DIV8))
#define IS_ADC_DATA_ALIGN(__ALIGN__) (((__ALIGN__) == ADC_DATAALIGN_RIGHT) || \
                                      ((__ALIGN__) == ADC_DATAALIGN_LEFT))
#define IS_ADC_EOCSelection(__EOCSelection__) (((__EOCSelection__) == ADC_EOC_SINGLE_CONV)   || \
                                               ((__EOCSelection__) == ADC_EOC_SEQ_CONV)  || \
                                               ((__EOCSelection__) == ADC_EOC_SINGLE_SEQ_CONV))	
#define IS_ADC_EVENT_TYPE(__EVENT__) (((__EVENT__) == ADC_AWD_EVENT) || \
                                      ((__EVENT__) == ADC_OVR_EVENT))		
#define IS_ADC_EXT_TRIG(__REGTRIG__) (((__REGTRIG__) == ADC_EXTERNALTRIGCONV_T1_CC1)   || \
                                      ((__REGTRIG__) == ADC_EXTERNALTRIGCONV_T1_CC2)   || \
                                      ((__REGTRIG__) == ADC_EXTERNALTRIGCONV_T1_CC3)   || \
                                      ((__REGTRIG__) == ADC_EXTERNALTRIGCONV_T2_CC2)   || \
                                      ((__REGTRIG__) == ADC_EXTERNALTRIGCONV_T5_TRGO)  || \
                                      ((__REGTRIG__) == ADC_EXTERNALTRIGCONV_T4_CC4)   || \
                                      ((__REGTRIG__) == ADC_EXTERNALTRIGCONV_T3_CC4) || \
                                      ((__REGTRIG__) == ADC_EXTERNALTRIGCONV_T8_TRGO)  || \
                                      ((__REGTRIG__) == ADC_EXTERNALTRIGCONV_T8_TRGO2) || \
                                      ((__REGTRIG__) == ADC_EXTERNALTRIGCONV_T1_TRGO)  || \
                                      ((__REGTRIG__) == ADC_EXTERNALTRIGCONV_T1_TRGO2) || \
                                      ((__REGTRIG__) == ADC_EXTERNALTRIGCONV_T2_TRGO)  || \
                                      ((__REGTRIG__) == ADC_EXTERNALTRIGCONV_T4_TRGO)  || \
                                      ((__REGTRIG__) == ADC_EXTERNALTRIGCONV_T6_TRGO)  || \
                                      ((__REGTRIG__) == ADC_EXTERNALTRIGCONV_EXT_IT11) || \
																			((__REGTRIG__) == ADC_SOFTWARE_START))
#define IS_ADC_EXT_TRIG_EDGE(__EDGE__) (((__EDGE__) == ADC_EXTERNALTRIGCONVEDGE_NONE)    || \
                                        ((__EDGE__) == ADC_EXTERNALTRIGCONVEDGE_RISING)  || \
                                        ((__EDGE__) == ADC_EXTERNALTRIGCONVEDGE_FALLING) || \
                                        ((__EDGE__) == ADC_EXTERNALTRIGCONVEDGE_RISINGFALLING))
#define IS_ADC_RANGE(__RESOLUTION__, __ADC_VALUE__)                                     \
   ((((__RESOLUTION__) == ADC_RESOLUTION_12B) && ((__ADC_VALUE__) <= ((uint32_t)0x0FFF))) || \
    (((__RESOLUTION__) == ADC_RESOLUTION_10B) && ((__ADC_VALUE__) <= ((uint32_t)0x03FF))) || \
    (((__RESOLUTION__) == ADC_RESOLUTION_8B)  && ((__ADC_VALUE__) <= ((uint32_t)0x00FF))) || \
    (((__RESOLUTION__) == ADC_RESOLUTION_6B)  && ((__ADC_VALUE__) <= ((uint32_t)0x003F))))
#define IS_ADC_REGULAR_DISC_NUMBER(__NUMBER__) (((__NUMBER__) >= ((uint32_t)1)) && ((__NUMBER__) <= ((uint32_t)8)))
#define IS_ADC_REGULAR_LENGTH(__LENGTH__) (((__LENGTH__) >= ((uint32_t)1)) && ((__LENGTH__) <= ((uint32_t)16)))
#define IS_ADC_REGULAR_RANK(__RANK__) (((__RANK__) == ADC_REGULAR_RANK_1 ) || \
                                       ((__RANK__) == ADC_REGULAR_RANK_2 ) || \
                                       ((__RANK__) == ADC_REGULAR_RANK_3 ) || \
                                       ((__RANK__) == ADC_REGULAR_RANK_4 ) || \
                                       ((__RANK__) == ADC_REGULAR_RANK_5 ) || \
                                       ((__RANK__) == ADC_REGULAR_RANK_6 ) || \
                                       ((__RANK__) == ADC_REGULAR_RANK_7 ) || \
                                       ((__RANK__) == ADC_REGULAR_RANK_8 ) || \
                                       ((__RANK__) == ADC_REGULAR_RANK_9 ) || \
                                       ((__RANK__) == ADC_REGULAR_RANK_10) || \
                                       ((__RANK__) == ADC_REGULAR_RANK_11) || \
                                       ((__RANK__) == ADC_REGULAR_RANK_12) || \
                                       ((__RANK__) == ADC_REGULAR_RANK_13) || \
                                       ((__RANK__) == ADC_REGULAR_RANK_14) || \
                                       ((__RANK__) == ADC_REGULAR_RANK_15) || \
                                       ((__RANK__) == ADC_REGULAR_RANK_16))
#define IS_ADC_RESOLUTION(__RESOLUTION__) (((__RESOLUTION__) == ADC_RESOLUTION_12B) || \
                                           ((__RESOLUTION__) == ADC_RESOLUTION_10B) || \
                                           ((__RESOLUTION__) == ADC_RESOLUTION_8B)  || \
                                           ((__RESOLUTION__) == ADC_RESOLUTION_6B))			
#define IS_ADC_SAMPLE_TIME(__TIME__) (((__TIME__) == ADC_SAMPLETIME_3CYCLES)   || \
                                      ((__TIME__) == ADC_SAMPLETIME_15CYCLES)  || \
                                      ((__TIME__) == ADC_SAMPLETIME_28CYCLES)  || \
                                      ((__TIME__) == ADC_SAMPLETIME_56CYCLES)  || \
                                      ((__TIME__) == ADC_SAMPLETIME_84CYCLES)  || \
                                      ((__TIME__) == ADC_SAMPLETIME_112CYCLES) || \
                                      ((__TIME__) == ADC_SAMPLETIME_144CYCLES) || \
                                      ((__TIME__) == ADC_SAMPLETIME_480CYCLES))	
#define IS_ADC_SAMPLING_DELAY(__DELAY__) (((__DELAY__) == ADC_TWOSAMPLINGDELAY_5CYCLES)  || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_6CYCLES)  || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_7CYCLES)  || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_8CYCLES)  || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_9CYCLES)  || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_10CYCLES) || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_11CYCLES) || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_12CYCLES) || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_13CYCLES) || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_14CYCLES) || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_15CYCLES) || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_16CYCLES) || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_17CYCLES) || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_18CYCLES) || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_19CYCLES) || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_20CYCLES))
#define IS_ADC_SCAN_MODE(__SCAN_MODE__) (((__SCAN_MODE__) == ADC_SCAN_DISABLE) || \
                                         ((__SCAN_MODE__) == ADC_SCAN_ENABLE))
#define IS_ADC_THRESHOLD(__THRESHOLD__) ((__THRESHOLD__) <= ((uint32_t)0xFFF))
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
