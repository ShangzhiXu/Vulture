#define ATINY_LOG(level, fmt, ...)                                                               \
    do {                                                                                         \
        if ((level) >= atiny_get_log_level()) {                                                  \
            (void)atiny_printf("[%s][%u][%s:%d] " fmt "\r\n", atiny_get_log_level_name((level)), \
                (uint32_t)atiny_gettime_ms(), __FUNCTION__, __LINE__, ##__VA_ARGS__);            \
        }                                                                                        \
    } while (0)
#define ATINY_LOG(level, fmt, ...)
