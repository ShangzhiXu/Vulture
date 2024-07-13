#define HTTPD_MAX_WRITE_LEN(pcb)    ((u16_t)(2 * altcp_mss(pcb)))
#define HTTP_IS_TAG_VOLATILE(ptr) TCP_WRITE_FLAG_COPY
