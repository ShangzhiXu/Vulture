#define ADC_ANY_OTHER_ENABLED(__HANDLE__)                                   \
  ( ( ((__HANDLE__)->Instance == ADC1)                                      \
    )?                                                                      \
     (ADC_INSTANCE_IS_ENABLED(ADC2)) || (ADC_INSTANCE_IS_ENABLED(ADC3))     \
     :                                                                      \
     ( ( ((__HANDLE__)->Instance == ADC2)                                   \
       )?                                                                   \
         (ADC_INSTANCE_IS_ENABLED(ADC1)) || (ADC_INSTANCE_IS_ENABLED(ADC3)) \
        :                                                                   \
          ADC_INSTANCE_IS_ENABLED(ADC1)) || (ADC_INSTANCE_IS_ENABLED(ADC2)) \
     )
#define ADC_ANY_OTHER_ENABLED(__HANDLE__)    (RESET) 
#define ADC_AWD1THRESHOLD_SHIFT_RESOLUTION(__HANDLE__, __THRESHOLD__) \
        ((__THRESHOLD__) << ((((__HANDLE__)->Instance->CFGR & ADC_CFGR_RES) >> 3)*2))
#define ADC_AWD23THRESHOLD_SHIFT_RESOLUTION(__HANDLE__, __THRESHOLD__) \
         ( ((__HANDLE__)->Instance->CFGR & ADC_CFGR_RES) != (ADC_CFGR_RES_1 | ADC_CFGR_RES_0) ? \
            ((__THRESHOLD__) >> (4- ((((__HANDLE__)->Instance->CFGR & ADC_CFGR_RES) >> 3)*2))) : \
            (__THRESHOLD__) << 2 )
#define ADC_BATTERY_VOLTAGE_INSTANCE(__HANDLE__)  (((__HANDLE__)->Instance) == ADC1)
#define ADC_BATTERY_VOLTAGE_INSTANCE(__HANDLE__)  ((((__HANDLE__)->Instance) == ADC1) || (((__HANDLE__)->Instance) == ADC3))
#define ADC_CALFACT_DIFF_GET(__CALIBRATION_FACTOR__) ((__CALIBRATION_FACTOR__) >> ADC_CALFACT_CALFACT_D_Pos)
#define ADC_CALFACT_DIFF_SET(__CALIBRATION_FACTOR__) (((__CALIBRATION_FACTOR__) & (ADC_CALFACT_CALFACT_D_Pos >> ADC_CALFACT_CALFACT_D_Pos) ) << ADC_CALFACT_CALFACT_D_Pos)
#define ADC_CCR_MULTI_DMACONTREQ(__DMACONTREQ_MODE__) ((__DMACONTREQ_MODE__) << ADC_CCR_DMACFG_Pos)
#define ADC_CFGR_AUTOWAIT(__AUTOWAIT__) ((__AUTOWAIT__) << ADC_CFGR_AUTDLY_Pos)
#define ADC_CFGR_CONTINUOUS(__CONTINUOUS_MODE__) ((__CONTINUOUS_MODE__) << ADC_CFGR_CONT_Pos)
#define ADC_CFGR_DFSDM(__HANDLE__) ((__HANDLE__)->Init.DFSDMConfig)
#define ADC_CFGR_DFSDM(__HANDLE__) (0x0)
#define ADC_CFGR_DISCONTINUOUS_NUM(__NBR_DISCONTINUOUS_CONV__) (((__NBR_DISCONTINUOUS_CONV__) - 1) << ADC_CFGR_DISCNUM_Pos)
#define ADC_CFGR_DMACONTREQ(__DMACONTREQ_MODE__) ((__DMACONTREQ_MODE__) <<  ADC_CFGR_DMACFG_Pos)
#define ADC_CFGR_INJECT_CONTEXT_QUEUE(__INJECT_CONTEXT_QUEUE_MODE__) ((__INJECT_CONTEXT_QUEUE_MODE__) << ADC_CFGR_JQM_Pos)
#define ADC_CFGR_INJECT_DISCCONTINUOUS(__INJECT_DISCONTINUOUS_MODE__) ((__INJECT_DISCONTINUOUS_MODE__) <<  ADC_CFGR_JDISCEN_Pos)
#define ADC_CFGR_REG_DISCONTINUOUS(__REG_DISCONTINUOUS_MODE__) ((__REG_DISCONTINUOUS_MODE__) << ADC_CFGR_DISCEN_Pos)
#define ADC_CLEAR_COMMON_CONTROL_REGISTER(__HANDLE__) CLEAR_BIT(__LL_ADC_COMMON_INSTANCE((__HANDLE__)->Instance)->CCR, ADC_CCR_CKMODE | \
                                                                                                      ADC_CCR_PRESC  | \
                                                                                                      ADC_CCR_VBATEN | \
                                                                                                      ADC_CCR_TSEN   | \
                                                                                                      ADC_CCR_VREFEN | \
                                                                                                      ADC_CCR_MDMA   | \
                                                                                                      ADC_CCR_DMACFG | \
                                                                                                      ADC_CCR_DELAY  | \
                                                                                                      ADC_CCR_DUAL  )
#define ADC_CLEAR_COMMON_CONTROL_REGISTER(__HANDLE__) CLEAR_BIT(__LL_ADC_COMMON_INSTANCE((__HANDLE__)->Instance)->CCR, ADC_CCR_CKMODE | \
                                                                                                      ADC_CCR_PRESC  | \
                                                                                                      ADC_CCR_VBATEN | \
                                                                                                      ADC_CCR_TSEN   | \
                                                                                                      ADC_CCR_VREFEN )
#define ADC_DIFSEL_CHANNEL(__CHANNEL__) (1U << (__CHANNEL__)) 
#define ADC_DISABLE(__HANDLE__)                                          \
  do{                                                                          \
         (__HANDLE__)->Instance->CR |= ADC_CR_ADDIS;                           \
          __HAL_ADC_CLEAR_FLAG((__HANDLE__), (ADC_FLAG_EOSMP | ADC_FLAG_RDY)); \
  } while(0)
#define ADC_DISABLING_CONDITIONS(__HANDLE__)                             \
       (( ( ((__HANDLE__)->Instance->CR) &                                     \
            (ADC_CR_JADSTART | ADC_CR_ADSTART | ADC_CR_ADEN)) == ADC_CR_ADEN   \
        ) ? SET : RESET)
#define ADC_ENABLE(__HANDLE__) ((__HANDLE__)->Instance->CR |= ADC_CR_ADEN)
#define ADC_ENABLING_CONDITIONS(__HANDLE__)                             \
       (( ( ((__HANDLE__)->Instance->CR) &                                    \
            (ADC_CR_ADCAL | ADC_CR_JADSTP | ADC_CR_ADSTP | ADC_CR_JADSTART |  \
             ADC_CR_ADSTART | ADC_CR_ADDIS | ADC_CR_ADEN                    ) \
           ) == RESET                                                         \
        ) ? SET : RESET)
#define ADC_FORCE_MODE_INDEPENDENT(__HANDLE__)                                 \
  LL_ADC_SetMultimode(__LL_ADC_COMMON_INSTANCE((__HANDLE__)->Instance), LL_ADC_MULTI_INDEPENDENT)
#define ADC_INDEPENDENT_OR_NONMULTIMODEINJECTED_SLAVE(__HANDLE__)          \
  ( ( ((__HANDLE__)->Instance == ADC1) || ((__HANDLE__)->Instance == ADC3) \
    )?                                                                     \
     SET                                                                   \
     :                                                                     \
     ( ((ADC123_COMMON->CCR & ADC_CCR_DUAL) == ADC_MODE_INDEPENDENT)    || \
       ((ADC123_COMMON->CCR & ADC_CCR_DUAL) == ADC_DUALMODE_REGSIMULT)  || \
       ((ADC123_COMMON->CCR & ADC_CCR_DUAL) == ADC_DUALMODE_INTERL) ))
#define ADC_INDEPENDENT_OR_NONMULTIMODEINJECTED_SLAVE(__HANDLE__)    (SET) 
#define ADC_INDEPENDENT_OR_NONMULTIMODEREGULAR_SLAVE(__HANDLE__)            \
  ( ( ((__HANDLE__)->Instance == ADC1) || ((__HANDLE__)->Instance == ADC3)  \
    )?                                                                      \
     SET                                                                    \
     :                                                                      \
     ( ((ADC123_COMMON->CCR & ADC_CCR_DUAL) == ADC_MODE_INDEPENDENT)     || \
       ((ADC123_COMMON->CCR & ADC_CCR_DUAL) == ADC_DUALMODE_INJECSIMULT) || \
       ((ADC123_COMMON->CCR & ADC_CCR_DUAL) == ADC_DUALMODE_ALTERTRIG) ))
#define ADC_INDEPENDENT_OR_NONMULTIMODEREGULAR_SLAVE(__HANDLE__)    (SET) 
#define ADC_INSTANCE_IS_ENABLED(__INSTANCE__)                                       \
       (( ((((__INSTANCE__)->CR) & (ADC_CR_ADEN | ADC_CR_ADDIS)) == ADC_CR_ADEN) && \
          ((((__INSTANCE__)->ISR) & ADC_FLAG_RDY) == ADC_FLAG_RDY)                  \
        ) ? SET : RESET)  
#define ADC_IS_CONVERSION_ONGOING_INJECTED(__HANDLE__)                         \
  (LL_ADC_INJ_IsConversionOngoing((__HANDLE__)->Instance))
#define ADC_IS_CONVERSION_ONGOING_REGULAR_INJECTED(__HANDLE__)                    \
       (( (((__HANDLE__)->Instance->CR) & (ADC_CR_ADSTART | ADC_CR_JADSTART)) == RESET  \
        ) ? RESET : SET)
#define ADC_IS_DUAL_CONVERSION_ENABLE(__HANDLE__)                                \
  ( ( ((((__HANDLE__)->Instance) == ADC1) || (((__HANDLE__)->Instance) == ADC2)) \
    )?                                                                           \
     ( ((ADC123_COMMON->CCR & ADC_CCR_DUAL) != ADC_MODE_INDEPENDENT)  )          \
     :                                                                           \
     RESET                                                                       \
  )
#define ADC_IS_DUAL_CONVERSION_ENABLE(__HANDLE__)    (RESET) 
#define ADC_IS_DUAL_REGULAR_CONVERSION_ENABLE(__HANDLE__)                        \
  ( ( ((((__HANDLE__)->Instance) == ADC1) || (((__HANDLE__)->Instance) == ADC2)) \
    )?                                                                           \
     ( (((__LL_ADC_COMMON_INSTANCE((__HANDLE__)->Instance))->CCR & ADC_CCR_DUAL) != ADC_MODE_INDEPENDENT)     &&      \
       (((__LL_ADC_COMMON_INSTANCE((__HANDLE__)->Instance))->CCR & ADC_CCR_DUAL) != ADC_DUALMODE_INJECSIMULT) &&      \
       (((__LL_ADC_COMMON_INSTANCE((__HANDLE__)->Instance))->CCR & ADC_CCR_DUAL) != ADC_DUALMODE_ALTERTRIG) )         \
     :                                                                           \
     RESET                                                                       \
  )
#define ADC_IS_DUAL_REGULAR_CONVERSION_ENABLE(__HANDLE__)    (RESET) 
#define ADC_IS_INDEPENDENT(__HANDLE__)    \
  ( ( ( ((__HANDLE__)->Instance) == ADC3) \
    )?                                    \
     SET                                  \
     :                                    \
     RESET                                \
  )
#define ADC_IS_INDEPENDENT(__HANDLE__)   (SET)
#define ADC_IS_SOFTWARE_START_INJECTED(__HANDLE__)                             \
  (((__HANDLE__)->Instance->JSQR & ADC_JSQR_JEXTEN) == RESET)
#define ADC_JSQR_RK(__CHANNELNB__, __RANKNB__) ((((__CHANNELNB__) & ADC_CHANNEL_ID_NUMBER_MASK) >> ADC_CHANNEL_ID_NUMBER_BITOFFSET_POS) << ((__RANKNB__) & ADC_INJ_RANK_ID_JSQR_MASK))
#define ADC_MASTER_REGISTER(__HANDLE__)                                          \
  ( ( ((((__HANDLE__)->Instance) == ADC1) || (((__HANDLE__)->Instance) == ADC3)) \
    )?                                                                           \
     ((__HANDLE__)->Instance)                                                    \
     :                                                                           \
     (ADC1)                                                                      \
  )
#define ADC_MASTER_REGISTER(__HANDLE__)   ((__HANDLE__)->Instance) 
#define ADC_MULTIMODE_DMA_ENABLED(__HANDLE__)                                     \
    ((READ_BIT(ADC123_COMMON->CCR, ADC_CCR_MDMA) == ADC_DMAACCESSMODE_12_10_BITS) \
  || (READ_BIT(ADC123_COMMON->CCR, ADC_CCR_MDMA) == ADC_DMAACCESSMODE_8_6_BITS))  
#define ADC_MULTIMODE_DMA_ENABLED(__HANDLE__)    (RESET)
#define ADC_MULTI_SLAVE(__HANDLE_MASTER__, __HANDLE_SLAVE__)             \
  ( (((__HANDLE_MASTER__)->Instance == ADC1)) ? ((__HANDLE_SLAVE__)->Instance = ADC2) : ((__HANDLE_SLAVE__)->Instance = NULL) ) 
#define ADC_NONMULTIMODE_OR_MULTIMODEMASTER(__HANDLE__)                        \
  ( ( ((__HANDLE__)->Instance == ADC1) || ((__HANDLE__)->Instance == ADC3)     \
    )?                                                                         \
     SET                                                                       \
     :                                                                         \
     ((ADC123_COMMON->CCR & ADC_CCR_DUAL) == RESET)                            \
  )
#define ADC_NONMULTIMODE_OR_MULTIMODEMASTER(__HANDLE__)    (SET) 
#define ADC_OFFSET_SHIFT_RESOLUTION(__HANDLE__, __OFFSET__) \
        ((__OFFSET__) << ((((__HANDLE__)->Instance->CFGR & ADC_CFGR_RES) >> 3)*2))
#define ADC_OFR_CHANNEL(__CHANNEL__) ((__CHANNEL__) << ADC_OFR1_OFFSET1_CH_Pos)
#define ADC_TEMPERATURE_SENSOR_INSTANCE(__HANDLE__)  (((__HANDLE__)->Instance) == ADC1)
#define ADC_TEMPERATURE_SENSOR_INSTANCE(__HANDLE__)  ((((__HANDLE__)->Instance) == ADC1) || (((__HANDLE__)->Instance) == ADC3))
#define ADC_TRX_HIGHTHRESHOLD(__THRESHOLD__) ((__THRESHOLD__) << 16)
#define ADC_VREFINT_INSTANCE(__HANDLE__)  (((__HANDLE__)->Instance) == ADC1)
#define IS_ADC_ANALOG_WATCHDOG_MODE(__WATCHDOG_MODE__) (((__WATCHDOG_MODE__) == ADC_ANALOGWATCHDOG_NONE)             || \
                                                        ((__WATCHDOG_MODE__) == ADC_ANALOGWATCHDOG_SINGLE_REG)       || \
                                                        ((__WATCHDOG_MODE__) == ADC_ANALOGWATCHDOG_SINGLE_INJEC)     || \
                                                        ((__WATCHDOG_MODE__) == ADC_ANALOGWATCHDOG_SINGLE_REGINJEC)  || \
                                                        ((__WATCHDOG_MODE__) == ADC_ANALOGWATCHDOG_ALL_REG)          || \
                                                        ((__WATCHDOG_MODE__) == ADC_ANALOGWATCHDOG_ALL_INJEC)        || \
                                                        ((__WATCHDOG_MODE__) == ADC_ANALOGWATCHDOG_ALL_REGINJEC)       ) 
#define IS_ADC_ANALOG_WATCHDOG_NUMBER(__WATCHDOG__) (((__WATCHDOG__) == ADC_ANALOGWATCHDOG_1) || \
                                                     ((__WATCHDOG__) == ADC_ANALOGWATCHDOG_2) || \
                                                     ((__WATCHDOG__) == ADC_ANALOGWATCHDOG_3)   ) 
#define IS_ADC_CALFACT(__CALIBRATION_FACTOR__) ((__CALIBRATION_FACTOR__) <= (0x7FU))
#define IS_ADC_CHANNEL(__HANDLE__, __CHANNEL__) ((((__HANDLE__)->Instance) == ADC1)  && \
                                                         (((__CHANNEL__) == ADC_CHANNEL_1)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_2)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_3)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_4)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_5)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_6)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_7)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_8)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_9)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_10)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_11)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_12)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_13)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_14)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_15)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_16)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_17)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_18)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_VREFINT)     || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_TEMPSENSOR)  || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_VBAT)        || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_DAC1CH1)     || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_DAC1CH2)))
#define IS_ADC_CHANNEL(__HANDLE__, __CHANNEL__)  (((((__HANDLE__)->Instance) == ADC1)  && \
                                                         (((__CHANNEL__) == ADC_CHANNEL_1)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_2)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_3)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_4)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_5)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_6)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_7)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_8)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_9)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_10)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_11)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_12)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_13)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_14)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_15)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_16)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_VREFINT)     || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_TEMPSENSOR)  || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_VBAT)))      || \
                                                        ((((__HANDLE__)->Instance) == ADC2)  && \
                                                         (((__CHANNEL__) == ADC_CHANNEL_1)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_2)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_3)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_4)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_5)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_6)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_7)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_8)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_9)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_10)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_11)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_12)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_13)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_14)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_15)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_16)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_17)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_18)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_DAC1CH1_ADC2)   || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_DAC1CH2_ADC2))) || \
                                                        ((((__HANDLE__)->Instance) == ADC3)  && \
                                                         (((__CHANNEL__) == ADC_CHANNEL_1)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_2)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_3)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_4)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_6)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_7)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_8)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_9)           || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_10)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_11)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_12)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_13)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_14)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_15)          || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_TEMPSENSOR)  || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_VBAT)        || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_DAC1CH1_ADC3) || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_DAC1CH2_ADC3)  ))) 
#define IS_ADC_CONVERSION_GROUP(__CONVERSION__) (((__CONVERSION__) == ADC_REGULAR_GROUP)     || \
                                             ((__CONVERSION__) == ADC_INJECTED_GROUP)        || \
                                             ((__CONVERSION__) == ADC_REGULAR_INJECTED_GROUP)  )
#define IS_ADC_DFSDMCFG_MODE(__HANDLE__) (((__HANDLE__)->Init.DFSDMConfig == ADC_DFSDM_MODE_DISABLE) || \
                                          ((__HANDLE__)->Init.DFSDMConfig == ADC_DFSDM_MODE_ENABLE) )
#define IS_ADC_DFSDMCFG_MODE(__HANDLE__) (SET)
#define IS_ADC_DIFF_CHANNEL(__HANDLE__, __CHANNEL__) (((__CHANNEL__) == ADC_CHANNEL_1)      || \
                                                      ((__CHANNEL__) == ADC_CHANNEL_2)      || \
                                                      ((__CHANNEL__) == ADC_CHANNEL_3)      || \
                                                      ((__CHANNEL__) == ADC_CHANNEL_4)      || \
                                                      ((__CHANNEL__) == ADC_CHANNEL_5)      || \
                                                      ((__CHANNEL__) == ADC_CHANNEL_6)      || \
                                                      ((__CHANNEL__) == ADC_CHANNEL_7)      || \
                                                      ((__CHANNEL__) == ADC_CHANNEL_8)      || \
                                                      ((__CHANNEL__) == ADC_CHANNEL_9)      || \
                                                      ((__CHANNEL__) == ADC_CHANNEL_10)     || \
                                                      ((__CHANNEL__) == ADC_CHANNEL_11)     || \
                                                      ((__CHANNEL__) == ADC_CHANNEL_12)     || \
                                                      ((__CHANNEL__) == ADC_CHANNEL_13)     || \
                                                      ((__CHANNEL__) == ADC_CHANNEL_14)     || \
                                                      ((__CHANNEL__) == ADC_CHANNEL_15)       )
#define IS_ADC_DIFF_CHANNEL(__HANDLE__, __CHANNEL__)  ((((((__HANDLE__)->Instance) == ADC1)   || \
                                                         (((__HANDLE__)->Instance) == ADC2))  && \
                                                         (((__CHANNEL__) == ADC_CHANNEL_1)    || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_2)    || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_3)    || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_4)    || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_5)    || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_6)    || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_7)    || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_8)    || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_9)    || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_10)   || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_11)   || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_12)   || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_13)   || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_14)   || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_15))) || \
                                                        ((((__HANDLE__)->Instance) == ADC3)  && \
                                                         (((__CHANNEL__) == ADC_CHANNEL_1)   || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_2)   || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_3)   || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_6)   || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_7)   || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_8)   || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_9)   || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_10)  || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_11)  || \
                                                          ((__CHANNEL__) == ADC_CHANNEL_12)   )))
#define IS_ADC_DMA_ACCESS_MULTIMODE(__MODE__) (((__MODE__) == ADC_DMAACCESSMODE_DISABLED)   || \
                                               ((__MODE__) == ADC_DMAACCESSMODE_12_10_BITS) || \
                                               ((__MODE__) == ADC_DMAACCESSMODE_8_6_BITS)     ) 
#define IS_ADC_EVENT_TYPE(__EVENT__) (((__EVENT__) == ADC_EOSMP_EVENT) || \
                                     ((__EVENT__) == ADC_AWD_EVENT)    || \
                                     ((__EVENT__) == ADC_AWD2_EVENT)   || \
                                     ((__EVENT__) == ADC_AWD3_EVENT)   || \
                                     ((__EVENT__) == ADC_OVR_EVENT)    || \
                                     ((__EVENT__) == ADC_JQOVF_EVENT)  ) 
#define IS_ADC_EXTTRIGINJEC(__HANDLE__, __INJTRIG__) (((__INJTRIG__) == ADC_EXTERNALTRIGINJEC_T1_TRGO)     || \
                                                      ((__INJTRIG__) == ADC_EXTERNALTRIGINJEC_T1_CC4)      || \
                                                      ((__INJTRIG__) == ADC_EXTERNALTRIGINJEC_T2_TRGO)     || \
                                                      ((__INJTRIG__) == ADC_EXTERNALTRIGINJEC_T2_CC1)      || \
                                                      ((__INJTRIG__) == ADC_EXTERNALTRIGINJEC_T3_CC4)      || \
                                                      ((__INJTRIG__) == ADC_EXTERNALTRIGINJEC_T4_TRGO)     || \
                                                      ((__INJTRIG__) == ADC_EXTERNALTRIGINJEC_EXT_IT15)    || \
                                                      ((__INJTRIG__) == ADC_EXTERNALTRIGINJEC_T8_CC4)      || \
                                                      ((__INJTRIG__) == ADC_EXTERNALTRIGINJEC_T1_TRGO2)    || \
                                                      ((__INJTRIG__) == ADC_EXTERNALTRIGINJEC_T8_TRGO)     || \
                                                      ((__INJTRIG__) == ADC_EXTERNALTRIGINJEC_T8_TRGO2)    || \
                                                      ((__INJTRIG__) == ADC_EXTERNALTRIGINJEC_T3_CC3)      || \
                                                      ((__INJTRIG__) == ADC_EXTERNALTRIGINJEC_T3_TRGO)     || \
                                                      ((__INJTRIG__) == ADC_EXTERNALTRIGINJEC_T3_CC1)      || \
                                                      ((__INJTRIG__) == ADC_EXTERNALTRIGINJEC_T6_TRGO)     || \
                                                      ((__INJTRIG__) == ADC_EXTERNALTRIGINJEC_T15_TRGO)    || \
                                                      ((__INJTRIG__) == ADC_INJECTED_SOFTWARE_START)       )
#define IS_ADC_EXTTRIGINJEC_EDGE(__EDGE__) (((__EDGE__) == ADC_EXTERNALTRIGINJECCONV_EDGE_NONE)        || \
                                           ((__EDGE__) == ADC_EXTERNALTRIGINJECCONV_EDGE_RISING)       || \
                                           ((__EDGE__) == ADC_EXTERNALTRIGINJECCONV_EDGE_FALLING)      || \
                                           ((__EDGE__) == ADC_EXTERNALTRIGINJECCONV_EDGE_RISINGFALLING) ) 
#define IS_ADC_INJECTED_NB_CONV(__LENGTH__) (((__LENGTH__) >= (1U)) && ((__LENGTH__) <= (4U)))
#define IS_ADC_INJECTED_RANK(__CHANNEL__) (((__CHANNEL__) == ADC_INJECTED_RANK_1) || \
                                           ((__CHANNEL__) == ADC_INJECTED_RANK_2) || \
                                           ((__CHANNEL__) == ADC_INJECTED_RANK_3) || \
                                           ((__CHANNEL__) == ADC_INJECTED_RANK_4)   ) 
#define IS_ADC_MULTIMODE(__MODE__) (((__MODE__) == ADC_MODE_INDEPENDENT)          || \
                               ((__MODE__) == ADC_DUALMODE_REGSIMULT_INJECSIMULT) || \
                               ((__MODE__) == ADC_DUALMODE_REGSIMULT_ALTERTRIG)   || \
                               ((__MODE__) == ADC_DUALMODE_REGINTERL_INJECSIMULT) || \
                               ((__MODE__) == ADC_DUALMODE_INJECSIMULT)           || \
                               ((__MODE__) == ADC_DUALMODE_REGSIMULT)             || \
                               ((__MODE__) == ADC_DUALMODE_INTERL)                || \
                               ((__MODE__) == ADC_DUALMODE_ALTERTRIG)               )
#define IS_ADC_OFFSET_NUMBER(__OFFSET_NUMBER__) (((__OFFSET_NUMBER__) == ADC_OFFSET_NONE) || \
                                                 ((__OFFSET_NUMBER__) == ADC_OFFSET_1)    || \
                                                 ((__OFFSET_NUMBER__) == ADC_OFFSET_2)    || \
                                                 ((__OFFSET_NUMBER__) == ADC_OFFSET_3)    || \
                                                 ((__OFFSET_NUMBER__) == ADC_OFFSET_4)      ) 
#define IS_ADC_OVERSAMPLING_RATIO(__RATIO__)      (((__RATIO__) == ADC_OVERSAMPLING_RATIO_2   ) || \
                                                   ((__RATIO__) == ADC_OVERSAMPLING_RATIO_4   ) || \
                                                   ((__RATIO__) == ADC_OVERSAMPLING_RATIO_8   ) || \
                                                   ((__RATIO__) == ADC_OVERSAMPLING_RATIO_16  ) || \
                                                   ((__RATIO__) == ADC_OVERSAMPLING_RATIO_32  ) || \
                                                   ((__RATIO__) == ADC_OVERSAMPLING_RATIO_64  ) || \
                                                   ((__RATIO__) == ADC_OVERSAMPLING_RATIO_128 ) || \
                                                   ((__RATIO__) == ADC_OVERSAMPLING_RATIO_256 ))
#define IS_ADC_REGOVERSAMPLING_MODE(__MODE__) (((__MODE__) == ADC_REGOVERSAMPLING_CONTINUED_MODE) || \
                                               ((__MODE__) == ADC_REGOVERSAMPLING_RESUMED_MODE) )              
#define IS_ADC_RIGHT_BIT_SHIFT(__SHIFT__)        (((__SHIFT__) == ADC_RIGHTBITSHIFT_NONE) || \
                                                  ((__SHIFT__) == ADC_RIGHTBITSHIFT_1   ) || \
                                                  ((__SHIFT__) == ADC_RIGHTBITSHIFT_2   ) || \
                                                  ((__SHIFT__) == ADC_RIGHTBITSHIFT_3   ) || \
                                                  ((__SHIFT__) == ADC_RIGHTBITSHIFT_4   ) || \
                                                  ((__SHIFT__) == ADC_RIGHTBITSHIFT_5   ) || \
                                                  ((__SHIFT__) == ADC_RIGHTBITSHIFT_6   ) || \
                                                  ((__SHIFT__) == ADC_RIGHTBITSHIFT_7   ) || \
                                                  ((__SHIFT__) == ADC_RIGHTBITSHIFT_8   ))
#define IS_ADC_SAMPLING_DELAY(__DELAY__) (((__DELAY__) == ADC_TWOSAMPLINGDELAY_1CYCLE)   || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_2CYCLES)  || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_3CYCLES)  || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_4CYCLES)  || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_5CYCLES)  || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_6CYCLES)  || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_7CYCLES)  || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_8CYCLES)  || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_9CYCLES)  || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_10CYCLES) || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_11CYCLES) || \
                                          ((__DELAY__) == ADC_TWOSAMPLINGDELAY_12CYCLES)   ) 
#define IS_ADC_SINGLE_DIFFERENTIAL(__SING_DIFF__) (((__SING_DIFF__) == ADC_SINGLE_ENDED)      || \
                                                   ((__SING_DIFF__) == ADC_DIFFERENTIAL_ENDED)  )
#define IS_ADC_TRIGGERED_OVERSAMPLING_MODE(__MODE__) (((__MODE__) == ADC_TRIGGEREDMODE_SINGLE_TRIGGER) || \
                                                      ((__MODE__) == ADC_TRIGGEREDMODE_MULTI_TRIGGER) ) 
