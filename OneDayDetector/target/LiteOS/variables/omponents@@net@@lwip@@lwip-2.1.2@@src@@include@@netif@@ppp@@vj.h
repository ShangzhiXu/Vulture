  u8_t compressSlot;             /* Flag indicating OK to compress slot ID. */
  u8_t cs_filler;
  u16_t cs_hlen;        /* size of hdr (receive only) */
  u8_t cs_id;           /* connection # associated with this state */
  struct cstate *cs_next; /* next most recently used state (xmit only) */
    char csu_hdr[MAX_HDR];
    struct ip_hdr csu_ip;     /* ip/tcp hdr from most recent packet */
  u16_t flags;
  struct cstate *last_cs;          /* most recently used tstate */
  u8_t last_recv;                /* last rcvd conn. id */
  u8_t last_xmit;                /* last sent conn. id */
  u8_t maxSlotIndex;
  struct cstate rstate[MAX_SLOTS]; /* receive connection states */
  struct vjstat stats;
  struct cstate tstate[MAX_SLOTS]; /* xmit connection states */
  } vjcs_u;
  u32_t vjs_compressed;     /* outbound compressed packets */
  u32_t vjs_compressedin;   /* inbound compressed packets */
  u32_t vjs_errorin;        /* inbound unknown type packets */
  u32_t vjs_misses;         /* times couldn't find conn. state */
  u32_t vjs_packets;        /* outbound packets */
  u32_t vjs_searches;       /* searches for connection state */
  u32_t vjs_tossed;         /* inbound packets tossed because of error */
  u32_t vjs_uncompressedin; /* inbound uncompressed packets */
