#define IP6_ADDR(ip6addr, idx0, idx1, idx2, idx3) do { \
  (ip6addr)->addr[0] = idx0; \
  (ip6addr)->addr[1] = idx1; \
  (ip6addr)->addr[2] = idx2; \
  (ip6addr)->addr[3] = idx3; \
  ip6_addr_clear_zone(ip6addr); } while(0)
#define IP6_ADDR_BLOCK1(ip6addr) ((u16_t)((lwip_htonl((ip6addr)->addr[0]) >> 16) & 0xffff))
#define IP6_ADDR_BLOCK2(ip6addr) ((u16_t)((lwip_htonl((ip6addr)->addr[0])) & 0xffff))
#define IP6_ADDR_BLOCK3(ip6addr) ((u16_t)((lwip_htonl((ip6addr)->addr[1]) >> 16) & 0xffff))
#define IP6_ADDR_BLOCK4(ip6addr) ((u16_t)((lwip_htonl((ip6addr)->addr[1])) & 0xffff))
#define IP6_ADDR_BLOCK5(ip6addr) ((u16_t)((lwip_htonl((ip6addr)->addr[2]) >> 16) & 0xffff))
#define IP6_ADDR_BLOCK6(ip6addr) ((u16_t)((lwip_htonl((ip6addr)->addr[2])) & 0xffff))
#define IP6_ADDR_BLOCK7(ip6addr) ((u16_t)((lwip_htonl((ip6addr)->addr[3]) >> 16) & 0xffff))
#define IP6_ADDR_BLOCK8(ip6addr) ((u16_t)((lwip_htonl((ip6addr)->addr[3])) & 0xffff))
#define IP6_ADDR_PART(ip6addr, index, a,b,c,d) \
  (ip6addr)->addr[index] = PP_HTONL(LWIP_MAKEU32(a,b,c,d))
#define ip6_addr_cmp(addr1, addr2) (ip6_addr_cmp_zoneless((addr1), (addr2)) && \
                                    ip6_addr_cmp_zone((addr1), (addr2)))
#define ip6_addr_cmp_packed(ip6addr, paddr, zone_idx) (((ip6addr)->addr[0] == (paddr)->addr[0]) && \
                                    ((ip6addr)->addr[1] == (paddr)->addr[1]) && \
                                    ((ip6addr)->addr[2] == (paddr)->addr[2]) && \
                                    ((ip6addr)->addr[3] == (paddr)->addr[3]) && \
                                    ip6_addr_equals_zone((ip6addr), (zone_idx)))
#define ip6_addr_cmp_solicitednode(ip6addr, sn_addr) (((ip6addr)->addr[0] == PP_HTONL(0xff020000UL)) && \
                                    ((ip6addr)->addr[1] == 0) && \
                                    ((ip6addr)->addr[2] == PP_HTONL(0x00000001UL)) && \
                                    ((ip6addr)->addr[3] == (PP_HTONL(0xff000000UL) | (sn_addr)->addr[3])))
#define ip6_addr_cmp_zoneless(addr1, addr2) (((addr1)->addr[0] == (addr2)->addr[0]) && \
                                    ((addr1)->addr[1] == (addr2)->addr[1]) && \
                                    ((addr1)->addr[2] == (addr2)->addr[2]) && \
                                    ((addr1)->addr[3] == (addr2)->addr[3]))
#define ip6_addr_copy(dest, src) do{(dest).addr[0] = (src).addr[0]; \
                                    (dest).addr[1] = (src).addr[1]; \
                                    (dest).addr[2] = (src).addr[2]; \
                                    (dest).addr[3] = (src).addr[3]; \
                                    ip6_addr_copy_zone((dest), (src)); }while(0)
#define ip6_addr_copy_from_packed(dest, src) do{(dest).addr[0] = (src).addr[0]; \
                                    (dest).addr[1] = (src).addr[1]; \
                                    (dest).addr[2] = (src).addr[2]; \
                                    (dest).addr[3] = (src).addr[3]; \
                                    ip6_addr_clear_zone(&dest); }while(0)
#define ip6_addr_copy_to_packed(dest, src) do{(dest).addr[0] = (src).addr[0]; \
                                    (dest).addr[1] = (src).addr[1]; \
                                    (dest).addr[2] = (src).addr[2]; \
                                    (dest).addr[3] = (src).addr[3]; }while(0)
#define ip6_addr_debug_print(debug, ipaddr) \
  ip6_addr_debug_print_parts(debug, \
                      (u16_t)((ipaddr) != NULL ? IP6_ADDR_BLOCK1(ipaddr) : 0),    \
                      (u16_t)((ipaddr) != NULL ? IP6_ADDR_BLOCK2(ipaddr) : 0),    \
                      (u16_t)((ipaddr) != NULL ? IP6_ADDR_BLOCK3(ipaddr) : 0),    \
                      (u16_t)((ipaddr) != NULL ? IP6_ADDR_BLOCK4(ipaddr) : 0),    \
                      (u16_t)((ipaddr) != NULL ? IP6_ADDR_BLOCK5(ipaddr) : 0),    \
                      (u16_t)((ipaddr) != NULL ? IP6_ADDR_BLOCK6(ipaddr) : 0),    \
                      (u16_t)((ipaddr) != NULL ? IP6_ADDR_BLOCK7(ipaddr) : 0),    \
                      (u16_t)((ipaddr) != NULL ? IP6_ADDR_BLOCK8(ipaddr) : 0))
#define ip6_addr_debug_print_parts(debug, a, b, c, d, e, f, g, h) \
  LWIP_DEBUGF(debug, ("%" X16_F ":%" X16_F ":%" X16_F ":%" X16_F ":%" X16_F ":%" X16_F ":%" X16_F ":%" X16_F, \
                      a, b, c, d, e, f, g, h))
#define ip6_addr_debug_print_val(debug, ipaddr) \
  ip6_addr_debug_print_parts(debug, \
                      IP6_ADDR_BLOCK1(&(ipaddr)),    \
                      IP6_ADDR_BLOCK2(&(ipaddr)),    \
                      IP6_ADDR_BLOCK3(&(ipaddr)),    \
                      IP6_ADDR_BLOCK4(&(ipaddr)),    \
                      IP6_ADDR_BLOCK5(&(ipaddr)),    \
                      IP6_ADDR_BLOCK6(&(ipaddr)),    \
                      IP6_ADDR_BLOCK7(&(ipaddr)),    \
                      IP6_ADDR_BLOCK8(&(ipaddr)))
#define ip6_addr_isallnodes_iflocal(ip6addr) (((ip6addr)->addr[0] == PP_HTONL(0xff010000UL)) && \
    ((ip6addr)->addr[1] == 0UL) && \
    ((ip6addr)->addr[2] == 0UL) && \
    ((ip6addr)->addr[3] == PP_HTONL(0x00000001UL)))
#define ip6_addr_isallnodes_linklocal(ip6addr) (((ip6addr)->addr[0] == PP_HTONL(0xff020000UL)) && \
    ((ip6addr)->addr[1] == 0UL) && \
    ((ip6addr)->addr[2] == 0UL) && \
    ((ip6addr)->addr[3] == PP_HTONL(0x00000001UL)))
#define ip6_addr_isallrouters_linklocal(ip6addr) (((ip6addr)->addr[0] == PP_HTONL(0xff020000UL)) && \
    ((ip6addr)->addr[1] == 0UL) && \
    ((ip6addr)->addr[2] == 0UL) && \
    ((ip6addr)->addr[3] == PP_HTONL(0x00000002UL)))
#define ip6_addr_isany(ip6addr) (((ip6addr) == NULL) || ip6_addr_isany_val(*(ip6addr)))
#define ip6_addr_isany_val(ip6addr) (((ip6addr).addr[0] == 0) && \
                                     ((ip6addr).addr[1] == 0) && \
                                     ((ip6addr).addr[2] == 0) && \
                                     ((ip6addr).addr[3] == 0))
#define ip6_addr_isdeprecated(addr_state) (addr_state == IP6_ADDR_DEPRECATED)
#define ip6_addr_isduplicated(addr_state) (addr_state == IP6_ADDR_DUPLICATED)
#define ip6_addr_isglobal(ip6addr) (((ip6addr)->addr[0] & PP_HTONL(0xe0000000UL)) == PP_HTONL(0x20000000UL))
#define ip6_addr_isinvalid(addr_state) (addr_state == IP6_ADDR_INVALID)
#define ip6_addr_isipv4mappedipv6(ip6addr) (((ip6addr)->addr[0] == 0) && ((ip6addr)->addr[1] == 0) && (((ip6addr)->addr[2]) == PP_HTONL(0x0000FFFFUL)))
#define ip6_addr_islinklocal(ip6addr) (((ip6addr)->addr[0] & PP_HTONL(0xffc00000UL)) == PP_HTONL(0xfe800000UL))
#define ip6_addr_isloopback(ip6addr) (((ip6addr)->addr[0] == 0UL) && \
                                      ((ip6addr)->addr[1] == 0UL) && \
                                      ((ip6addr)->addr[2] == 0UL) && \
                                      ((ip6addr)->addr[3] == PP_HTONL(0x00000001UL)))
#define ip6_addr_ismulticast(ip6addr) (((ip6addr)->addr[0] & PP_HTONL(0xff000000UL)) == PP_HTONL(0xff000000UL))
#define ip6_addr_ismulticast_adminlocal(ip6addr) (((ip6addr)->addr[0] & PP_HTONL(0xff8f0000UL)) == PP_HTONL(0xff040000UL))
#define ip6_addr_ismulticast_global(ip6addr) (((ip6addr)->addr[0] & PP_HTONL(0xff8f0000UL)) == PP_HTONL(0xff0e0000UL))
#define ip6_addr_ismulticast_iflocal(ip6addr) (((ip6addr)->addr[0] & PP_HTONL(0xff8f0000UL)) == PP_HTONL(0xff010000UL))
#define ip6_addr_ismulticast_linklocal(ip6addr) (((ip6addr)->addr[0] & PP_HTONL(0xff8f0000UL)) == PP_HTONL(0xff020000UL))
#define ip6_addr_ismulticast_orglocal(ip6addr) (((ip6addr)->addr[0] & PP_HTONL(0xff8f0000UL)) == PP_HTONL(0xff080000UL))
#define ip6_addr_ismulticast_sitelocal(ip6addr) (((ip6addr)->addr[0] & PP_HTONL(0xff8f0000UL)) == PP_HTONL(0xff050000UL))
#define ip6_addr_ispreferred(addr_state) (addr_state == IP6_ADDR_PREFERRED)
#define ip6_addr_issitelocal(ip6addr) (((ip6addr)->addr[0] & PP_HTONL(0xffc00000UL)) == PP_HTONL(0xfec00000UL))
#define ip6_addr_issolicitednode(ip6addr) ( ((ip6addr)->addr[0] == PP_HTONL(0xff020000UL)) && \
        ((ip6addr)->addr[2] == PP_HTONL(0x00000001UL)) && \
        (((ip6addr)->addr[3] & PP_HTONL(0xff000000UL)) == PP_HTONL(0xff000000UL)) )
#define ip6_addr_istentative(addr_state) (addr_state & IP6_ADDR_TENTATIVE)
#define ip6_addr_isuniquelocal(ip6addr) (((ip6addr)->addr[0] & PP_HTONL(0xfe000000UL)) == PP_HTONL(0xfc000000UL))
#define ip6_addr_isvalid(addr_state) (addr_state & IP6_ADDR_VALID) /* Include valid, preferred, and deprecated. */
#define ip6_addr_life_isinfinite(addr_life) ((addr_life) == IP6_ADDR_LIFE_INFINITE)
#define ip6_addr_life_isstatic(addr_life) ((addr_life) == IP6_ADDR_LIFE_STATIC)
#define ip6_addr_multicast_prefix_flag(ip6addr)     ((ip6addr)->addr[0] & PP_HTONL(0x00200000UL))
#define ip6_addr_multicast_rendezvous_flag(ip6addr) ((ip6addr)->addr[0] & PP_HTONL(0x00400000UL))
#define ip6_addr_multicast_scope(ip6addr) ((lwip_htonl((ip6addr)->addr[0]) >> 16) & 0xf)
#define ip6_addr_multicast_transient_flag(ip6addr)  ((ip6addr)->addr[0] & PP_HTONL(0x00100000UL))
#define ip6_addr_netcmp(addr1, addr2) (ip6_addr_netcmp_zoneless((addr1), (addr2)) && \
                                       ip6_addr_cmp_zone((addr1), (addr2)))
#define ip6_addr_netcmp_zoneless(addr1, addr2) (((addr1)->addr[0] == (addr2)->addr[0]) && \
                                               ((addr1)->addr[1] == (addr2)->addr[1]))
#define ip6_addr_nethostcmp(addr1, addr2) (((addr1)->addr[2] == (addr2)->addr[2]) && \
                                           ((addr1)->addr[3] == (addr2)->addr[3]))
#define ip6_addr_set(dest, src) do{(dest)->addr[0] = (src) == NULL ? 0 : (src)->addr[0]; \
                                   (dest)->addr[1] = (src) == NULL ? 0 : (src)->addr[1]; \
                                   (dest)->addr[2] = (src) == NULL ? 0 : (src)->addr[2]; \
                                   (dest)->addr[3] = (src) == NULL ? 0 : (src)->addr[3]; \
                                   ip6_addr_set_zone((dest), (src) == NULL ? IP6_NO_ZONE : ip6_addr_zone(src)); }while(0)
#define ip6_addr_set_allnodes_linklocal(ip6addr) do{(ip6addr)->addr[0] = PP_HTONL(0xff020000UL); \
                (ip6addr)->addr[1] = 0; \
                (ip6addr)->addr[2] = 0; \
                (ip6addr)->addr[3] = PP_HTONL(0x00000001UL); \
                ip6_addr_clear_zone(ip6addr); }while(0)
#define ip6_addr_set_allrouters_linklocal(ip6addr) do{(ip6addr)->addr[0] = PP_HTONL(0xff020000UL); \
                (ip6addr)->addr[1] = 0; \
                (ip6addr)->addr[2] = 0; \
                (ip6addr)->addr[3] = PP_HTONL(0x00000002UL); \
                ip6_addr_clear_zone(ip6addr); }while(0)
#define ip6_addr_set_any(ip6addr)       ip6_addr_set_zero(ip6addr)
#define ip6_addr_set_hton(dest, src) do{(dest)->addr[0] = (src) == NULL ? 0 : lwip_htonl((src)->addr[0]); \
                                        (dest)->addr[1] = (src) == NULL ? 0 : lwip_htonl((src)->addr[1]); \
                                        (dest)->addr[2] = (src) == NULL ? 0 : lwip_htonl((src)->addr[2]); \
                                        (dest)->addr[3] = (src) == NULL ? 0 : lwip_htonl((src)->addr[3]); \
                                        ip6_addr_set_zone((dest), (src) == NULL ? IP6_NO_ZONE : ip6_addr_zone(src));}while(0)
#define ip6_addr_set_loopback(ip6addr) do{(ip6addr)->addr[0] = 0; \
                                          (ip6addr)->addr[1] = 0; \
                                          (ip6addr)->addr[2] = 0; \
                                          (ip6addr)->addr[3] = PP_HTONL(0x00000001UL); \
                                          ip6_addr_clear_zone(ip6addr);}while(0)
#define ip6_addr_set_solicitednode(ip6addr, if_id) do{(ip6addr)->addr[0] = PP_HTONL(0xff020000UL); \
                (ip6addr)->addr[1] = 0; \
                (ip6addr)->addr[2] = PP_HTONL(0x00000001UL); \
                (ip6addr)->addr[3] = (PP_HTONL(0xff000000UL) | (if_id)); \
                ip6_addr_clear_zone(ip6addr); }while(0)
#define ip6_addr_set_zero(ip6addr)    do{(ip6addr)->addr[0] = 0; \
                                         (ip6addr)->addr[1] = 0; \
                                         (ip6addr)->addr[2] = 0; \
                                         (ip6addr)->addr[3] = 0; \
                                         ip6_addr_clear_zone(ip6addr);}while(0)
#define ip6_get_subnet_id(ip6addr)   (lwip_htonl((ip6addr)->addr[2]) & 0x0000ffffUL)
