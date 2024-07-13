#define CREATE_LWIP_SYNC_NODE(oid, node_name) \
   static const struct snmp_threadsync_node node_name ## _synced = SNMP_CREATE_THREAD_SYNC_NODE(oid, &node_name.node, &snmp_mib2_lwip_locks);
#define CREATE_LWIP_SYNC_NODE(oid, node_name)
#define SYNC_NODE_NAME(node_name) node_name ## _synced
#define SYNC_NODE_NAME(node_name) node_name
