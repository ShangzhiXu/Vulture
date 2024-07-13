#define IS_LL_RCC_CEC_CLKSOURCE(__VALUE__)    (((__VALUE__) == LL_RCC_CEC_CLKSOURCE))
#define IS_LL_RCC_DFSDM_AUDIO_CLKSOURCE(__VALUE__)    (((__VALUE__) == LL_RCC_DFSDM1_AUDIO_CLKSOURCE))
#define IS_LL_RCC_DFSDM_CLKSOURCE(__VALUE__)    (((__VALUE__) == LL_RCC_DFSDM1_CLKSOURCE))
#define IS_LL_RCC_DSI_CLKSOURCE(__VALUE__)    (((__VALUE__) == LL_RCC_DSI_CLKSOURCE))
#define IS_LL_RCC_I2C_CLKSOURCE(__VALUE__)    (((__VALUE__) == LL_RCC_I2C1_CLKSOURCE) \
                                            || ((__VALUE__) == LL_RCC_I2C2_CLKSOURCE) \
                                            || ((__VALUE__) == LL_RCC_I2C3_CLKSOURCE) \
                                            || ((__VALUE__) == LL_RCC_I2C4_CLKSOURCE))
#define IS_LL_RCC_I2C_CLKSOURCE(__VALUE__)    (((__VALUE__) == LL_RCC_I2C1_CLKSOURCE) \
                                            || ((__VALUE__) == LL_RCC_I2C2_CLKSOURCE) \
                                            || ((__VALUE__) == LL_RCC_I2C3_CLKSOURCE))
#define IS_LL_RCC_I2S_CLKSOURCE(__VALUE__)    (((__VALUE__) == LL_RCC_I2S1_CLKSOURCE))
#define IS_LL_RCC_LPTIM_CLKSOURCE(__VALUE__)  (((__VALUE__) == LL_RCC_LPTIM1_CLKSOURCE))
#define IS_LL_RCC_LTDC_CLKSOURCE(__VALUE__)    (((__VALUE__) == LL_RCC_LTDC_CLKSOURCE))
#define IS_LL_RCC_RNG_CLKSOURCE(__VALUE__)    (((__VALUE__) == LL_RCC_RNG_CLKSOURCE))
#define IS_LL_RCC_SAI_CLKSOURCE(__VALUE__)    (((__VALUE__) == LL_RCC_SAI1_CLKSOURCE) \
                                            || ((__VALUE__) == LL_RCC_SAI2_CLKSOURCE))
#define IS_LL_RCC_SDMMC_CLKSOURCE(__VALUE__)  (((__VALUE__) == LL_RCC_SDMMC1_CLKSOURCE) \
                                            || ((__VALUE__) == LL_RCC_SDMMC2_CLKSOURCE))
#define IS_LL_RCC_SDMMC_CLKSOURCE(__VALUE__)  (((__VALUE__) == LL_RCC_SDMMC1_CLKSOURCE))
#define IS_LL_RCC_SPDIFRX_CLKSOURCE(__VALUE__)    (((__VALUE__) == LL_RCC_SPDIFRX1_CLKSOURCE))
#define IS_LL_RCC_UART_CLKSOURCE(__VALUE__)    (((__VALUE__) == LL_RCC_UART4_CLKSOURCE) \
                                             || ((__VALUE__) == LL_RCC_UART5_CLKSOURCE) \
                                             || ((__VALUE__) == LL_RCC_UART7_CLKSOURCE) \
                                             || ((__VALUE__) == LL_RCC_UART8_CLKSOURCE))
#define IS_LL_RCC_USART_CLKSOURCE(__VALUE__)  (((__VALUE__) == LL_RCC_USART1_CLKSOURCE) \
                                            || ((__VALUE__) == LL_RCC_USART2_CLKSOURCE) \
                                            || ((__VALUE__) == LL_RCC_USART3_CLKSOURCE) \
                                            || ((__VALUE__) == LL_RCC_USART6_CLKSOURCE))
#define IS_LL_RCC_USB_CLKSOURCE(__VALUE__)    (((__VALUE__) == LL_RCC_USB_CLKSOURCE))
  #define assert_param(expr) ((void)0U)
