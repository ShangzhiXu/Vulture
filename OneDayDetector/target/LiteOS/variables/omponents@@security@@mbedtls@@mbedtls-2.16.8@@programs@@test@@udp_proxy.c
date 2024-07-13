    int bad_ad;                 /* inject corrupted ApplicationData record  */
    unsigned char buf[MAX_MSG_SIZE];
    mbedtls_net_context *ctx;
    unsigned char data[MAX_MSG_SIZE];
    int delay;                  /* delay 1 packet in N (none if 0)          */
    int delay_ccs;              /* delay ChangeCipherSpec                   */
    char* delay_cli[MAX_DELAYED_HS];  /* handshake types of messages from
    uint8_t delay_cli_cnt;      /* Number of entries in delay_cli.          */
    char* delay_srv[MAX_DELAYED_HS];  /* handshake types of messages from
    uint8_t delay_srv_cnt;      /* Number of entries in delay_srv.          */
    const char *description;
    int drop;                   /* drop 1 packet in N (none if 0)           */
    mbedtls_net_context *dst;
    int duplicate;              /* duplicate 1 in N packets (none if 0)     */
    int inject_clihlo;          /* inject fake ClientHello after handshake  */
    size_t len;
    unsigned len;
    const char *listen_addr;    /* address for accepting client connections */
    const char *listen_port;    /* port for accepting client connections    */
    int mtu;                    /* drop packets larger than this            */
    unsigned num_datagrams;
    unsigned pack;              /* merge packets into single datagram for
    unsigned packet_lifetime;
    int protect_hvr;            /* never drop or delay HelloVerifyRequest   */
    int protect_len;            /* never drop/delay packet of the given size*/
    unsigned int seed;          /* seed for "random" events                 */
    const char *server_addr;    /* address to forward packets to            */
    const char *server_port;    /* port to forward packets to               */
    const char *type;
    const char *way;
