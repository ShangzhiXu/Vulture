#define IS_LL_I2S_AUDIO_FREQ(__VALUE__) ((((__VALUE__) >= LL_I2S_AUDIOFREQ_8K)       \
                                          && ((__VALUE__) <= LL_I2S_AUDIOFREQ_192K)) \
                                         || ((__VALUE__) == LL_I2S_AUDIOFREQ_DEFAULT))
#define IS_LL_I2S_CPOL(__VALUE__)        (((__VALUE__) == LL_I2S_POLARITY_LOW)  \
                                          || ((__VALUE__) == LL_I2S_POLARITY_HIGH))
#define IS_LL_I2S_DATAFORMAT(__VALUE__)  (((__VALUE__) == LL_I2S_DATAFORMAT_16B)             \
                                          || ((__VALUE__) == LL_I2S_DATAFORMAT_16B_EXTENDED) \
                                          || ((__VALUE__) == LL_I2S_DATAFORMAT_24B)          \
                                          || ((__VALUE__) == LL_I2S_DATAFORMAT_32B))
#define IS_LL_I2S_MCLK_OUTPUT(__VALUE__) (((__VALUE__) == LL_I2S_MCLK_OUTPUT_ENABLE) \
                                          || ((__VALUE__) == LL_I2S_MCLK_OUTPUT_DISABLE))
#define IS_LL_I2S_MODE(__VALUE__)        (((__VALUE__) == LL_I2S_MODE_SLAVE_TX)     \
                                          || ((__VALUE__) == LL_I2S_MODE_SLAVE_RX)  \
                                          || ((__VALUE__) == LL_I2S_MODE_MASTER_TX) \
                                          || ((__VALUE__) == LL_I2S_MODE_MASTER_RX))
#define IS_LL_I2S_PRESCALER_LINEAR(__VALUE__)  ((__VALUE__) >= 0x2U)
#define IS_LL_I2S_PRESCALER_PARITY(__VALUE__) (((__VALUE__) == LL_I2S_PRESCALER_PARITY_EVEN) \
                                               || ((__VALUE__) == LL_I2S_PRESCALER_PARITY_ODD))
#define IS_LL_I2S_STANDARD(__VALUE__)    (((__VALUE__) == LL_I2S_STANDARD_PHILIPS)      \
                                          || ((__VALUE__) == LL_I2S_STANDARD_MSB)       \
                                          || ((__VALUE__) == LL_I2S_STANDARD_LSB)       \
                                          || ((__VALUE__) == LL_I2S_STANDARD_PCM_SHORT) \
                                          || ((__VALUE__) == LL_I2S_STANDARD_PCM_LONG))
#define IS_LL_SPI_BAUDRATE(__VALUE__) (((__VALUE__) == LL_SPI_BAUDRATEPRESCALER_DIV2)      \
                                       || ((__VALUE__) == LL_SPI_BAUDRATEPRESCALER_DIV4)   \
                                       || ((__VALUE__) == LL_SPI_BAUDRATEPRESCALER_DIV8)   \
                                       || ((__VALUE__) == LL_SPI_BAUDRATEPRESCALER_DIV16)  \
                                       || ((__VALUE__) == LL_SPI_BAUDRATEPRESCALER_DIV32)  \
                                       || ((__VALUE__) == LL_SPI_BAUDRATEPRESCALER_DIV64)  \
                                       || ((__VALUE__) == LL_SPI_BAUDRATEPRESCALER_DIV128) \
                                       || ((__VALUE__) == LL_SPI_BAUDRATEPRESCALER_DIV256))
#define IS_LL_SPI_BITORDER(__VALUE__) (((__VALUE__) == LL_SPI_LSB_FIRST) \
                                       || ((__VALUE__) == LL_SPI_MSB_FIRST))
#define IS_LL_SPI_CRCCALCULATION(__VALUE__) (((__VALUE__) == LL_SPI_CRCCALCULATION_ENABLE) \
                                             || ((__VALUE__) == LL_SPI_CRCCALCULATION_DISABLE))
#define IS_LL_SPI_CRC_POLYNOMIAL(__VALUE__) ((__VALUE__) >= 0x1U)
#define IS_LL_SPI_DATAWIDTH(__VALUE__) (((__VALUE__) == LL_SPI_DATAWIDTH_8BIT)  \
                                        || ((__VALUE__) == LL_SPI_DATAWIDTH_16BIT))
#define IS_LL_SPI_MODE(__VALUE__) (((__VALUE__) == LL_SPI_MODE_MASTER) \
                                   || ((__VALUE__) == LL_SPI_MODE_SLAVE))
#define IS_LL_SPI_NSS(__VALUE__) (((__VALUE__) == LL_SPI_NSS_SOFT)          \
                                  || ((__VALUE__) == LL_SPI_NSS_HARD_INPUT) \
                                  || ((__VALUE__) == LL_SPI_NSS_HARD_OUTPUT))
#define IS_LL_SPI_PHASE(__VALUE__) (((__VALUE__) == LL_SPI_PHASE_1EDGE) \
                                    || ((__VALUE__) == LL_SPI_PHASE_2EDGE))
#define IS_LL_SPI_POLARITY(__VALUE__) (((__VALUE__) == LL_SPI_POLARITY_LOW) \
                                       || ((__VALUE__) == LL_SPI_POLARITY_HIGH))
#define IS_LL_SPI_TRANSFER_DIRECTION(__VALUE__) (((__VALUE__) == LL_SPI_FULL_DUPLEX)       \
                                                 || ((__VALUE__) == LL_SPI_SIMPLEX_RX)     \
                                                 || ((__VALUE__) == LL_SPI_HALF_DUPLEX_RX) \
                                                 || ((__VALUE__) == LL_SPI_HALF_DUPLEX_TX))
#define assert_param(expr) ((void)0U)
