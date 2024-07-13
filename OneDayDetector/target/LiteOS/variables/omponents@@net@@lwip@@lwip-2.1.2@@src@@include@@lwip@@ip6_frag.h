  u16_t datagram_len;
  ip6_addr_p_t dest; /* copy of the destination address in the IP header */
  u8_t dest_zone; /* zone of original packet's destination address */
  u32_t identification;
  struct ip6_hdr *iphdr; /* pointer to the first (original) IPv6 header */
  struct ip6_reassdata *next;
  u8_t nexth;
  u8_t orig_hdr[sizeof(struct ip6_frag_hdr) + sizeof(void*)];
  u8_t orig_hdr[sizeof(struct ip6_frag_hdr)];
  struct pbuf *original;
  struct pbuf *p;
  struct pbuf_custom pc;
  ip6_addr_p_t src; /* copy of the source address in the IP header */
  u8_t src_zone; /* zone of original packet's source address */
  u8_t timer;
