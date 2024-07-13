    const char *ca_file;        /* the file with the CA certificate(s)  */
    const char *ca_path;        /* the path with the CA certificate(s) reside */
    const char *crl_file;       /* the file with the CRL to use         */
    int debug_level;            /* level of debugging                   */
    const char *filename;       /* filename of the certificate file     */
    int mode;                   /* the mode to run the application in   */
    int permissive;             /* permissive parsing                   */
    const char *server_name;    /* hostname of the server (client only) */
    const char *server_port;    /* port on which the ssl service runs   */
