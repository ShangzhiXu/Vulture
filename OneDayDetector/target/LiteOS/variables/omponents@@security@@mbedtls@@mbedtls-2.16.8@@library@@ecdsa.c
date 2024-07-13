    mbedtls_mpi k;          /* per-signature random */
    int key_tries;
    mbedtls_mpi r;          /* r value              */
    mbedtls_hmac_drbg_context rng_ctx;  /* DRBG state   */
    int sign_tries;
    } state;
    } state;
    } state;
    mbedtls_mpi u1, u2;     /* intermediate values  */
    mbedtls_mpi u1, u2;     /* intermediate values  */
