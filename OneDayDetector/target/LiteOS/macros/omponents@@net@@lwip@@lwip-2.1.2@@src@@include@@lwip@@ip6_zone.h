#define IP6_ADDR_ZONECHECK(ip6addr) LWIP_ASSERT("IPv6 zone check failed", \
    ip6_addr_has_scope(ip6addr, IP6_UNKNOWN) == ip6_addr_has_zone(ip6addr))
#define IP6_ADDR_ZONECHECK(ip6addr)
#define IP6_ADDR_ZONECHECK_NETIF(ip6addr, netif) LWIP_ASSERT("IPv6 netif zone check failed", \
    ip6_addr_has_scope(ip6addr, IP6_UNKNOWN) ? \
    (ip6_addr_has_zone(ip6addr) && \
     (((netif) == NULL) || ip6_addr_test_zone((ip6addr), (netif)))) : \
    !ip6_addr_has_zone(ip6addr))
#define IP6_ADDR_ZONECHECK_NETIF(ip6addr, netif)
#define ip6_addr_assign_zone(ip6addr, type, netif) \
    (ip6_addr_set_zone((ip6addr), \
      ip6_addr_has_scope((ip6addr), (type)) ? netif_get_index(netif) : 0))
#define ip6_addr_clear_zone(ip6addr) ((ip6addr)->zone = IP6_NO_ZONE)
#define ip6_addr_cmp_zone(ip6addr1, ip6addr2) ((ip6addr1)->zone == (ip6addr2)->zone)
#define ip6_addr_copy_zone(ip6addr1, ip6addr2) ((ip6addr1).zone = (ip6addr2).zone)
#define ip6_addr_equals_zone(ip6addr, zone_idx) ((ip6addr)->zone == (zone_idx))
#define ip6_addr_has_scope(ip6addr, type) \
  (ip6_addr_islinklocal(ip6addr) || (((type) != IP6_UNICAST) && \
   (ip6_addr_ismulticast_iflocal(ip6addr) || \
    ip6_addr_ismulticast_linklocal(ip6addr))))
#define ip6_addr_has_zone(ip6addr) (ip6_addr_zone(ip6addr) != IP6_NO_ZONE)
#define ip6_addr_lacks_zone(ip6addr, type) \
    (!ip6_addr_has_zone(ip6addr) && ip6_addr_has_scope((ip6addr), (type)))
#define ip6_addr_select_zone(dest, src) do { struct netif *selected_netif; \
  selected_netif = ip6_route((src), (dest)); \
  if (selected_netif != NULL) { \
    ip6_addr_assign_zone((dest), IP6_UNKNOWN, selected_netif); \
  } } while (0)
#define ip6_addr_set_zone(ip6addr, zone_idx) ((ip6addr)->zone = (zone_idx))
#define ip6_addr_test_zone(ip6addr, netif) \
    (ip6_addr_equals_zone((ip6addr), netif_get_index(netif)))
#define ip6_addr_zone(ip6addr) ((ip6addr)->zone)
