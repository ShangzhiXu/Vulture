  unsigned int ask_for_local           :1; /* request our address from peer */
  u16_t auth_done;           /* Records which authentication operations have been completed. */
  u16_t auth_pending;        /* Records which authentication operations haven't completed yet. */
  unsigned int  auth_required       :1;      /* Peer is required to authenticate */
  unsigned int ccp_all_rejected        :1; /* we rejected all peer's options */
  ccp_options ccp_allowoptions;  /* what we'll agree to do */
  fsm ccp_fsm;                   /* CCP fsm structure */
  ccp_options ccp_gotoptions;    /* what the peer agreed to do */
  ccp_options ccp_hisoptions;    /* what we agreed to do */
  u8_t ccp_localstate;           /* Local state (mainly for handling reset-reqs and reset-acks). */
  u8_t ccp_receive_method;       /* Method chosen on receive path */
  u8_t ccp_transmit_method;      /* Method chosen on transmit path */
  ccp_options ccp_wantoptions;   /* what to request the peer to use */
  chap_client_state chap_client;  /* CHAP client data */
  u8_t  chap_max_transmits;      /* max # times to send challenge */
  u8_t  chap_rechallenge_time;   /* Time to wait for auth-req from peer */
  chap_server_state chap_server;  /* CHAP server data */
  u8_t  chap_timeout_time;       /* Timeout (seconds) for retransmitting req */
  void *ctx_cb;                  /* Callbacks optional pointer */
  ip4_addr_t dns1, dns2;
  ip4_addr_t dns1, dns2;
  eap_state eap;            /* EAP data */
  u8_t  eap_allow_req;           /* Max Requests allowed */
  u8_t  eap_max_transmits;       /* Max Requests allowed */
  u8_t  eap_req_time;            /* Time to wait (for retransmit/fail) */
  u8_t  eap_timeout_time;        /* Time to wait (for retransmit/fail) */
  u8_t err_code;                 /* Code indicating why interface is down. */
  unsigned int  explicit_remote     :1;      /* remote_name specified with remotename opt */
  u8_t  fsm_max_conf_req_transmits;  /* Maximum Configure-Request transmissions */
  u8_t  fsm_max_nak_loops;           /* Maximum number of nak loops tolerated */
  u8_t  fsm_max_term_transmits;      /* Maximum Terminate-Request transmissions */
  u8_t  fsm_timeout_time;            /* Timeout time in seconds */
  unsigned int  hide_password       :1;      /* Hide password in dumped packets */
  ip6_addr_t our6_ipaddr, his6_ipaddr;
  ip4_addr_t our_ipaddr, his_ipaddr, netmask;
  u16_t  idle_time_limit;             /* Disconnect if idle for this many seconds */
  unsigned int if4_up                  :1; /* True when the IPv4 interface is up. */
  unsigned int if6_up                  :1; /* True when the IPv6 interface is up. */
  ipcp_options ipcp_allowoptions; /* Options we allow peer to request */
  fsm ipcp_fsm;                   /* IPCP fsm structure */
  ipcp_options ipcp_gotoptions;   /* Options that peer ack'd */
  ipcp_options ipcp_hisoptions;   /* Options that we ack'd */
  unsigned int ipcp_is_open            :1; /* haven't called np_finished() */
  unsigned int ipcp_is_up              :1; /* have called ipcp_up() */
  ipcp_options ipcp_wantoptions;  /* Options that we want to request */
  ipv6cp_options ipv6cp_allowoptions; /* Options we allow peer to request */
  fsm ipv6cp_fsm;                     /* IPV6CP fsm structure */
  ipv6cp_options ipv6cp_gotoptions;   /* Options that peer ack'd */
  ipv6cp_options ipv6cp_hisoptions;   /* Options that we ack'd */
  unsigned int ipv6cp_is_up            :1; /* have called ip6cp_up() */
  ipv6cp_options ipv6cp_wantoptions;  /* Options that we want to request */
  unsigned int  lax_recv            :1;      /* accept control chars in asyncmap */
  lcp_options lcp_allowoptions;  /* Options we allow peer to request */
  unsigned int lcp_echo_adaptive    :1;      /* request echo only if the link was idle */
  u8_t  lcp_echo_fails;       /* Tolerance to unanswered echo-requests */
  u8_t  lcp_echo_interval;    /* Interval between LCP echo-requests */
  u8_t lcp_echo_number;          /* ID number of next echo frame */
  unsigned int lcp_echo_timer_running  :1; /* set if a timer is running */
  u8_t lcp_echos_pending;        /* Number of outstanding echo msgs */
  fsm lcp_fsm;                   /* LCP fsm structure */
  lcp_options lcp_gotoptions;    /* Options that peer ack'd */
  lcp_options lcp_hisoptions;    /* Options that we ack'd */
  u8_t  lcp_loopbackfail;     /* Number of times we receive our magic number from the peer
  lcp_options lcp_wantoptions;   /* Options that we want to request */
  const struct link_callbacks *link_cb;
  void *link_ctx_cb;
  void (*link_status_cb)(ppp_pcb *pcb, int err_code, void *ctx);  /* Status change callback */
  u16_t  listen_time;                 /* time to listen first (ms), waiting for peer to send LCP packet */
  u32_t  maxconnect;                  /* Maximum connect time (seconds) */
  ppp_mppe_state mppe_comp;      /* MPPE "compressor" structure */
  ppp_mppe_state mppe_decomp;    /* MPPE "decompressor" structure */
  unsigned int mppe_keys_set           :1; /* Have the MPPE keys been set? */
  struct netif *netif;           /* PPP interface */
  ip4_addr_t our_ipaddr, his_ipaddr, netmask;
  unsigned int  noendpoint          :1;      /* don't send/accept endpoint discriminator */
  unsigned int  noremoteip          :1;      /* Let him have no IP address */
  void (*notify_phase_cb)(ppp_pcb *pcb, u8_t phase, void *ctx);   /* Notify phase callback */
  unsigned int  null_login          :1;      /* Username of "" and a password of "" are acceptable */
  u8_t num_np_open;              /* Number of network protocols which we have opened. */
  u8_t num_np_up;                /* Number of network protocols which have come up. */
  ip6_addr_t our6_ipaddr, his6_ipaddr;
  ip4_addr_t our_ipaddr, his_ipaddr, netmask;
  u8_t  pap_max_transmits;       /* Number of auth-reqs sent */
  u8_t  pap_req_timeout;         /* Time to wait for auth-req from peer */
  u8_t  pap_timeout_time;        /* Timeout (seconds) for auth-req retrans. */
  const char  *passwd;                 /* Password for PAP, secret for CHAP */
  char peer_authname[MAXNAMELEN + 1]; /* The name by which the peer authenticated itself to us. */
  u16_t peer_mru;                /* currently negotiated peer MRU */
  unsigned int  persist             :1;      /* Persist mode, always try to open the connection */
  u8_t phase;                    /* where the link is at */
  unsigned int  refuse_chap         :1;      /* Don't proceed auth. with CHAP */
  unsigned int  refuse_eap          :1;      /* Don't proceed auth. with EAP */
  unsigned int refuse_mppe_128      :1;      /* Allow MPPE 128-bit mode? */
  unsigned int refuse_mppe_40       :1;      /* Allow MPPE 40-bit mode? */
  unsigned int refuse_mppe_stateful :1;      /* Allow MPPE stateful mode? */
  unsigned int  refuse_mschap       :1;      /* Don't proceed auth. with MS-CHAP */
  unsigned int  refuse_mschap_v2    :1;      /* Don't proceed auth. with MS-CHAPv2 */
  unsigned int  refuse_pap          :1;      /* Don't proceed auth. with PAP */
  char  remote_name[MAXNAMELEN   + 1]; /* Peer's name for authentication */
  unsigned int require_mppe         :1;      /* Require MPPE (Microsoft Point to Point Encryption) */
  ppp_settings settings;
  upap_state upap;           /* PAP data */
  unsigned int  usepeerdns          :1;      /* Ask peer for DNS adds */
  const char  *user;                   /* Username for PAP */
  struct vjcompress vj_comp;     /* Van Jacobson compression header. */
  unsigned int vj_enabled              :1; /* Flag indicating VJ compression enabled. */
