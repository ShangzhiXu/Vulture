#define ip4_debug_print(p)
#define ip4_netif_get_local_ip(netif) (((netif) != NULL) ? netif_ip_addr4(netif) : NULL)
#define ip4_route_src(src, dest) ip4_route(dest)
#define ip_init() /* Compatibility define, no init needed. */
