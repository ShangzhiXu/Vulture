#define ALTCP_TCP_ASSERT_CONN(conn) do { \
  LWIP_ASSERT("conn->inner_conn == NULL", (conn)->inner_conn == NULL); \
  LWIP_UNUSED_ARG(conn); /* for LWIP_NOASSERT */ } while(0)
#define ALTCP_TCP_ASSERT_CONN_PCB(conn, tpcb) do { \
  LWIP_ASSERT("pcb mismatch", (conn)->state == tpcb); \
  LWIP_UNUSED_ARG(tpcb); /* for LWIP_NOASSERT */ \
  ALTCP_TCP_ASSERT_CONN(conn); } while(0)
