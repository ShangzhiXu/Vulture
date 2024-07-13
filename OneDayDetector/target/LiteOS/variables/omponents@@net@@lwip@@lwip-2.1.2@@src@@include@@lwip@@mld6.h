  ip6_addr_t         group_address;
  u8_t               group_state;
  u8_t               last_reporter_flag;
  struct mld_group *next;
  u16_t              timer;
  u8_t               use;
