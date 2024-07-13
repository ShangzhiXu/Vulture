#define LL_ADC_ReadReg(__INSTANCE__, __REG__) READ_REG(__INSTANCE__->__REG__)
#define LL_ADC_WriteReg(__INSTANCE__, __REG__, __VALUE__) WRITE_REG(__INSTANCE__->__REG__, (__VALUE__))
#define __ADC_MASK_SHIFT(__BITS__, __MASK__)                                   \
  (((__BITS__) & (__MASK__)) >> POSITION_VAL((__MASK__)))
#define __ADC_PTR_REG_OFFSET(__REG__, __REG_OFFFSET__)                         \
 ((uint32_t *)((uint32_t) ((uint32_t)(&(__REG__)) + ((__REG_OFFFSET__) << 2U))))
#define __LL_ADC_ANALOGWD_CHANNEL_GROUP(__CHANNEL__, __GROUP__)                                           \
  (((__GROUP__) == LL_ADC_GROUP_REGULAR)                                                                  \
    ? (((__CHANNEL__) & ADC_CHANNEL_ID_MASK) | ADC_CFGR_AWD1EN | ADC_CFGR_AWD1SGL)                        \
      :                                                                                                   \
      ((__GROUP__) == LL_ADC_GROUP_INJECTED)                                                              \
       ? (((__CHANNEL__) & ADC_CHANNEL_ID_MASK) | ADC_CFGR_JAWD1EN | ADC_CFGR_AWD1SGL)                    \
         :                                                                                                \
         (((__CHANNEL__) & ADC_CHANNEL_ID_MASK) | ADC_CFGR_JAWD1EN | ADC_CFGR_AWD1EN | ADC_CFGR_AWD1SGL)  \
  )
#define __LL_ADC_ANALOGWD_GET_THRESHOLD_RESOLUTION(__ADC_RESOLUTION__, __AWD_THRESHOLD_12_BITS__) \
  ((__AWD_THRESHOLD_12_BITS__) >> ((__ADC_RESOLUTION__) >> (ADC_CFGR_RES_BITOFFSET_POS - 1U )))
#define __LL_ADC_ANALOGWD_SET_THRESHOLD_RESOLUTION(__ADC_RESOLUTION__, __AWD_THRESHOLD__) \
  ((__AWD_THRESHOLD__) << ((__ADC_RESOLUTION__) >> (ADC_CFGR_RES_BITOFFSET_POS - 1U )))
#define __LL_ADC_ANALOGWD_THRESHOLDS_HIGH_LOW(__AWD_THRESHOLD_TYPE__, __AWD_THRESHOLDS__)       \
  (((__AWD_THRESHOLDS__) >> (((__AWD_THRESHOLD_TYPE__) & ADC_AWD_TRX_BIT_HIGH_MASK) >> ADC_AWD_TRX_BIT_HIGH_SHIFT4)) & LL_ADC_AWD_THRESHOLD_LOW)
#define __LL_ADC_ANALOGWD_THRESHOLDS_HIGH_LOW(__AWD_THRESHOLD_TYPE__, __AWD_THRESHOLDS__)       \
  (((__AWD_THRESHOLDS__) >> POSITION_VAL((__AWD_THRESHOLD_TYPE__))) & LL_ADC_AWD_THRESHOLD_LOW)
#define __LL_ADC_CALC_DATA_TO_VOLTAGE(__VREFANALOG_VOLTAGE__,\
                                      __ADC_DATA__,\
                                      __ADC_RESOLUTION__)                      \
  ((__ADC_DATA__) * (__VREFANALOG_VOLTAGE__)                                   \
   / __LL_ADC_DIGITAL_SCALE(__ADC_RESOLUTION__)                                \
  )
#define __LL_ADC_CALC_DATA_VOLTAGE()  __LL_ADC_CALC_DATA_TO_VOLTAGE()
#define __LL_ADC_CALC_TEMPERATURE(__VREFANALOG_VOLTAGE__,\
                                  __TEMPSENSOR_ADC_DATA__,\
                                  __ADC_RESOLUTION__)                              \
  (((( ((int32_t)((__LL_ADC_CONVERT_DATA_RESOLUTION((__TEMPSENSOR_ADC_DATA__),     \
                                                    (__ADC_RESOLUTION__),          \
                                                    LL_ADC_RESOLUTION_12B)         \
                   * (__VREFANALOG_VOLTAGE__))                                     \
                  / TEMPSENSOR_CAL_VREFANALOG)                                     \
        - (int32_t) *TEMPSENSOR_CAL1_ADDR)                                         \
     ) * (int32_t)(TEMPSENSOR_CAL2_TEMP - TEMPSENSOR_CAL1_TEMP)                    \
    ) / (int32_t)((int32_t)*TEMPSENSOR_CAL2_ADDR - (int32_t)*TEMPSENSOR_CAL1_ADDR) \
   ) + TEMPSENSOR_CAL1_TEMP                                                        \
  )
#define __LL_ADC_CALC_TEMPERATURE_TYP_PARAMS(__TEMPSENSOR_TYP_AVGSLOPE__,\
                                             __TEMPSENSOR_TYP_CALX_V__,\
                                             __TEMPSENSOR_CALX_TEMP__,\
                                             __VREFANALOG_VOLTAGE__,\
                                             __TEMPSENSOR_ADC_DATA__,\
                                             __ADC_RESOLUTION__)               \
  ((( (                                                                        \
       (int32_t)((((__TEMPSENSOR_ADC_DATA__) * (__VREFANALOG_VOLTAGE__))       \
                  / __LL_ADC_DIGITAL_SCALE(__ADC_RESOLUTION__))                \
                 * 1000)                                                       \
       -                                                                       \
       (int32_t)(((__TEMPSENSOR_TYP_CALX_V__))                                 \
                 * 1000)                                                       \
      )                                                                        \
    ) / (__TEMPSENSOR_TYP_AVGSLOPE__)                                          \
   ) + (__TEMPSENSOR_CALX_TEMP__)                                              \
  )
#define __LL_ADC_CALC_VREFANALOG_VOLTAGE(__VREFINT_ADC_DATA__,\
                                         __ADC_RESOLUTION__)                   \
  (((uint32_t)(*VREFINT_CAL_ADDR) * VREFINT_CAL_VREF)                          \
    / __LL_ADC_CONVERT_DATA_RESOLUTION((__VREFINT_ADC_DATA__),                 \
                                       (__ADC_RESOLUTION__),                   \
                                       LL_ADC_RESOLUTION_12B)                  \
  )
#define __LL_ADC_CALIB_FACTOR_SINGLE_DIFF(__CALIB_FACTOR_SINGLE_ENDED__, __CALIB_FACTOR_DIFFERENTIAL__)        \
  (((__CALIB_FACTOR_DIFFERENTIAL__) << ADC_CALFACT_CALFACT_D_Pos) | (__CALIB_FACTOR_SINGLE_ENDED__))
#define __LL_ADC_CALIB_FACTOR_SINGLE_DIFF(__CALIB_FACTOR_SINGLE_ENDED__, __CALIB_FACTOR_DIFFERENTIAL__)        \
  (((__CALIB_FACTOR_DIFFERENTIAL__) << POSITION_VAL(ADC_CALFACT_CALFACT_D)) | (__CALIB_FACTOR_SINGLE_ENDED__))
#define __LL_ADC_CHANNEL_INTERNAL_TO_EXTERNAL(__CHANNEL__)                     \
  ((__CHANNEL__) & ~ADC_CHANNEL_ID_INTERNAL_CH_MASK)
#define __LL_ADC_CHANNEL_TO_DECIMAL_NB(__CHANNEL__)                                        \
  ((((__CHANNEL__) & ADC_CHANNEL_ID_BITFIELD_MASK) == 0U)                                  \
    ? (                                                                                    \
       ((__CHANNEL__) & ADC_CHANNEL_ID_NUMBER_MASK) >> ADC_CHANNEL_ID_NUMBER_BITOFFSET_POS \
      )                                                                                    \
      :                                                                                    \
      (                                                                                    \
       POSITION_VAL((__CHANNEL__))                                                         \
      )                                                                                    \
  )
#define __LL_ADC_COMMON_INSTANCE(__ADCx__)                                     \
  (ADC123_COMMON)
#define __LL_ADC_COMMON_INSTANCE(__ADCx__)                                     \
  (ADC12_COMMON)
#define __LL_ADC_COMMON_INSTANCE(__ADCx__)                                     \
  (ADC1_COMMON)
#define __LL_ADC_CONVERT_DATA_RESOLUTION(__DATA__,\
                                         __ADC_RESOLUTION_CURRENT__,\
                                         __ADC_RESOLUTION_TARGET__)            \
  (((__DATA__)                                                                 \
    << ((__ADC_RESOLUTION_CURRENT__) >> (ADC_CFGR_RES_BITOFFSET_POS - 1U)))    \
   >> ((__ADC_RESOLUTION_TARGET__) >> (ADC_CFGR_RES_BITOFFSET_POS - 1U))       \
  )
#define __LL_ADC_DECIMAL_NB_TO_CHANNEL(__DECIMAL_NB__)                                                          \
  (((__DECIMAL_NB__) <= 9U)                                                                                     \
    ? (                                                                                                         \
       ((__DECIMAL_NB__) << ADC_CHANNEL_ID_NUMBER_BITOFFSET_POS)                                       |        \
       (ADC_AWD2CR_AWD2CH_0 << (__DECIMAL_NB__))                                                       |        \
       (ADC_SMPR1_REGOFFSET | (((uint32_t) (3U * (__DECIMAL_NB__))) << ADC_CHANNEL_SMPx_BITOFFSET_POS))         \
      )                                                                                                         \
      :                                                                                                         \
      (                                                                                                         \
       ((__DECIMAL_NB__) << ADC_CHANNEL_ID_NUMBER_BITOFFSET_POS)                                              | \
       (ADC_AWD2CR_AWD2CH_0 << (__DECIMAL_NB__))                                                              | \
       (ADC_SMPR2_REGOFFSET | (((uint32_t) (3U * ((__DECIMAL_NB__) - 10U))) << ADC_CHANNEL_SMPx_BITOFFSET_POS)) \
      )                                                                                                         \
  )
#define __LL_ADC_DIGITAL_SCALE(__ADC_RESOLUTION__)                             \
  (0xFFFU >> ((__ADC_RESOLUTION__) >> (ADC_CFGR_RES_BITOFFSET_POS - 1U)))
#define __LL_ADC_IS_CHANNEL_INTERNAL(__CHANNEL__)                              \
  (((__CHANNEL__) & ADC_CHANNEL_ID_INTERNAL_CH_MASK) != 0U)
#define __LL_ADC_IS_CHANNEL_INTERNAL_AVAILABLE(__ADC_INSTANCE__, __CHANNEL__)  \
  (((__ADC_INSTANCE__) == ADC1)                                                \
    ? (                                                                        \
       ((__CHANNEL__) == LL_ADC_CHANNEL_VREFINT)    ||                         \
       ((__CHANNEL__) == LL_ADC_CHANNEL_TEMPSENSOR) ||                         \
       ((__CHANNEL__) == LL_ADC_CHANNEL_VBAT)                                  \
      )                                                                        \
      :                                                                        \
      ((__ADC_INSTANCE__) == ADC2)                                             \
      ? (                                                                      \
         ((__CHANNEL__) == LL_ADC_CHANNEL_VREFINT)      ||                     \
         ((__CHANNEL__) == LL_ADC_CHANNEL_DAC1CH1_ADC2) ||                     \
         ((__CHANNEL__) == LL_ADC_CHANNEL_DAC1CH2_ADC2)                        \
        )                                                                      \
        :                                                                      \
        ((__ADC_INSTANCE__) == ADC3)                                           \
        ? (                                                                    \
           ((__CHANNEL__) == LL_ADC_CHANNEL_VREFINT)      ||                   \
           ((__CHANNEL__) == LL_ADC_CHANNEL_TEMPSENSOR)   ||                   \
           ((__CHANNEL__) == LL_ADC_CHANNEL_VBAT)         ||                   \
           ((__CHANNEL__) == LL_ADC_CHANNEL_DAC1CH1_ADC3) ||                   \
           ((__CHANNEL__) == LL_ADC_CHANNEL_DAC1CH2_ADC3)                      \
          )                                                                    \
          :                                                                    \
          (0U)                                                                 \
  )
#define __LL_ADC_IS_CHANNEL_INTERNAL_AVAILABLE(__ADC_INSTANCE__, __CHANNEL__)  \
  (((__ADC_INSTANCE__) == ADC1)                                                \
    ? (                                                                        \
       ((__CHANNEL__) == LL_ADC_CHANNEL_VREFINT)    ||                         \
       ((__CHANNEL__) == LL_ADC_CHANNEL_TEMPSENSOR) ||                         \
       ((__CHANNEL__) == LL_ADC_CHANNEL_VBAT)                                  \
      )                                                                        \
      :                                                                        \
      ((__ADC_INSTANCE__) == ADC2)                                             \
      ? (                                                                      \
         ((__CHANNEL__) == LL_ADC_CHANNEL_VREFINT)      ||                     \
         ((__CHANNEL__) == LL_ADC_CHANNEL_DAC1CH1_ADC2) ||                     \
         ((__CHANNEL__) == LL_ADC_CHANNEL_DAC1CH2_ADC2)                        \
        )                                                                      \
        :                                                                      \
        (0U)                                                                   \
  )
#define __LL_ADC_IS_CHANNEL_INTERNAL_AVAILABLE(__ADC_INSTANCE__, __CHANNEL__)  \
  (                                                                            \
    ((__CHANNEL__) == LL_ADC_CHANNEL_VREFINT)    ||                            \
    ((__CHANNEL__) == LL_ADC_CHANNEL_TEMPSENSOR) ||                            \
    ((__CHANNEL__) == LL_ADC_CHANNEL_VBAT)       ||                            \
    ((__CHANNEL__) == LL_ADC_CHANNEL_DAC1CH1)    ||                            \
    ((__CHANNEL__) == LL_ADC_CHANNEL_DAC1CH2)                                  \
  )
#define __LL_ADC_IS_ENABLED_ALL_COMMON_INSTANCE(__ADCXY_COMMON__)              \
  (LL_ADC_IsEnabled(ADC1) |                                                    \
   LL_ADC_IsEnabled(ADC2) |                                                    \
   LL_ADC_IsEnabled(ADC3)  )
#define __LL_ADC_IS_ENABLED_ALL_COMMON_INSTANCE(__ADCXY_COMMON__)              \
  (LL_ADC_IsEnabled(ADC1) |                                                    \
   LL_ADC_IsEnabled(ADC2)  )
#define __LL_ADC_IS_ENABLED_ALL_COMMON_INSTANCE(__ADCXY_COMMON__)              \
  (LL_ADC_IsEnabled(ADC1))
#define __LL_ADC_MULTI_CONV_DATA_MASTER_SLAVE(__ADC_MULTI_MASTER_SLAVE__, __ADC_MULTI_CONV_DATA__)  \
  (((__ADC_MULTI_CONV_DATA__) >> POSITION_VAL((__ADC_MULTI_MASTER_SLAVE__))) & ADC_CDR_RDATA_MST)
