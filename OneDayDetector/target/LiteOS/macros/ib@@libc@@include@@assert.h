#define DEBUGASSERT(f) ((void)((f) || (__assert_fail(#f, __FILE__, __LINE__, __func__),0)))
#define DEBUGASSERT(f)
#define assert(x) ((void)((x) || (__assert_fail(#x, __FILE__, __LINE__, __func__),0)))
