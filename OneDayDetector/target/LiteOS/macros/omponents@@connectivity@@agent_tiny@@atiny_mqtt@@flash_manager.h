#define TRY_FREE_MEM(mem) \
do\
{\
    if ((mem) != NULL)\
    {\
       atiny_free(mem);\
       (mem) = NULL;\
    }\
} while (0)
#define array_size(a) (sizeof(a)/sizeof(*(a)))
