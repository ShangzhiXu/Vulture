static void ssl_free_buffered_record( mbedtls_ssl_context *ssl )
{
    mbedtls_ssl_handshake_params * const hs = ssl->handshake;
    if( hs == NULL )
        return;

    if( hs->buffering.future_record.data != NULL )
    {
        hs->buffering.total_bytes_buffered -=
            hs->buffering.future_record.len;

        mbedtls_free( hs->buffering.future_record.data );
        hs->buffering.future_record.data = NULL;
    }
}
