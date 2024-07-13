#define LITE_OS_ATTR_ALIGN(x)  __attribute__((aligned(x)))
#define LITE_OS_ATTR_SEC(name) __attribute__((section(#name)))
#define LITE_OS_ATTR_SEC_ALIGN(name, x) __attribute__((section(#name), aligned(x)))
