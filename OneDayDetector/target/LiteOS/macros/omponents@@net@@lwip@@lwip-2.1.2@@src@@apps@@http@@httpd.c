#define HTTP_ALLOC_HTTP_STATE() (struct http_state *)LWIP_MEMPOOL_ALLOC(HTTPD_STATE)
#define HTTP_ALLOC_SSI_STATE()  (struct http_ssi_state *)LWIP_MEMPOOL_ALLOC(HTTPD_SSI_STATE)
#define HTTP_FREE_HTTP_STATE(x) LWIP_MEMPOOL_FREE(HTTPD_STATE, (x))
#define HTTP_FREE_SSI_STATE(x)  LWIP_MEMPOOL_FREE(HTTPD_SSI_STATE, (x))
#define HTTP_IS_DATA_VOLATILE(hs)       (HTTP_IS_DYNAMIC_FILE(hs) ? TCP_WRITE_FLAG_COPY : 0)
#define HTTP_IS_DYNAMIC_FILE(hs) ((hs)->buf != NULL)
#define HTTP_IS_DYNAMIC_FILE(hs) 0
#define HTTP_IS_HDR_VOLATILE(hs, ptr)   0
#define http_add_connection(hs)
#define http_find_error_file(hs, error_nr) ERR_ARG
#define http_remove_connection(hs)
