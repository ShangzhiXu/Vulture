#define I2S_CHECK_FLAG(__SR__, __FLAG__)         ((((__SR__)\
                                                    & ((__FLAG__) & I2S_FLAG_MASK)) == ((__FLAG__) & I2S_FLAG_MASK)) ? SET : RESET)
#define I2S_CHECK_IT_SOURCE(__CR2__, __INTERRUPT__)      ((((__CR2__)\
                                                            & (__INTERRUPT__)) == (__INTERRUPT__)) ? SET : RESET)
#define IS_I2S_AUDIO_FREQ(__FREQ__) ((((__FREQ__) >= I2S_AUDIOFREQ_8K)    && \
                                      ((__FREQ__) <= I2S_AUDIOFREQ_192K)) || \
                                     ((__FREQ__) == I2S_AUDIOFREQ_DEFAULT))
#define IS_I2S_CLOCKSOURCE(CLOCK) (((CLOCK) == I2S_CLOCK_EXTERNAL) ||\
                                   ((CLOCK) == I2S_CLOCK_PLL))
#define IS_I2S_CLOCKSOURCE(CLOCK) (((CLOCK) == I2S_CLOCK_EXTERNAL) ||\
                                   ((CLOCK) == I2S_CLOCK_PLL)      ||\
                                   ((CLOCK) == I2S_CLOCK_PLLSRC)   ||\
                                   ((CLOCK) == I2S_CLOCK_PLLR))
#define IS_I2S_CLOCKSOURCE(CLOCK) (((CLOCK) == I2S_CLOCK_EXTERNAL) ||\
                                   ((CLOCK) == I2S_CLOCK_PLLSRC)     ||\
                                   ((CLOCK) == I2S_CLOCK_PLLR))
#define IS_I2S_CPOL(__CPOL__) (((__CPOL__) == I2S_CPOL_LOW) || \
                               ((__CPOL__) == I2S_CPOL_HIGH))
#define IS_I2S_DATA_FORMAT(__FORMAT__) (((__FORMAT__) == I2S_DATAFORMAT_16B)          || \
                                        ((__FORMAT__) == I2S_DATAFORMAT_16B_EXTENDED) || \
                                        ((__FORMAT__) == I2S_DATAFORMAT_24B)          || \
                                        ((__FORMAT__) == I2S_DATAFORMAT_32B))
#define IS_I2S_FULLDUPLEX_MODE(MODE) (((MODE) == I2S_FULLDUPLEXMODE_DISABLE) || \
                                      ((MODE) == I2S_FULLDUPLEXMODE_ENABLE))
#define IS_I2S_MCLK_OUTPUT(__OUTPUT__) (((__OUTPUT__) == I2S_MCLKOUTPUT_ENABLE) || \
                                        ((__OUTPUT__) == I2S_MCLKOUTPUT_DISABLE))
#define IS_I2S_MODE(__MODE__) (((__MODE__) == I2S_MODE_SLAVE_TX)  || \
                               ((__MODE__) == I2S_MODE_SLAVE_RX)  || \
                               ((__MODE__) == I2S_MODE_MASTER_TX) || \
                               ((__MODE__) == I2S_MODE_MASTER_RX))
#define IS_I2S_STANDARD(__STANDARD__) (((__STANDARD__) == I2S_STANDARD_PHILIPS)   || \
                                       ((__STANDARD__) == I2S_STANDARD_MSB)       || \
                                       ((__STANDARD__) == I2S_STANDARD_LSB)       || \
                                       ((__STANDARD__) == I2S_STANDARD_PCM_SHORT) || \
                                       ((__STANDARD__) == I2S_STANDARD_PCM_LONG))
#define __HAL_I2S_CLEAR_OVRFLAG(__HANDLE__) do{ \
                                                __IO uint32_t tmpreg_ovr = 0x00U; \
                                                tmpreg_ovr = (__HANDLE__)->Instance->DR; \
                                                tmpreg_ovr = (__HANDLE__)->Instance->SR; \
                                                UNUSED(tmpreg_ovr); \
                                              }while(0U)
#define __HAL_I2S_CLEAR_UDRFLAG(__HANDLE__) do{\
                                                __IO uint32_t tmpreg_udr = 0x00U;\
                                                tmpreg_udr = ((__HANDLE__)->Instance->SR);\
                                                UNUSED(tmpreg_udr); \
                                              }while(0U)
#define __HAL_I2S_DISABLE(__HANDLE__) (CLEAR_BIT((__HANDLE__)->Instance->I2SCFGR, SPI_I2SCFGR_I2SE))
#define __HAL_I2S_DISABLE_IT(__HANDLE__, __INTERRUPT__) (CLEAR_BIT((__HANDLE__)->Instance->CR2,(__INTERRUPT__)))
#define __HAL_I2S_ENABLE(__HANDLE__)    (SET_BIT((__HANDLE__)->Instance->I2SCFGR, SPI_I2SCFGR_I2SE))
#define __HAL_I2S_ENABLE_IT(__HANDLE__, __INTERRUPT__)    (SET_BIT((__HANDLE__)->Instance->CR2,(__INTERRUPT__)))
#define __HAL_I2S_FLUSH_RX_DR(__HANDLE__)  do{\
                                                __IO uint32_t tmpreg_dr = 0x00U;\
                                                tmpreg_dr = ((__HANDLE__)->Instance->DR);\
                                                UNUSED(tmpreg_dr); \
                                              }while(0U)
#define __HAL_I2S_GET_FLAG(__HANDLE__, __FLAG__) ((((__HANDLE__)->Instance->SR) & (__FLAG__)) == (__FLAG__))
#define __HAL_I2S_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((((__HANDLE__)->Instance->CR2\
                                                              & (__INTERRUPT__)) == (__INTERRUPT__)) ? SET : RESET)
#define __HAL_I2S_RESET_HANDLE_STATE(__HANDLE__)                do{                                                  \
                                                                    (__HANDLE__)->State = HAL_I2S_STATE_RESET;       \
                                                                    (__HANDLE__)->MspInitCallback = NULL;            \
                                                                    (__HANDLE__)->MspDeInitCallback = NULL;          \
                                                                  } while(0)
#define __HAL_I2S_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_I2S_STATE_RESET)
