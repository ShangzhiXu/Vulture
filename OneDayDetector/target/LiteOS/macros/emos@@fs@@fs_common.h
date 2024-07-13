#define FS_LOG_ERR(fmt, arg...) printf("[%s:%d]" fmt "\n", __func__, __LINE__, ##arg)
#define MIN(a, b)               ((a) < (b) ? (a) : (b))
