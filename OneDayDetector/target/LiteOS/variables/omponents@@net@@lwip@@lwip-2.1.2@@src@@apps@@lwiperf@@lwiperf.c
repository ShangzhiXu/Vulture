  u32_t amount; /* pos. value: bytes?; neg. values: time (unit is 10ms: 1/100 second) */
  lwiperf_state_base_t base;
  u32_t buffer_len; /* unused for now */
  u32_t bytes_transferred;
  u8_t client_tradeoff_mode;
  struct tcp_pcb *conn_pcb;
  u32_t flags;
  u8_t have_settings_buf;
  lwiperf_state_base_t *next;
  u8_t next_num;
  u32_t num_threads; /* unused for now */
  u8_t poll_count;
  lwiperf_state_base_t *related_master_state;
  ip_addr_t remote_addr;
  u32_t remote_port;
  void *report_arg;
  lwiperf_report_fn report_fn;
  u8_t server;
  struct tcp_pcb *server_pcb;
  lwiperf_settings_t settings;
  u8_t specific_remote;
  u8_t tcp;
  u32_t time_started;
  u32_t win_band; /* TCP window / UDP rate: unused for now */
