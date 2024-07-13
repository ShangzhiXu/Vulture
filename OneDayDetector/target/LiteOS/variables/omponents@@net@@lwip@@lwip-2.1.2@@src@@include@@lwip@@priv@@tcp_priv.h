  u16_t chksum;
  u8_t  chksum_swapped;
  u8_t  flags;
  u16_t len;               /* the TCP length of this segment */
  struct tcp_pcb_listen *listen_pcbs;
  struct tcp_seg *next;    /* used when putting segments on a queue */
  u16_t oversize_left;     /* Extra bytes available at the end of the last
  struct pbuf *p;          /* buffer containing data + TCP header */
  struct tcp_pcb *pcbs;
  struct tcp_hdr *tcphdr;  /* the TCP header */
