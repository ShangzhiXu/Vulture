#define ETHARP_STATS_DISPLAY() stats_display_proto(&lwip_stats.etharp, "ETHARP")
#define ETHARP_STATS_DISPLAY()
#define ETHARP_STATS_INC(x) STATS_INC(x)
#define ETHARP_STATS_INC(x)
#define ICMP6_STATS_DISPLAY() stats_display_proto(&lwip_stats.icmp6, "ICMPv6")
#define ICMP6_STATS_DISPLAY()
#define ICMP6_STATS_INC(x) STATS_INC(x)
#define ICMP6_STATS_INC(x)
#define ICMP_STATS_DISPLAY() stats_display_proto(&lwip_stats.icmp, "ICMP")
#define ICMP_STATS_DISPLAY()
#define ICMP_STATS_INC(x) STATS_INC(x)
#define ICMP_STATS_INC(x)
#define IGMP_STATS_DISPLAY() stats_display_igmp(&lwip_stats.igmp, "IGMP")
#define IGMP_STATS_DISPLAY()
#define IGMP_STATS_INC(x) STATS_INC(x)
#define IGMP_STATS_INC(x)
#define IP6_FRAG_STATS_DISPLAY() stats_display_proto(&lwip_stats.ip6_frag, "IPv6 FRAG")
#define IP6_FRAG_STATS_DISPLAY()
#define IP6_FRAG_STATS_INC(x) STATS_INC(x)
#define IP6_FRAG_STATS_INC(x)
#define IP6_STATS_DISPLAY() stats_display_proto(&lwip_stats.ip6, "IPv6")
#define IP6_STATS_DISPLAY()
#define IP6_STATS_INC(x) STATS_INC(x)
#define IP6_STATS_INC(x)
#define IPFRAG_STATS_DISPLAY() stats_display_proto(&lwip_stats.ip_frag, "IP_FRAG")
#define IPFRAG_STATS_DISPLAY()
#define IPFRAG_STATS_INC(x) STATS_INC(x)
#define IPFRAG_STATS_INC(x)
#define IP_STATS_DISPLAY() stats_display_proto(&lwip_stats.ip, "IP")
#define IP_STATS_DISPLAY()
#define IP_STATS_INC(x) STATS_INC(x)
#define IP_STATS_INC(x)
#define LINK_STATS_DISPLAY() stats_display_proto(&lwip_stats.link, "LINK")
#define LINK_STATS_DISPLAY()
#define LINK_STATS_INC(x) STATS_INC(x)
#define LINK_STATS_INC(x)
#define MEMP_STATS_DEC(x, i) STATS_DEC(memp[i]->x)
#define MEMP_STATS_DEC(x, i)
#define MEMP_STATS_DISPLAY(i) stats_display_memp(lwip_stats.memp[i], i)
#define MEMP_STATS_DISPLAY(i)
#define MEMP_STATS_GET(x, i) STATS_GET(memp[i]->x)
#define MEMP_STATS_GET(x, i) 0
#define MEM_STATS_AVAIL(x, y) lwip_stats.mem.x = y
#define MEM_STATS_AVAIL(x, y)
#define MEM_STATS_DEC_USED(x, y) lwip_stats.mem.x = (mem_size_t)((lwip_stats.mem.x) - (y))
#define MEM_STATS_DEC_USED(x, y)
#define MEM_STATS_DISPLAY() stats_display_mem(&lwip_stats.mem, "HEAP")
#define MEM_STATS_DISPLAY()
#define MEM_STATS_INC(x) STATS_INC(mem.x)
#define MEM_STATS_INC(x)
#define MEM_STATS_INC_USED(x, y) STATS_INC_USED(mem, y, mem_size_t)
#define MEM_STATS_INC_USED(x, y)
#define MIB2_STATS_INC(x) STATS_INC(x)
#define MIB2_STATS_INC(x)
#define MLD6_STATS_DISPLAY() stats_display_igmp(&lwip_stats.mld6, "MLDv1")
#define MLD6_STATS_DISPLAY()
#define MLD6_STATS_INC(x) STATS_INC(x)
#define MLD6_STATS_INC(x)
#define ND6_STATS_DISPLAY() stats_display_proto(&lwip_stats.nd6, "ND")
#define ND6_STATS_DISPLAY()
#define ND6_STATS_INC(x) STATS_INC(x)
#define ND6_STATS_INC(x)
#define STATS_DEC(x) --lwip_stats.x
#define STATS_GET(x) lwip_stats.x
#define STATS_INC(x) ++lwip_stats.x
#define STATS_INC_USED(x, y, type) do { lwip_stats.x.used = (type)(lwip_stats.x.used + y); \
                                if (lwip_stats.x.max < lwip_stats.x.used) { \
                                    lwip_stats.x.max = lwip_stats.x.used; \
                                } \
                             } while(0)
#define SYS_STATS_DEC(x) STATS_DEC(sys.x)
#define SYS_STATS_DEC(x)
#define SYS_STATS_DISPLAY() stats_display_sys(&lwip_stats.sys)
#define SYS_STATS_DISPLAY()
#define SYS_STATS_INC(x) STATS_INC(sys.x)
#define SYS_STATS_INC(x)
#define SYS_STATS_INC_USED(x) STATS_INC_USED(sys.x, 1, STAT_COUNTER)
#define SYS_STATS_INC_USED(x)
#define TCP_STATS_DISPLAY() stats_display_proto(&lwip_stats.tcp, "TCP")
#define TCP_STATS_DISPLAY()
#define TCP_STATS_INC(x) STATS_INC(x)
#define TCP_STATS_INC(x)
#define UDP_STATS_DISPLAY() stats_display_proto(&lwip_stats.udp, "UDP")
#define UDP_STATS_DISPLAY()
#define UDP_STATS_INC(x) STATS_INC(x)
#define UDP_STATS_INC(x)
#define stats_display()
#define stats_display_igmp(igmp, name)
#define stats_display_mem(mem, name)
#define stats_display_memp(mem, index)
#define stats_display_proto(proto, name)
#define stats_display_sys(sys)
