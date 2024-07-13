#define API_EVENT(c,e,l) if (c->callback) {         \
                           (*c->callback)(c, e, l); \
                         }
#define NETCONNTYPE_DATAGRAM(t)      ((t)&0xE0)
#define NETCONNTYPE_GROUP(t)         ((t)&0xF0)
#define NETCONNTYPE_ISIPV6(t)        (((t)&NETCONN_TYPE_IPV6) != 0)
#define NETCONNTYPE_ISUDPLITE(t)     (((t)&0xF3) == NETCONN_UDPLITE)
#define NETCONNTYPE_ISUDPNOCHKSUM(t) (((t)&0xF3) == NETCONN_UDPNOCHKSUM)
#define netconn_addr(c,i,p) netconn_getaddr(c,i,p,1)
#define netconn_clear_flags(conn, clr_flags)   do { (conn)->flags = (u8_t)((conn)->flags & (u8_t)(~(clr_flags) & 0xff)); } while(0)
#define netconn_get_ipv6only(conn)        (((conn)->flags & NETCONN_FLAG_IPV6_V6ONLY) != 0)
#define netconn_get_recvbufsize(conn)               ((conn)->recv_bufsize)
#define netconn_get_recvtimeout(conn)               ((conn)->recv_timeout)
#define netconn_get_sendtimeout(conn)               ((conn)->send_timeout)
#define netconn_gethostbyname(name, addr) netconn_gethostbyname_addrtype(name, addr, NETCONN_DNS_DEFAULT)
#define netconn_gethostbyname_addrtype(name, addr, dns_addrtype) netconn_gethostbyname(name, addr)
#define netconn_is_flag_set(conn, flag)        (((conn)->flags & (flag)) != 0)
#define netconn_is_nonblocking(conn)        (((conn)->flags & NETCONN_FLAG_NON_BLOCKING) != 0)
#define netconn_listen(conn) netconn_listen_with_backlog(conn, TCP_DEFAULT_LISTEN_BACKLOG)
#define netconn_new(t)                  netconn_new_with_proto_and_callback(t, 0, NULL)
#define netconn_new_with_callback(t, c) netconn_new_with_proto_and_callback(t, 0, c)
#define netconn_peer(c,i,p) netconn_getaddr(c,i,p,0)
#define netconn_recv_bufsize(conn)      ((conn)->recv_bufsize)
#define netconn_set_flags(conn, set_flags)     do { (conn)->flags = (u8_t)((conn)->flags |  (set_flags)); } while(0)
#define netconn_set_ipv6only(conn, val)  do { if(val) { \
  netconn_set_flags(conn, NETCONN_FLAG_IPV6_V6ONLY); \
} else { \
  netconn_clear_flags(conn, NETCONN_FLAG_IPV6_V6ONLY); }} while(0)
#define netconn_set_nonblocking(conn, val)  do { if(val) { \
  netconn_set_flags(conn, NETCONN_FLAG_NON_BLOCKING); \
} else { \
  netconn_clear_flags(conn, NETCONN_FLAG_NON_BLOCKING); }} while(0)
#define netconn_set_recvbufsize(conn, recvbufsize)  ((conn)->recv_bufsize = (recvbufsize))
#define netconn_set_recvtimeout(conn, timeout)      ((conn)->recv_timeout = (timeout))
#define netconn_set_sendtimeout(conn, timeout)      ((conn)->send_timeout = (timeout))
#define netconn_thread_cleanup()
#define netconn_thread_init()
#define netconn_type(conn) (conn->type)
#define netconn_write(conn, dataptr, size, apiflags) \
          netconn_write_partly(conn, dataptr, size, apiflags, NULL)
