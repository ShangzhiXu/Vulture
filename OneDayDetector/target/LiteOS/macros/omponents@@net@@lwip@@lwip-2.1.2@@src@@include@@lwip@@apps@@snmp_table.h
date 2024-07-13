#define SNMP_TABLE_CREATE(oid, columns, get_cell_instance_method, get_next_cell_instance_method, get_value_method, set_test_method, set_value_method) \
  {{{ SNMP_NODE_TABLE, (oid) }, \
  snmp_table_get_instance, \
  snmp_table_get_next_instance }, \
  (u16_t)LWIP_ARRAYSIZE(columns), (columns), \
  (get_cell_instance_method), (get_next_cell_instance_method), \
  (get_value_method), (set_test_method), (set_value_method)}
#define SNMP_TABLE_CREATE_SIMPLE(oid, columns, get_cell_value_method, get_next_cell_instance_and_value_method) \
  {{{ SNMP_NODE_TABLE, (oid) }, \
  snmp_table_simple_get_instance, \
  snmp_table_simple_get_next_instance }, \
  (u16_t)LWIP_ARRAYSIZE(columns), (columns), (get_cell_value_method), (get_next_cell_instance_and_value_method) }
#define SNMP_TABLE_GET_COLUMN_FROM_OID(oid) ((oid)[1]) /* first array value is (fixed) row entry (fixed to 1) and 2nd value is column, follow3ed by instance */
