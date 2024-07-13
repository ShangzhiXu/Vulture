#define MIB2_COPY_SYSUPTIME_TO(ptrToVal)
#define MIB2_COPY_SYSUPTIME_TO(ptrToVal) (*(ptrToVal) = (sys_now() / 10))
#define MIB2_INIT_NETIF(netif, type, speed) do { \
  (netif)->link_type = (type);  \
  (netif)->link_speed = (speed);\
  (netif)->ts = 0;              \
  (netif)->mib2_counters.ifinoctets = 0;      \
  (netif)->mib2_counters.ifinucastpkts = 0;   \
  (netif)->mib2_counters.ifinnucastpkts = 0;  \
  (netif)->mib2_counters.ifindiscards = 0;    \
  (netif)->mib2_counters.ifinerrors = 0;    \
  (netif)->mib2_counters.ifinunknownprotos = 0;    \
  (netif)->mib2_counters.ifoutoctets = 0;     \
  (netif)->mib2_counters.ifoutucastpkts = 0;  \
  (netif)->mib2_counters.ifoutnucastpkts = 0; \
  (netif)->mib2_counters.ifoutdiscards = 0; \
  (netif)->mib2_counters.ifouterrors = 0; } while(0)
#define MIB2_INIT_NETIF(netif, type, speed)
#define MIB2_STATS_NETIF_ADD(n, x, val) do { (n)->mib2_counters.x += (val); } while(0)
#define MIB2_STATS_NETIF_ADD(n, x, val)
#define MIB2_STATS_NETIF_INC(n, x)      do { ++(n)->mib2_counters.x; } while(0)
#define MIB2_STATS_NETIF_INC(n, x)
#define mib2_add_arp_entry(ni,ip)
#define mib2_add_arp_entry(ni,ip)
#define mib2_add_ip4(ni)
#define mib2_add_route_ip4(dflt, ni)
#define mib2_netif_added(ni)
#define mib2_netif_removed(ni)
#define mib2_remove_arp_entry(ni,ip)
#define mib2_remove_arp_entry(ni,ip)
#define mib2_remove_ip4(ni)
#define mib2_remove_route_ip4(dflt, ni)
#define mib2_udp_bind(pcb)
#define mib2_udp_unbind(pcb)
#define snmp_add_ifinoctets(ni,value)  MIB2_STATS_NETIF_ADD(ni, ifinoctets, value)
#define snmp_add_ifoutoctets(ni,value) MIB2_STATS_NETIF_ADD(ni, ifoutoctets, value)
#define snmp_inc_ifindiscards(ni)      MIB2_STATS_NETIF_INC(ni, ifindiscards)
#define snmp_inc_ifinerrors(ni)        MIB2_STATS_NETIF_INC(ni, ifinerrors)
#define snmp_inc_ifinnucastpkts(ni)    MIB2_STATS_NETIF_INC(ni, ifinnucastpkts)
#define snmp_inc_ifinucastpkts(ni)     MIB2_STATS_NETIF_INC(ni, ifinucastpkts)
#define snmp_inc_ifinunknownprotos(ni) MIB2_STATS_NETIF_INC(ni, ifinunknownprotos)
#define snmp_inc_ifoutdiscards(ni)     MIB2_STATS_NETIF_INC(ni, ifoutdiscards)
#define snmp_inc_ifouterrors(ni)       MIB2_STATS_NETIF_INC(ni, ifouterrors)
#define snmp_inc_ifoutnucastpkts(ni)   MIB2_STATS_NETIF_INC(ni, ifoutnucastpkts)
#define snmp_inc_ifoutucastpkts(ni)    MIB2_STATS_NETIF_INC(ni, ifoutucastpkts)
