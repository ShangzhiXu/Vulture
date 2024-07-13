#define ETHARP_SET_ADDRHINT(netif, addrhint)  do { if (((netif) != NULL) && ((netif)->hints != NULL)) { \
                                              (netif)->hints->addr_hint = (addrhint); }} while(0)
#define ETHARP_SET_ADDRHINT(netif, addrhint)  (etharp_cached_entry = (addrhint))
#define free_etharp_q(q) pbuf_free(q)
