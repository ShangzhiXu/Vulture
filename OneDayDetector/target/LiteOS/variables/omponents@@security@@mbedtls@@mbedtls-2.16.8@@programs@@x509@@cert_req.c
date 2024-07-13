    int debug_level;            /* level of debugging                   */
    const char *filename;       /* filename of the key file             */
    int force_key_usage;        /* Force adding the KeyUsage extension  */
    int force_ns_cert_type;     /* Force adding NsCertType extension    */
    unsigned char key_usage;    /* key usage flags                      */
    mbedtls_md_type_t md_alg;   /* Hash algorithm used for signature.   */
    unsigned char ns_cert_type; /* NS cert type                         */
    const char *output_file;    /* where to store the constructed key file  */
    const char *password;       /* password for the key file            */
    const char *subject_name;   /* subject name for certificate request */
