#define altcp_get_ip(pcb, local) ((local) ? (&(pcb)->local_ip) : (&(pcb)->remote_ip))
#define altcp_listen(conn) altcp_listen_with_backlog_and_err(conn, TCP_DEFAULT_LISTEN_BACKLOG, NULL)
#define altcp_listen_with_backlog(conn, backlog) altcp_listen_with_backlog_and_err(conn, backlog, NULL)
#define altcp_new(allocator) tcp_new()
#define altcp_new_ip6(allocator) tcp_new_ip6()
#define altcp_new_ip_type(allocator, ip_type) tcp_new_ip_type(ip_type)
