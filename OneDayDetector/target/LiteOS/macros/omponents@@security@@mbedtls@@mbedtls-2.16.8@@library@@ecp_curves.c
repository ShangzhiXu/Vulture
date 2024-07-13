#define A( i )      N->p + (i) * WIDTH
#define A( j )      N->p[j]
#define A( j ) (j) % 2 ? (uint32_t)( N->p[(j)/2] >> 32 ) : \
                         (uint32_t)( N->p[(j)/2] )
#define ADD( j )    add32( &cur, A( j ), &c );
#define ADD( i )    add64( p, A( i ), &c )
#define BYTES_TO_T_UINT_2( a, b )                   \
    BYTES_TO_T_UINT_8( a, b, 0, 0, 0, 0, 0, 0 )
#define BYTES_TO_T_UINT_2( a, b )                   \
    BYTES_TO_T_UINT_4( a, b, 0, 0 )
#define BYTES_TO_T_UINT_4( a, b, c, d )             \
    BYTES_TO_T_UINT_8( a, b, c, d, 0, 0, 0, 0 )
#define BYTES_TO_T_UINT_4( a, b, c, d )                       \
    ( (mbedtls_mpi_uint) (a) <<  0 ) |                        \
    ( (mbedtls_mpi_uint) (b) <<  8 ) |                        \
    ( (mbedtls_mpi_uint) (c) << 16 ) |                        \
    ( (mbedtls_mpi_uint) (d) << 24 )
#define BYTES_TO_T_UINT_8( a, b, c, d, e, f, g, h ) \
    BYTES_TO_T_UINT_4( a, b, c, d ),                \
    BYTES_TO_T_UINT_4( e, f, g, h )
#define BYTES_TO_T_UINT_8( a, b, c, d, e, f, g, h ) \
    ( (mbedtls_mpi_uint) (a) <<  0 ) |                        \
    ( (mbedtls_mpi_uint) (b) <<  8 ) |                        \
    ( (mbedtls_mpi_uint) (c) << 16 ) |                        \
    ( (mbedtls_mpi_uint) (d) << 24 ) |                        \
    ( (mbedtls_mpi_uint) (e) << 32 ) |                        \
    ( (mbedtls_mpi_uint) (f) << 40 ) |                        \
    ( (mbedtls_mpi_uint) (g) << 48 ) |                        \
    ( (mbedtls_mpi_uint) (h) << 56 )
#define DIV_ROUND_UP( X, Y ) ( ( ( X ) + ( Y ) - 1 ) / ( Y ) )
#define ECP_VALIDATE( cond )        \
    MBEDTLS_INTERNAL_VALIDATE( cond )
#define ECP_VALIDATE_RET( cond )    \
    MBEDTLS_INTERNAL_VALIDATE_RET( cond, MBEDTLS_ERR_ECP_BAD_INPUT_DATA )
#define INIT( b )                                                       \
    int ret;                                                            \
    signed char c = 0, cc;                                              \
    uint32_t cur;                                                       \
    size_t i = 0, bits = (b);                                           \
    mbedtls_mpi C;                                                      \
    mbedtls_mpi_uint Cp[ (b) / 8 / sizeof( mbedtls_mpi_uint) + 1 ];     \
                                                                        \
    C.s = 1;                                                            \
    C.n = (b) / 8 / sizeof( mbedtls_mpi_uint) + 1;                      \
    C.p = Cp;                                                           \
    memset( Cp, 0, C.n * sizeof( mbedtls_mpi_uint ) );                  \
                                                                        \
    MBEDTLS_MPI_CHK( mbedtls_mpi_grow( N, (b) * 2 / 8 /                 \
                                       sizeof( mbedtls_mpi_uint ) ) );  \
    LOAD32;
#define LOAD_GROUP( G )     ecp_group_load( grp,            \
                            G ## _p,  sizeof( G ## _p  ),   \
                            NULL,     0,                    \
                            G ## _b,  sizeof( G ## _b  ),   \
                            G ## _gx, sizeof( G ## _gx ),   \
                            G ## _gy, sizeof( G ## _gy ),   \
                            G ## _n,  sizeof( G ## _n  ) )
#define LOAD_GROUP_A( G )   ecp_group_load( grp,            \
                            G ## _p,  sizeof( G ## _p  ),   \
                            G ## _a,  sizeof( G ## _a  ),   \
                            G ## _b,  sizeof( G ## _b  ),   \
                            G ## _gx, sizeof( G ## _gx ),   \
                            G ## _gy, sizeof( G ## _gy ),   \
                            G ## _n,  sizeof( G ## _n  ) )
#define NIST_MODP( P )      grp->modp = ecp_mod_ ## P;
#define NIST_MODP( P )
#define SUB( j )    sub32( &cur, A( j ), &c );
