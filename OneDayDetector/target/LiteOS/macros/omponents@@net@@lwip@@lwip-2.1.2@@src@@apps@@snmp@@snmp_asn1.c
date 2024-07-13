#define PBUF_OP_EXEC(code) \
  if ((code) != ERR_OK) { \
    return ERR_BUF; \
  }
