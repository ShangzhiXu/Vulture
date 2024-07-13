    char *binding; /* 目前支持U或者UQ */
    atiny_bootstrap_type_e bootstrap_mode; /* bootstrap mode  */
    uint8_t *buf;                /* 数据缓冲区首地址 */
    atiny_ack_callback callback; /* ack回调 */
    int cookie;                  /* 数据cookie,用以在ack回调中，区分不同的数据 */
    char *dev_type;
    char *endpoint_name;
    int hold_off_time;                     /* bootstrap hold off time for server initiated bootstrap */
    int len;                     /* 数据长度，不应大于MAX_REPORT_DATA_LEN */
    int length;
    int life_time; /* 必选，默认50000,如过短，则频繁发送update报文，如过长，在线状态更新时间长 */
    char *manufacturer;
    uint8_t opaque[MAX_VELOCITY_LEN];
    char *psk;
    char *psk_Id;
    unsigned short psk_len;
    atiny_security_param_t security_params[2];
    char *server_ip;
    atiny_server_param_t server_params;
    char *server_port;
    unsigned int storing_cnt; /* storing为true时，lwm2m缓存区总字节个数 */
    atiny_report_type_e type;    /* 数据上报类型 */
