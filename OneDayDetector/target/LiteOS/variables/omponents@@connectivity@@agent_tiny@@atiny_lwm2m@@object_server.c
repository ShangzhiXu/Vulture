    char        binding[4];
    uint32_t    defaultMaxPeriod;
    uint32_t    defaultMinPeriod;
    uint32_t    disableTimeout;
    uint16_t    instanceId;            // matches lwm2m_list_t::id
    uint32_t    lifetime;
    struct _server_instance_ *next;    // matches lwm2m_list_t::next
    uint16_t    shortServerId;
    bool        storing;
