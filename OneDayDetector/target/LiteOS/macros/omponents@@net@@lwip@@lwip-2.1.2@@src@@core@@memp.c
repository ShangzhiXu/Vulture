#define LWIP_MEMPOOL(name,num,size,desc) &memp_ ## name,
#define LWIP_MEMPOOL(name,num,size,desc) LWIP_MEMPOOL_DECLARE(name,num,size,desc)
