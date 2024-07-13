#define IS_LL_TIM_ACTIVEINPUT(__VALUE__) (((__VALUE__) == LL_TIM_ACTIVEINPUT_DIRECTTI) \
                                       || ((__VALUE__) == LL_TIM_ACTIVEINPUT_INDIRECTTI) \
                                       || ((__VALUE__) == LL_TIM_ACTIVEINPUT_TRC))
#define IS_LL_TIM_AUTOMATIC_OUTPUT_STATE(__VALUE__) (((__VALUE__) == LL_TIM_AUTOMATICOUTPUT_DISABLE) \
                                                  || ((__VALUE__) == LL_TIM_AUTOMATICOUTPUT_ENABLE))
#define IS_LL_TIM_BREAK2_FILTER(__VALUE__) (((__VALUE__) == LL_TIM_BREAK2_FILTER_FDIV1)    \
                                         || ((__VALUE__) == LL_TIM_BREAK2_FILTER_FDIV1_N2)  \
                                         || ((__VALUE__) == LL_TIM_BREAK2_FILTER_FDIV1_N4)  \
                                         || ((__VALUE__) == LL_TIM_BREAK2_FILTER_FDIV1_N8)  \
                                         || ((__VALUE__) == LL_TIM_BREAK2_FILTER_FDIV2_N6)  \
                                         || ((__VALUE__) == LL_TIM_BREAK2_FILTER_FDIV2_N8)  \
                                         || ((__VALUE__) == LL_TIM_BREAK2_FILTER_FDIV4_N6)  \
                                         || ((__VALUE__) == LL_TIM_BREAK2_FILTER_FDIV4_N8)  \
                                         || ((__VALUE__) == LL_TIM_BREAK2_FILTER_FDIV8_N6)  \
                                         || ((__VALUE__) == LL_TIM_BREAK2_FILTER_FDIV8_N8)  \
                                         || ((__VALUE__) == LL_TIM_BREAK2_FILTER_FDIV16_N5) \
                                         || ((__VALUE__) == LL_TIM_BREAK2_FILTER_FDIV16_N6) \
                                         || ((__VALUE__) == LL_TIM_BREAK2_FILTER_FDIV16_N8) \
                                         || ((__VALUE__) == LL_TIM_BREAK2_FILTER_FDIV32_N5) \
                                         || ((__VALUE__) == LL_TIM_BREAK2_FILTER_FDIV32_N6) \
                                         || ((__VALUE__) == LL_TIM_BREAK2_FILTER_FDIV32_N8))
#define IS_LL_TIM_BREAK2_POLARITY(__VALUE__) (((__VALUE__) == LL_TIM_BREAK2_POLARITY_LOW) \
                                           || ((__VALUE__) == LL_TIM_BREAK2_POLARITY_HIGH))
#define IS_LL_TIM_BREAK2_STATE(__VALUE__) (((__VALUE__) == LL_TIM_BREAK2_DISABLE) \
                                        || ((__VALUE__) == LL_TIM_BREAK2_ENABLE))
#define IS_LL_TIM_BREAK_FILTER(__VALUE__) (((__VALUE__) == LL_TIM_BREAK_FILTER_FDIV1)     \
                                        || ((__VALUE__) == LL_TIM_BREAK_FILTER_FDIV1_N2)  \
                                        || ((__VALUE__) == LL_TIM_BREAK_FILTER_FDIV1_N4)  \
                                        || ((__VALUE__) == LL_TIM_BREAK_FILTER_FDIV1_N8)  \
                                        || ((__VALUE__) == LL_TIM_BREAK_FILTER_FDIV2_N6)  \
                                        || ((__VALUE__) == LL_TIM_BREAK_FILTER_FDIV2_N8)  \
                                        || ((__VALUE__) == LL_TIM_BREAK_FILTER_FDIV4_N6)  \
                                        || ((__VALUE__) == LL_TIM_BREAK_FILTER_FDIV4_N8)  \
                                        || ((__VALUE__) == LL_TIM_BREAK_FILTER_FDIV8_N6)  \
                                        || ((__VALUE__) == LL_TIM_BREAK_FILTER_FDIV8_N8)  \
                                        || ((__VALUE__) == LL_TIM_BREAK_FILTER_FDIV16_N5) \
                                        || ((__VALUE__) == LL_TIM_BREAK_FILTER_FDIV16_N6) \
                                        || ((__VALUE__) == LL_TIM_BREAK_FILTER_FDIV16_N8) \
                                        || ((__VALUE__) == LL_TIM_BREAK_FILTER_FDIV32_N5) \
                                        || ((__VALUE__) == LL_TIM_BREAK_FILTER_FDIV32_N6) \
                                        || ((__VALUE__) == LL_TIM_BREAK_FILTER_FDIV32_N8))
#define IS_LL_TIM_BREAK_POLARITY(__VALUE__) (((__VALUE__) == LL_TIM_BREAK_POLARITY_LOW) \
                                          || ((__VALUE__) == LL_TIM_BREAK_POLARITY_HIGH))
#define IS_LL_TIM_BREAK_STATE(__VALUE__) (((__VALUE__) == LL_TIM_BREAK_DISABLE) \
                                       || ((__VALUE__) == LL_TIM_BREAK_ENABLE))
#define IS_LL_TIM_CLOCKDIVISION(__VALUE__) (((__VALUE__) == LL_TIM_CLOCKDIVISION_DIV1) \
                                         || ((__VALUE__) == LL_TIM_CLOCKDIVISION_DIV2) \
                                         || ((__VALUE__) == LL_TIM_CLOCKDIVISION_DIV4))
#define IS_LL_TIM_COUNTERMODE(__VALUE__) (((__VALUE__) == LL_TIM_COUNTERMODE_UP) \
                                       || ((__VALUE__) == LL_TIM_COUNTERMODE_DOWN) \
                                       || ((__VALUE__) == LL_TIM_COUNTERMODE_CENTER_UP) \
                                       || ((__VALUE__) == LL_TIM_COUNTERMODE_CENTER_DOWN) \
                                       || ((__VALUE__) == LL_TIM_COUNTERMODE_CENTER_UP_DOWN))
#define IS_LL_TIM_ENCODERMODE(__VALUE__) (((__VALUE__) == LL_TIM_ENCODERMODE_X2_TI1) \
                                       || ((__VALUE__) == LL_TIM_ENCODERMODE_X2_TI2) \
                                       || ((__VALUE__) == LL_TIM_ENCODERMODE_X4_TI12))
#define IS_LL_TIM_ICPSC(__VALUE__) (((__VALUE__) == LL_TIM_ICPSC_DIV1) \
                                 || ((__VALUE__) == LL_TIM_ICPSC_DIV2) \
                                 || ((__VALUE__) == LL_TIM_ICPSC_DIV4) \
                                 || ((__VALUE__) == LL_TIM_ICPSC_DIV8))
#define IS_LL_TIM_IC_FILTER(__VALUE__) (((__VALUE__) == LL_TIM_IC_FILTER_FDIV1) \
                                     || ((__VALUE__) == LL_TIM_IC_FILTER_FDIV1_N2) \
                                     || ((__VALUE__) == LL_TIM_IC_FILTER_FDIV1_N4) \
                                     || ((__VALUE__) == LL_TIM_IC_FILTER_FDIV1_N8) \
                                     || ((__VALUE__) == LL_TIM_IC_FILTER_FDIV2_N6) \
                                     || ((__VALUE__) == LL_TIM_IC_FILTER_FDIV2_N8) \
                                     || ((__VALUE__) == LL_TIM_IC_FILTER_FDIV4_N6) \
                                     || ((__VALUE__) == LL_TIM_IC_FILTER_FDIV4_N8) \
                                     || ((__VALUE__) == LL_TIM_IC_FILTER_FDIV8_N6) \
                                     || ((__VALUE__) == LL_TIM_IC_FILTER_FDIV8_N8) \
                                     || ((__VALUE__) == LL_TIM_IC_FILTER_FDIV16_N5) \
                                     || ((__VALUE__) == LL_TIM_IC_FILTER_FDIV16_N6) \
                                     || ((__VALUE__) == LL_TIM_IC_FILTER_FDIV16_N8) \
                                     || ((__VALUE__) == LL_TIM_IC_FILTER_FDIV32_N5) \
                                     || ((__VALUE__) == LL_TIM_IC_FILTER_FDIV32_N6) \
                                     || ((__VALUE__) == LL_TIM_IC_FILTER_FDIV32_N8))
#define IS_LL_TIM_IC_POLARITY(__VALUE__) (((__VALUE__) == LL_TIM_IC_POLARITY_RISING) \
                                       || ((__VALUE__) == LL_TIM_IC_POLARITY_FALLING) \
                                       || ((__VALUE__) == LL_TIM_IC_POLARITY_BOTHEDGE))
#define IS_LL_TIM_IC_POLARITY_ENCODER(__VALUE__) (((__VALUE__) == LL_TIM_IC_POLARITY_RISING) \
                                               || ((__VALUE__) == LL_TIM_IC_POLARITY_FALLING))
#define IS_LL_TIM_LOCK_LEVEL(__VALUE__) (((__VALUE__) == LL_TIM_LOCKLEVEL_OFF) \
                                      || ((__VALUE__) == LL_TIM_LOCKLEVEL_1)   \
                                      || ((__VALUE__) == LL_TIM_LOCKLEVEL_2)   \
                                      || ((__VALUE__) == LL_TIM_LOCKLEVEL_3))
#define IS_LL_TIM_OCIDLESTATE(__VALUE__) (((__VALUE__) == LL_TIM_OCIDLESTATE_LOW) \
                                       || ((__VALUE__) == LL_TIM_OCIDLESTATE_HIGH))
#define IS_LL_TIM_OCMODE(__VALUE__) (((__VALUE__) == LL_TIM_OCMODE_FROZEN) \
                                  || ((__VALUE__) == LL_TIM_OCMODE_ACTIVE) \
                                  || ((__VALUE__) == LL_TIM_OCMODE_INACTIVE) \
                                  || ((__VALUE__) == LL_TIM_OCMODE_TOGGLE) \
                                  || ((__VALUE__) == LL_TIM_OCMODE_FORCED_INACTIVE) \
                                  || ((__VALUE__) == LL_TIM_OCMODE_FORCED_ACTIVE) \
                                  || ((__VALUE__) == LL_TIM_OCMODE_PWM1) \
                                  || ((__VALUE__) == LL_TIM_OCMODE_PWM2) \
                                  || ((__VALUE__) == LL_TIM_OCMODE_RETRIG_OPM1) \
                                  || ((__VALUE__) == LL_TIM_OCMODE_RETRIG_OPM2) \
                                  || ((__VALUE__) == LL_TIM_OCMODE_COMBINED_PWM1) \
                                  || ((__VALUE__) == LL_TIM_OCMODE_COMBINED_PWM2) \
                                  || ((__VALUE__) == LL_TIM_OCMODE_ASSYMETRIC_PWM1) \
                                  || ((__VALUE__) == LL_TIM_OCMODE_ASSYMETRIC_PWM2))
#define IS_LL_TIM_OCPOLARITY(__VALUE__) (((__VALUE__) == LL_TIM_OCPOLARITY_HIGH) \
                                      || ((__VALUE__) == LL_TIM_OCPOLARITY_LOW))
#define IS_LL_TIM_OCSTATE(__VALUE__) (((__VALUE__) == LL_TIM_OCSTATE_DISABLE) \
                                   || ((__VALUE__) == LL_TIM_OCSTATE_ENABLE))
#define IS_LL_TIM_OSSI_STATE(__VALUE__) (((__VALUE__) == LL_TIM_OSSI_DISABLE) \
                                      || ((__VALUE__) == LL_TIM_OSSI_ENABLE))
#define IS_LL_TIM_OSSR_STATE(__VALUE__) (((__VALUE__) == LL_TIM_OSSR_DISABLE) \
                                     || ((__VALUE__) == LL_TIM_OSSR_ENABLE))
#define assert_param(expr) ((void)0U)
