#define etharp_gratuitous(netif) etharp_request((netif), netif_ip4_addr(netif))
#define etharp_init() /* Compatibility define, no init needed. */
