  altcp_accept_fn     accept;
  altcp_new_fn  alloc;
  void         *arg;
  void *arg;
  altcp_connected_fn  connected;
  altcp_err_fn        err;
  const struct altcp_functions *fns;
  struct altcp_pcb *inner_conn;
  altcp_poll_fn       poll;
  u8_t pollinterval;
  altcp_recv_fn       recv;
  altcp_sent_fn       sent;
  void *state;
