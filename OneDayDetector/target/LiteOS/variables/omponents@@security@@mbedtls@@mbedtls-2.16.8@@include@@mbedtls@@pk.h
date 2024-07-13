    int expected_salt_len;
    mbedtls_md_type_t mgf1_hash_id;
    const char *name;
    void *                      pk_ctx;  /**< Underlying public key context  */
    const mbedtls_pk_info_t *   pk_info; /**< Public key information         */
    const mbedtls_pk_info_t *   pk_info; /**< Public key information         */
    void *                      rs_ctx;  /**< Underlying restart context     */
    mbedtls_pk_debug_type type;
    void *value;
