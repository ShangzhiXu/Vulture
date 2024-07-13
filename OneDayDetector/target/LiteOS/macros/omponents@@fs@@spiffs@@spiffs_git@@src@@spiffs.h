#define SPIFFS_CACHE_DBG(...) printf(__VA_ARGS__)
#define SPIFFS_CHECK_DBG(...) printf(__VA_ARGS__)
#define SPIFFS_DBG(...) \
    printf(__VA_ARGS__)
#define SPIFFS_GC_DBG(...) printf(__VA_ARGS__)
#define SPIFFS_LOCK(fs)
#define SPIFFS_UNLOCK(fs)
