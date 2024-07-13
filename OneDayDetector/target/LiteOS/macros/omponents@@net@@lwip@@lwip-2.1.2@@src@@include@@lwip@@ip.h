#define LWIP_IP_CHECK_PBUF_REF_COUNT_FOR_TX(p) LWIP_ASSERT("p->ref == 1", (p)->ref == 1)
#define ip4_current_dest_addr()    (ip_2_ip4(&ip_data.current_iphdr_dest))
#define ip4_current_dest_addr()    (&ip_data.current_iphdr_dest)
#define ip4_current_header()     ip_data.current_ip4_header
#define ip4_current_header()     ip_data.current_ip4_header
#define ip4_current_src_addr()     (ip_2_ip4(&ip_data.current_iphdr_src))
#define ip4_current_src_addr()     (&ip_data.current_iphdr_src)
#define ip6_current_dest_addr()   (ip_2_ip6(&ip_data.current_iphdr_dest))
#define ip6_current_dest_addr()   (&ip_data.current_iphdr_dest)
#define ip6_current_header()      ((const struct ip6_hdr*)(ip_data.current_ip6_header))
#define ip6_current_header()      ((const struct ip6_hdr*)(ip_data.current_ip6_header))
#define ip6_current_src_addr()    (ip_2_ip6(&ip_data.current_iphdr_src))
#define ip6_current_src_addr()    (&ip_data.current_iphdr_src)
#define ip_current_dest_addr()  (&ip_data.current_iphdr_dest)
#define ip_current_dest_addr()   (&ip_data.current_iphdr_dest)
#define ip_current_header_proto() (ip_current_is_v6() ? \
                                   IP6H_NEXTH(ip6_current_header()) :\
                                   IPH_PROTO(ip4_current_header()))
#define ip_current_header_proto() IPH_PROTO(ip4_current_header())
#define ip_current_header_proto() IP6H_NEXTH(ip6_current_header())
#define ip_current_header_tot_len() (ip_data.current_ip_header_tot_len)
#define ip_current_input_netif() (ip_data.current_input_netif)
#define ip_current_is_v6()        (ip6_current_header() != NULL)
#define ip_current_is_v6()        0
#define ip_current_is_v6()        1
#define ip_current_netif()      (ip_data.current_netif)
#define ip_current_src_addr()   (&ip_data.current_iphdr_src)
#define ip_current_src_addr()    (&ip_data.current_iphdr_src)
#define ip_debug_print(is_ipv6, p) ((is_ipv6) ? ip6_debug_print(p) : ip4_debug_print(p))
#define ip_debug_print(is_ipv6, p) ip4_debug_print(p)
#define ip_debug_print(is_ipv6, p) ip6_debug_print(p)
#define ip_get_option(pcb, opt)   ((pcb)->so_options & (opt))
#define ip_netif_get_local_ip(netif, dest) (IP_IS_V6(dest) ? \
        ip6_netif_get_local_ip(netif, ip_2_ip6(dest)) : \
        ip4_netif_get_local_ip(netif))
#define ip_netif_get_local_ip(netif, dest) \
        ip4_netif_get_local_ip(netif)
#define ip_netif_get_local_ip(netif, dest) \
        ip6_netif_get_local_ip(netif, dest)
#define ip_next_header_ptr()     ((const void*)((ip_current_is_v6() ? \
  (const u8_t*)ip6_current_header() : (const u8_t*)ip4_current_header())  + ip_current_header_tot_len()))
#define ip_next_header_ptr()     ((const void*)((const u8_t*)ip4_current_header() + ip_current_header_tot_len()))
#define ip_next_header_ptr()     ((const void*)(((const u8_t*)ip6_current_header()) + ip_current_header_tot_len()))
#define ip_output(p, src, dest, ttl, tos, proto) \
        (IP_IS_V6(dest) ? \
        ip6_output(p, ip_2_ip6(src), ip_2_ip6(dest), ttl, tos, proto) : \
        ip4_output(p, ip_2_ip4(src), ip_2_ip4(dest), ttl, tos, proto))
#define ip_output(p, src, dest, ttl, tos, proto) \
        ip4_output(p, src, dest, ttl, tos, proto)
#define ip_output(p, src, dest, ttl, tos, proto) \
        ip6_output(p, src, dest, ttl, tos, proto)
#define ip_output_hinted(p, src, dest, ttl, tos, proto, netif_hint) \
        (IP_IS_V6(dest) ? \
        ip6_output_hinted(p, ip_2_ip6(src), ip_2_ip6(dest), ttl, tos, proto, netif_hint) : \
        ip4_output_hinted(p, ip_2_ip4(src), ip_2_ip4(dest), ttl, tos, proto, netif_hint))
#define ip_output_hinted(p, src, dest, ttl, tos, proto, netif_hint) \
        ip4_output_hinted(p, src, dest, ttl, tos, proto, netif_hint)
#define ip_output_hinted(p, src, dest, ttl, tos, proto, netif_hint) \
        ip6_output_hinted(p, src, dest, ttl, tos, proto, netif_hint)
#define ip_output_if(p, src, dest, ttl, tos, proto, netif) \
        (IP_IS_V6(dest) ? \
        ip6_output_if(p, ip_2_ip6(src), ip_2_ip6(dest), ttl, tos, proto, netif) : \
        ip4_output_if(p, ip_2_ip4(src), ip_2_ip4(dest), ttl, tos, proto, netif))
#define ip_output_if(p, src, dest, ttl, tos, proto, netif) \
        ip4_output_if(p, src, dest, ttl, tos, proto, netif)
#define ip_output_if(p, src, dest, ttl, tos, proto, netif) \
        ip6_output_if(p, src, dest, ttl, tos, proto, netif)
#define ip_output_if_hdrincl(p, src, dest, netif) \
        (IP_IS_V6(dest) ? \
        ip6_output_if(p, ip_2_ip6(src), LWIP_IP_HDRINCL, 0, 0, 0, netif) : \
        ip4_output_if(p, ip_2_ip4(src), LWIP_IP_HDRINCL, 0, 0, 0, netif))
#define ip_output_if_hdrincl(p, src, dest, netif) \
        ip4_output_if(p, src, LWIP_IP_HDRINCL, 0, 0, 0, netif)
#define ip_output_if_hdrincl(p, src, dest, netif) \
        ip6_output_if(p, src, LWIP_IP_HDRINCL, 0, 0, 0, netif)
#define ip_output_if_src(p, src, dest, ttl, tos, proto, netif) \
        (IP_IS_V6(dest) ? \
        ip6_output_if_src(p, ip_2_ip6(src), ip_2_ip6(dest), ttl, tos, proto, netif) : \
        ip4_output_if_src(p, ip_2_ip4(src), ip_2_ip4(dest), ttl, tos, proto, netif))
#define ip_output_if_src(p, src, dest, ttl, tos, proto, netif) \
        ip4_output_if_src(p, src, dest, ttl, tos, proto, netif)
#define ip_output_if_src(p, src, dest, ttl, tos, proto, netif) \
        ip6_output_if_src(p, src, dest, ttl, tos, proto, netif)
#define ip_reset_option(pcb, opt) ((pcb)->so_options = (u8_t)((pcb)->so_options & ~(opt)))
#define ip_route(src, dest) \
        (IP_IS_V6(dest) ? \
        ip6_route(ip_2_ip6(src), ip_2_ip6(dest)) : \
        ip4_route_src(ip_2_ip4(src), ip_2_ip4(dest)))
#define ip_route(src, dest) \
        ip4_route_src(src, dest)
#define ip_route(src, dest) \
        ip6_route(src, dest)
#define ip_route_get_local_ip(src, dest, netif, ipaddr) do { \
  (netif) = ip_route(src, dest); \
  (ipaddr) = ip_netif_get_local_ip(netif, dest); \
}while(0)
#define ip_set_option(pcb, opt)   ((pcb)->so_options = (u8_t)((pcb)->so_options | (opt)))
