#define LWIP_6LOWPAN_CONTEXTS(netif) lowpan6_data.lowpan6_context
#define LWIP_6LOWPAN_CONTEXTS(netif) NULL
#define LWIP_6LOWPAN_DO_CALC_CRC(buf, len) 0
#define LWIP_6LOWPAN_DO_CALC_CRC(buf, len) LWIP_6LOWPAN_CALC_CRC(buf, len)
