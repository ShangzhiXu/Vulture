static int ssl_check_key_curve( mbedtls_pk_context *pk,
                                const mbedtls_ecp_curve_info **curves )
{
    const mbedtls_ecp_curve_info **crv = curves;
    mbedtls_ecp_group_id grp_id = mbedtls_pk_ec( *pk )->grp.id;

    while( *crv != NULL )
    {
        if( (*crv)->grp_id == grp_id )
            return( 0 );
        crv++;
    }

    return( -1 );
}
