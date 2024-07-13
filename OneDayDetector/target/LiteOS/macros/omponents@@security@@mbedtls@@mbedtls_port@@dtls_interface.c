#define MBEDTLS_LOG(fmt, ...) \
    do \
    { \
        (void)atiny_printf("[MBEDTLS][%s:%d] " fmt "\r\n", \
        __FUNCTION__, __LINE__, ##__VA_ARGS__); \
    } while (0)
