#define SOTA_LOG(fmt, ...)                                                                          \
    do {                                                                                            \
        if (NULL != g_flash_op.sota_printf) {                                                       \
            (void)g_flash_op.sota_printf("[%s:%d][I]" fmt "\n", __func__, __LINE__, ##__VA_ARGS__); \
        }                                                                                           \
    } while (0)
#define SOTA_LOG(fmt, ...) ((void)0)
#define htons_ota(x) ((((x)&0x00ff) << 8) | (((x)&0xff00) >> 8))
#define htons_ota(x) (x)
