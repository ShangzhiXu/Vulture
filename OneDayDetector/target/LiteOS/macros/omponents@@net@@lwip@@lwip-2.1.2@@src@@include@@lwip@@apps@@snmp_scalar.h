#define SNMP_SCALAR_CREATE_ARRAY_NODE(oid, array_nodes, get_value_method, set_test_method, set_value_method) \
  {{{ SNMP_NODE_SCALAR_ARRAY, (oid) }, \
    snmp_scalar_array_get_instance, \
    snmp_scalar_array_get_next_instance }, \
    (u16_t)LWIP_ARRAYSIZE(array_nodes), (array_nodes), (get_value_method), (set_test_method), (set_value_method) }
#define SNMP_SCALAR_CREATE_NODE(oid, access, asn1_type, get_value_method, set_test_method, set_value_method) \
  {{{ SNMP_NODE_SCALAR, (oid) }, \
    snmp_scalar_get_instance, \
    snmp_scalar_get_next_instance }, \
    (asn1_type), (access), (get_value_method), (set_test_method), (set_value_method) }
#define SNMP_SCALAR_CREATE_NODE_READONLY(oid, asn1_type, get_value_method) SNMP_SCALAR_CREATE_NODE(oid, SNMP_NODE_INSTANCE_READ_ONLY, asn1_type, get_value_method, NULL, NULL)
