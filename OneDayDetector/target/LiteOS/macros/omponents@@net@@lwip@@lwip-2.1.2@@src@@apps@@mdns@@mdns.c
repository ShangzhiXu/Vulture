#define NETIF_TO_HOST(netif) (struct mdns_host*)(netif_get_client_data(netif, mdns_netif_client_id))
