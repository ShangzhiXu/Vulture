#define OTA_LOG(fmt, ...) \
    do \
    { \
        printf("[OTA][%s:%d] " fmt "\r\n", \
               __FUNCTION__, __LINE__, ##__VA_ARGS__); \
    } while (0)
#define OTA_LOG(fmt, ...)
