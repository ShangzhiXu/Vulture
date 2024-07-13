  tcp_accept_fn accept;
  u8_t accepts_pending;
  u8_t backlog;
  tcpwnd_size_t bytes_acked;
  const struct tcp_ext_arg_callbacks *callbacks;
  tcp_connected_fn connected;
  tcpwnd_size_t cwnd;
  void *data;
  tcp_extarg_callback_pcb_destroyed_fn destroy;
  u8_t dupacks;
  tcp_err_fn errf;
  tcpflags_t flags;
  u32_t keep_cnt;
  u8_t keep_cnt_sent;
  u32_t keep_idle;
  u32_t keep_intvl;
  u8_t last_timer;
  u32_t lastack; /* Highest acknowledged seqno. */
  u32_t left;
  struct tcp_pcb_listen* listener;
  u16_t mss;   /* maximum segment size */
  u8_t nrtx;    /* number of retransmissions */
  struct tcp_seg *ooseq;    /* Received out of sequence segments. */
  tcp_extarg_callback_passive_open_fn passive_open;
  u8_t persist_backoff;
  u8_t persist_cnt;
  u8_t persist_probe;
  tcp_poll_fn poll;
  u8_t polltmr, pollinterval;
  u8_t polltmr, pollinterval;
  u32_t rcv_ann_right_edge; /* announced right edge of window */
  tcpwnd_size_t rcv_ann_wnd; /* receiver window to announce */
  u32_t rcv_nxt;   /* next seqno expected */
  struct tcp_sack_range rcv_sacks[LWIP_TCP_MAX_SACK_NUM];
  u8_t rcv_scale;
  tcpwnd_size_t rcv_wnd;   /* receiver window available */
  tcp_recv_fn recv;
  struct pbuf *refused_data; /* Data previously received but not yet taken by upper layer */
  u16_t remote_port;
  u32_t right;
  s16_t rtime;
  s16_t rto;    /* retransmission time-out (in ticks of TCP_SLOW_INTERVAL) */
  u32_t rto_end;
  u32_t rtseq;  /* sequence number being timed */
  u32_t rttest; /* RTT estimate in 500ms ticks */
  s16_t sa, sv; /* @see "Congestion Avoidance and Control" by Van Jacobson and Karels */
  tcp_sent_fn sent;
  tcpwnd_size_t snd_buf;   /* Available buffer space for sending (in bytes). */
  u32_t snd_lbb;       /* Sequence number of next byte to be buffered. */
  u32_t snd_nxt;   /* next new seqno to be sent */
  u16_t snd_queuelen; /* Number of pbufs currently in the send buffer. */
  u8_t snd_scale;
  u32_t snd_wl1, snd_wl2; /* Sequence and acknowledgement numbers of last
  u32_t snd_wl1, snd_wl2; /* Sequence and acknowledgement numbers of last
  tcpwnd_size_t snd_wnd;   /* sender window */
  tcpwnd_size_t snd_wnd_max; /* the maximum sender window announced by the remote host */
  tcpwnd_size_t ssthresh;
  s16_t sa, sv; /* @see "Congestion Avoidance and Control" by Van Jacobson and Karels */
  u32_t tmr;
  u32_t ts_lastacksent;
  u32_t ts_recent;
  struct tcp_seg *unacked;  /* Sent but unacknowledged segments. */
  struct tcp_seg *unsent;   /* Unsent (queued) segments. */
  u16_t unsent_oversize;
