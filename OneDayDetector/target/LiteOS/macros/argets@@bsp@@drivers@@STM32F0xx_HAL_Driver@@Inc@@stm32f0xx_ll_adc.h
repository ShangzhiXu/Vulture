#define LL_ADC_ReadReg(__INSTANCE__, __REG__) READ_REG(__INSTANCE__->__REG__)
#define LL_ADC_WriteReg(__INSTANCE__, __REG__, __VALUE__) WRITE_REG(__INSTANCE__->__REG__, (__VALUE__))
#define __LL_ADC_ANALOGWD_CHANNEL_GROUP(__CHANNEL__, __GROUP__)                                           \
  (((__CHANNEL__) & ADC_CHANNEL_ID_MASK) | ADC_CFGR1_AWDEN | ADC_CFGR1_AWDSGL)
#define __LL_ADC_ANALOGWD_GET_THRESHOLD_RESOLUTION(__ADC_RESOLUTION__, __AWD_THRESHOLD_12_BITS__) \
  ((__AWD_THRESHOLD_12_BITS__) >> ((__ADC_RESOLUTION__) >> (ADC_CFGR1_RES_BITOFFSET_POS - 1U )))
#define __LL_ADC_ANALOGWD_SET_THRESHOLD_RESOLUTION(__ADC_RESOLUTION__, __AWD_THRESHOLD__) \
  ((__AWD_THRESHOLD__) << ((__ADC_RESOLUTION__) >> (ADC_CFGR1_RES_BITOFFSET_POS - 1U )))
#define __LL_ADC_ANALOGWD_THRESHOLDS_HIGH_LOW(__AWD_THRESHOLD_TYPE__, __AWD_THRESHOLDS__) \
  (((__AWD_THRESHOLD_TYPE__) == LL_ADC_AWD_THRESHOLD_LOW)                                 \
    ? (                                                                                   \
       (__AWD_THRESHOLDS__) & LL_ADC_AWD_THRESHOLD_LOW                                    \
      )                                                                                   \
      :                                                                                   \
      (                                                                                   \
       ((__AWD_THRESHOLDS__) >> ADC_TR_HT_BITOFFSET_POS) & LL_ADC_AWD_THRESHOLD_LOW       \
      )                                                                                   \
  )
#define __LL_ADC_CALC_DATA_TO_VOLTAGE(__VREFANALOG_VOLTAGE__,\
                                      __ADC_DATA__,\
                                      __ADC_RESOLUTION__)                      \
  ((__ADC_DATA__) * (__VREFANALOG_VOLTAGE__)                                   \
   / __LL_ADC_DIGITAL_SCALE(__ADC_RESOLUTION__)                                \
  )
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
       (int32_t)(((__TEMPSENSOR_TYP_CALX_V__))                                 \
                 * 1000)                                                       \
       -                                                                       \
       (int32_t)((((__TEMPSENSOR_ADC_DATA__) * (__VREFANALOG_VOLTAGE__))       \
                  / __LL_ADC_DIGITAL_SCALE(__ADC_RESOLUTION__))                \
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
#define __LL_ADC_CHANNEL_INTERNAL_TO_EXTERNAL(__CHANNEL__)                     \
  ((__CHANNEL__) & ~ADC_CHANNEL_ID_INTERNAL_CH_MASK)
#define __LL_ADC_CHANNEL_TO_DECIMAL_NB(__CHANNEL__)                                                               \
  ((((__CHANNEL__) & ADC_CHANNEL_ID_BITFIELD_MASK) == 0U)                                                         \
    ? (                                                                                                           \
       ((__CHANNEL__) & ADC_CHANNEL_ID_NUMBER_MASK) >> ADC_CHANNEL_ID_NUMBER_BITOFFSET_POS                        \
      )                                                                                                           \
      :                                                                                                           \
      (                                                                                                           \
       (((__CHANNEL__) & ADC_CHSELR_CHSEL0) == ADC_CHSELR_CHSEL0) ? (0U) :                                        \
        (                                                                                                         \
         (((__CHANNEL__) & ADC_CHSELR_CHSEL1) == ADC_CHSELR_CHSEL1) ? (1U) :                                      \
          (                                                                                                       \
           (((__CHANNEL__) & ADC_CHSELR_CHSEL2) == ADC_CHSELR_CHSEL2) ? (2U) :                                    \
            (                                                                                                     \
             (((__CHANNEL__) & ADC_CHSELR_CHSEL3) == ADC_CHSELR_CHSEL3) ? (3U) :                                  \
              (                                                                                                   \
               (((__CHANNEL__) & ADC_CHSELR_CHSEL4) == ADC_CHSELR_CHSEL4) ? (4U) :                                \
                (                                                                                                 \
                 (((__CHANNEL__) & ADC_CHSELR_CHSEL5) == ADC_CHSELR_CHSEL5) ? (5U) :                              \
                  (                                                                                               \
                   (((__CHANNEL__) & ADC_CHSELR_CHSEL6) == ADC_CHSELR_CHSEL6) ? (6U) :                            \
                    (                                                                                             \
                     (((__CHANNEL__) & ADC_CHSELR_CHSEL7) == ADC_CHSELR_CHSEL7) ? (7U) :                          \
                      (                                                                                           \
                       (((__CHANNEL__) & ADC_CHSELR_CHSEL8) == ADC_CHSELR_CHSEL8) ? (8U) :                        \
                        (                                                                                         \
                         (((__CHANNEL__) & ADC_CHSELR_CHSEL9) == ADC_CHSELR_CHSEL9) ? (9U) :                      \
                          (                                                                                       \
                           (((__CHANNEL__) & ADC_CHSELR_CHSEL10) == ADC_CHSELR_CHSEL10) ? (10U) :                 \
                            (                                                                                     \
                             (((__CHANNEL__) & ADC_CHSELR_CHSEL11) == ADC_CHSELR_CHSEL11) ? (11U) :               \
                              (                                                                                   \
                               (((__CHANNEL__) & ADC_CHSELR_CHSEL12) == ADC_CHSELR_CHSEL12) ? (12U) :             \
                                (                                                                                 \
                                 (((__CHANNEL__) & ADC_CHSELR_CHSEL13) == ADC_CHSELR_CHSEL13) ? (13U) :           \
                                  (                                                                               \
                                   (((__CHANNEL__) & ADC_CHSELR_CHSEL14) == ADC_CHSELR_CHSEL14) ? (14U) :         \
                                    (                                                                             \
                                     (((__CHANNEL__) & ADC_CHSELR_CHSEL15) == ADC_CHSELR_CHSEL15) ? (15U) :       \
                                      (                                                                           \
                                       (((__CHANNEL__) & ADC_CHSELR_CHSEL16) == ADC_CHSELR_CHSEL16) ? (16U) :     \
                                        (                                                                         \
                                         (((__CHANNEL__) & ADC_CHSELR_CHSEL17) == ADC_CHSELR_CHSEL17) ? (17U) :   \
                                          (                                                                       \
                                           (((__CHANNEL__) & ADC_CHSELR_CHSEL18) == ADC_CHSELR_CHSEL18) ? (18U) : \
                                            (0U)                                                                   \
                                          )                                                                       \
                                        )                                                                         \
                                      )                                                                           \
                                    )                                                                             \
                                  )                                                                               \
                                )                                                                                 \
                              )                                                                                   \
                            )                                                                                     \
                          )                                                                                       \
                        )                                                                                         \
                      )                                                                                           \
                    )                                                                                             \
                  )                                                                                               \
                )                                                                                                 \
              )                                                                                                   \
            )                                                                                                     \
          )                                                                                                       \
        )                                                                                                         \
      )                                                                                                           \
  )
#define __LL_ADC_COMMON_INSTANCE(__ADCx__)                                     \
  (ADC1_COMMON)
#define __LL_ADC_CONVERT_DATA_RESOLUTION(__DATA__, __ADC_RESOLUTION_CURRENT__, __ADC_RESOLUTION_TARGET__) \
  (((__DATA__)                                                                 \
    << ((__ADC_RESOLUTION_CURRENT__) >> (ADC_CFGR1_RES_BITOFFSET_POS - 1U)))   \
   >> ((__ADC_RESOLUTION_TARGET__) >> (ADC_CFGR1_RES_BITOFFSET_POS - 1U))      \
  )
#define __LL_ADC_DECIMAL_NB_TO_CHANNEL(__DECIMAL_NB__)                         \
  (                                                                            \
   ((__DECIMAL_NB__) << ADC_CHANNEL_ID_NUMBER_BITOFFSET_POS) |                 \
   (ADC_CHSELR_CHSEL0 << (__DECIMAL_NB__))                                     \
  )
#define __LL_ADC_DIGITAL_SCALE(__ADC_RESOLUTION__)                             \
  (0xFFFU >> ((__ADC_RESOLUTION__) >> (ADC_CFGR1_RES_BITOFFSET_POS - 1U)))
#define __LL_ADC_IS_CHANNEL_INTERNAL(__CHANNEL__)                              \
  (((__CHANNEL__) & ADC_CHANNEL_ID_INTERNAL_CH_MASK) != 0U)
#define __LL_ADC_IS_CHANNEL_INTERNAL_AVAILABLE(__ADC_INSTANCE__, __CHANNEL__)  \
  (                                                                            \
    ((__CHANNEL__) == LL_ADC_CHANNEL_VREFINT)    ||                            \
    ((__CHANNEL__) == LL_ADC_CHANNEL_TEMPSENSOR) ||                            \
    ((__CHANNEL__) == LL_ADC_CHANNEL_VBAT)                                     \
  )
#define __LL_ADC_IS_CHANNEL_INTERNAL_AVAILABLE(__ADC_INSTANCE__, __CHANNEL__)  \
  (                                                                            \
    ((__CHANNEL__) == LL_ADC_CHANNEL_VREFINT)    ||                            \
    ((__CHANNEL__) == LL_ADC_CHANNEL_TEMPSENSOR)                               \
  )
#define __LL_ADC_IS_ENABLED_ALL_COMMON_INSTANCE(__ADCXY_COMMON__)              \
  LL_ADC_IsEnabled(ADC1)
