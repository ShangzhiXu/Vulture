  u8_t  length_len; /* indicates how many bytes are required to encode the 'value_len' field */
  u8_t  type;       /* only U8 because extended types are not specified by SNMP */
  u8_t  type_len;   /* encoded length of 'type' field (normally 1) */
  u16_t value_len;  /* encoded length of the value */
