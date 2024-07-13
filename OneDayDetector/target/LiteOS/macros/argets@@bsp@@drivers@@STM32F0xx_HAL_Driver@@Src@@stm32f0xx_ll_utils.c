#define IS_LL_UTILS_APB1_DIV(__VALUE__) (((__VALUE__) == LL_RCC_APB1_DIV_1) \
                                      || ((__VALUE__) == LL_RCC_APB1_DIV_2) \
                                      || ((__VALUE__) == LL_RCC_APB1_DIV_4) \
                                      || ((__VALUE__) == LL_RCC_APB1_DIV_8) \
                                      || ((__VALUE__) == LL_RCC_APB1_DIV_16))
#define IS_LL_UTILS_HSE_BYPASS(__STATE__) (((__STATE__) == LL_UTILS_HSEBYPASS_ON) \
                                        || ((__STATE__) == LL_UTILS_HSEBYPASS_OFF))
#define IS_LL_UTILS_HSE_FREQUENCY(__FREQUENCY__) (((__FREQUENCY__) >= UTILS_HSE_FREQUENCY_MIN) && ((__FREQUENCY__) <= UTILS_HSE_FREQUENCY_MAX))
#define IS_LL_UTILS_PLLMUL_VALUE(__VALUE__) (((__VALUE__) == LL_RCC_PLL_MUL_2) \
                                          || ((__VALUE__) == LL_RCC_PLL_MUL_3) \
                                          || ((__VALUE__) == LL_RCC_PLL_MUL_4) \
                                          || ((__VALUE__) == LL_RCC_PLL_MUL_5) \
                                          || ((__VALUE__) == LL_RCC_PLL_MUL_6) \
                                          || ((__VALUE__) == LL_RCC_PLL_MUL_7) \
                                          || ((__VALUE__) == LL_RCC_PLL_MUL_8) \
                                          || ((__VALUE__) == LL_RCC_PLL_MUL_9) \
                                          || ((__VALUE__) == LL_RCC_PLL_MUL_10) \
                                          || ((__VALUE__) == LL_RCC_PLL_MUL_11) \
                                          || ((__VALUE__) == LL_RCC_PLL_MUL_12) \
                                          || ((__VALUE__) == LL_RCC_PLL_MUL_13) \
                                          || ((__VALUE__) == LL_RCC_PLL_MUL_14) \
                                          || ((__VALUE__) == LL_RCC_PLL_MUL_15) \
                                          || ((__VALUE__) == LL_RCC_PLL_MUL_16))
#define IS_LL_UTILS_PLL_FREQUENCY(__VALUE__) ((UTILS_PLL_OUTPUT_MIN <= (__VALUE__)) && ((__VALUE__) <= UTILS_PLL_OUTPUT_MAX))
#define IS_LL_UTILS_PREDIV_VALUE(__VALUE__) (((__VALUE__) == LL_RCC_PREDIV_DIV_1)  || ((__VALUE__) == LL_RCC_PREDIV_DIV_2)   || \
                                             ((__VALUE__) == LL_RCC_PREDIV_DIV_3)  || ((__VALUE__) == LL_RCC_PREDIV_DIV_4)   || \
                                             ((__VALUE__) == LL_RCC_PREDIV_DIV_5)  || ((__VALUE__) == LL_RCC_PREDIV_DIV_6)   || \
                                             ((__VALUE__) == LL_RCC_PREDIV_DIV_7)  || ((__VALUE__) == LL_RCC_PREDIV_DIV_8)   || \
                                             ((__VALUE__) == LL_RCC_PREDIV_DIV_9)  || ((__VALUE__) == LL_RCC_PREDIV_DIV_10)  || \
                                             ((__VALUE__) == LL_RCC_PREDIV_DIV_11) || ((__VALUE__) == LL_RCC_PREDIV_DIV_12)  || \
                                             ((__VALUE__) == LL_RCC_PREDIV_DIV_13) || ((__VALUE__) == LL_RCC_PREDIV_DIV_14)  || \
                                             ((__VALUE__) == LL_RCC_PREDIV_DIV_15) || ((__VALUE__) == LL_RCC_PREDIV_DIV_16))
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
