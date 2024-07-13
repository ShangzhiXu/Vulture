#define SNMP_CREATE_EMPTY_TREE_NODE(oid) \
  {{ SNMP_NODE_TREE, (oid) }, \
  0, NULL }
#define SNMP_CREATE_TREE_NODE(oid, subnodes) \
  {{ SNMP_NODE_TREE, (oid) }, \
  (u16_t)LWIP_ARRAYSIZE(subnodes), (subnodes) }
#define SNMP_MIB_CREATE(oid_list, root_node) { (oid_list), (u8_t)LWIP_ARRAYSIZE(oid_list), root_node }
