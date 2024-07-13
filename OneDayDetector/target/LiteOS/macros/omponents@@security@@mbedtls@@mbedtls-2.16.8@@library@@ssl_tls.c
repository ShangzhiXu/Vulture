#define MD_CHK( func_call ) \
    do {                    \
        ret = (func_call);  \
        if( ret != 0 )      \
            goto cleanup;   \
    } while( 0 )
