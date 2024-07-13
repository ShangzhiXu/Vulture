#define IS_LL_USART_BAUDRATE(__BAUDRATE__) ((__BAUDRATE__) <= 12500000U)
#define IS_LL_USART_BRR_MAX(__VALUE__) ((__VALUE__) <= 0x0000FFFFU)
#define IS_LL_USART_BRR_MIN(__VALUE__) ((__VALUE__) >= 16U)
#define IS_LL_USART_CLOCKOUTPUT(__VALUE__) (((__VALUE__) == LL_USART_CLOCK_DISABLE) \
                                         || ((__VALUE__) == LL_USART_CLOCK_ENABLE))
#define IS_LL_USART_CLOCKPHASE(__VALUE__) (((__VALUE__) == LL_USART_PHASE_1EDGE) \
                                        || ((__VALUE__) == LL_USART_PHASE_2EDGE))
#define IS_LL_USART_CLOCKPOLARITY(__VALUE__) (((__VALUE__) == LL_USART_POLARITY_LOW) \
                                           || ((__VALUE__) == LL_USART_POLARITY_HIGH))
#define IS_LL_USART_DATAWIDTH(__VALUE__) (((__VALUE__) == LL_USART_DATAWIDTH_8B) \
                                       || ((__VALUE__) == LL_USART_DATAWIDTH_9B))
#define IS_LL_USART_DIRECTION(__VALUE__) (((__VALUE__) == LL_USART_DIRECTION_NONE) \
                                       || ((__VALUE__) == LL_USART_DIRECTION_RX) \
                                       || ((__VALUE__) == LL_USART_DIRECTION_TX) \
                                       || ((__VALUE__) == LL_USART_DIRECTION_TX_RX))
#define IS_LL_USART_HWCONTROL(__VALUE__) (((__VALUE__) == LL_USART_HWCONTROL_NONE) \
                                       || ((__VALUE__) == LL_USART_HWCONTROL_RTS) \
                                       || ((__VALUE__) == LL_USART_HWCONTROL_CTS) \
                                       || ((__VALUE__) == LL_USART_HWCONTROL_RTS_CTS))
#define IS_LL_USART_LASTBITCLKOUTPUT(__VALUE__) (((__VALUE__) == LL_USART_LASTCLKPULSE_NO_OUTPUT) \
                                              || ((__VALUE__) == LL_USART_LASTCLKPULSE_OUTPUT))
#define IS_LL_USART_OVERSAMPLING(__VALUE__) (((__VALUE__) == LL_USART_OVERSAMPLING_16) \
                                          || ((__VALUE__) == LL_USART_OVERSAMPLING_8))
#define IS_LL_USART_PARITY(__VALUE__) (((__VALUE__) == LL_USART_PARITY_NONE) \
                                    || ((__VALUE__) == LL_USART_PARITY_EVEN) \
                                    || ((__VALUE__) == LL_USART_PARITY_ODD))
#define IS_LL_USART_STOPBITS(__VALUE__) (((__VALUE__) == LL_USART_STOPBITS_0_5) \
                                      || ((__VALUE__) == LL_USART_STOPBITS_1) \
                                      || ((__VALUE__) == LL_USART_STOPBITS_1_5) \
                                      || ((__VALUE__) == LL_USART_STOPBITS_2))
#define assert_param(expr) ((void)0U)
