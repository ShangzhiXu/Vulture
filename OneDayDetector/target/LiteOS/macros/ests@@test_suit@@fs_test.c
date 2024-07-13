#define FS_PRINTF(fmt, arg...)  printf("[%s:%d]" fmt "\n", __func__, __LINE__, ##arg)
