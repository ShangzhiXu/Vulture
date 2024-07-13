    int allow_legacy;           /* allow legacy renegotiation               */
    int allow_sha1;             /* flag for SHA-1 support                   */
    const char *alpn_string;    /* ALPN supported protocols                 */
    int arc4;                   /* flag for arc4 suites support             */
    int auth_mode;              /* verify mode for connection               */
    const char *ca_file;        /* the file with the CA certificate(s)      */
    const char *ca_path;        /* the path with the CA certificate(s) reside */
    const char *crt_file;       /* the file with the client certificate     */
    const char *curves;         /* list of supported elliptic curves        */
    int debug_level;            /* level of debugging                       */
    int dgram_packing;          /* allow/forbid datagram packing            */
    int dhmlen;                 /* minimum DHM params len in bits           */
    int dtls_mtu;               /* UDP Maximum tranport unit for DTLS       */
    int ec_max_ops;             /* EC consecutive operations limit          */
    const char *ecjpake_pw;     /* the EC J-PAKE password                   */
    int etm;                    /* negotiate encrypt then mac?              */
    int event;                  /* loop or event-driven IO? level or edge triggered? */
    int exchanges;              /* number of data exchanges                 */
    int extended_ms;            /* negotiate extended master secret?        */
    int fallback;               /* is this a fallback connection?           */
    int force_ciphersuite[2];   /* protocol/ciphersuite to use, or all      */
    uint32_t hs_to_max;         /* Max value of DTLS handshake timer        */
    uint32_t hs_to_min;         /* Initial value of DTLS handshake timer    */
    const char *key_file;       /* the file with the client key             */
    int max_resend;             /* DTLS times to resend on read timeout     */
    int max_version;            /* maximum protocol version accepted        */
    unsigned char mfl_code;     /* code for maximum fragment length         */
    int min_version;            /* minimum protocol version accepted        */
    int nbio;                   /* should I/O be blocking?                  */
    const char *psk;            /* the pre-shared key                       */
    const char *psk_identity;   /* the pre-shared key identity              */
    uint32_t read_timeout;      /* timeout on mbedtls_ssl_read() in milliseconds     */
    int reco_delay;             /* delay in seconds before resuming session */
    int reconnect;              /* attempt to resume session                */
    int reconnect_hard;         /* unexpectedly reconnect from the same port */
    int recsplit;               /* enable record splitting?                 */
    int renego_delay;           /* delay before enforcing renegotiation     */
    int renegotiate;            /* attempt renegotiation?                   */
    int renegotiation;          /* enable / disable renegotiation           */
    const char *request_page;   /* page on server to request                */
    int request_size;           /* pad request with header to requested size */
    const char *server_addr;    /* address of the server (client only)      */
    const char *server_name;    /* hostname of the server (client only)     */
    const char *server_port;    /* port on which the ssl service runs       */
    int skip_close_notify;      /* skip sending the close_notify alert      */
    int tickets;                /* enable / disable session tickets         */
    int transport;              /* TLS or DTLS?                             */
    int trunc_hmac;             /* negotiate truncated hmac or not          */
