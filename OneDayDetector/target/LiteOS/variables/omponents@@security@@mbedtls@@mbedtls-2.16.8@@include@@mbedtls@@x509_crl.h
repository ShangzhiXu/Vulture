    mbedtls_x509_buf crl_ext;
    mbedtls_x509_crl_entry entry;   /**< The CRL entries containing the certificate revocation times for this CA. */
    mbedtls_x509_buf entry_ext;
    mbedtls_x509_name issuer;       /**< The parsed issuer data (named information object). */
    mbedtls_x509_buf issuer_raw;    /**< The raw issuer data (DER). */
    struct mbedtls_x509_crl *next;
    struct mbedtls_x509_crl_entry *next;
    mbedtls_x509_time next_update;
    mbedtls_x509_buf raw;           /**< The raw certificate data (DER). */
    mbedtls_x509_buf raw;
    mbedtls_x509_time revocation_date;
    mbedtls_x509_buf serial;
    mbedtls_x509_buf sig;
    mbedtls_md_type_t sig_md;           /**< Internal representation of the MD algorithm of the signature algorithm, e.g. MBEDTLS_MD_SHA256 */
    mbedtls_x509_buf sig_oid;       /**< CRL signature type identifier */
    mbedtls_x509_buf sig_oid2;
    void *sig_opts;             /**< Signature options to be passed to mbedtls_pk_verify_ext(), e.g. for RSASSA-PSS */
    mbedtls_pk_type_t sig_pk;           /**< Internal representation of the Public Key algorithm of the signature algorithm, e.g. MBEDTLS_PK_RSA */
    mbedtls_x509_buf tbs;           /**< The raw certificate body (DER). The part that is To Be Signed. */
    mbedtls_x509_time this_update;
    int version;            /**< CRL version (1=v1, 2=v2) */
