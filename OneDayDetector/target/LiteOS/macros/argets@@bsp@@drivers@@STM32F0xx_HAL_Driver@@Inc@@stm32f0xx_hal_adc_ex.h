#define ADC_CHANNEL_INTERNAL_PATH(__CHANNEL__)                                 \
 (( (__CHANNEL__) == ADC_CHANNEL_TEMPSENSOR                                    \
  )?                                                                           \
   (ADC_CCR_TSEN)                                                              \
   :                                                                           \
   (                                                                           \
     ( (__CHANNEL__) == ADC_CHANNEL_VREFINT                                    \
     )?                                                                        \
      (ADC_CCR_VREFEN)                                                         \
      :                                                                        \
      (ADC_CCR_VBATEN)                                                         \
   )                                                                           \
 )
#define ADC_IS_CHANNEL_INTERNAL(__CHANNEL__)                                   \
 (((__CHANNEL__) == ADC_CHANNEL_TEMPSENSOR) ||                                 \
  ((__CHANNEL__) == ADC_CHANNEL_VREFINT)    ||                                 \
  ((__CHANNEL__) == ADC_CHANNEL_VBAT)                                          \
 )
#define IS_ADC_CHANNEL(CHANNEL) (((CHANNEL) == ADC_CHANNEL_0)           || \
                                 ((CHANNEL) == ADC_CHANNEL_1)           || \
                                 ((CHANNEL) == ADC_CHANNEL_2)           || \
                                 ((CHANNEL) == ADC_CHANNEL_3)           || \
                                 ((CHANNEL) == ADC_CHANNEL_4)           || \
                                 ((CHANNEL) == ADC_CHANNEL_5)           || \
                                 ((CHANNEL) == ADC_CHANNEL_6)           || \
                                 ((CHANNEL) == ADC_CHANNEL_7)           || \
                                 ((CHANNEL) == ADC_CHANNEL_8)           || \
                                 ((CHANNEL) == ADC_CHANNEL_9)           || \
                                 ((CHANNEL) == ADC_CHANNEL_10)          || \
                                 ((CHANNEL) == ADC_CHANNEL_11)          || \
                                 ((CHANNEL) == ADC_CHANNEL_12)          || \
                                 ((CHANNEL) == ADC_CHANNEL_13)          || \
                                 ((CHANNEL) == ADC_CHANNEL_14)          || \
                                 ((CHANNEL) == ADC_CHANNEL_15)          || \
                                 ((CHANNEL) == ADC_CHANNEL_TEMPSENSOR)  || \
                                 ((CHANNEL) == ADC_CHANNEL_VREFINT)     || \
                                 ((CHANNEL) == ADC_CHANNEL_VBAT)          )
#define IS_ADC_EXTTRIG(REGTRIG) (((REGTRIG) == ADC_EXTERNALTRIGCONV_T1_TRGO)  || \
                                 ((REGTRIG) == ADC_EXTERNALTRIGCONV_T1_CC4)   || \
                                 ((REGTRIG) == ADC_EXTERNALTRIGCONV_T3_TRGO)  || \
                                 ((REGTRIG) == ADC_SOFTWARE_START))
