#define DECLARE_LWIP_MEMPOOL_DESC(desc) (desc),
#define DECLARE_LWIP_MEMPOOL_DESC(desc)
#define LWIP_MALLOC_MEMPOOL(num, size) * MEMP_POOL_##size + 0
#define LWIP_MALLOC_MEMPOOL(num, size) 0 + MEMP_POOL_##size *
#define LWIP_MEMPOOL(name,num,size,desc)
#define LWIP_MEMPOOL(name,num,size,desc)
#define LWIP_MEMPOOL_DECLARE_STATS_INSTANCE(name) static struct stats_mem name;
#define LWIP_MEMPOOL_DECLARE_STATS_INSTANCE(name)
#define LWIP_MEMPOOL_DECLARE_STATS_REFERENCE(name) &name,
#define LWIP_MEMPOOL_DECLARE_STATS_REFERENCE(name)
#define MEMP_ALIGN_SIZE(x) (LWIP_MEM_ALIGN_SIZE(x) + MEM_SANITY_REGION_AFTER_ALIGNED)
#define memp_malloc_pool(d) memp_malloc_pool_fn((d), __FILE__, __LINE__)
