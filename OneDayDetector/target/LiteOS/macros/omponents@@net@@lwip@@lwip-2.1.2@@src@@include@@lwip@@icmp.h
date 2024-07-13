#define icmp_port_unreach(isipv6, pbuf) icmp_dest_unreach(pbuf, ICMP_DUR_PORT)
#define icmp_port_unreach(isipv6, pbuf)
#define icmp_port_unreach(isipv6, pbuf) ((isipv6) ? \
                                         icmp6_dest_unreach(pbuf, ICMP6_DUR_PORT) : \
                                         icmp_dest_unreach(pbuf, ICMP_DUR_PORT))
#define icmp_port_unreach(isipv6, pbuf) do{ if(!(isipv6)) { icmp_dest_unreach(pbuf, ICMP_DUR_PORT);}}while(0)
#define icmp_port_unreach(isipv6, pbuf) do{ if(isipv6) { icmp6_dest_unreach(pbuf, ICMP6_DUR_PORT);}}while(0)
#define icmp_port_unreach(isipv6, pbuf)
#define icmp_port_unreach(isipv6, pbuf) icmp6_dest_unreach(pbuf, ICMP6_DUR_PORT)
