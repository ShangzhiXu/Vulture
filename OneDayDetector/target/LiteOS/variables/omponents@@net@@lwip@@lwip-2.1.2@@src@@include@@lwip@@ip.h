  struct netif *current_input_netif;
  const struct ip_hdr *current_ip4_header;
  struct ip6_hdr *current_ip6_header;
  u16_t current_ip_header_tot_len;
  ip_addr_t current_iphdr_dest;
  ip_addr_t current_iphdr_src;
  struct netif *current_netif;
