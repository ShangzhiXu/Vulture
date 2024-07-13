#define IS_DFSDM_BREAK_SIGNALS(VALUE)                  ((VALUE) <= 0xFU)
#define IS_DFSDM_CHANNEL_DATA_PACKING(MODE)           (((MODE) == DFSDM_CHANNEL_STANDARD_MODE) || \
                                                       ((MODE) == DFSDM_CHANNEL_INTERLEAVED_MODE) || \
                                                       ((MODE) == DFSDM_CHANNEL_DUAL_MODE))
#define IS_DFSDM_CHANNEL_FILTER_ORDER(ORDER)          (((ORDER) == DFSDM_CHANNEL_FASTSINC_ORDER) || \
                                                       ((ORDER) == DFSDM_CHANNEL_SINC1_ORDER) || \
                                                       ((ORDER) == DFSDM_CHANNEL_SINC2_ORDER) || \
                                                       ((ORDER) == DFSDM_CHANNEL_SINC3_ORDER))
#define IS_DFSDM_CHANNEL_FILTER_OVS_RATIO(RATIO)       ((1 <= (RATIO)) && ((RATIO) <= 32))
#define IS_DFSDM_CHANNEL_INPUT(INPUT)                 (((INPUT) == DFSDM_CHANNEL_EXTERNAL_INPUTS) || \
                                                       ((INPUT) == DFSDM_CHANNEL_INTERNAL_REGISTER))
#define IS_DFSDM_CHANNEL_INPUT_PINS(PINS)             (((PINS) == DFSDM_CHANNEL_SAME_CHANNEL_PINS) || \
                                                       ((PINS) == DFSDM_CHANNEL_FOLLOWING_CHANNEL_PINS))
#define IS_DFSDM_CHANNEL_OFFSET(VALUE)                 ((-8388608 <= (VALUE)) && ((VALUE) <= 8388607))
#define IS_DFSDM_CHANNEL_OUTPUT_CLOCK(CLOCK)          (((CLOCK) == DFSDM_CHANNEL_OUTPUT_CLOCK_SYSTEM) || \
                                                       ((CLOCK) == DFSDM_CHANNEL_OUTPUT_CLOCK_AUDIO))
#define IS_DFSDM_CHANNEL_OUTPUT_CLOCK_DIVIDER(DIVIDER) ((2 <= (DIVIDER)) && ((DIVIDER) <= 256))
#define IS_DFSDM_CHANNEL_RIGHT_BIT_SHIFT(VALUE)        ((VALUE) <= 0x1F)
#define IS_DFSDM_CHANNEL_SCD_THRESHOLD(VALUE)          ((VALUE) <= 0xFF)
#define IS_DFSDM_CHANNEL_SERIAL_INTERFACE_TYPE(MODE)  (((MODE) == DFSDM_CHANNEL_SPI_RISING) || \
                                                       ((MODE) == DFSDM_CHANNEL_SPI_FALLING) || \
                                                       ((MODE) == DFSDM_CHANNEL_MANCHESTER_RISING) || \
                                                       ((MODE) == DFSDM_CHANNEL_MANCHESTER_FALLING))
#define IS_DFSDM_CHANNEL_SPI_CLOCK(TYPE)              (((TYPE) == DFSDM_CHANNEL_SPI_CLOCK_EXTERNAL) || \
                                                       ((TYPE) == DFSDM_CHANNEL_SPI_CLOCK_INTERNAL) || \
                                                       ((TYPE) == DFSDM_CHANNEL_SPI_CLOCK_INTERNAL_DIV2_FALLING) || \
                                                       ((TYPE) == DFSDM_CHANNEL_SPI_CLOCK_INTERNAL_DIV2_RISING))
#define IS_DFSDM_CONTINUOUS_MODE(MODE)                (((MODE) == DFSDM_CONTINUOUS_CONV_OFF)  || \
                                                       ((MODE) == DFSDM_CONTINUOUS_CONV_ON))
#define IS_DFSDM_FILTER_AWD_DATA_SOURCE(DATA)         (((DATA) == DFSDM_FILTER_AWD_FILTER_DATA)  || \
                                                       ((DATA) == DFSDM_FILTER_AWD_CHANNEL_DATA))
#define IS_DFSDM_FILTER_AWD_THRESHOLD(VALUE)           ((-8388608 <= (VALUE)) && ((VALUE) <= 8388607))
#define IS_DFSDM_FILTER_EXT_TRIG(TRIG)                (((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM1_TRGO) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM1_TRGO2)|| \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM8_TRGO) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM8_TRGO2)|| \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM3_TRGO) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM4_TRGO) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM10_OC1) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM6_TRGO) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM7_TRGO) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_EXTI11)    || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_EXTI15)    ||\
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_LPTIM1_OUT))
#define IS_DFSDM_FILTER_EXT_TRIG_EDGE(EDGE)           (((EDGE) == DFSDM_FILTER_EXT_TRIG_RISING_EDGE)  || \
                                                       ((EDGE) == DFSDM_FILTER_EXT_TRIG_FALLING_EDGE)  || \
                                                       ((EDGE) == DFSDM_FILTER_EXT_TRIG_BOTH_EDGES))
#define IS_DFSDM_FILTER_INJ_TRIGGER(TRIG)             (((TRIG) == DFSDM_FILTER_SW_TRIGGER) || \
                                                       ((TRIG) == DFSDM_FILTER_SYNC_TRIGGER) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIGGER))
#define IS_DFSDM_FILTER_INTEGRATOR_OVS_RATIO(RATIO)    ((1 <= (RATIO)) && ((RATIO) <= 256))
#define IS_DFSDM_FILTER_OVS_RATIO(RATIO)               ((1 <= (RATIO)) && ((RATIO) <= 1024))
#define IS_DFSDM_FILTER_REG_TRIGGER(TRIG)             (((TRIG) == DFSDM_FILTER_SW_TRIGGER) || \
                                                       ((TRIG) == DFSDM_FILTER_SYNC_TRIGGER))
#define IS_DFSDM_FILTER_SINC_ORDER(ORDER)             (((ORDER) == DFSDM_FILTER_FASTSINC_ORDER) || \
                                                       ((ORDER) == DFSDM_FILTER_SINC1_ORDER) || \
                                                       ((ORDER) == DFSDM_FILTER_SINC2_ORDER) || \
                                                       ((ORDER) == DFSDM_FILTER_SINC3_ORDER) || \
                                                       ((ORDER) == DFSDM_FILTER_SINC4_ORDER) || \
                                                       ((ORDER) == DFSDM_FILTER_SINC5_ORDER))
#define IS_DFSDM_INJECTED_CHANNEL(CHANNEL)            (((CHANNEL) != 0) && ((CHANNEL) <= 0x000F00FFU))
#define IS_DFSDM_REGULAR_CHANNEL(CHANNEL)             (((CHANNEL) == DFSDM_CHANNEL_0)  || \
                                                       ((CHANNEL) == DFSDM_CHANNEL_1)  || \
                                                       ((CHANNEL) == DFSDM_CHANNEL_2)  || \
                                                       ((CHANNEL) == DFSDM_CHANNEL_3)  || \
                                                       ((CHANNEL) == DFSDM_CHANNEL_4)  || \
                                                       ((CHANNEL) == DFSDM_CHANNEL_5)  || \
                                                       ((CHANNEL) == DFSDM_CHANNEL_6)  || \
                                                       ((CHANNEL) == DFSDM_CHANNEL_7))
#define __HAL_DFSDM_CHANNEL_RESET_HANDLE_STATE(__HANDLE__) do{                                                      \
                                                               (__HANDLE__)->State = HAL_DFSDM_CHANNEL_STATE_RESET; \
                                                               (__HANDLE__)->MspInitCallback = NULL;                \
                                                               (__HANDLE__)->MspDeInitCallback = NULL;              \
                                                             } while(0)
#define __HAL_DFSDM_CHANNEL_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_DFSDM_CHANNEL_STATE_RESET)
#define __HAL_DFSDM_FILTER_RESET_HANDLE_STATE(__HANDLE__) do{                                                     \
                                                              (__HANDLE__)->State = HAL_DFSDM_FILTER_STATE_RESET; \
                                                              (__HANDLE__)->MspInitCallback = NULL;               \
                                                              (__HANDLE__)->MspDeInitCallback = NULL;             \
                                                            } while(0)
#define __HAL_DFSDM_FILTER_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_DFSDM_FILTER_STATE_RESET)
