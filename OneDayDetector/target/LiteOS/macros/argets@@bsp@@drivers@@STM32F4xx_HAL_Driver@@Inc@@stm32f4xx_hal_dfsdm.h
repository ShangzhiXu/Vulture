#define IS_DFSDM1_CHANNEL_INSTANCE(INSTANCE)          (((INSTANCE) == DFSDM1_Channel0) || \
                                                       ((INSTANCE) == DFSDM1_Channel1) || \
                                                       ((INSTANCE) == DFSDM1_Channel2) || \
                                                       ((INSTANCE) == DFSDM1_Channel3))
#define IS_DFSDM1_FILTER_INSTANCE(INSTANCE)          (((INSTANCE) == DFSDM1_Filter0) || \
                                                      ((INSTANCE) == DFSDM1_Filter1)) 
#define IS_DFSDM_BITSTREM_CLK_DISTRIBUTION(DISTRIBUTION) (((DISTRIBUTION) == HAL_DFSDM1_CLKIN0_TIM4OC2) || \
                                                          ((DISTRIBUTION) == HAL_DFSDM1_CLKIN2_TIM4OC2) || \
                                                          ((DISTRIBUTION) == HAL_DFSDM1_CLKIN1_TIM4OC1) || \
                                                          ((DISTRIBUTION) == HAL_DFSDM1_CLKIN3_TIM4OC1) || \
                                                          ((DISTRIBUTION) == HAL_DFSDM2_CLKIN0_TIM3OC4) || \
                                                          ((DISTRIBUTION) == HAL_DFSDM2_CLKIN4_TIM3OC4) || \
                                                          ((DISTRIBUTION) == HAL_DFSDM2_CLKIN1_TIM3OC3)|| \
                                                          ((DISTRIBUTION) == HAL_DFSDM2_CLKIN5_TIM3OC3) || \
                                                          ((DISTRIBUTION) == HAL_DFSDM2_CLKIN2_TIM3OC2) || \
                                                          ((DISTRIBUTION) == HAL_DFSDM2_CLKIN6_TIM3OC2) || \
                                                          ((DISTRIBUTION) == HAL_DFSDM2_CLKIN3_TIM3OC1)|| \
                                                          ((DISTRIBUTION) == HAL_DFSDM2_CLKIN7_TIM3OC1))
#define IS_DFSDM_BREAK_SIGNALS(VALUE)                  ((VALUE) <= 0x0FU)
#define IS_DFSDM_CHANNEL_DATA_PACKING(MODE)           (((MODE) == DFSDM_CHANNEL_STANDARD_MODE) || \
                                                       ((MODE) == DFSDM_CHANNEL_INTERLEAVED_MODE) || \
                                                       ((MODE) == DFSDM_CHANNEL_DUAL_MODE))
#define IS_DFSDM_CHANNEL_FILTER_ORDER(ORDER)          (((ORDER) == DFSDM_CHANNEL_FASTSINC_ORDER) || \
                                                       ((ORDER) == DFSDM_CHANNEL_SINC1_ORDER) || \
                                                       ((ORDER) == DFSDM_CHANNEL_SINC2_ORDER) || \
                                                       ((ORDER) == DFSDM_CHANNEL_SINC3_ORDER))
#define IS_DFSDM_CHANNEL_FILTER_OVS_RATIO(RATIO)       ((1U <= (RATIO)) && ((RATIO) <= 32U))
#define IS_DFSDM_CHANNEL_INPUT(INPUT)                 (((INPUT) == DFSDM_CHANNEL_EXTERNAL_INPUTS) || \
                                                       ((INPUT) == DFSDM_CHANNEL_INTERNAL_REGISTER))
#define IS_DFSDM_CHANNEL_INPUT_PINS(PINS)             (((PINS) == DFSDM_CHANNEL_SAME_CHANNEL_PINS) || \
                                                       ((PINS) == DFSDM_CHANNEL_FOLLOWING_CHANNEL_PINS))
#define IS_DFSDM_CHANNEL_OFFSET(VALUE)                 ((-8388608 <= (VALUE)) && ((VALUE) <= 8388607))
#define IS_DFSDM_CHANNEL_OUTPUT_CLOCK(CLOCK)          (((CLOCK) == DFSDM_CHANNEL_OUTPUT_CLOCK_SYSTEM) || \
                                                       ((CLOCK) == DFSDM_CHANNEL_OUTPUT_CLOCK_AUDIO))
#define IS_DFSDM_CHANNEL_OUTPUT_CLOCK_DIVIDER(DIVIDER) ((2U <= (DIVIDER)) && ((DIVIDER) <= 256U))
#define IS_DFSDM_CHANNEL_RIGHT_BIT_SHIFT(VALUE)        ((VALUE) <= 0x1FU)
#define IS_DFSDM_CHANNEL_SCD_THRESHOLD(VALUE)          ((VALUE) <= 0xFFU)
#define IS_DFSDM_CHANNEL_SERIAL_INTERFACE_TYPE(MODE)  (((MODE) == DFSDM_CHANNEL_SPI_RISING) || \
                                                       ((MODE) == DFSDM_CHANNEL_SPI_FALLING) || \
                                                       ((MODE) == DFSDM_CHANNEL_MANCHESTER_RISING) || \
                                                       ((MODE) == DFSDM_CHANNEL_MANCHESTER_FALLING))
#define IS_DFSDM_CHANNEL_SPI_CLOCK(TYPE)              (((TYPE) == DFSDM_CHANNEL_SPI_CLOCK_EXTERNAL) || \
                                                       ((TYPE) == DFSDM_CHANNEL_SPI_CLOCK_INTERNAL) || \
                                                       ((TYPE) == DFSDM_CHANNEL_SPI_CLOCK_INTERNAL_DIV2_FALLING) || \
                                                       ((TYPE) == DFSDM_CHANNEL_SPI_CLOCK_INTERNAL_DIV2_RISING))
#define IS_DFSDM_CLOCKIN_SELECTION(SELECTION)           (((SELECTION) == HAL_DFSDM2_CKIN_PAD) || \
                                                          ((SELECTION) == HAL_DFSDM2_CKIN_DM)  || \
                                                          ((SELECTION) == HAL_DFSDM1_CKIN_PAD) || \
                                                          ((SELECTION) == HAL_DFSDM1_CKIN_DM)) 
#define IS_DFSDM_CLOCKOUT_SELECTION(SELECTION)         (((SELECTION) == HAL_DFSDM2_CKOUT_DFSDM2) || \
                                                          ((SELECTION) == HAL_DFSDM2_CKOUT_M27)    || \
                                                          ((SELECTION) == HAL_DFSDM1_CKOUT_DFSDM1) || \
                                                          ((SELECTION) == HAL_DFSDM1_CKOUT_M27)) 
#define IS_DFSDM_CONTINUOUS_MODE(MODE)                (((MODE) == DFSDM_CONTINUOUS_CONV_OFF)  || \
                                                       ((MODE) == DFSDM_CONTINUOUS_CONV_ON))
#define IS_DFSDM_DATAIN0_SRC_SELECTION(SELECTION)        (((SELECTION) == HAL_DATAIN0_DFSDM2_PAD)    || \
                                                          ((SELECTION) == HAL_DATAIN0_DFSDM2_DATAIN1) || \
                                                          ((SELECTION) == HAL_DATAIN0_DFSDM1_PAD)     || \
                                                          ((SELECTION) == HAL_DATAIN0_DFSDM1_DATAIN1))
#define IS_DFSDM_DATAIN2_SRC_SELECTION(SELECTION)        (((SELECTION) == HAL_DATAIN2_DFSDM2_PAD)    || \
                                                          ((SELECTION) == HAL_DATAIN2_DFSDM2_DATAIN3) || \
                                                          ((SELECTION) == HAL_DATAIN2_DFSDM1_PAD)     || \
                                                          ((SELECTION) == HAL_DATAIN2_DFSDM1_DATAIN3))
#define IS_DFSDM_DATAIN4_SRC_SELECTION(SELECTION)        (((SELECTION) == HAL_DATAIN4_DFSDM2_PAD)    || \
                                                          ((SELECTION) == HAL_DATAIN4_DFSDM2_DATAIN5))
#define IS_DFSDM_DATAIN6_SRC_SELECTION(SELECTION)         (((SELECTION) == HAL_DATAIN6_DFSDM2_PAD)    || \
                                                          ((SELECTION) == HAL_DATAIN6_DFSDM2_DATAIN7))
#define IS_DFSDM_DELAY_CLOCK(CLOCK)                     (((CLOCK) == HAL_MCHDLY_CLOCK_DFSDM2) || \
                                                         ((CLOCK) == HAL_MCHDLY_CLOCK_DFSDM1)) 
#define IS_DFSDM_DFSDM1_BIT_CLK(CLK)                   (((CLK) == DFSDM1_T4_OC2_BITSTREAM_CKIN0)  || \
                                                        ((CLK) == DFSDM1_T4_OC2_BITSTREAM_CKIN2)  || \
                                                        ((CLK) == DFSDM1_T4_OC1_BITSTREAM_CKIN3)  || \
                                                        ((CLK) == DFSDM1_T4_OC1_BITSTREAM_CKIN1)  || \
                                                        ((CLK) <= 0x30U)) 
#define IS_DFSDM_DFSDM1_CLKIN(CLKIN)                   (((CLKIN) == DFSDM1_CKIN_DFSDM2_CKOUT)    || \
                                                        ((CLKIN) == DFSDM1_CKIN_PAD))                                   
#define IS_DFSDM_DFSDM1_CLKOUT(CLKOUT)                 (((CLKOUT) == DFSDM1_CKOUT_DFSDM2_CKOUT)    || \
                                                        ((CLKOUT) == DFSDM1_CKOUT_DFSDM1))
#define IS_DFSDM_DFSDM1_DATA_DISTRIBUTION(DISTRIBUTION)(((DISTRIBUTION) == DFSDM1_DATIN0_TO_DATIN0_PAD )|| \
                                                        ((DISTRIBUTION) == DFSDM1_DATIN0_TO_DATIN1_PAD) || \
                                                        ((DISTRIBUTION) == DFSDM1_DATIN2_TO_DATIN2_PAD) || \
                                                        ((DISTRIBUTION) == DFSDM1_DATIN2_TO_DATIN3_PAD)|| \
                                                        ((DISTRIBUTION) <= 0xCU)) 
#define IS_DFSDM_DFSDM2_BIT_CLK(CLK)                   (((CLK) == DFSDM2_T3_OC4_BITSTREAM_CKIN0)  || \
                                                        ((CLK) == DFSDM2_T3_OC4_BITSTREAM_CKIN4)  || \
                                                        ((CLK) == DFSDM2_T3_OC3_BITSTREAM_CKIN5)  || \
                                                        ((CLK) == DFSDM2_T3_OC3_BITSTREAM_CKIN1)  || \
                                                        ((CLK) == DFSDM2_T3_OC2_BITSTREAM_CKIN6)  || \
                                                        ((CLK) == DFSDM2_T3_OC2_BITSTREAM_CKIN2)  || \
                                                        ((CLK) == DFSDM2_T3_OC1_BITSTREAM_CKIN3)  || \
                                                        ((CLK) == DFSDM2_T3_OC1_BITSTREAM_CKIN7)|| \
                                                        ((CLK) <= 0x1E000U)) 
#define IS_DFSDM_DFSDM2_CLKIN(CLKIN)                   (((CLKIN) == DFSDM2_CKIN_DFSDM2_CKOUT)    || \
                                                        ((CLKIN) == DFSDM2_CKIN_PAD))
#define IS_DFSDM_DFSDM2_CLKOUT(CLKOUT)                 (((CLKOUT) == DFSDM2_CKOUT_DFSDM2_CKOUT)    || \
                                                        ((CLKOUT) == DFSDM2_CKOUT_DFSDM2))   
#define IS_DFSDM_DFSDM2_DATA_DISTRIBUTION(DISTRIBUTION)(((DISTRIBUTION) == DFSDM2_DATIN0_TO_DATIN0_PAD)|| \
                                                        ((DISTRIBUTION) == DFSDM2_DATIN0_TO_DATIN1_PAD)|| \
                                                        ((DISTRIBUTION) == DFSDM2_DATIN2_TO_DATIN2_PAD)|| \
                                                        ((DISTRIBUTION) == DFSDM2_DATIN2_TO_DATIN3_PAD)|| \
                                                        ((DISTRIBUTION) == DFSDM2_DATIN4_TO_DATIN4_PAD)|| \
                                                        ((DISTRIBUTION) == DFSDM2_DATIN4_TO_DATIN5_PAD)|| \
                                                        ((DISTRIBUTION) == DFSDM2_DATIN6_TO_DATIN6_PAD)|| \
                                                        ((DISTRIBUTION) == DFSDM2_DATIN6_TO_DATIN7_PAD)|| \
                                                        ((DISTRIBUTION) <= 0x1D00U))                                                                                       
#define IS_DFSDM_FILTER_AWD_DATA_SOURCE(DATA)         (((DATA) == DFSDM_FILTER_AWD_FILTER_DATA)  || \
                                                       ((DATA) == DFSDM_FILTER_AWD_CHANNEL_DATA))
#define IS_DFSDM_FILTER_AWD_THRESHOLD(VALUE)           ((-8388608 <= (VALUE)) && ((VALUE) <= 8388607))
#define IS_DFSDM_FILTER_EXT_TRIG(TRIG)                (((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM1_TRGO) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM3_TRGO) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM8_TRGO) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM10_OC1) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM4_TRGO) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM6_TRGO) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_EXTI11) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_EXTI15))
#define IS_DFSDM_FILTER_EXT_TRIG(TRIG)                (((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM1_TRGO) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM3_TRGO) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM8_TRGO) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM10_OC1) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM2_TRGO) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM4_TRGO) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM11_OC1) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_TIM6_TRGO) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_EXTI11)    || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIG_EXTI15))
#define IS_DFSDM_FILTER_EXT_TRIG_EDGE(EDGE)           (((EDGE) == DFSDM_FILTER_EXT_TRIG_RISING_EDGE)  || \
                                                       ((EDGE) == DFSDM_FILTER_EXT_TRIG_FALLING_EDGE)  || \
                                                       ((EDGE) == DFSDM_FILTER_EXT_TRIG_BOTH_EDGES))
#define IS_DFSDM_FILTER_INJ_TRIGGER(TRIG)             (((TRIG) == DFSDM_FILTER_SW_TRIGGER) || \
                                                       ((TRIG) == DFSDM_FILTER_SYNC_TRIGGER) || \
                                                       ((TRIG) == DFSDM_FILTER_EXT_TRIGGER))
#define IS_DFSDM_FILTER_INTEGRATOR_OVS_RATIO(RATIO)    ((1U <= (RATIO)) && ((RATIO) <= 256U))
#define IS_DFSDM_FILTER_OVS_RATIO(RATIO)               ((1U <= (RATIO)) && ((RATIO) <= 1024U))
#define IS_DFSDM_FILTER_REG_TRIGGER(TRIG)             (((TRIG) == DFSDM_FILTER_SW_TRIGGER) || \
                                                       ((TRIG) == DFSDM_FILTER_SYNC_TRIGGER))
#define IS_DFSDM_FILTER_SINC_ORDER(ORDER)             (((ORDER) == DFSDM_FILTER_FASTSINC_ORDER) || \
                                                       ((ORDER) == DFSDM_FILTER_SINC1_ORDER) || \
                                                       ((ORDER) == DFSDM_FILTER_SINC2_ORDER) || \
                                                       ((ORDER) == DFSDM_FILTER_SINC3_ORDER) || \
                                                       ((ORDER) == DFSDM_FILTER_SINC4_ORDER) || \
                                                       ((ORDER) == DFSDM_FILTER_SINC5_ORDER))
#define IS_DFSDM_INJECTED_CHANNEL(CHANNEL)            (((CHANNEL) != 0U) && ((CHANNEL) <= 0x000F00FFU))
#define IS_DFSDM_INJECTED_CHANNEL(CHANNEL)            (((CHANNEL) != 0U) && ((CHANNEL) <= 0x0003000FU))
#define IS_DFSDM_REGULAR_CHANNEL(CHANNEL)             (((CHANNEL) == DFSDM_CHANNEL_0)  || \
                                                       ((CHANNEL) == DFSDM_CHANNEL_1)  || \
                                                       ((CHANNEL) == DFSDM_CHANNEL_2)  || \
                                                       ((CHANNEL) == DFSDM_CHANNEL_3)  || \
                                                       ((CHANNEL) == DFSDM_CHANNEL_4)  || \
                                                       ((CHANNEL) == DFSDM_CHANNEL_5)  || \
                                                       ((CHANNEL) == DFSDM_CHANNEL_6)  || \
                                                       ((CHANNEL) == DFSDM_CHANNEL_7))
#define IS_DFSDM_REGULAR_CHANNEL(CHANNEL)             (((CHANNEL) == DFSDM_CHANNEL_0)  || \
                                                       ((CHANNEL) == DFSDM_CHANNEL_1)  || \
                                                       ((CHANNEL) == DFSDM_CHANNEL_2)  || \
                                                       ((CHANNEL) == DFSDM_CHANNEL_3))
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
