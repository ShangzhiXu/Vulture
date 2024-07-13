    int8_t          (*init)(struct netif* netif);
    struct pbuf*    (*input)(struct netif* netif);
    int8_t          (*output)(struct netif* netif, struct pbuf *p);
