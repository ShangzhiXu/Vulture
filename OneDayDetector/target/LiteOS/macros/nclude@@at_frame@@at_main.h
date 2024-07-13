#define AT_LOG(fmt, arg...)  printf("[%lu][%s:%d][I]"fmt"\n", at_get_time(), __func__, __LINE__, ##arg)
#define AT_LOG_DEBUG(fmt, arg...)  printf("[%lu][%s:%d][D]"fmt"\n", at_get_time(), __func__, __LINE__, ##arg)
#define MIN(a, b) ((a) < (b)? (a) : (b))
#define array_size(a) (sizeof(a) / sizeof(*(a)))
