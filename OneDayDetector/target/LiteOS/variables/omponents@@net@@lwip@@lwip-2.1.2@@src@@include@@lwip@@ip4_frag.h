  u16_t datagram_len;
  u8_t flags;
  struct ip_hdr iphdr;
  struct ip_reassdata *next;
  struct pbuf *original;
  struct pbuf *p;
  struct pbuf_custom pc;
  u8_t timer;
