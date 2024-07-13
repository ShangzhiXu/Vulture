#define IS_LL_LPUART_BAUDRATE(__BAUDRATE__) (((__BAUDRATE__) <= 26000000U) && ((__BAUDRATE__) >= 8U))
#define IS_LL_LPUART_BRR(__VALUE__) ((__VALUE__) >= 0x300U)
#define IS_LL_LPUART_DATAWIDTH(__VALUE__) (((__VALUE__) == LL_LPUART_DATAWIDTH_7B) \
                                        || ((__VALUE__) == LL_LPUART_DATAWIDTH_8B) \
                                        || ((__VALUE__) == LL_LPUART_DATAWIDTH_9B))
#define IS_LL_LPUART_DIRECTION(__VALUE__) (((__VALUE__) == LL_LPUART_DIRECTION_NONE) \
                                        || ((__VALUE__) == LL_LPUART_DIRECTION_RX) \
                                        || ((__VALUE__) == LL_LPUART_DIRECTION_TX) \
                                        || ((__VALUE__) == LL_LPUART_DIRECTION_TX_RX))
#define IS_LL_LPUART_HWCONTROL(__VALUE__) (((__VALUE__) == LL_LPUART_HWCONTROL_NONE) \
                                       || ((__VALUE__) == LL_LPUART_HWCONTROL_RTS) \
                                       || ((__VALUE__) == LL_LPUART_HWCONTROL_CTS) \
                                       || ((__VALUE__) == LL_LPUART_HWCONTROL_RTS_CTS))
#define IS_LL_LPUART_PARITY(__VALUE__) (((__VALUE__) == LL_LPUART_PARITY_NONE) \
                                     || ((__VALUE__) == LL_LPUART_PARITY_EVEN) \
                                     || ((__VALUE__) == LL_LPUART_PARITY_ODD))
#define IS_LL_LPUART_PRESCALER(__VALUE__)  (((__VALUE__) == LL_LPUART_PRESCALER_DIV1) \
                                        || ((__VALUE__) == LL_LPUART_PRESCALER_DIV2) \
                                        || ((__VALUE__) == LL_LPUART_PRESCALER_DIV4) \
                                        || ((__VALUE__) == LL_LPUART_PRESCALER_DIV6) \
                                        || ((__VALUE__) == LL_LPUART_PRESCALER_DIV8) \
                                        || ((__VALUE__) == LL_LPUART_PRESCALER_DIV10) \
                                        || ((__VALUE__) == LL_LPUART_PRESCALER_DIV12) \
                                        || ((__VALUE__) == LL_LPUART_PRESCALER_DIV16) \
                                        || ((__VALUE__) == LL_LPUART_PRESCALER_DIV32) \
                                        || ((__VALUE__) == LL_LPUART_PRESCALER_DIV64) \
                                        || ((__VALUE__) == LL_LPUART_PRESCALER_DIV128) \
                                        || ((__VALUE__) == LL_LPUART_PRESCALER_DIV256))
#define IS_LL_LPUART_STOPBITS(__VALUE__) (((__VALUE__) == LL_LPUART_STOPBITS_1) \
                                       || ((__VALUE__) == LL_LPUART_STOPBITS_2))
#define assert_param(expr) ((void)0U)
