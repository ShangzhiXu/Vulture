  char *buf;        /* File read buffer. */
  int buf_len;      /* Size of file read buffer, buf. */
  const char *file;       /* Pointer to first unsent byte in buf. */
  struct fs_file file_handle;
  struct fs_file *handle;
  char hdr_content_len[LWIP_HTTPD_MAX_CONTENT_LEN_SIZE];
  u16_t hdr_index;   /* The index of the hdr string currently being sent. */
  u16_t hdr_pos;     /* The position of the first unsent header byte in the
  const char *hdrs[NUM_FILE_HDR_STRINGS]; /* HTTP headers to be sent. */
  u8_t keepalive;
  const char *lead_in;
  const char *lead_out; 
  u32_t left;       /* Number of unsent bytes in buf. */
  const char *name;
  struct http_state *next;
  u8_t no_auto_wnd;
  char *param_vals[LWIP_HTTPD_MAX_CGI_PARAMETERS]; /* Values for each extracted param */
  char *params[LWIP_HTTPD_MAX_CGI_PARAMETERS]; /* Params extracted from the request URI */
  u32_t parse_left; /* Number of unparsed bytes in buf. */
  const char *parsed;     /* Pointer to the first unparsed byte in buf. */
  struct altcp_pcb *pcb;
  u32_t post_content_len_left;
  u8_t post_finished;
  struct pbuf *req;
  u8_t retries;
  u8_t shtml;
  struct http_ssi_state *ssi;
  const char *tag_end;    /* Pointer to char after the closing '>' of the tag. */
  u16_t tag_index;   /* Counter used by tag parsing state machine */
  char tag_insert[LWIP_HTTPD_MAX_TAG_INSERT_LEN + 1]; /* Insert string for tag_name */
  u16_t tag_insert_len; /* Length of insert in string tag_insert */
  char tag_name[LWIP_HTTPD_MAX_TAG_NAME_LEN + 1]; /* Last tag name extracted */
  u8_t tag_name_len; /* Length of the tag name in string tag_name */
  u16_t tag_part; /* Counter passed to and changed by tag insertion function to insert multiple times */
  const char *tag_started;/* Pointer to the first opening '<' of the tag. */
  enum tag_check_state tag_state; /* State of the tag processor */
  u8_t tag_type; /* index into http_ssi_tag_desc array */
  u32_t time_started;
  u32_t unrecved_bytes;
