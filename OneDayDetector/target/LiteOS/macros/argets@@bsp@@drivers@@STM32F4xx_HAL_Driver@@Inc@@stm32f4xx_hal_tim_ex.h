#define IS_TIM_REMAP(INSTANCE, TIM_REMAP)                                       \
        ((((INSTANCE) == TIM2)  && (((TIM_REMAP) == TIM_TIM2_TIM8_TRGO)      || \
                                    ((TIM_REMAP) == TIM_TIM2_USBFS_SOF)      || \
                                    ((TIM_REMAP) == TIM_TIM2_USBHS_SOF)))    || \
         (((INSTANCE) == TIM5)  && (((TIM_REMAP) == TIM_TIM5_GPIO)           || \
                                    ((TIM_REMAP) == TIM_TIM5_LSI)            || \
                                    ((TIM_REMAP) == TIM_TIM5_LSE)            || \
                                    ((TIM_REMAP) == TIM_TIM5_RTC)))          || \
         (((INSTANCE) == TIM11) && (((TIM_REMAP) == TIM_TIM11_GPIO)          || \
                                    ((TIM_REMAP) == TIM_TIM11_SPDIFRX)       || \
                                    ((TIM_REMAP) == TIM_TIM11_HSE))))
#define IS_TIM_REMAP(INSTANCE, TIM_REMAP)                                       \
        ((((INSTANCE) == TIM2)  && (((TIM_REMAP) == TIM_TIM2_TIM8_TRGO)      || \
                                    ((TIM_REMAP) == TIM_TIM2_USBFS_SOF)      || \
                                    ((TIM_REMAP) == TIM_TIM2_USBHS_SOF)))    || \
         (((INSTANCE) == TIM5)  && (((TIM_REMAP) == TIM_TIM5_GPIO)           || \
                                    ((TIM_REMAP) == TIM_TIM5_LSI)            || \
                                    ((TIM_REMAP) == TIM_TIM5_LSE)            || \
                                    ((TIM_REMAP) == TIM_TIM5_RTC)))          || \
         (((INSTANCE) == TIM11) && (((TIM_REMAP) == TIM_TIM11_GPIO)          || \
                                    ((TIM_REMAP) == TIM_TIM11_HSE)))         || \
         (((INSTANCE) == TIM1)  && (((TIM_REMAP) == TIM_TIM1_TIM3_TRGO)      || \
                                    ((TIM_REMAP) == TIM_TIM1_LPTIM)))        || \
         (((INSTANCE) == TIM5)  && (((TIM_REMAP) == TIM_TIM5_TIM3_TRGO)      || \
                                    ((TIM_REMAP) == TIM_TIM5_LPTIM)))        || \
         (((INSTANCE) == TIM9)  && (((TIM_REMAP) == TIM_TIM9_TIM3_TRGO)      || \
                                    ((TIM_REMAP) == TIM_TIM9_LPTIM))))
#define IS_TIM_REMAP(INSTANCE, TIM_REMAP)                                       \
        ((((INSTANCE) == TIM2)  && (((TIM_REMAP) == TIM_TIM2_TIM8_TRGO)      || \
                                    ((TIM_REMAP) == TIM_TIM2_USBFS_SOF)      || \
                                    ((TIM_REMAP) == TIM_TIM2_USBHS_SOF)))    || \
         (((INSTANCE) == TIM5)  && (((TIM_REMAP) == TIM_TIM5_GPIO)           || \
                                    ((TIM_REMAP) == TIM_TIM5_LSI)            || \
                                    ((TIM_REMAP) == TIM_TIM5_LSE)            || \
                                    ((TIM_REMAP) == TIM_TIM5_RTC)))          || \
         (((INSTANCE) == TIM11) && (((TIM_REMAP) == TIM_TIM11_GPIO)          || \
                                    ((TIM_REMAP) == TIM_TIM11_HSE))))
#define IS_TIM_REMAP(INSTANCE, TIM_REMAP)                                       \
        ((((INSTANCE) == TIM2)  && (((TIM_REMAP) == TIM_TIM2_ETH_PTP)        || \
                                    ((TIM_REMAP) == TIM_TIM2_USBFS_SOF)      || \
                                    ((TIM_REMAP) == TIM_TIM2_USBHS_SOF)))    || \
         (((INSTANCE) == TIM5)  && (((TIM_REMAP) == TIM_TIM5_GPIO)           || \
                                    ((TIM_REMAP) == TIM_TIM5_LSI)            || \
                                    ((TIM_REMAP) == TIM_TIM5_LSE)            || \
                                    ((TIM_REMAP) == TIM_TIM5_RTC)))          || \
         (((INSTANCE) == TIM11) && (((TIM_REMAP) == TIM_TIM11_GPIO)          || \
                                    ((TIM_REMAP) == TIM_TIM11_HSE))))
#define IS_TIM_REMAP(INSTANCE, TIM_REMAP)                                       \
        ((((INSTANCE) == TIM5)  && (((TIM_REMAP) == TIM_TIM5_GPIO)           || \
                                    ((TIM_REMAP) == TIM_TIM5_LSI)            || \
                                    ((TIM_REMAP) == TIM_TIM5_LSE)            || \
                                    ((TIM_REMAP) == TIM_TIM5_RTC)))          || \
         (((INSTANCE) == TIM11) && (((TIM_REMAP) == TIM_TIM11_GPIO)          || \
                                    ((TIM_REMAP) == TIM_TIM11_HSE))))
