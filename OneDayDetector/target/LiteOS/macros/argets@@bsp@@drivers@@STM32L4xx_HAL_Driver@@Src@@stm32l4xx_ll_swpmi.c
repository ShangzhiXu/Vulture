#define IS_LL_SWPMI_BITRATE_VALUE(__VALUE__) (((__VALUE__) <= 63))
#define IS_LL_SWPMI_SW_BUFFER_RX(__VALUE__) (((__VALUE__) == LL_SWPMI_SW_BUFFER_RX_SINGLE) \
                                          || ((__VALUE__) == LL_SWPMI_SW_BUFFER_RX_MULTI))
#define IS_LL_SWPMI_SW_BUFFER_TX(__VALUE__) (((__VALUE__) == LL_SWPMI_SW_BUFFER_TX_SINGLE) \
                                          || ((__VALUE__) == LL_SWPMI_SW_BUFFER_TX_MULTI))
#define IS_LL_SWPMI_VOLTAGE_CLASS(__VALUE__) (((__VALUE__) == LL_SWPMI_VOLTAGE_CLASS_C) \
                                           || ((__VALUE__) == LL_SWPMI_VOLTAGE_CLASS_B))
#define assert_param(expr) ((void)0U)
