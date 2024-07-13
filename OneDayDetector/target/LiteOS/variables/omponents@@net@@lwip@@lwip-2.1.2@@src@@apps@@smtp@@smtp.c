  char auth_plain[SMTP_MAX_USERNAME_LEN + SMTP_MAX_PASS_LEN + 3];
  size_t auth_plain_len;
  const char* body;
  u16_t body_len;
  u16_t body_sent;
  struct smtp_bodydh_state *bodydh;
  void *callback_arg;
  smtp_bodycback_fn callback_fn;  /* The function to call (again) */
  smtp_result_fn callback_fn;
  struct smtp_bodydh exposed;     /* the user function structure */
  const char* from;
  u16_t from_len;
  struct pbuf* p;
  char *pass;
  enum smtp_session_state state;
  u16_t state;
  const char *subject;
  u16_t subject_len;
  u16_t timer;
  const char* to;
  u16_t to_len;
  char tx_buf[SMTP_TX_BUF_LEN + 1];
  char *username;
