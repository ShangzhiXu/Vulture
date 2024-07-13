  struct snmp_varbind *next;
  struct snmp_obj_id oid;
  struct snmp_varbind *prev;
  u8_t type;
  void *value;
  u16_t value_len;
