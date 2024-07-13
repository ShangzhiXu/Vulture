#define autoip_remove_struct(netif) do { (netif)->autoip = NULL; } while (0)
#define netif_autoip_data(netif) ((struct autoip*)netif_get_client_data(netif, LWIP_NETIF_CLIENT_DATA_INDEX_AUTOIP))
