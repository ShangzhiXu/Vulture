    uint32_t allowed_curves;    /**< Elliptic curves for ECDSA  */
    uint32_t allowed_mds;       /**< MDs for signatures         */
    uint32_t allowed_pks;       /**< PK algs for signatures     */
    int ca_istrue;              /**< Optional Basic Constraint extension value: 1 if this certificate belongs to a CA, 0 otherwise. */
    mbedtls_x509_crt *crt;
    mbedtls_x509_sequence ext_key_usage; /**< Optional list of extended key usage OIDs. */
    int ext_types;              /**< Bit string containing detected and parsed extensions */
    mbedtls_asn1_named_data *extensions;
    mbedtls_x509_crt *fallback_parent;
    int fallback_signature_is_good;
    uint32_t flags;
    } in_progress;  /* none if no operation is in progress */
    mbedtls_asn1_named_data *issuer;
    mbedtls_x509_name issuer;           /**< The parsed issuer data (named information object). */
    mbedtls_x509_buf issuer_id;         /**< Optional X.509 v2/v3 issuer unique identifier. */
    mbedtls_pk_context *issuer_key;
    mbedtls_x509_buf issuer_raw;        /**< The raw issuer data (DER). Used for quick comparison. */
    mbedtls_x509_crt_verify_chain_item items[MBEDTLS_X509_MAX_VERIFY_CHAIN_SIZE];
    unsigned int key_usage;     /**< Optional key usage extension value: See the values in x509.h */
    unsigned len;
    int max_pathlen;            /**< Optional Basic Constraint extension value: The maximum path length to the root certificate. Path length is 1 higher than RFC 5280 'meaning', so 1+ */
    mbedtls_md_type_t md_alg;
    struct mbedtls_x509_crt *next;     /**< Next certificate in the CA-chain. */
    char not_after[MBEDTLS_X509_RFC5280_UTC_TIME_LEN + 1];
    char not_before[MBEDTLS_X509_RFC5280_UTC_TIME_LEN + 1];
    unsigned char ns_cert_type; /**< Optional Netscape certificate type extension value: See the values in x509.h */
    mbedtls_x509_crt *parent; /* non-null iff parent_in in progress */
    int parent_is_trusted; /* -1 if find_parent is not in progress */
    mbedtls_pk_context pk;              /**< Container for the public key context. */
    mbedtls_pk_restart_ctx pk;
    mbedtls_x509_buf raw;               /**< The raw certificate data (DER). */
    uint32_t rsa_min_bitlen;    /**< Minimum size for RSA keys  */
    int self_cnt;
    mbedtls_mpi serial;
    mbedtls_x509_buf serial;            /**< Unique id for certificate issued by a specific CA. */
    mbedtls_x509_buf sig;               /**< Signature: hash of the tbs part signed with the private key. */
    mbedtls_md_type_t sig_md;           /**< Internal representation of the MD algorithm of the signature algorithm, e.g. MBEDTLS_MD_SHA256 */
    mbedtls_x509_buf sig_oid;           /**< Signature algorithm, e.g. sha1RSA */
    void *sig_opts;             /**< Signature options to be passed to mbedtls_pk_verify_ext(), e.g. for RSASSA-PSS */
    mbedtls_pk_type_t sig_pk;           /**< Internal representation of the Public Key algorithm of the signature algorithm, e.g. MBEDTLS_PK_RSA */
    mbedtls_asn1_named_data *subject;
    mbedtls_x509_name subject;          /**< The parsed subject data (named information object). */
    mbedtls_x509_sequence subject_alt_names;    /**< Optional list of Subject Alternative Names (Only dNSName supported). */
    mbedtls_x509_buf subject_id;        /**< Optional X.509 v2/v3 subject unique identifier. */
    mbedtls_pk_context *subject_key;
    mbedtls_x509_buf subject_raw;       /**< The raw subject data (DER). Used for quick comparison. */
    mbedtls_x509_buf tbs;               /**< The raw certificate body (DER). The part that is To Be Signed. */
    mbedtls_x509_buf v3_ext;            /**< Optional X.509 v3 extensions.  */
    mbedtls_x509_time valid_from;       /**< Start time of certificate validity. */
    mbedtls_x509_time valid_to;         /**< End time of certificate validity. */
    mbedtls_x509_crt_verify_chain ver_chain;
    int version;                /**< The X.509 version. (1=v1, 2=v2, 3=v3) */
    int version;
