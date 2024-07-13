  snmp_access_t access;
  u8_t asn1_type;
  u8_t asn1_type;
  u16_t column_count;
  u16_t column_count;
  const struct snmp_table_col_def* columns;
  const struct snmp_table_simple_col_def* columns;
  snmp_table_column_data_type_t data_type; /* depending of what union member is used to store the value*/
  snmp_err_t (*get_cell_instance)(const u32_t* column, const u32_t* row_oid, u8_t row_oid_len, struct snmp_node_instance* cell_instance);
  snmp_err_t (*get_cell_value)(const u32_t* column, const u32_t* row_oid, u8_t row_oid_len, union snmp_variant_value* value, u32_t* value_len);
  snmp_err_t (*get_next_cell_instance)(const u32_t* column, struct snmp_obj_id* row_oid, struct snmp_node_instance* cell_instance);
  snmp_err_t (*get_next_cell_instance_and_value)(const u32_t* column, struct snmp_obj_id* row_oid, union snmp_variant_value* value, u32_t* value_len);
  node_instance_get_value_method get_value;
  u32_t index;
  u32_t index;
  struct snmp_leaf_node node;
  struct snmp_leaf_node node;
  node_instance_set_test_method set_test;
  node_instance_set_value_method set_value;
