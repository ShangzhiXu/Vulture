    mbedtls_x509_buf cri;           /**< The raw CertificateRequestInfo body (DER). */
    mbedtls_asn1_named_data *extensions;
    mbedtls_pk_context *key;
    mbedtls_md_type_t md_alg;
    mbedtls_pk_context pk;          /**< Container for the public key context. */
    mbedtls_x509_buf raw;           /**< The raw CSR data (DER). */
    mbedtls_x509_buf sig;
    mbedtls_md_type_t sig_md;       /**< Internal representation of the MD algorithm of the signature algorithm, e.g. MBEDTLS_MD_SHA256 */
    mbedtls_x509_buf sig_oid;
    void *sig_opts;         /**< Signature options to be passed to mbedtls_pk_verify_ext(), e.g. for RSASSA-PSS */
    mbedtls_pk_type_t sig_pk;       /**< Internal representation of the Public Key algorithm of the signature algorithm, e.g. MBEDTLS_PK_RSA */
    mbedtls_asn1_named_data *subject;
    mbedtls_x509_name subject;      /**< The parsed subject data (named information object). */
    mbedtls_x509_buf  subject_raw;  /**< The raw subject data (DER). */
    int version;            /**< CSR version (1=v1). */
