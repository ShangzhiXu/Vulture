#define ADC_COMMON_REGISTER(__HANDLE__)                ADC123_COMMON
#define ADC_COMMON_REGISTER(__HANDLE__)                ADC1_COMMON
#define   ADC_JSQR(_CHANNELNB_, _RANKNB_, _JSQR_JL_)  (((uint32_t)((uint16_t)(_CHANNELNB_))) << (5U * (uint8_t)(((_RANKNB_) + 3U) - (_JSQR_JL_))))
#define IS_ADC_CHANNEL(CHANNEL) ((CHANNEL) <= ADC_CHANNEL_18)
#define IS_ADC_CHANNEL(CHANNEL) (((CHANNEL) <= ADC_CHANNEL_18)  || \
                                 ((CHANNEL) == ADC_CHANNEL_TEMPSENSOR))
#define IS_ADC_DMA_ACCESS_MODE(MODE) (((MODE) == ADC_DMAACCESSMODE_DISABLED) || \
                                      ((MODE) == ADC_DMAACCESSMODE_1)        || \
                                      ((MODE) == ADC_DMAACCESSMODE_2)        || \
                                      ((MODE) == ADC_DMAACCESSMODE_3))
#define IS_ADC_EXT_INJEC_TRIG(INJTRIG) (((INJTRIG) == ADC_EXTERNALTRIGINJECCONV_T1_CC4)  || \
                                        ((INJTRIG) == ADC_EXTERNALTRIGINJECCONV_T1_TRGO) || \
                                        ((INJTRIG) == ADC_EXTERNALTRIGINJECCONV_T2_CC1)  || \
                                        ((INJTRIG) == ADC_EXTERNALTRIGINJECCONV_T2_TRGO) || \
                                        ((INJTRIG) == ADC_EXTERNALTRIGINJECCONV_T3_CC2)  || \
                                        ((INJTRIG) == ADC_EXTERNALTRIGINJECCONV_T3_CC4)  || \
                                        ((INJTRIG) == ADC_EXTERNALTRIGINJECCONV_T4_CC1)  || \
                                        ((INJTRIG) == ADC_EXTERNALTRIGINJECCONV_T4_CC2)  || \
                                        ((INJTRIG) == ADC_EXTERNALTRIGINJECCONV_T4_CC3)  || \
                                        ((INJTRIG) == ADC_EXTERNALTRIGINJECCONV_T4_TRGO) || \
                                        ((INJTRIG) == ADC_EXTERNALTRIGINJECCONV_T5_CC4)  || \
                                        ((INJTRIG) == ADC_EXTERNALTRIGINJECCONV_T5_TRGO) || \
                                        ((INJTRIG) == ADC_EXTERNALTRIGINJECCONV_T8_CC2)  || \
                                        ((INJTRIG) == ADC_EXTERNALTRIGINJECCONV_T8_CC3)  || \
                                        ((INJTRIG) == ADC_EXTERNALTRIGINJECCONV_T8_CC4)  || \
                                        ((INJTRIG) == ADC_EXTERNALTRIGINJECCONV_EXT_IT15)|| \
                                        ((INJTRIG) == ADC_INJECTED_SOFTWARE_START))
#define IS_ADC_EXT_INJEC_TRIG_EDGE(EDGE) (((EDGE) == ADC_EXTERNALTRIGINJECCONVEDGE_NONE)    || \
                                          ((EDGE) == ADC_EXTERNALTRIGINJECCONVEDGE_RISING)  || \
                                          ((EDGE) == ADC_EXTERNALTRIGINJECCONVEDGE_FALLING) || \
                                          ((EDGE) == ADC_EXTERNALTRIGINJECCONVEDGE_RISINGFALLING))
#define IS_ADC_INJECTED_LENGTH(LENGTH) (((LENGTH) >= 1U) && ((LENGTH) <= 4U))
#define IS_ADC_INJECTED_RANK(RANK) (((RANK) >= 1U) && ((RANK) <= 4U))
#define IS_ADC_MODE(MODE) (((MODE) == ADC_MODE_INDEPENDENT)                 || \
                           ((MODE) == ADC_DUALMODE_REGSIMULT_INJECSIMULT)   || \
                           ((MODE) == ADC_DUALMODE_REGSIMULT_ALTERTRIG)     || \
                           ((MODE) == ADC_DUALMODE_INJECSIMULT)             || \
                           ((MODE) == ADC_DUALMODE_REGSIMULT)               || \
                           ((MODE) == ADC_DUALMODE_INTERL)                  || \
                           ((MODE) == ADC_DUALMODE_ALTERTRIG)               || \
                           ((MODE) == ADC_TRIPLEMODE_REGSIMULT_INJECSIMULT) || \
                           ((MODE) == ADC_TRIPLEMODE_REGSIMULT_AlterTrig)   || \
                           ((MODE) == ADC_TRIPLEMODE_INJECSIMULT)           || \
                           ((MODE) == ADC_TRIPLEMODE_REGSIMULT)             || \
                           ((MODE) == ADC_TRIPLEMODE_INTERL)                || \
                           ((MODE) == ADC_TRIPLEMODE_ALTERTRIG))
#define __HAL_ADC_PATH_INTERNAL_VBAT_DISABLE() (ADC->CCR &= ~(ADC_CCR_VBATE))
