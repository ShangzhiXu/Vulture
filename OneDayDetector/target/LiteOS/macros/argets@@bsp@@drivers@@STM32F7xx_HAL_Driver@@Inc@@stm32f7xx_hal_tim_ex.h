#define IS_TIM_BREAKINPUT(__BREAKINPUT__)  (((__BREAKINPUT__) == TIM_BREAKINPUT_BRK)  || \
                                            ((__BREAKINPUT__) == TIM_BREAKINPUT_BRK2))
#define IS_TIM_BREAKINPUTSOURCE(__SOURCE__)  (((__SOURCE__) == TIM_BREAKINPUTSOURCE_BKIN)  || \
                                              ((__SOURCE__) == TIM_BREAKINPUTSOURCE_DFSDM))
#define IS_TIM_BREAKINPUTSOURCE_POLARITY(__POLARITY__)  (((__POLARITY__) == TIM_BREAKINPUTSOURCE_POLARITY_LOW)  || \
                                                         ((__POLARITY__) == TIM_BREAKINPUTSOURCE_POLARITY_HIGH))
#define IS_TIM_BREAKINPUTSOURCE_STATE(__STATE__)  (((__STATE__) == TIM_BREAKINPUTSOURCE_DISABLE)  || \
                                                   ((__STATE__) == TIM_BREAKINPUTSOURCE_ENABLE))
#define IS_TIM_REMAP(__TIM_REMAP__)  (((__TIM_REMAP__) == TIM_TIM2_TIM8_TRGO)||\
                                      ((__TIM_REMAP__) == TIM_TIM2_ETH_PTP)  ||\
                                      ((__TIM_REMAP__) == TIM_TIM2_USBFS_SOF)||\
                                      ((__TIM_REMAP__) == TIM_TIM2_USBHS_SOF)||\
                                      ((__TIM_REMAP__) == TIM_TIM5_GPIO)     ||\
                                      ((__TIM_REMAP__) == TIM_TIM5_LSI)      ||\
                                      ((__TIM_REMAP__) == TIM_TIM5_LSE)      ||\
                                      ((__TIM_REMAP__) == TIM_TIM5_RTC)      ||\
                                      ((__TIM_REMAP__) == TIM_TIM11_GPIO)    ||\
                                      ((__TIM_REMAP__) == TIM_TIM11_SPDIFRX) ||\
                                      ((__TIM_REMAP__) == TIM_TIM11_HSE)     ||\
                                      ((__TIM_REMAP__) == TIM_TIM11_MCO1))
