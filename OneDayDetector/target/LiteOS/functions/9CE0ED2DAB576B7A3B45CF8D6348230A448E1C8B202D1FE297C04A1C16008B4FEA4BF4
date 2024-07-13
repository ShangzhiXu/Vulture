static int ssl_parse_extended_ms_ext( mbedtls_ssl_context *ssl,
                                      const unsigned char *buf,
                                      size_t len )
{
    if( len != 0 )
    {
        MBEDTLS_SSL_DEBUG_MSG( 1, ( "bad client hello message" ) );
        mbedtls_ssl_send_alert_message( ssl, MBEDTLS_SSL_ALERT_LEVEL_FATAL,
                                        MBEDTLS_SSL_ALERT_MSG_DECODE_ERROR );
        return( MBEDTLS_ERR_SSL_BAD_HS_CLIENT_HELLO );
    }

    ((void) buf);

    if( ssl->conf->extended_ms == MBEDTLS_SSL_EXTENDED_MS_ENABLED &&
        ssl->minor_ver != MBEDTLS_SSL_MINOR_VERSION_0 )
    {
        ssl->handshake->extended_ms = MBEDTLS_SSL_EXTENDED_MS_ENABLED;
    }

    return( 0 );
}
