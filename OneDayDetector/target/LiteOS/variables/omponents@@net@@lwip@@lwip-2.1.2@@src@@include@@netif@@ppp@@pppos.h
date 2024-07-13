  unsigned int accomp          :1; /* Does peer accept addr/ctl compression? */
  ext_accm in_accm;                /* Async-Ctl-Char-Map for input. */
  u8_t in_escaped;                 /* Escape next character. */
  u16_t in_fcs;                    /* Input Frame Check Sequence value. */
  struct pbuf *in_head, *in_tail;  /* The input packet. */
  u16_t in_protocol;               /* The input protocol code. */
  u8_t in_state;                   /* The input process state. */
  struct pbuf *in_head, *in_tail;  /* The input packet. */
  u32_t last_xmit;                 /* Time of last transmission. */
  unsigned int open            :1; /* Set if PPPoS is open */
  ext_accm out_accm;               /* Async-Ctl-Char-Map for output. */
  pppos_output_cb_fn output_cb;    /* PPP serial output callback */
  unsigned int pcomp           :1; /* Does peer accept protocol compression? */
  ppp_pcb *ppp;                    /* PPP PCB */
