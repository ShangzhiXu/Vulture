  u16_t chksum_offset;
  u8_t  chksum_reqd;
  u8_t flags;
  u8_t mcast_ifindex;
  u8_t mcast_ttl;
  struct raw_pcb *next;
  u8_t protocol;
  raw_recv_fn recv;
  void *recv_arg;
