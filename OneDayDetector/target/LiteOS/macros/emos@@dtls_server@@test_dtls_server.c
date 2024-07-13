#define LOG(fmt, arg...) do {                                   \
        printf("%s:%d " fmt "\r\n", __func__, __LINE__, ##arg); \
    } while (0)
#define LOG(fmt, arg...)
