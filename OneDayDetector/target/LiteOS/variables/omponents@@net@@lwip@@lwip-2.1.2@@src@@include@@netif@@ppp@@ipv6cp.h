    unsigned int accept_local   :1;  /* accept peer's value for iface id? */
    eui64_t ourid, hisid;       /* Interface identifiers */
    unsigned int neg_ifaceid    :1;  /* Negotiate interface identifier? */
    unsigned int neg_vj         :1;  /* Van Jacobson Compression? */
    unsigned int opt_local      :1;  /* ourtoken set by option */
    unsigned int opt_remote     :1;  /* histoken set by option */
    eui64_t ourid, hisid;       /* Interface identifiers */
    unsigned int req_ifaceid    :1;  /* Ask peer to send interface identifier? */
    unsigned int use_ip         :1;  /* use IP as interface identifier */
    u_short vj_protocol;        /* protocol value to use in VJ option */
