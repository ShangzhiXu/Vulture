    mbedtls_ecp_point R;        /* R intermediate result                */
    mbedtls_ecp_point R;    /* current intermediate result                  */
    mbedtls_ecp_point *T;   /* table for precomputed points                 */
    unsigned char T_size;   /* number of points in table T                  */
    uint8_t buf[4 + MBEDTLS_ECP_MAX_BYTES];
    ecp_drbg_context drbg_ctx;
    unsigned char drbg_seeded;
    size_t i;               /* current index in various loops, 0 outside    */
    mbedtls_ecp_point mP;       /* mP value                             */
    } state;
    } state;
    size_t total_len;
