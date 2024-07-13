#define LWIP_MEMPOOL(name,num,size,desc)
#define LWIP_MEMPOOL(name,num,size,desc)  MEMP_##name,
#define LWIP_MEMPOOL_ALLOC(name)   memp_malloc_pool(&memp_ ## name)
#define LWIP_MEMPOOL_DECLARE(name,num,size,desc) \
  LWIP_MEMPOOL_DECLARE_STATS_INSTANCE(memp_stats_ ## name) \
  const struct memp_desc memp_ ## name = { \
    DECLARE_LWIP_MEMPOOL_DESC(desc) \
    LWIP_MEMPOOL_DECLARE_STATS_REFERENCE(memp_stats_ ## name) \
    LWIP_MEM_ALIGN_SIZE(size) \
  };
#define LWIP_MEMPOOL_DECLARE(name,num,size,desc) \
  LWIP_DECLARE_MEMORY_ALIGNED(memp_memory_ ## name ## _base, ((num) * (MEMP_SIZE + MEMP_ALIGN_SIZE(size)))); \
    \
  LWIP_MEMPOOL_DECLARE_STATS_INSTANCE(memp_stats_ ## name) \
    \
  static struct memp *memp_tab_ ## name; \
    \
  const struct memp_desc memp_ ## name = { \
    DECLARE_LWIP_MEMPOOL_DESC(desc) \
    LWIP_MEMPOOL_DECLARE_STATS_REFERENCE(memp_stats_ ## name) \
    LWIP_MEM_ALIGN_SIZE(size), \
    (num), \
    memp_memory_ ## name ## _base, \
    &memp_tab_ ## name \
  };
#define LWIP_MEMPOOL_FREE(name, x) memp_free_pool(&memp_ ## name, (x))
#define LWIP_MEMPOOL_INIT(name)    memp_init_pool(&memp_ ## name)
#define LWIP_MEMPOOL_PROTOTYPE(name) extern const struct memp_desc memp_ ## name
#define memp_malloc(t) memp_malloc_fn((t), __FILE__, __LINE__)
