    int  (*active_pkt) (u_char *pkt, int len);
    struct compstat c;		/* packet compression statistics */
    void (*check_options) (void);
    void (*close) (ppp_pcb *pcb, const char *reason);
  void (*connect) (ppp_pcb *pcb, void *ctx);
    struct compstat d;		/* packet decompression statistics */
    void (*datainput) (ppp_pcb *pcb, u_char *pkt, int len);
    int  (*demand_conf) (int unit);
  void (*disconnect) (ppp_pcb *pcb, void *ctx);
  err_t (*free) (ppp_pcb *pcb, void *ctx);
    void (*init) (ppp_pcb *pcb);
    void (*input) (ppp_pcb *pcb, u_char *pkt, int len);
  void (*listen) (ppp_pcb *pcb, void *ctx);
    void (*lowerdown) (ppp_pcb *pcb);
    void (*lowerup) (ppp_pcb *pcb);
    const char *name;		/* Text name of protocol */
  err_t (*netif_output)(ppp_pcb *pcb, void *ctx, struct pbuf *p, u_short protocol);
    void (*open) (ppp_pcb *pcb);
    option_t *options;		/* List of command-line options */
    struct pppstat p;		/* basic PPP statistics */
    int  (*printpkt) (const u_char *pkt, int len,
			  void (*printer) (void *, const char *, ...),
			  void *arg);
    u_short protocol;		/* PPP protocol number */
    void (*protrej) (ppp_pcb *pcb);
    unsigned int ratio;		/* recent compression ratio << 8 */
  void (*recv_config)(ppp_pcb *pcb, void *ctx, u32_t accm, int pcomp, int accomp);
    time_t recv_idle;		/* time since last NP packet received */
  void (*send_config)(ppp_pcb *pcb, void *ctx, u32_t accm, int pcomp, int accomp);
    struct vjstat vj;		/* VJ header compression statistics */
    unsigned int vjs_compressed; /* outbound compressed packets */
    unsigned int vjs_compressedin; /* inbound compressed packets */
    unsigned int vjs_uncompressedin; /* inbound uncompressed packets */
  err_t (*write)(ppp_pcb *pcb, void *ctx, struct pbuf *p);
    time_t xmit_idle;		/* time since last NP packet sent */
