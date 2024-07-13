#define HAL_OTA_LOG(fmt, ...) \
    (void)printf("[%s:%d][%lu]" fmt "\r\n", __FUNCTION__, __LINE__, (uint32_t)atiny_gettime_ms(), ##__VA_ARGS__)
