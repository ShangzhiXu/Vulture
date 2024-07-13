  u8_t autoip_coop_state;
  char boot_file_name[DHCP_BOOT_FILE_LEN];
  u16_t lease_used; /* #ticks with period DHCP_COARSE_TIMER_SECS since last received DHCP ack */
  ip4_addr_t offered_gw_addr;
  ip4_addr_t offered_ip_addr;
  ip4_addr_t offered_si_addr;
  ip4_addr_t offered_sn_mask;
  u32_t offered_t0_lease; /* lease period (in seconds) */
  u32_t offered_t1_renew; /* recommended renew time (usually 50% of lease period) */
  u32_t offered_t2_rebind; /* recommended rebind time (usually 87.5 of lease period)  */
  u8_t pcb_allocated;
  u16_t request_timeout; /* #ticks with period DHCP_FINE_TIMER_SECS for request timeout */
  ip_addr_t server_ip_addr; /* dhcp server address that offered this lease (ip_addr_t because passed to UDP) */
  u8_t state;
  u8_t subnet_mask_given;
  u16_t t0_timeout; /* #ticks with period DHCP_COARSE_TIMER_SECS for lease time */
  u16_t t1_renew_time;  /* #ticks with period DHCP_COARSE_TIMER_SECS until next renew try */
  u16_t t1_timeout;  /* #ticks with period DHCP_COARSE_TIMER_SECS for renewal time */
  u16_t t2_rebind_time; /* #ticks with period DHCP_COARSE_TIMER_SECS until next rebind try */
  u16_t t2_timeout;  /* #ticks with period DHCP_COARSE_TIMER_SECS for rebind time */
  u8_t tries;
  u32_t xid;
