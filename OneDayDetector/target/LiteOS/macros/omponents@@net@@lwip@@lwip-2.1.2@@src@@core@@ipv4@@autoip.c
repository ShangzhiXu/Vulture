#define LWIP_AUTOIP_CREATE_SEED_ADDR(netif) \
  lwip_htonl(AUTOIP_RANGE_START + ((u32_t)(((u8_t)(netif->hwaddr[4])) | \
                 ((u32_t)((u8_t)(netif->hwaddr[5]))) << 8)))
#define LWIP_AUTOIP_RAND(netif) ( (((u32_t)((netif->hwaddr[5]) & 0xff) << 24) | \
                                   ((u32_t)((netif->hwaddr[3]) & 0xff) << 16) | \
                                   ((u32_t)((netif->hwaddr[2]) & 0xff) << 8) | \
                                   ((u32_t)((netif->hwaddr[4]) & 0xff))) + \
                                   (netif_autoip_data(netif)? netif_autoip_data(netif)->tried_llipaddr : 0))
