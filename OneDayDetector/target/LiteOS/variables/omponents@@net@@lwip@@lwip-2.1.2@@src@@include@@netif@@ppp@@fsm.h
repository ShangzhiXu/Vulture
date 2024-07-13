    int  (*ackci)		/* ACK our Configuration Information */
		(fsm *, u_char *, int);
    void (*addci) 		/* Add our Configuration Information */
		(fsm *, u_char *, int *);
    int  (*cilen)		/* Length of our Configuration Information */
		(fsm *);
    void (*down)		/* Called when fsm leaves PPP_FSM_OPENED state */
		(fsm *);
    int  (*extcode)		/* Called when unknown code received */
		(fsm *, int, int, u_char *, int);
    void (*finished)		/* Called when we don't want the lower layer */
		(fsm *);
    u8_t flags;			/* Contains option bits */
    u8_t id;			/* Current id */
    u8_t maxnakloops;		/* Maximum number of nak loops tolerated
    int  (*nakci)		/* NAK our Configuration Information */
		(fsm *, u_char *, int, int);
    u8_t nakloops;		/* Number of nak loops since last ack */
    ppp_pcb *pcb;		/* PPP Interface */
    u16_t protocol;		/* Data Link Layer Protocol field value */
    void (*protreject)		/* Called when Protocol-Reject received */
		(int);
    int  (*rejci)		/* Reject our Configuration Information */
		(fsm *, u_char *, int);
    int  (*reqci)		/* Request peer's Configuration Information */
		(fsm *, u_char *, int *, int);
    u8_t reqid;			/* Current request id */
    void (*resetci)		/* Reset our Configuration Information */
		(fsm *);
    void (*retransmit)		/* Retransmission is necessary */
		(fsm *);
    u8_t retransmits;		/* Number of retransmissions left */
    u8_t rnakloops;		/* Number of naks received */
    u8_t seen_ack;		/* Have received valid Ack/Nak/Rej to Req */
    void (*starting)		/* Called when we want the lower layer */
		(fsm *);
    u8_t state;			/* State */
    void (*up)			/* Called when fsm reaches PPP_FSM_OPENED state */
		(fsm *);
