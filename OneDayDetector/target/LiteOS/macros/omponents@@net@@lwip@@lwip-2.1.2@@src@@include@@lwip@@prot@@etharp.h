#define IPADDR_WORDALIGNED_COPY_FROM_IP4_ADDR_T(dest, src) SMEMCPY(dest, src, sizeof(ip4_addr_t))
#define IPADDR_WORDALIGNED_COPY_TO_IP4_ADDR_T(dest, src) SMEMCPY(dest, src, sizeof(ip4_addr_t))
