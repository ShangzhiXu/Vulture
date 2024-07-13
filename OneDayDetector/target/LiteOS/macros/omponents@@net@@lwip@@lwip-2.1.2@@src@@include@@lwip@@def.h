#define LWIP_ARRAYSIZE(x) (sizeof(x)/sizeof((x)[0]))
#define LWIP_MAKEU32(a,b,c,d) (((u32_t)((a) & 0xff) << 24) | \
                               ((u32_t)((b) & 0xff) << 16) | \
                               ((u32_t)((c) & 0xff) << 8)  | \
                                (u32_t)((d) & 0xff))
#define LWIP_MAX(x , y)  (((x) > (y)) ? (x) : (y))
#define LWIP_MIN(x , y)  (((x) < (y)) ? (x) : (y))
#define PERF_STOP(x)  /* null definition */
#define PP_HTONL(x)   ((u32_t)(x))
#define PP_HTONS(x)   ((u16_t)(x))
#define PP_NTOHL(x)   ((u32_t)(x))
#define PP_NTOHS(x)   ((u16_t)(x))
#define htonl(x) lwip_htonl(x)
#define htons(x) lwip_htons(x)
#define lwip_htonl(x) ((u32_t)(x))
#define lwip_htons(x) ((u16_t)(x))
#define lwip_ntohl(x) ((u32_t)(x))
#define lwip_ntohs(x) ((u16_t)(x))
#define ntohl(x) lwip_ntohl(x)
#define ntohs(x) lwip_ntohs(x)
