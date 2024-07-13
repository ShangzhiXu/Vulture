  u8_t challenge_hash[16];     /* Challenge response */
  u8_t iccn_retried;           /* number of ICCN retries already done */
  u8_t icrq_retried;           /* number of ICRQ retries already done */
  struct netif *netif;         /* Output interface, used as a default route */
  u16_t our_ns;                /* NS to peer */
  u16_t peer_nr;               /* NR from peer */
  u16_t peer_ns;               /* Expected NS from peer */
  u8_t phase;                  /* L2TP phase */
  ppp_pcb *ppp;                /* PPP PCB */
  ip_addr_t remote_ip;         /* LNS IP Address */
  u16_t remote_port;           /* LNS port */
  u16_t remote_session_id;     /* Session ID assigned to peer */
  u16_t remote_tunnel_id;      /* Tunnel ID assigned to peer */
  u8_t sccrq_retried;          /* number of SCCRQ retries already done */
  const u8_t *secret;          /* Secret string */
  u8_t secret_len;             /* Secret string length */
  u8_t secret_rv[16];          /* Random vector */
  u8_t send_challenge;         /* Boolean whether the next sent packet should contains a challenge response */
  u16_t source_session_id;     /* Session ID assigned by peer */
  u16_t source_tunnel_id;      /* Tunnel ID assigned by peer */
  u16_t tunnel_port;           /* Tunnel port */
  struct udp_pcb *udp;         /* UDP L2TP Socket */
