#define IS_LL_LPTIM_CLOCK_PRESCALER(__VALUE__) (((__VALUE__) == LL_LPTIM_PRESCALER_DIV1)   \
                                             || ((__VALUE__) == LL_LPTIM_PRESCALER_DIV2)   \
                                             || ((__VALUE__) == LL_LPTIM_PRESCALER_DIV4)   \
                                             || ((__VALUE__) == LL_LPTIM_PRESCALER_DIV8)   \
                                             || ((__VALUE__) == LL_LPTIM_PRESCALER_DIV16)  \
                                             || ((__VALUE__) == LL_LPTIM_PRESCALER_DIV32)  \
                                             || ((__VALUE__) == LL_LPTIM_PRESCALER_DIV64)  \
                                             || ((__VALUE__) == LL_LPTIM_PRESCALER_DIV128))
#define IS_LL_LPTIM_CLOCK_SOURCE(__VALUE__) (((__VALUE__) == LL_LPTIM_CLK_SOURCE_INTERNAL) \
                                          || ((__VALUE__) == LL_LPTIM_CLK_SOURCE_EXTERNAL))
#define IS_LL_LPTIM_OUTPUT_POLARITY(__VALUE__) (((__VALUE__) == LL_LPTIM_OUTPUT_POLARITY_REGULAR) \
                                             || ((__VALUE__) == LL_LPTIM_OUTPUT_POLARITY_INVERSE))
#define IS_LL_LPTIM_WAVEFORM(__VALUE__) (((__VALUE__) == LL_LPTIM_OUTPUT_WAVEFORM_PWM) \
                                      || ((__VALUE__) == LL_LPTIM_OUTPUT_WAVEFORM_SETONCE))
  #define assert_param(expr) ((void)0U)
