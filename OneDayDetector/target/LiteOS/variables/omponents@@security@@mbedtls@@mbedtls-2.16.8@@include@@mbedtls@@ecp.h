    mbedtls_mpi A;              /*!< For Short Weierstrass: \p A in the equation. For
    mbedtls_mpi B;              /*!< For Short Weierstrass: \p B in the equation.
    mbedtls_ecp_point G;        /*!< The generator of the subgroup used. */
    mbedtls_mpi N;              /*!< The order of \p G. */
    mbedtls_mpi P;              /*!< The prime modulus of the base field. */
    mbedtls_ecp_point Q;        /*!<  our public value                  */
    mbedtls_ecp_point *T;       /*!< Pre-computed points for ecp_mul_comb(). */
    size_t T_size;              /*!< The number of pre-computed points. */
    mbedtls_mpi X;          /*!< The X coordinate of the ECP point. */
    mbedtls_mpi Y;          /*!< The Y coordinate of the ECP point. */
    mbedtls_mpi Z;          /*!< The Z coordinate of the ECP point. */
    uint16_t bit_size;              /*!< The curve size in bits. */
    mbedtls_mpi d;              /*!<  our secret value                  */
    unsigned depth;                     /*!<  call depth (0 = top-level)    */
    mbedtls_ecp_group grp;      /*!<  Elliptic curve and base point     */
    mbedtls_ecp_group_id grp_id;    /*!< An internal identifier. */
    unsigned int h;             /*!< \internal 1 if the constants are static. */
    mbedtls_ecp_group_id id;    /*!< An internal group identifier. */
    mbedtls_ecp_restart_muladd_ctx *ma; /*!<  ecp_muladd() sub-context      */
    int (*modp)(mbedtls_mpi *); /*!< The function for fast pseudo-reduction
    const char *name;               /*!< A human-friendly name. */
    size_t nbits;               /*!< For Short Weierstrass: The number of bits in \p P.
    unsigned ops_done;                  /*!<  current ops count             */
    size_t pbits;               /*!< The number of bits in \p P.*/
    mbedtls_ecp_restart_mul_ctx *rsm;   /*!<  ecp_mul_comb() sub-context    */
    void *t_data;               /*!< Unused. */
    int (*t_post)(mbedtls_ecp_point *, void *); /*!< Unused. */
    int (*t_pre)(mbedtls_ecp_point *, void *);  /*!< Unused. */
    uint16_t tls_id;                /*!< The TLS NamedCurve identifier. */
