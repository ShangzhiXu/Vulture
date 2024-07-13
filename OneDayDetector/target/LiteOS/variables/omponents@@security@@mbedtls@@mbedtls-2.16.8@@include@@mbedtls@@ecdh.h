    mbedtls_ecp_point Q;     /*!< The public key. */
    mbedtls_ecp_point Q;     /*!< The public key. */
    mbedtls_ecp_point Qp;    /*!< The value of the public key of the peer. */
    mbedtls_ecp_point Qp;    /*!< The value of the public key of the peer. */
    mbedtls_ecp_point Vf;    /*!< The unblinding value. */
    mbedtls_ecp_point Vi;    /*!< The blinding value. */
    mbedtls_mpi _d;          /*!< The previous \p d. */
    mbedtls_mpi d;           /*!< The private key. */
    mbedtls_mpi d;           /*!< The private key. */
    mbedtls_ecp_group grp;   /*!< The elliptic curve used. */
    mbedtls_ecp_group grp;   /*!< The elliptic curve used. */
    int point_format;        /*!< The format of point export in TLS messages. */
    int restart_enabled;        /*!< The flag for restartable mode. */
    mbedtls_ecp_restart_ctx rs; /*!< The restart context for EC computations. */
    mbedtls_ecp_restart_ctx rs; /*!< The restart context for EC computations. */
    mbedtls_mpi z;           /*!< The shared secret. */
    mbedtls_mpi z;           /*!< The shared secret. */
