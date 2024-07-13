  struct pppoe_softc *next;
  ppp_pcb *pcb;                /* PPP PCB */
  u8_t sc_ac_cookie[PPPOE_MAX_AC_COOKIE_LEN]; /* content of AC cookie we must echo back */
  u8_t sc_ac_cookie_len;       /* length of cookie data */
  u8_t *sc_concentrator_name;  /* if != NULL: requested concentrator id */
  struct eth_addr sc_dest;     /* hardware address of concentrator */
  struct netif *sc_ethif;      /* ethernet interface we are using */
  u8_t *sc_hunique;            /* content of host unique we must echo back */
  u8_t sc_hunique_len;         /* length of host unique */
  u8_t sc_padi_retried;        /* number of PADI retries already done */
  u8_t sc_padr_retried;        /* number of PADR retries already done */
  u8_t *sc_service_name;       /* if != NULL: requested name of service */
  u16_t sc_session;            /* PPPoE session id */
  u8_t sc_state;               /* discovery phase or session connected */
