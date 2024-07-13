    mbedtls_asn1_buf buf;                   /**< Buffer containing the given ASN.1 item. */
    size_t len;                 /**< ASN1 length, in octets. */
    size_t len;             /**< ASN1 length, in octets. */
    struct mbedtls_asn1_named_data *next;  /**< The next entry in the sequence. */
    struct mbedtls_asn1_sequence *next;    /**< The next entry in the sequence. */
    unsigned char next_merged;      /**< Merge next item into the current one? */
    mbedtls_asn1_buf oid;                   /**< The object identifier. */
    unsigned char *p;           /**< Raw ASN1 data for the bit string */
    unsigned char *p;       /**< ASN1 data, e.g. in ASCII. */
    int tag;                /**< ASN1 type, e.g. MBEDTLS_ASN1_UTF8_STRING. */
    unsigned char unused_bits;  /**< Number of unused bits at the end of the string */
    mbedtls_asn1_buf val;                   /**< The named value. */
