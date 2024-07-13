#define IN_NONBLOCKING_CONNECT(conn) netconn_is_flag_set(conn, NETCONN_FLAG_IN_NONBLOCKING_CONNECT)
#define NETCONN_MBOX_VALID(conn, mbox) (sys_mbox_valid(mbox) && ((conn->flags & NETCONN_FLAG_MBOXINVALID) == 0))
#define NETCONN_MBOX_VALID(conn, mbox) sys_mbox_valid(mbox)
#define SET_NONBLOCKING_CONNECT(conn, val)  do { if (val) { \
  netconn_set_flags(conn, NETCONN_FLAG_IN_NONBLOCKING_CONNECT); \
} else { \
  netconn_clear_flags(conn, NETCONN_FLAG_IN_NONBLOCKING_CONNECT); }} while(0)
#define TCPIP_APIMSG_ACK(m)
#define TCPIP_APIMSG_ACK(m)   do { sys_sem_signal(LWIP_API_MSG_SEM(m)); } while(0)
