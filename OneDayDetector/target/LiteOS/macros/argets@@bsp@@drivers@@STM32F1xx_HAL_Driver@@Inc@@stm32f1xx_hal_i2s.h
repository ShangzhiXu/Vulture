#define IS_I2S_AUDIO_FREQ(FREQ) ((((FREQ) >= I2S_AUDIOFREQ_8K)    && \
                                  ((FREQ) <= I2S_AUDIOFREQ_192K)) || \
                                  ((FREQ) == I2S_AUDIOFREQ_DEFAULT))
#define IS_I2S_CPOL(CPOL) (((CPOL) == I2S_CPOL_LOW) || \
                           ((CPOL) == I2S_CPOL_HIGH))
#define IS_I2S_DATA_FORMAT(FORMAT) (((FORMAT) == I2S_DATAFORMAT_16B)          || \
                                    ((FORMAT) == I2S_DATAFORMAT_16B_EXTENDED) || \
                                    ((FORMAT) == I2S_DATAFORMAT_24B)          || \
                                    ((FORMAT) == I2S_DATAFORMAT_32B))
#define IS_I2S_MCLK_OUTPUT(OUTPUT) (((OUTPUT) == I2S_MCLKOUTPUT_ENABLE) || \
                                    ((OUTPUT) == I2S_MCLKOUTPUT_DISABLE))
#define IS_I2S_MODE(MODE) (((MODE) == I2S_MODE_SLAVE_TX)  || \
                           ((MODE) == I2S_MODE_SLAVE_RX)  || \
                           ((MODE) == I2S_MODE_MASTER_TX) || \
                           ((MODE) == I2S_MODE_MASTER_RX))
#define IS_I2S_STANDARD(STANDARD) (((STANDARD) == I2S_STANDARD_PHILIPS)   || \
                                   ((STANDARD) == I2S_STANDARD_MSB)       || \
                                   ((STANDARD) == I2S_STANDARD_LSB)       || \
                                   ((STANDARD) == I2S_STANDARD_PCM_SHORT) || \
                                   ((STANDARD) == I2S_STANDARD_PCM_LONG))
#define __HAL_I2S_CLEAR_OVRFLAG(__HANDLE__) do{__IO uint32_t tmpreg = (__HANDLE__)->Instance->DR;\
                                                             tmpreg = (__HANDLE__)->Instance->SR;\
                                                             UNUSED(tmpreg); \
                                              }while(0)
#define __HAL_I2S_CLEAR_UDRFLAG(__HANDLE__)((__HANDLE__)->Instance->SR)
#define __HAL_I2S_DISABLE(__HANDLE__) (CLEAR_BIT((__HANDLE__)->Instance->I2SCFGR, SPI_I2SCFGR_I2SE))
#define __HAL_I2S_DISABLE_IT(__HANDLE__, __INTERRUPT__) (CLEAR_BIT((__HANDLE__)->Instance->CR2,(__INTERRUPT__)))
#define __HAL_I2S_ENABLE(__HANDLE__)    (SET_BIT((__HANDLE__)->Instance->I2SCFGR, SPI_I2SCFGR_I2SE))
#define __HAL_I2S_ENABLE_IT(__HANDLE__, __INTERRUPT__)    (SET_BIT((__HANDLE__)->Instance->CR2,(__INTERRUPT__)))
#define __HAL_I2S_GET_FLAG(__HANDLE__, __FLAG__) ((((__HANDLE__)->Instance->SR) & (__FLAG__)) == (__FLAG__))
#define __HAL_I2S_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((((__HANDLE__)->Instance->CR2 & (__INTERRUPT__)) == (__INTERRUPT__)) ? SET : RESET)
#define __HAL_I2S_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_I2S_STATE_RESET)
