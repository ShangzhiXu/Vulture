#define ppp_netif(ppp)               (ppp->netif)
#define ppp_set_asyncmap(ppp, intval) (ppp->lcp_wantoptions.asyncmap = intval)
#define ppp_set_auth_required(ppp, boolval) (ppp->settings.auth_required = boolval)
#define ppp_set_default(ppp)         netif_set_default(ppp->netif)
#define ppp_set_ipcp_dnsaddr(ppp, index, addr) (ppp->ipcp_allowoptions.dnsaddr[index] = ip4_addr_get_u32(addr))
#define ppp_set_ipcp_hisaddr(ppp, addr) (ppp->ipcp_wantoptions.hisaddr = ip4_addr_get_u32(addr))
#define ppp_set_ipcp_ouraddr(ppp, addr) do { ppp->ipcp_wantoptions.ouraddr = ip4_addr_get_u32(addr); \
                                             ppp->ask_for_local = ppp->ipcp_wantoptions.ouraddr != 0; } while(0)
#define ppp_set_listen_time(ppp, intval) (ppp->settings.listen_time = intval)
#define ppp_set_neg_accomp(ppp, boolval) (ppp->lcp_wantoptions.neg_accompression = \
                                          ppp->lcp_allowoptions.neg_accompression = boolval)
#define ppp_set_neg_asyncmap(ppp, boolval) (ppp->lcp_wantoptions.neg_asyncmap = \
                                            ppp->lcp_allowoptions.neg_asyncmap = boolval)
#define ppp_set_neg_pcomp(ppp, boolval) (ppp->lcp_wantoptions.neg_pcompression = \
                                         ppp->lcp_allowoptions.neg_pcompression = boolval)
#define ppp_set_netif_linkcallback(ppp, link_cb)           \
        netif_set_link_callback(ppp->netif, link_cb);
#define ppp_set_netif_statuscallback(ppp, status_cb)       \
        netif_set_status_callback(ppp->netif, status_cb);
#define ppp_set_passive(ppp, boolval) (ppp->lcp_wantoptions.passive = boolval)
#define ppp_set_silent(ppp, boolval) (ppp->lcp_wantoptions.silent = boolval)
#define ppp_set_usepeerdns(ppp, boolval) (ppp->settings.usepeerdns = boolval)
