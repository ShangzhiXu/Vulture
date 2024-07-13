  const char* body;
  char buffer[SMTP_BODYDH_BUFFER_SIZE]; /* buffer for generated content */
  void* callback_arg;
  smtp_result_fn callback_fn;
  const char *from;
  u16_t length; /* Length of content in buffer */
  u16_t state;
  u8_t static_data;
  const char* subject;
  const char* to;
  u8_t user[SMTP_BODYDH_USER_SIZE];
