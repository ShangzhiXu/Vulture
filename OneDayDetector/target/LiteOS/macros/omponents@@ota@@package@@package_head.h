#define ASSERT_THIS(do_something)      \
    if (thi == NULL) {                 \
        PACK_LOG("this null pointer"); \
        do_something;                  \
    }
#define MIN(a, b)     (((a) <= (b)) ? (a) : (b))
#define PACK_FREE(ptr)    pack_free(ptr)
#define PACK_LOG(fmt, ...)                                                                              \
    do {                                                                                                \
        pack_params_s *__pack_params__ = pack_get_params();                                             \
        if (__pack_params__->printf != NULL) {                                                          \
            (void)__pack_params__->printf("[%s:%d]" fmt "\r\n", __FUNCTION__, __LINE__, ##__VA_ARGS__); \
        }                                                                                               \
    } while (0)
#define PACK_LOG(fmt, ...) ((void)0)
#define PACK_MALLOC(size) pack_malloc(size)
#define array_size(a) (sizeof(a) / sizeof(*(a)))
