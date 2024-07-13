#define PRINTK(fmt, ...)
#define PRINTK(fmt, ...) LOS_LkPrint(LOS_COMMOM_LEVEL, __FUNCTION__, __LINE__, fmt, ##__VA_ARGS__)
#define PRINTK(fmt, ...) dprintf(fmt, ##__VA_ARGS__)
#define PRINT_DEBUG(fmt, ...)
#define PRINT_DEBUG(fmt, ...) LOS_LkPrint(LOS_DEBUG_LEVEL, __FUNCTION__, __LINE__, fmt, ##__VA_ARGS__)
#define PRINT_DEBUG(fmt, ...) do {           \
    (dprintf("[DEBUG] "), dprintf(fmt, ##__VA_ARGS__)); \
} while (0)
#define PRINT_EMG(fmt, ...)
#define PRINT_EMG(fmt, ...) do {           \
    (dprintf("[EMG] "), dprintf(fmt, ##__VA_ARGS__)); \
} while (0)
#define PRINT_ERR(fmt, ...)
#define PRINT_ERR(fmt, ...) LOS_LkPrint(LOS_ERR_LEVEL, __FUNCTION__, __LINE__, fmt, ##__VA_ARGS__)
#define PRINT_ERR(fmt, ...) do {           \
    (dprintf("[ERR] "), dprintf(fmt, ##__VA_ARGS__)); \
} while (0)
#define PRINT_INFO(fmt, ...)
#define PRINT_INFO(fmt, ...) LOS_LkPrint(LOS_INFO_LEVEL, __FUNCTION__, __LINE__, fmt, ##__VA_ARGS__)
#define PRINT_INFO(fmt, ...) do {           \
    (dprintf("[INFO] "), dprintf(fmt, ##__VA_ARGS__)); \
} while (0)
#define PRINT_RELEASE(fmt, ...)   dprintf(fmt, ##__VA_ARGS__)
#define PRINT_TRACE(fmt, ...)   do {dprintf("[TRACE] "fmt, ##__VA_ARGS__);} while (0)
#define PRINT_TRACE(fmt, ...)
#define PRINT_WARN(fmt, ...)
#define PRINT_WARN(fmt, ...) LOS_LkPrint(LOS_WARN_LEVEL, __FUNCTION__, __LINE__, fmt, ##__VA_ARGS__)
#define PRINT_WARN(fmt, ...) do {           \
    (dprintf("[WARN] "), dprintf(fmt, ##__VA_ARGS__)); \
} while (0)
