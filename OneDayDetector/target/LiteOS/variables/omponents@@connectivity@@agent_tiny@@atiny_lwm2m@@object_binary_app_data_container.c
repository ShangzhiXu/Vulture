    double   dec;
    rpt_list_t header;
    struct _prv_instance_ *next;    /* matches lwm2m_list_t::next */
    uint8_t  opaq[OPAR_NUM];
    uint16_t shortID;               /* matches lwm2m_list_t::id */
    uint8_t  test;
