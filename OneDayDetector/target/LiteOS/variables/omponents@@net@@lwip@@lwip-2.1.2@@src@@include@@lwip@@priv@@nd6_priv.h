  u32_t age;
  } counter;
    u32_t delay_time;     /* ticks (ND6_TMR_INTERVAL) */
  ip6_addr_t destination_addr;
  u8_t flags;
  u32_t invalidation_timer; /* in seconds */
  u32_t invalidation_timer; /* in seconds */
  u8_t isrouter;
  u8_t lladdr[NETIF_MAX_HWADDR_LEN];
  struct nd6_neighbor_cache_entry *neighbor_entry;
  struct netif *netif;
  struct netif *netif;
  struct nd6_q_entry *next;
  ip6_addr_t next_hop_addr;
  ip6_addr_t next_hop_address;
  struct pbuf *p;
  u16_t pmtu;
  ip6_addr_t prefix;
    u32_t probes_sent;
  struct nd6_q_entry *q;
  struct pbuf *q;
    u32_t reachable_time; /* in seconds */
    u32_t stale_time;     /* ticks (ND6_TMR_INTERVAL) */
  u8_t state;
