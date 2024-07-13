static uint32_t ssl_get_hs_frag_len( mbedtls_ssl_context const *ssl )
{
    return( ( ssl->in_msg[9] << 16  ) |
            ( ssl->in_msg[10] << 8  ) |
              ssl->in_msg[11] );
}
