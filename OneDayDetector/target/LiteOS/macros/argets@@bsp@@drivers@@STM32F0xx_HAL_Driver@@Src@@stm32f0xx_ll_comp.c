#define IS_LL_COMP_INPUT_HYSTERESIS(__INPUT_HYSTERESIS__)                      \
  (   ((__INPUT_HYSTERESIS__) == LL_COMP_HYSTERESIS_NONE)                      \
   || ((__INPUT_HYSTERESIS__) == LL_COMP_HYSTERESIS_LOW)                       \
   || ((__INPUT_HYSTERESIS__) == LL_COMP_HYSTERESIS_MEDIUM)                    \
   || ((__INPUT_HYSTERESIS__) == LL_COMP_HYSTERESIS_HIGH)                      \
  )
#define IS_LL_COMP_INPUT_MINUS(__COMP_INSTANCE__, __INPUT_MINUS__)             \
  (   ((__INPUT_MINUS__) == LL_COMP_INPUT_MINUS_1_4VREFINT)                    \
   || ((__INPUT_MINUS__) == LL_COMP_INPUT_MINUS_1_2VREFINT)                    \
   || ((__INPUT_MINUS__) == LL_COMP_INPUT_MINUS_3_4VREFINT)                    \
   || ((__INPUT_MINUS__) == LL_COMP_INPUT_MINUS_VREFINT)                       \
   || ((__INPUT_MINUS__) == LL_COMP_INPUT_MINUS_DAC1_CH1)                      \
   || ((__INPUT_MINUS__) == LL_COMP_INPUT_MINUS_DAC1_CH2)                      \
   || ((__INPUT_MINUS__) == LL_COMP_INPUT_MINUS_IO1)                           \
  )
#define IS_LL_COMP_INPUT_PLUS(__COMP_INSTANCE__, __INPUT_PLUS__)               \
  (((__COMP_INSTANCE__) == COMP1)                                              \
    ? (                                                                        \
          ((__INPUT_PLUS__) == LL_COMP_INPUT_PLUS_IO1)                         \
       || ((__INPUT_PLUS__) == LL_COMP_INPUT_PLUS_DAC1_CH1)                    \
      )                                                                        \
      :                                                                        \
      (                                                                        \
          ((__INPUT_PLUS__) == LL_COMP_INPUT_PLUS_IO1)                         \
      )                                                                        \
  )
#define IS_LL_COMP_OUTPUT_POLARITY(__POLARITY__)                               \
  (   ((__POLARITY__) == LL_COMP_OUTPUTPOL_NONINVERTED)                        \
   || ((__POLARITY__) == LL_COMP_OUTPUTPOL_INVERTED)                           \
  )
#define IS_LL_COMP_OUTPUT_SELECTION(__OUTPUT_SELECTION__)                      \
  (   ((__OUTPUT_SELECTION__) == LL_COMP_OUTPUT_NONE)                          \
   || ((__OUTPUT_SELECTION__) == LL_COMP_OUTPUT_TIM1_BKIN)                     \
   || ((__OUTPUT_SELECTION__) == LL_COMP_OUTPUT_TIM1_IC1)                      \
   || ((__OUTPUT_SELECTION__) == LL_COMP_OUTPUT_TIM1_OCCLR)                    \
   || ((__OUTPUT_SELECTION__) == LL_COMP_OUTPUT_TIM2_IC4)                      \
   || ((__OUTPUT_SELECTION__) == LL_COMP_OUTPUT_TIM2_OCCLR)                    \
   || ((__OUTPUT_SELECTION__) == LL_COMP_OUTPUT_TIM3_IC1)                      \
   || ((__OUTPUT_SELECTION__) == LL_COMP_OUTPUT_TIM3_OCCLR)                    \
  )
#define IS_LL_COMP_POWER_MODE(__POWER_MODE__)                                  \
  (   ((__POWER_MODE__) == LL_COMP_POWERMODE_HIGHSPEED)                        \
   || ((__POWER_MODE__) == LL_COMP_POWERMODE_MEDIUMSPEED)                      \
   || ((__POWER_MODE__) == LL_COMP_POWERMODE_LOWPOWER)                         \
   || ((__POWER_MODE__) == LL_COMP_POWERMODE_ULTRALOWPOWER)                    \
  )
  #define assert_param(expr) ((void)0U)
