    uint16_t bootstrap_flag;
    uint16_t dtls_flag;
    uint16_t errs[CONNECTION_ERR_MAX];
    lwm2m_context_t *lwm2mH;
    void* net_context;
    struct _connection_t *next;
    int securityInstId;
    lwm2m_object_t *securityObj;
    util_timer_t server_triger_timer;
