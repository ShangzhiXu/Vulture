  ip4_addr_t         group_address;
  u8_t               group_state;
  u8_t               last_reporter_flag;
  struct igmp_group *next;
  u16_t              timer;
  u8_t               use;
