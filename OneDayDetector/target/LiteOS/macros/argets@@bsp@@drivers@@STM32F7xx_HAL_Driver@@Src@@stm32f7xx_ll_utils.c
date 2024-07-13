#define IS_LL_UTILS_APB1_DIV(__VALUE__) (((__VALUE__) == LL_RCC_APB1_DIV_1) \
                                      || ((__VALUE__) == LL_RCC_APB1_DIV_2) \
                                      || ((__VALUE__) == LL_RCC_APB1_DIV_4) \
                                      || ((__VALUE__) == LL_RCC_APB1_DIV_8) \
                                      || ((__VALUE__) == LL_RCC_APB1_DIV_16))
#define IS_LL_UTILS_APB2_DIV(__VALUE__) (((__VALUE__) == LL_RCC_APB2_DIV_1) \
                                      || ((__VALUE__) == LL_RCC_APB2_DIV_2) \
                                      || ((__VALUE__) == LL_RCC_APB2_DIV_4) \
                                      || ((__VALUE__) == LL_RCC_APB2_DIV_8) \
                                      || ((__VALUE__) == LL_RCC_APB2_DIV_16))
#define IS_LL_UTILS_HSE_BYPASS(__STATE__) (((__STATE__) == LL_UTILS_HSEBYPASS_ON) \
                                        || ((__STATE__) == LL_UTILS_HSEBYPASS_OFF))
#define IS_LL_UTILS_HSE_FREQUENCY(__FREQUENCY__) (((__FREQUENCY__) >= UTILS_HSE_FREQUENCY_MIN) && ((__FREQUENCY__) <= UTILS_HSE_FREQUENCY_MAX))
#define IS_LL_UTILS_PLLM_VALUE(__VALUE__) (((__VALUE__) == LL_RCC_PLLM_DIV_2)  \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_3)  \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_4)  \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_5)  \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_6)  \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_7)  \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_8)  \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_9)  \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_10) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_11) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_12) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_13) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_14) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_15) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_16) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_17) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_18) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_19) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_20) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_21) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_22) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_23) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_24) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_25) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_26) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_27) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_28) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_29) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_30) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_31) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_32) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_33) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_34) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_35) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_36) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_37) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_38) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_39) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_40) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_41) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_42) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_43) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_44) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_45) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_46) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_47) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_48) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_49) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_50) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_51) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_52) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_53) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_54) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_55) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_56) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_57) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_58) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_59) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_60) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_61) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_62) \
                                        || ((__VALUE__) == LL_RCC_PLLM_DIV_63))
#define IS_LL_UTILS_PLLN_VALUE(__VALUE__) ((50 <= (__VALUE__)) && ((__VALUE__) <= 432))
#define IS_LL_UTILS_PLLP_VALUE(__VALUE__) (((__VALUE__) == LL_RCC_PLLP_DIV_2) \
                                        || ((__VALUE__) == LL_RCC_PLLP_DIV_4) \
                                        || ((__VALUE__) == LL_RCC_PLLP_DIV_6) \
                                        || ((__VALUE__) == LL_RCC_PLLP_DIV_8))
#define IS_LL_UTILS_PLLVCO_INPUT(__VALUE__)  ((UTILS_PLLVCO_INPUT_MIN <= (__VALUE__)) && ((__VALUE__) <= UTILS_PLLVCO_INPUT_MAX))
#define IS_LL_UTILS_PLLVCO_OUTPUT(__VALUE__) ((UTILS_PLLVCO_OUTPUT_MIN <= (__VALUE__)) && ((__VALUE__) <= UTILS_PLLVCO_OUTPUT_MAX))
#define IS_LL_UTILS_PLL_FREQUENCY(__VALUE__) ((LL_PWR_GetRegulVoltageScaling() == LL_PWR_REGU_VOLTAGE_SCALE1) ? ((__VALUE__) <= UTILS_MAX_FREQUENCY_SCALE1) : \
                                              (LL_PWR_GetRegulVoltageScaling() == LL_PWR_REGU_VOLTAGE_SCALE2) ? ((__VALUE__) <= UTILS_MAX_FREQUENCY_SCALE2) : \
                                              ((__VALUE__) <= UTILS_MAX_FREQUENCY_SCALE3))
#define IS_LL_UTILS_SYSCLK_DIV(__VALUE__) (((__VALUE__) == LL_RCC_SYSCLK_DIV_1)   \
                                        || ((__VALUE__) == LL_RCC_SYSCLK_DIV_2)   \
                                        || ((__VALUE__) == LL_RCC_SYSCLK_DIV_4)   \
                                        || ((__VALUE__) == LL_RCC_SYSCLK_DIV_8)   \
                                        || ((__VALUE__) == LL_RCC_SYSCLK_DIV_16)  \
                                        || ((__VALUE__) == LL_RCC_SYSCLK_DIV_64)  \
                                        || ((__VALUE__) == LL_RCC_SYSCLK_DIV_128) \
                                        || ((__VALUE__) == LL_RCC_SYSCLK_DIV_256) \
                                        || ((__VALUE__) == LL_RCC_SYSCLK_DIV_512))
#define assert_param(expr) ((void)0U)
