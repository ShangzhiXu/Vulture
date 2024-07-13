#define IS_LCD_BIAS(__BIAS__) (((__BIAS__) == LCD_BIAS_1_4) || \
                               ((__BIAS__) == LCD_BIAS_1_2) || \
                               ((__BIAS__) == LCD_BIAS_1_3))
#define IS_LCD_BLINK_FREQUENCY(__FREQUENCY__) (((__FREQUENCY__) == LCD_BLINKFREQUENCY_DIV8)   || \
                                               ((__FREQUENCY__) == LCD_BLINKFREQUENCY_DIV16)  || \
                                               ((__FREQUENCY__) == LCD_BLINKFREQUENCY_DIV32)  || \
                                               ((__FREQUENCY__) == LCD_BLINKFREQUENCY_DIV64)  || \
                                               ((__FREQUENCY__) == LCD_BLINKFREQUENCY_DIV128) || \
                                               ((__FREQUENCY__) == LCD_BLINKFREQUENCY_DIV256) || \
                                               ((__FREQUENCY__) == LCD_BLINKFREQUENCY_DIV512) || \
                                               ((__FREQUENCY__) == LCD_BLINKFREQUENCY_DIV1024))
#define IS_LCD_BLINK_MODE(__MODE__) (((__MODE__) == LCD_BLINKMODE_OFF)            || \
                                     ((__MODE__) == LCD_BLINKMODE_SEG0_COM0)      || \
                                     ((__MODE__) == LCD_BLINKMODE_SEG0_ALLCOM)    || \
                                     ((__MODE__) == LCD_BLINKMODE_ALLSEG_ALLCOM))
#define IS_LCD_CONTRAST(__CONTRAST__) (((__CONTRAST__) == LCD_CONTRASTLEVEL_0) || \
                                       ((__CONTRAST__) == LCD_CONTRASTLEVEL_1) || \
                                       ((__CONTRAST__) == LCD_CONTRASTLEVEL_2) || \
                                       ((__CONTRAST__) == LCD_CONTRASTLEVEL_3) || \
                                       ((__CONTRAST__) == LCD_CONTRASTLEVEL_4) || \
                                       ((__CONTRAST__) == LCD_CONTRASTLEVEL_5) || \
                                       ((__CONTRAST__) == LCD_CONTRASTLEVEL_6) || \
                                       ((__CONTRAST__) == LCD_CONTRASTLEVEL_7))
#define IS_LCD_DEAD_TIME(__TIME__) (((__TIME__) == LCD_DEADTIME_0) || \
                                    ((__TIME__) == LCD_DEADTIME_1) || \
                                    ((__TIME__) == LCD_DEADTIME_2) || \
                                    ((__TIME__) == LCD_DEADTIME_3) || \
                                    ((__TIME__) == LCD_DEADTIME_4) || \
                                    ((__TIME__) == LCD_DEADTIME_5) || \
                                    ((__TIME__) == LCD_DEADTIME_6) || \
                                    ((__TIME__) == LCD_DEADTIME_7))
#define IS_LCD_DIVIDER(__DIVIDER__) (((__DIVIDER__) == LCD_DIVIDER_16) || \
                                     ((__DIVIDER__) == LCD_DIVIDER_17) || \
                                     ((__DIVIDER__) == LCD_DIVIDER_18) || \
                                     ((__DIVIDER__) == LCD_DIVIDER_19) || \
                                     ((__DIVIDER__) == LCD_DIVIDER_20) || \
                                     ((__DIVIDER__) == LCD_DIVIDER_21) || \
                                     ((__DIVIDER__) == LCD_DIVIDER_22) || \
                                     ((__DIVIDER__) == LCD_DIVIDER_23) || \
                                     ((__DIVIDER__) == LCD_DIVIDER_24) || \
                                     ((__DIVIDER__) == LCD_DIVIDER_25) || \
                                     ((__DIVIDER__) == LCD_DIVIDER_26) || \
                                     ((__DIVIDER__) == LCD_DIVIDER_27) || \
                                     ((__DIVIDER__) == LCD_DIVIDER_28) || \
                                     ((__DIVIDER__) == LCD_DIVIDER_29) || \
                                     ((__DIVIDER__) == LCD_DIVIDER_30) || \
                                     ((__DIVIDER__) == LCD_DIVIDER_31))
#define IS_LCD_DUTY(__DUTY__) (((__DUTY__) == LCD_DUTY_STATIC)  || \
                               ((__DUTY__) == LCD_DUTY_1_2)     || \
                               ((__DUTY__) == LCD_DUTY_1_3)     || \
                               ((__DUTY__) == LCD_DUTY_1_4)     || \
                               ((__DUTY__) == LCD_DUTY_1_8))
#define IS_LCD_HIGH_DRIVE(__VALUE__) (((__VALUE__) == LCD_HIGHDRIVE_DISABLE) || \
                                      ((__VALUE__) == LCD_HIGHDRIVE_ENABLE))
#define IS_LCD_MUX_SEGMENT(__VALUE__) (((__VALUE__) == LCD_MUXSEGMENT_ENABLE) || \
                                       ((__VALUE__) == LCD_MUXSEGMENT_DISABLE))
#define IS_LCD_PRESCALER(__PRESCALER__) (((__PRESCALER__) == LCD_PRESCALER_1)     || \
                                         ((__PRESCALER__) == LCD_PRESCALER_2)     || \
                                         ((__PRESCALER__) == LCD_PRESCALER_4)     || \
                                         ((__PRESCALER__) == LCD_PRESCALER_8)     || \
                                         ((__PRESCALER__) == LCD_PRESCALER_16)    || \
                                         ((__PRESCALER__) == LCD_PRESCALER_32)    || \
                                         ((__PRESCALER__) == LCD_PRESCALER_64)    || \
                                         ((__PRESCALER__) == LCD_PRESCALER_128)   || \
                                         ((__PRESCALER__) == LCD_PRESCALER_256)   || \
                                         ((__PRESCALER__) == LCD_PRESCALER_512)   || \
                                         ((__PRESCALER__) == LCD_PRESCALER_1024)  || \
                                         ((__PRESCALER__) == LCD_PRESCALER_2048)  || \
                                         ((__PRESCALER__) == LCD_PRESCALER_4096)  || \
                                         ((__PRESCALER__) == LCD_PRESCALER_8192)  || \
                                         ((__PRESCALER__) == LCD_PRESCALER_16384) || \
                                         ((__PRESCALER__) == LCD_PRESCALER_32768))
#define IS_LCD_PULSE_ON_DURATION(__DURATION__) (((__DURATION__) == LCD_PULSEONDURATION_0) || \
                                                ((__DURATION__) == LCD_PULSEONDURATION_1) || \
                                                ((__DURATION__) == LCD_PULSEONDURATION_2) || \
                                                ((__DURATION__) == LCD_PULSEONDURATION_3) || \
                                                ((__DURATION__) == LCD_PULSEONDURATION_4) || \
                                                ((__DURATION__) == LCD_PULSEONDURATION_5) || \
                                                ((__DURATION__) == LCD_PULSEONDURATION_6) || \
                                                ((__DURATION__) == LCD_PULSEONDURATION_7))
#define IS_LCD_RAM_REGISTER(__REGISTER__) (((__REGISTER__) == LCD_RAM_REGISTER0)  || \
                                           ((__REGISTER__) == LCD_RAM_REGISTER1)  || \
                                           ((__REGISTER__) == LCD_RAM_REGISTER2)  || \
                                           ((__REGISTER__) == LCD_RAM_REGISTER3)  || \
                                           ((__REGISTER__) == LCD_RAM_REGISTER4)  || \
                                           ((__REGISTER__) == LCD_RAM_REGISTER5)  || \
                                           ((__REGISTER__) == LCD_RAM_REGISTER6)  || \
                                           ((__REGISTER__) == LCD_RAM_REGISTER7)  || \
                                           ((__REGISTER__) == LCD_RAM_REGISTER8)  || \
                                           ((__REGISTER__) == LCD_RAM_REGISTER9)  || \
                                           ((__REGISTER__) == LCD_RAM_REGISTER10) || \
                                           ((__REGISTER__) == LCD_RAM_REGISTER11) || \
                                           ((__REGISTER__) == LCD_RAM_REGISTER12) || \
                                           ((__REGISTER__) == LCD_RAM_REGISTER13) || \
                                           ((__REGISTER__) == LCD_RAM_REGISTER14) || \
                                           ((__REGISTER__) == LCD_RAM_REGISTER15))
#define IS_LCD_VOLTAGE_SOURCE(SOURCE) (((SOURCE) == LCD_VOLTAGESOURCE_INTERNAL) || \
                                       ((SOURCE) == LCD_VOLTAGESOURCE_EXTERNAL))
#define __HAL_LCD_BLINK_CONFIG(__HANDLE__, __BLINKMODE__, __BLINKFREQUENCY__)         \
              do {                                                                    \
                MODIFY_REG((__HANDLE__)->Instance->FCR, (LCD_FCR_BLINKF | LCD_FCR_BLINK), ((__BLINKMODE__) | (__BLINKFREQUENCY__))); \
                LCD_WaitForSynchro(__HANDLE__);                                       \
              } while(0)
#define __HAL_LCD_CLEAR_FLAG(__HANDLE__, __FLAG__)  WRITE_REG((__HANDLE__)->Instance->CLR, (__FLAG__))
#define __HAL_LCD_CONTRAST_CONFIG(__HANDLE__, __CONTRAST__)                           \
              do {                                                                    \
                MODIFY_REG((__HANDLE__)->Instance->FCR, LCD_FCR_CC, (__CONTRAST__));  \
                LCD_WaitForSynchro(__HANDLE__);                                       \
              } while(0)
#define __HAL_LCD_DEADTIME_CONFIG(__HANDLE__, __DEADTIME__)                                \
                  do {                                                                     \
                    MODIFY_REG((__HANDLE__)->Instance->FCR, LCD_FCR_DEAD, (__DEADTIME__)); \
                    LCD_WaitForSynchro(__HANDLE__);                                        \
                  } while(0)
#define __HAL_LCD_DISABLE(__HANDLE__)             CLEAR_BIT((__HANDLE__)->Instance->CR, LCD_CR_LCDEN)
#define __HAL_LCD_DISABLE_IT(__HANDLE__, __INTERRUPT__)                      \
                  do {                                                       \
                    CLEAR_BIT((__HANDLE__)->Instance->FCR, (__INTERRUPT__)); \
                    LCD_WaitForSynchro(__HANDLE__);                          \
                  } while(0)
#define __HAL_LCD_ENABLE(__HANDLE__)              SET_BIT((__HANDLE__)->Instance->CR, LCD_CR_LCDEN)
#define __HAL_LCD_ENABLE_IT(__HANDLE__, __INTERRUPT__)                      \
                  do {                                                      \
                    SET_BIT((__HANDLE__)->Instance->FCR, (__INTERRUPT__));  \
                    LCD_WaitForSynchro(__HANDLE__);                         \
                  } while(0)
#define __HAL_LCD_GET_FLAG(__HANDLE__, __FLAG__)    (((__HANDLE__)->Instance->SR & (__FLAG__)) == (__FLAG__))
#define __HAL_LCD_GET_IT_SOURCE(__HANDLE__, __IT__) (((__HANDLE__)->Instance->FCR) & (__IT__))
#define __HAL_LCD_HIGHDRIVER_DISABLE(__HANDLE__)                        \
                  do {                                                  \
                    CLEAR_BIT((__HANDLE__)->Instance->FCR, LCD_FCR_HD); \
                    LCD_WaitForSynchro(__HANDLE__);                     \
                  } while(0)
#define __HAL_LCD_HIGHDRIVER_ENABLE(__HANDLE__)                       \
                  do {                                                \
                    SET_BIT((__HANDLE__)->Instance->FCR, LCD_FCR_HD); \
                    LCD_WaitForSynchro(__HANDLE__);                   \
                  } while(0)
#define __HAL_LCD_PULSEONDURATION_CONFIG(__HANDLE__, __DURATION__)                        \
                  do {                                                                    \
                    MODIFY_REG((__HANDLE__)->Instance->FCR, LCD_FCR_PON, (__DURATION__)); \
                    LCD_WaitForSynchro(__HANDLE__);                                       \
                  } while(0)
#define __HAL_LCD_RESET_HANDLE_STATE(__HANDLE__)  ((__HANDLE__)->State = HAL_LCD_STATE_RESET)
#define __HAL_LCD_VOLTAGE_BUFFER_DISABLE(__HANDLE__)  CLEAR_BIT((__HANDLE__)->Instance->CR, LCD_CR_BUFEN)
#define __HAL_LCD_VOLTAGE_BUFFER_ENABLE(__HANDLE__)   SET_BIT((__HANDLE__)->Instance->CR, LCD_CR_BUFEN)
