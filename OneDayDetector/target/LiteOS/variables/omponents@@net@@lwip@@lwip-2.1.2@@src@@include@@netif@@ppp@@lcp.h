    u32_t asyncmap;		/* Value of async map */
    u8_t chap_mdtype;		/* which MD types (hashing algorithm) */
    u32_t magicnumber;
    u16_t mrru;			/* Value of MRRU, and multilink enable */
    u16_t mru;			/* Value of MRU */
    unsigned int neg_accompression :1; /* HDLC Address/Control Field Compression? */
    unsigned int neg_asyncmap      :1; /* Negotiate the async map? */
    unsigned int neg_cbcp          :1; /* Negotiate use of CBCP */
    unsigned int neg_chap          :1; /* Ask for CHAP authentication? */
    unsigned int neg_eap           :1; /* Ask for EAP authentication? */
    unsigned int neg_endpoint      :1; /* negotiate endpoint discriminator */
    unsigned int neg_lqr           :1; /* Negotiate use of Link Quality Reports */
    unsigned int neg_magicnumber   :1; /* Ask for magic number? */
    unsigned int neg_mrru          :1; /* negotiate multilink MRRU */
    unsigned int neg_mru           :1; /* Negotiate the MRU? */
    unsigned int neg_pcompression  :1; /* HDLC Protocol Field Compression? */
    unsigned int neg_ssnhf         :1; /* negotiate short sequence numbers */
    unsigned int neg_upap          :1; /* Ask for UPAP authentication? */
    u8_t  numloops;		/* Number of loops during magic number neg. */
    unsigned int passive           :1; /* Don't die if we don't get a response */
    unsigned int silent            :1; /* Wait for the other end to start first */
