    int allow_legacy;           /* allow legacy renegotiation               */
    int allow_sha1;             /* flag for SHA-1 support                   */
    const char *alpn_string;    /* ALPN supported protocols                 */
    int anti_replay;            /* Use anti-replay for DTLS? -1 for default */
    int arc4;                   /* flag for arc4 suites support             */
    const char *async_operations; /* supported SSL asynchronous operations  */
    int async_private_delay1;   /* number of times f_async_resume needs to be called for key 1, or -1 for no async */
    int async_private_delay2;   /* number of times f_async_resume needs to be called for key 2, or -1 for no async */
    int async_private_error;    /* inject error in async private callback */
    int auth_mode;              /* verify mode for connection               */
    int authmode;
    int badmac_limit;           /* Limit of records with bad MAC            */
    uint16_t buffer_size;       /* IO buffer size */
    mbedtls_x509_crt* ca;
    const char *ca_file;        /* the file with the CA certificate(s)      */
    const char *ca_path;        /* the path with the CA certificate(s) reside */
    int cache_max;              /* max number of session cache entries      */
    int cache_timeout;          /* expiration delay of session cache entries */
    mbedtls_x509_crt *cert; /*!< Certificate corresponding to the key */
    mbedtls_x509_crt *cert;
    int cert_req_ca_list;       /* should we send the CA list?              */
    int cookies;                /* Use cookies for DTLS? -1 to break them   */
    mbedtls_x509_crl* crl;
    const char *crt_file;       /* the file with the server certificate     */
    const char *crt_file2;      /* the file with the 2nd server certificate */
    const char *curves;         /* list of supported elliptic curves        */
    int debug_level;            /* level of debugging                       */
    unsigned delay; /*!< Number of resume steps to go through */
    int dgram_packing;          /* allow/forbid datagram packing            */
    const char *dhm_file;       /* the file with the DH parameters          */
    int dtls_mtu;               /* UDP Maximum tranport unit for DTLS       */
    const char *ecjpake_pw;     /* the EC J-PAKE password                   */
    int etm;                    /* allow negotiation of encrypt-then-MAC?   */
    int event;                  /* loop or event-driven IO? level or edge triggered? */
    int exchanges;              /* number of data exchanges                 */
    int extended_ms;            /* allow negotiation of extended MS?        */
    int (*f_rng)(void *, unsigned char *, size_t);
    int force_ciphersuite[2];   /* protocol/ciphersuite to use, or all      */
    uint32_t hs_to_max;         /* Max value of DTLS handshake timer        */
    uint32_t hs_to_min;         /* Initial value of DTLS handshake timer    */
    ssl_async_inject_error_t inject_error;
    unsigned char input[SSL_ASYNC_INPUT_MAX_SIZE];
    size_t input_len;
    mbedtls_pk_context *key;
    unsigned char key[MBEDTLS_PSK_MAX_LEN];
    const char *key_file;       /* the file with the server key             */
    const char *key_file2;      /* the file with the 2nd server key         */
    size_t key_len;
    int max_version;            /* maximum protocol version accepted        */
    mbedtls_md_type_t md_alg;
    unsigned char mfl_code;     /* code for maximum fragment length         */
    int min_version;            /* minimum protocol version accepted        */
    const char *name;
    const char *name;
    int nbio;                   /* should I/O be blocking?                  */
    psk_entry *next;
    sni_entry *next;
    ssl_async_operation_type_t operation_type;
    void *p_rng;
    mbedtls_pk_context *pk; /*!< Private key */
    unsigned pk_owned : 1; /*!< Whether to free the pk object on exit */
    const char *psk;            /* the pre-shared key                       */
    const char *psk_identity;   /* the pre-shared key identity              */
    char *psk_list;             /* list of PSK id/key pairs for callback    */
    uint32_t read_timeout;      /* timeout on mbedtls_ssl_read() in milliseconds    */
    unsigned remaining_delay;
    int renego_delay;           /* delay before enforcing renegotiation     */
    uint64_t renego_period;     /* period for automatic renegotiation       */
    int renegotiate;            /* attempt renegotiation?                   */
    int renegotiation;          /* enable / disable renegotiation           */
    int response_size;          /* pad response with header to requested size */
    const char *server_addr;    /* address on which the ssl service runs    */
    const char *server_port;    /* port on which the ssl service runs       */
    unsigned slot;
    ssl_async_key_slot_t slots[4]; /* key, key2, sni1, sni2 */
    size_t slots_used;
    char *sni;                  /* string describing sni information        */
    int ticket_timeout;         /* session ticket lifetime                  */
    int tickets;                /* enable / disable session tickets         */
    int transport;              /* TLS or DTLS?                             */
    int trunc_hmac;             /* accept truncated hmac?                   */
    const char *version_suites; /* per-version ciphersuites                 */
