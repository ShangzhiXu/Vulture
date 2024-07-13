    int authority_identifier;   /* add authority identifier to CRT      */
    int basic_constraints;      /* add basic constraints ext to CRT     */
    int is_ca;                  /* is a CA certificate                  */
    const char *issuer_crt;     /* filename of the issuer certificate   */
    const char *issuer_key;     /* filename of the issuer key file      */
    const char *issuer_name;    /* issuer name for certificate          */
    const char *issuer_pwd;     /* password for the issuer key file     */
    unsigned char key_usage;    /* key usage flags                      */
    int max_pathlen;            /* maximum CA path length               */
    mbedtls_md_type_t md;       /* Hash used for signing                */
    const char *not_after;      /* validity period not after            */
    const char *not_before;     /* validity period not before           */
    unsigned char ns_cert_type; /* NS cert type                         */
    const char *output_file;    /* where to store the constructed CRT   */
    const char *request_file;   /* filename of the certificate request  */
    int selfsign;               /* selfsign the certificate             */
    const char *serial;         /* serial number string                 */
    int subject_identifier;     /* add subject identifier to CRT        */
    const char *subject_key;    /* filename of the subject key file     */
    const char *subject_name;   /* subject name for certificate         */
    const char *subject_pwd;    /* password for the subject key file    */
    int version;                /* CRT version                          */
