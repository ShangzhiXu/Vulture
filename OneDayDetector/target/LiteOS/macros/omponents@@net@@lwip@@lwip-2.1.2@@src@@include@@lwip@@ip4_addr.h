#define IP4_ADDR(ipaddr, a,b,c,d)  (ipaddr)->addr = PP_HTONL(LWIP_MAKEU32(a,b,c,d))
#define IP_BADCLASS(a)      (((u32_t)(a) & 0xf0000000UL) == 0xf0000000UL)
#define IP_CLASSA(a)        ((((u32_t)(a)) & 0x80000000UL) == 0)
#define IP_CLASSB(a)        ((((u32_t)(a)) & 0xc0000000UL) == 0x80000000UL)
#define IP_CLASSC(a)        ((((u32_t)(a)) & 0xe0000000UL) == 0xc0000000UL)
#define IP_CLASSD(a)        (((u32_t)(a) & 0xf0000000UL) == 0xe0000000UL)
#define IP_EXPERIMENTAL(a)  (((u32_t)(a) & 0xf0000000UL) == 0xf0000000UL)
#define IP_MULTICAST(a)     IP_CLASSD(a)
#define ip4_addr1(ipaddr) ip4_addr_get_byte(ipaddr, 0)
#define ip4_addr1_16(ipaddr) ((u16_t)ip4_addr1(ipaddr))
#define ip4_addr1_16_val(ipaddr) ((u16_t)ip4_addr1_val(ipaddr))
#define ip4_addr1_val(ipaddr) ip4_addr_get_byte_val(ipaddr, 0)
#define ip4_addr2(ipaddr) ip4_addr_get_byte(ipaddr, 1)
#define ip4_addr2_16(ipaddr) ((u16_t)ip4_addr2(ipaddr))
#define ip4_addr2_16_val(ipaddr) ((u16_t)ip4_addr2_val(ipaddr))
#define ip4_addr2_val(ipaddr) ip4_addr_get_byte_val(ipaddr, 1)
#define ip4_addr3(ipaddr) ip4_addr_get_byte(ipaddr, 2)
#define ip4_addr3_16(ipaddr) ((u16_t)ip4_addr3(ipaddr))
#define ip4_addr3_16_val(ipaddr) ((u16_t)ip4_addr3_val(ipaddr))
#define ip4_addr3_val(ipaddr) ip4_addr_get_byte_val(ipaddr, 2)
#define ip4_addr4(ipaddr) ip4_addr_get_byte(ipaddr, 3)
#define ip4_addr4_16(ipaddr) ((u16_t)ip4_addr4(ipaddr))
#define ip4_addr4_16_val(ipaddr) ((u16_t)ip4_addr4_val(ipaddr))
#define ip4_addr4_val(ipaddr) ip4_addr_get_byte_val(ipaddr, 3)
#define ip4_addr_cmp(addr1, addr2) ((addr1)->addr == (addr2)->addr)
#define ip4_addr_copy(dest, src) ((dest).addr = (src).addr)
#define ip4_addr_debug_print(debug, ipaddr) \
  ip4_addr_debug_print_parts(debug, \
                      (u16_t)((ipaddr) != NULL ? ip4_addr1_16(ipaddr) : 0),       \
                      (u16_t)((ipaddr) != NULL ? ip4_addr2_16(ipaddr) : 0),       \
                      (u16_t)((ipaddr) != NULL ? ip4_addr3_16(ipaddr) : 0),       \
                      (u16_t)((ipaddr) != NULL ? ip4_addr4_16(ipaddr) : 0))
#define ip4_addr_debug_print_parts(debug, a, b, c, d) \
  LWIP_DEBUGF(debug, ("%" U16_F ".%" U16_F ".%" U16_F ".%" U16_F, a, b, c, d))
#define ip4_addr_debug_print_val(debug, ipaddr) \
  ip4_addr_debug_print_parts(debug, \
                      ip4_addr1_16_val(ipaddr),       \
                      ip4_addr2_16_val(ipaddr),       \
                      ip4_addr3_16_val(ipaddr),       \
                      ip4_addr4_16_val(ipaddr))
#define ip4_addr_get_byte(ipaddr, idx) (((const u8_t*)(&(ipaddr)->addr))[idx])
#define ip4_addr_get_byte_val(ipaddr, idx) ((u8_t)(((ipaddr).addr >> (idx * 8)) & 0xff))
#define ip4_addr_get_network(target, host, netmask) do { ((target)->addr = ((host)->addr) & ((netmask)->addr)); } while(0)
#define ip4_addr_get_u32(src_ipaddr) ((src_ipaddr)->addr)
#define ip4_addr_isany(addr1) ((addr1) == NULL || ip4_addr_isany_val(*(addr1)))
#define ip4_addr_isany_val(addr1)   ((addr1).addr == IPADDR_ANY)
#define ip4_addr_isbroadcast(addr1, netif) ip4_addr_isbroadcast_u32((addr1)->addr, netif)
#define ip4_addr_islinklocal(addr1) (((addr1)->addr & PP_HTONL(0xffff0000UL)) == PP_HTONL(0xa9fe0000UL))
#define ip4_addr_isloopback(ipaddr)    (((ipaddr)->addr & PP_HTONL(IP_CLASSA_NET)) == PP_HTONL(((u32_t)IP_LOOPBACKNET) << 24))
#define ip4_addr_ismulticast(addr1) (((addr1)->addr & PP_HTONL(0xf0000000UL)) == PP_HTONL(0xe0000000UL))
#define ip4_addr_netcmp(addr1, addr2, mask) (((addr1)->addr & \
                                              (mask)->addr) == \
                                             ((addr2)->addr & \
                                              (mask)->addr))
#define ip4_addr_set(dest, src) ((dest)->addr = \
                                    ((src) == NULL ? 0 : \
                                    (src)->addr))
#define ip4_addr_set_any(ipaddr)      ((ipaddr)->addr = IPADDR_ANY)
#define ip4_addr_set_hton(dest, src) ((dest)->addr = \
                               ((src) == NULL ? 0:\
                               lwip_htonl((src)->addr)))
#define ip4_addr_set_loopback(ipaddr) ((ipaddr)->addr = PP_HTONL(IPADDR_LOOPBACK))
#define ip4_addr_set_u32(dest_ipaddr, src_u32) ((dest_ipaddr)->addr = (src_u32))
#define ip4_addr_set_zero(ipaddr)     ((ipaddr)->addr = 0)
#define ip_addr_netmask_valid(netmask) ip4_addr_netmask_valid((netmask)->addr)
#define ip_ntoa(ipaddr)  ipaddr_ntoa(ipaddr)
