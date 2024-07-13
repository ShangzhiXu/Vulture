#define SMTP_AUTH_PLAIN_DATA(session) (session)->auth_plain
#define SMTP_AUTH_PLAIN_DATA(session) smtp_auth_plain
#define SMTP_AUTH_PLAIN_LEN(session)  (session)->auth_plain_len
#define SMTP_AUTH_PLAIN_LEN(session)  smtp_auth_plain_len
#define SMTP_BODYDH_FREE(ptr)         mem_free(ptr)
#define SMTP_BODYDH_MALLOC(size)      mem_malloc(size)
#define SMTP_PASS(session)            (session)->pass
#define SMTP_PASS(session)            smtp_pass
#define SMTP_TX_BUF_MAX(len) LWIP_MACRO(if((len) > smtp_tx_buf_len_max) smtp_tx_buf_len_max = (len);)
#define SMTP_TX_BUF_MAX(len)
#define SMTP_USERNAME(session)        (session)->username
#define SMTP_USERNAME(session)        smtp_username
#define smtp_free_struct(x) SMTP_STATE_FREE(x)
