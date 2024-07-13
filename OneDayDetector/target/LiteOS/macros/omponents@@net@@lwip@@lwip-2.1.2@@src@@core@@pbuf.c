#define PBUF_POOL_FREE_OOSEQ_QUEUE_CALL()  do { \
  if (tcpip_try_callback(pbuf_free_ooseq_callback, NULL) != ERR_OK) { \
      SYS_ARCH_PROTECT(old_level); \
      pbuf_free_ooseq_pending = 0; \
      SYS_ARCH_UNPROTECT(old_level); \
  } } while(0)
#define PBUF_POOL_IS_EMPTY() pbuf_pool_is_empty()
#define PBUF_POOL_IS_EMPTY()
