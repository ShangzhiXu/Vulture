static int ssl_get_ecdh_params_from_cert( mbedtls_ssl_context *ssl )
{
    int ret;

    if( ! mbedtls_pk_can_do( mbedtls_ssl_own_key( ssl ), MBEDTLS_PK_ECKEY ) )
    {
        MBEDTLS_SSL_DEBUG_MSG( 1, ( "server key not ECDH capable" ) );
        return( MBEDTLS_ERR_SSL_PK_TYPE_MISMATCH );
    }

    if( ( ret = mbedtls_ecdh_get_params( &ssl->handshake->ecdh_ctx,
                                 mbedtls_pk_ec( *mbedtls_ssl_own_key( ssl ) ),
                                 MBEDTLS_ECDH_OURS ) ) != 0 )
    {
        MBEDTLS_SSL_DEBUG_RET( 1, ( "mbedtls_ecdh_get_params" ), ret );
        return( ret );
    }

    return( 0 );
}
