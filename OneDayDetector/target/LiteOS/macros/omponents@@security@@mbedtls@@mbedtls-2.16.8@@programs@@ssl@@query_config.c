#define MACRO_EXPANSION_TO_STR(macro)   MACRO_NAME_TO_STR(macro)
#define MACRO_NAME_TO_STR(macro)                                        \
    mbedtls_printf( "%s", strlen( #macro "" ) > 0 ? #macro "\n" : "" )
