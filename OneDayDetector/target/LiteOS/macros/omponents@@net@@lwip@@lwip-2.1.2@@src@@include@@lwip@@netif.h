#define IF__NETIF_CHECKSUM_ENABLED(netif, chksumflag) if (((netif) == NULL) || (((netif)->chksum_flags & (chksumflag)) != 0))
#define IF__NETIF_CHECKSUM_ENABLED(netif, chksumflag)
#define NETIF_DECLARE_EXT_CALLBACK(name) static netif_ext_callback_t name;
#define NETIF_DECLARE_EXT_CALLBACK(name)
#define NETIF_FOREACH(netif) if (((netif) = netif_default) != NULL)
#define NETIF_FOREACH(netif) for ((netif) = netif_list; (netif) != NULL; (netif) = (netif)->next)
#define NETIF_RESET_HINTS(netif)      (netif)->hints = NULL
#define NETIF_RESET_HINTS(netif)
#define NETIF_SET_CHECKSUM_CTRL(netif, chksumflags) do { \
  (netif)->chksum_flags = chksumflags; } while(0)
#define NETIF_SET_CHECKSUM_CTRL(netif, chksumflags)
#define NETIF_SET_HINTS(netif, netifhint)  (netif)->hints = (netifhint)
#define NETIF_SET_HINTS(netif, netifhint)
#define netif_add_ext_callback(callback, fn)
#define netif_clear_flags(netif, clr_flags)   do { (netif)->flags = (u8_t)((netif)->flags & (u8_t)(~(clr_flags) & 0xff)); } while(0)
#define netif_get_client_data(netif, id)       (netif)->client_data[(id)]
#define netif_get_hostname(netif) (((netif) != NULL) ? ((netif)->hostname) : NULL)
#define netif_get_igmp_mac_filter(netif) (((netif) != NULL) ? ((netif)->igmp_mac_filter) : NULL)
#define netif_get_index(netif)      ((u8_t)((netif)->num + 1))
#define netif_get_mld_mac_filter(netif) (((netif) != NULL) ? ((netif)->mld_mac_filter) : NULL)
#define netif_invoke_ext_callback(netif, reason, args)
#define netif_ip4_addr(netif)    ((const ip4_addr_t*)ip_2_ip4(&((netif)->ip_addr)))
#define netif_ip4_gw(netif)      ((const ip4_addr_t*)ip_2_ip4(&((netif)->gw)))
#define netif_ip4_netmask(netif) ((const ip4_addr_t*)ip_2_ip4(&((netif)->netmask)))
#define netif_ip6_addr(netif, i)  ((const ip6_addr_t*)ip_2_ip6(&((netif)->ip6_addr[i])))
#define netif_ip6_addr_isstatic(netif, i)  \
    (netif_ip6_addr_valid_life((netif), (i)) == IP6_ADDR_LIFE_STATIC)
#define netif_ip6_addr_isstatic(netif, i)  (1) /* all addresses are static */
#define netif_ip6_addr_pref_life(netif, i)  \
    (((netif) != NULL) ? ((netif)->ip6_addr_pref_life[i]) : IP6_ADDR_LIFE_STATIC)
#define netif_ip6_addr_set_pref_life(netif, i, secs) \
    do { if (netif != NULL) { (netif)->ip6_addr_pref_life[i] = (secs); }} while (0)
#define netif_ip6_addr_set_valid_life(netif, i, secs) \
    do { if (netif != NULL) { (netif)->ip6_addr_valid_life[i] = (secs); }} while (0)
#define netif_ip6_addr_state(netif, i)  ((netif)->ip6_addr_state[i])
#define netif_ip6_addr_valid_life(netif, i)  \
    (((netif) != NULL) ? ((netif)->ip6_addr_valid_life[i]) : IP6_ADDR_LIFE_STATIC)
#define netif_ip_addr4(netif)    ((const ip_addr_t*)&((netif)->ip_addr))
#define netif_ip_addr6(netif, i)  ((const ip_addr_t*)(&((netif)->ip6_addr[i])))
#define netif_ip_gw4(netif)      ((const ip_addr_t*)&((netif)->gw))
#define netif_ip_netmask4(netif) ((const ip_addr_t*)&((netif)->netmask))
#define netif_is_flag_set(nefif, flag)        (((netif)->flags & (flag)) != 0)
#define netif_is_link_up(netif) (((netif)->flags & NETIF_FLAG_LINK_UP) ? (u8_t)1 : (u8_t)0)
#define netif_is_up(netif) (((netif)->flags & NETIF_FLAG_UP) ? (u8_t)1 : (u8_t)0)
#define netif_mld_mac_filter(netif, addr, action) do { if((netif) && (netif)->mld_mac_filter) { (netif)->mld_mac_filter((netif), (addr), (action)); }}while(0)
#define netif_mtu6(netif) ((netif)->mtu6)
#define netif_mtu6(netif) ((netif)->mtu)
#define netif_remove_ext_callback(callback)
#define netif_set_client_data(netif, id, data) netif_get_client_data(netif, id) = (data)
#define netif_set_flags(netif, set_flags)     do { (netif)->flags = (u8_t)((netif)->flags |  (set_flags)); } while(0)
#define netif_set_hostname(netif, name) do { if((netif) != NULL) { (netif)->hostname = name; }}while(0)
#define netif_set_igmp_mac_filter(netif, function) do { if((netif) != NULL) { (netif)->igmp_mac_filter = function; }}while(0)
#define netif_set_ip6_autoconfig_enabled(netif, action) do { if(netif) { (netif)->ip6_autoconfig_enabled = (action); }}while(0)
#define netif_set_mld_mac_filter(netif, function) do { if((netif) != NULL) { (netif)->mld_mac_filter = function; }}while(0)
