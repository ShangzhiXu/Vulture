    int authentication;         /* if authentication is required            */
    const char *ca_file;        /* the file with the CA certificate(s)      */
    const char *crt_file;       /* the file with the client certificate     */
    int debug_level;            /* level of debugging                       */
    int force_ciphersuite[2];   /* protocol/ciphersuite to use, or all      */
    const char *key_file;       /* the file with the client key             */
    const char *mail_from;      /* E-Mail address to use as sender          */
    const char *mail_to;        /* E-Mail address to use as recipient       */
    int mode;                   /* SSL/TLS (0) or STARTTLS (1)              */
    const char *server_name;    /* hostname of the server (client only)     */
    const char *server_port;    /* port on which the ssl service runs       */
    const char *user_name;      /* username to use for authentication       */
    const char *user_pwd;       /* password to use for authentication       */
