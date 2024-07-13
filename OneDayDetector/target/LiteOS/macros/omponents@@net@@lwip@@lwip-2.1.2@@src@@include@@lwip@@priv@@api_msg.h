#define API_MSG_M_DEF_SEM(m)  *m
#define LWIP_API_MSG_SEM(msg)          ((msg)->op_completed_sem)
#define LWIP_API_MSG_SEM(msg)          (&(msg)->conn->op_completed)
#define NETIFAPI_IPADDR_DEF(type, m)  type m
#define NETIFAPI_IPADDR_DEF(type, m)  const type * m
