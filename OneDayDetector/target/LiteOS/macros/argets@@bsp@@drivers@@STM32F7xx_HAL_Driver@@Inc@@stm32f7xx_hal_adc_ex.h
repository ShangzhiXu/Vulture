#define   ADC_JSQR(_CHANNELNB_, _RANKNB_,_JSQR_JL_) (((uint32_t)((uint16_t)(_CHANNELNB_))) << (5 * (uint8_t)(((_RANKNB_) + 3) - (_JSQR_JL_))))
#define IS_ADC_CHANNEL(CHANNEL) (((CHANNEL) <= ADC_CHANNEL_18)  || \
                                 ((CHANNEL) == ADC_CHANNEL_TEMPSENSOR))
#define IS_ADC_DMA_ACCESS_MODE(__MODE__) (((__MODE__) == ADC_DMAACCESSMODE_DISABLED) || \
                                          ((__MODE__) == ADC_DMAACCESSMODE_1)        || \
                                          ((__MODE__) == ADC_DMAACCESSMODE_2)        || \
                                          ((__MODE__) == ADC_DMAACCESSMODE_3))
#define IS_ADC_EXT_INJEC_TRIG(__INJTRIG__) (((__INJTRIG__) == ADC_EXTERNALTRIGINJECCONV_T1_TRGO)  || \
                                            ((__INJTRIG__) == ADC_EXTERNALTRIGINJECCONV_T1_CC4)   || \
                                            ((__INJTRIG__) == ADC_EXTERNALTRIGINJECCONV_T2_TRGO)  || \
                                            ((__INJTRIG__) == ADC_EXTERNALTRIGINJECCONV_T2_CC1)   || \
                                            ((__INJTRIG__) == ADC_EXTERNALTRIGINJECCONV_T3_CC4)   || \
                                            ((__INJTRIG__) == ADC_EXTERNALTRIGINJECCONV_T4_TRGO)  || \
                                            ((__INJTRIG__) == ADC_EXTERNALTRIGINJECCONV_T8_CC4)   || \
                                            ((__INJTRIG__) == ADC_EXTERNALTRIGINJECCONV_T1_TRGO2) || \
                                            ((__INJTRIG__) == ADC_EXTERNALTRIGINJECCONV_T8_TRGO)  || \
                                            ((__INJTRIG__) == ADC_EXTERNALTRIGINJECCONV_T8_TRGO2) || \
                                            ((__INJTRIG__) == ADC_EXTERNALTRIGINJECCONV_T3_CC3)   || \
                                            ((__INJTRIG__) == ADC_EXTERNALTRIGINJECCONV_T5_TRGO)  || \
                                            ((__INJTRIG__) == ADC_EXTERNALTRIGINJECCONV_T3_CC1)   || \
                                            ((__INJTRIG__) == ADC_EXTERNALTRIGINJECCONV_T6_TRGO)  || \
                                            ((__INJTRIG__) == ADC_INJECTED_SOFTWARE_START))
#define IS_ADC_EXT_INJEC_TRIG_EDGE(__EDGE__) (((__EDGE__) == ADC_EXTERNALTRIGINJECCONVEDGE_NONE)    || \
                                              ((__EDGE__) == ADC_EXTERNALTRIGINJECCONVEDGE_RISING)  || \
                                              ((__EDGE__) == ADC_EXTERNALTRIGINJECCONVEDGE_FALLING) || \
                                              ((__EDGE__) == ADC_EXTERNALTRIGINJECCONVEDGE_RISINGFALLING))
#define IS_ADC_INJECTED_LENGTH(__LENGTH__) (((__LENGTH__) >= ((uint32_t)1)) && ((__LENGTH__) <= ((uint32_t)4)))
#define IS_ADC_INJECTED_RANK(__RANK__) (((__RANK__) == ADC_INJECTED_RANK_1) || \
                                       ((__RANK__) == ADC_INJECTED_RANK_2) || \
                                       ((__RANK__) == ADC_INJECTED_RANK_3) || \
                                       ((__RANK__) == ADC_INJECTED_RANK_4))
#define IS_ADC_MODE(__MODE__) (((__MODE__) == ADC_MODE_INDEPENDENT)                 || \
                               ((__MODE__) == ADC_DUALMODE_REGSIMULT_INJECSIMULT)   || \
                               ((__MODE__) == ADC_DUALMODE_REGSIMULT_ALTERTRIG)     || \
                               ((__MODE__) == ADC_DUALMODE_INJECSIMULT)             || \
                               ((__MODE__) == ADC_DUALMODE_REGSIMULT)               || \
                               ((__MODE__) == ADC_DUALMODE_INTERL)                  || \
                               ((__MODE__) == ADC_DUALMODE_ALTERTRIG)               || \
                               ((__MODE__) == ADC_TRIPLEMODE_REGSIMULT_INJECSIMULT) || \
                               ((__MODE__) == ADC_TRIPLEMODE_REGSIMULT_AlterTrig)   || \
                               ((__MODE__) == ADC_TRIPLEMODE_INJECSIMULT)           || \
                               ((__MODE__) == ADC_TRIPLEMODE_REGSIMULT)             || \
                               ((__MODE__) == ADC_TRIPLEMODE_INTERL)                || \
                               ((__MODE__) == ADC_TRIPLEMODE_ALTERTRIG))
