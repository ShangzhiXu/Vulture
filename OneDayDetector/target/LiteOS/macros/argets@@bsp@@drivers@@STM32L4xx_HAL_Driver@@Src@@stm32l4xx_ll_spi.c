#define IS_LL_SPI_BAUDRATE(__VALUE__) (((__VALUE__) == LL_SPI_BAUDRATEPRESCALER_DIV2)   \
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
#define IS_LL_SPI_DATAWIDTH(__VALUE__) (((__VALUE__) == LL_SPI_DATAWIDTH_4BIT)  \
                                     || ((__VALUE__) == LL_SPI_DATAWIDTH_5BIT)  \
                                     || ((__VALUE__) == LL_SPI_DATAWIDTH_6BIT)  \
                                     || ((__VALUE__) == LL_SPI_DATAWIDTH_7BIT)  \
                                     || ((__VALUE__) == LL_SPI_DATAWIDTH_8BIT)  \
                                     || ((__VALUE__) == LL_SPI_DATAWIDTH_9BIT)  \
                                     || ((__VALUE__) == LL_SPI_DATAWIDTH_10BIT) \
                                     || ((__VALUE__) == LL_SPI_DATAWIDTH_11BIT) \
                                     || ((__VALUE__) == LL_SPI_DATAWIDTH_12BIT) \
                                     || ((__VALUE__) == LL_SPI_DATAWIDTH_13BIT) \
                                     || ((__VALUE__) == LL_SPI_DATAWIDTH_14BIT) \
                                     || ((__VALUE__) == LL_SPI_DATAWIDTH_15BIT) \
                                     || ((__VALUE__) == LL_SPI_DATAWIDTH_16BIT))
#define IS_LL_SPI_MODE(__VALUE__) (((__VALUE__) == LL_SPI_MODE_MASTER) \
                                || ((__VALUE__) == LL_SPI_MODE_SLAVE))
#define IS_LL_SPI_NSS(__VALUE__) (((__VALUE__) == LL_SPI_NSS_SOFT) \
                               || ((__VALUE__) == LL_SPI_NSS_HARD_INPUT) \
                               || ((__VALUE__) == LL_SPI_NSS_HARD_OUTPUT))
#define IS_LL_SPI_PHASE(__VALUE__) (((__VALUE__) == LL_SPI_PHASE_1EDGE) \
                                 || ((__VALUE__) == LL_SPI_PHASE_2EDGE))
#define IS_LL_SPI_POLARITY(__VALUE__) (((__VALUE__) == LL_SPI_POLARITY_LOW) \
                                    || ((__VALUE__) == LL_SPI_POLARITY_HIGH))
#define IS_LL_SPI_TRANSFER_DIRECTION(__VALUE__) (((__VALUE__) == LL_SPI_FULL_DUPLEX)    \
                                              || ((__VALUE__) == LL_SPI_SIMPLEX_RX)     \
                                              || ((__VALUE__) == LL_SPI_HALF_DUPLEX_RX) \
                                              || ((__VALUE__) == LL_SPI_HALF_DUPLEX_TX))
#define assert_param(expr) ((void)0U)
