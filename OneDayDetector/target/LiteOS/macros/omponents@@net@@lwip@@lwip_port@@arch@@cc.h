#define LWIP_ERROR(message, expression, handler) do { if (!(expression)) { \
  printf("Assertion \"%s\" failed at line %d in %s\n", message, \
    __LINE__, __FILE__); handler;} } while(0)
#define LWIP_PLATFORM_ASSERT(x) do { printf("Assertion \"%s\" failed at  \
    line %d in %s\n",x, __LINE__, __FILE__);} while(0)
#define LWIP_PLATFORM_DIAG(x)  {printf x;}
#define LWIP_RAND() ((u32_t)rand())
#define PACK_STRUCT_FIELD(x) x
#define PACK_STRUCT_FIELD(x) x
#define PACK_STRUCT_FIELD(x) x
#define PACK_STRUCT_FIELD(x) x
