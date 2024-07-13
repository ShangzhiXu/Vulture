#define ACKCIADDR(opt, neg, val) \
    if (neg) { \
	u32_t l; \
	if ((len -= CILEN_ADDR) < 0) \
	    goto bad; \
	GETCHAR(citype, p); \
	GETCHAR(cilen, p); \
	if (cilen != CILEN_ADDR || \
	    citype != opt) \
	    goto bad; \
	GETLONG(l, p); \
	cilong = lwip_htonl(l); \
	if (val != cilong) \
	    goto bad; \
    }
#define ACKCIADDRS(opt, neg, val1, val2) \
    if (neg) { \
	u32_t l; \
	if ((len -= CILEN_ADDRS) < 0) \
	    goto bad; \
	GETCHAR(citype, p); \
	GETCHAR(cilen, p); \
	if (cilen != CILEN_ADDRS || \
	    citype != opt) \
	    goto bad; \
	GETLONG(l, p); \
	cilong = lwip_htonl(l); \
	if (val1 != cilong) \
	    goto bad; \
	GETLONG(l, p); \
	cilong = lwip_htonl(l); \
	if (val2 != cilong) \
	    goto bad; \
    }
#define ACKCIDNS(opt, neg, addr) \
    if (neg) { \
	u32_t l; \
	if ((len -= CILEN_ADDR) < 0) \
	    goto bad; \
	GETCHAR(citype, p); \
	GETCHAR(cilen, p); \
	if (cilen != CILEN_ADDR || citype != opt) \
	    goto bad; \
	GETLONG(l, p); \
	cilong = lwip_htonl(l); \
	if (addr != cilong) \
	    goto bad; \
    }
#define ACKCIVJ(opt, neg, val, old, maxslotindex, cflag) \
    if (neg) { \
	int vjlen = old? CILEN_COMPRESS : CILEN_VJ; \
	if ((len -= vjlen) < 0) \
	    goto bad; \
	GETCHAR(citype, p); \
	GETCHAR(cilen, p); \
	if (cilen != vjlen || \
	    citype != opt)  \
	    goto bad; \
	GETSHORT(cishort, p); \
	if (cishort != val) \
	    goto bad; \
	if (!old) { \
	    GETCHAR(cimaxslotindex, p); \
	    if (cimaxslotindex != maxslotindex) \
		goto bad; \
	    GETCHAR(cicflag, p); \
	    if (cicflag != cflag) \
		goto bad; \
	} \
    }
#define ADDCIADDR(opt, neg, val) \
    if (neg) { \
	if (len >= CILEN_ADDR) { \
	    u32_t l; \
	    PUTCHAR(opt, ucp); \
	    PUTCHAR(CILEN_ADDR, ucp); \
	    l = lwip_ntohl(val); \
	    PUTLONG(l, ucp); \
	    len -= CILEN_ADDR; \
	} else \
	    neg = 0; \
    }
#define ADDCIADDRS(opt, neg, val1, val2) \
    if (neg) { \
	if (len >= CILEN_ADDRS) { \
	    u32_t l; \
	    PUTCHAR(opt, ucp); \
	    PUTCHAR(CILEN_ADDRS, ucp); \
	    l = lwip_ntohl(val1); \
	    PUTLONG(l, ucp); \
	    l = lwip_ntohl(val2); \
	    PUTLONG(l, ucp); \
	    len -= CILEN_ADDRS; \
	} else \
	    go->old_addrs = 0; \
    }
#define ADDCIDNS(opt, neg, addr) \
    if (neg) { \
	if (len >= CILEN_ADDR) { \
	    u32_t l; \
	    PUTCHAR(opt, ucp); \
	    PUTCHAR(CILEN_ADDR, ucp); \
	    l = lwip_ntohl(addr); \
	    PUTLONG(l, ucp); \
	    len -= CILEN_ADDR; \
	} else \
	    neg = 0; \
    }
#define ADDCIVJ(opt, neg, val, old, maxslotindex, cflag) \
    if (neg) { \
	int vjlen = old? CILEN_COMPRESS : CILEN_VJ; \
	if (len >= vjlen) { \
	    PUTCHAR(opt, ucp); \
	    PUTCHAR(vjlen, ucp); \
	    PUTSHORT(val, ucp); \
	    if (!old) { \
		PUTCHAR(maxslotindex, ucp); \
		PUTCHAR(cflag, ucp); \
	    } \
	    len -= vjlen; \
	} else \
	    neg = 0; \
    }
#define CODENAME(x)	((x) == CONFACK ? "ACK" : \
			 (x) == CONFNAK ? "NAK" : "REJ")
#define LENCIADDR(neg)		(neg ? CILEN_ADDR : 0)
#define LENCIADDRS(neg)		(neg ? CILEN_ADDRS : 0)
#define LENCIDNS(neg)		LENCIADDR(neg)
#define LENCIVJ(neg, old)	(neg ? (old? CILEN_COMPRESS : CILEN_VJ) : 0)
#define NAKCIADDR(opt, neg, code) \
    if (go->neg && \
	(cilen = p[1]) == CILEN_ADDR && \
	len >= cilen && \
	p[0] == opt) { \
	len -= cilen; \
	INCPTR(2, p); \
	GETLONG(l, p); \
	ciaddr1 = lwip_htonl(l); \
	no.neg = 1; \
	code \
    }
#define NAKCIADDRS(opt, neg, code) \
    if ((neg) && \
	(cilen = p[1]) == CILEN_ADDRS && \
	len >= cilen && \
	p[0] == opt) { \
	len -= cilen; \
	INCPTR(2, p); \
	GETLONG(l, p); \
	ciaddr1 = lwip_htonl(l); \
	GETLONG(l, p); \
	ciaddr2 = lwip_htonl(l); \
	no.old_addrs = 1; \
	code \
    }
#define NAKCIDNS(opt, neg, code) \
    if (go->neg && \
	((cilen = p[1]) == CILEN_ADDR) && \
	len >= cilen && \
	p[0] == opt) { \
	len -= cilen; \
	INCPTR(2, p); \
	GETLONG(l, p); \
	cidnsaddr = lwip_htonl(l); \
	no.neg = 1; \
	code \
    }
#define NAKCIVJ(opt, neg, code) \
    if (go->neg && \
	((cilen = p[1]) == CILEN_COMPRESS || cilen == CILEN_VJ) && \
	len >= cilen && \
	p[0] == opt) { \
	len -= cilen; \
	INCPTR(2, p); \
	GETSHORT(cishort, p); \
	no.neg = 1; \
        code \
    }
#define REJCIADDR(opt, neg, val) \
    if (go->neg && \
	(cilen = p[1]) == CILEN_ADDR && \
	len >= cilen && \
	p[0] == opt) { \
	u32_t l; \
	len -= cilen; \
	INCPTR(2, p); \
	GETLONG(l, p); \
	cilong = lwip_htonl(l); \
	/* Check rejected value. */ \
	if (cilong != val) \
	    goto bad; \
	try_.neg = 0; \
    }
#define REJCIADDRS(opt, neg, val1, val2) \
    if ((neg) && \
	(cilen = p[1]) == CILEN_ADDRS && \
	len >= cilen && \
	p[0] == opt) { \
	u32_t l; \
	len -= cilen; \
	INCPTR(2, p); \
	GETLONG(l, p); \
	cilong = lwip_htonl(l); \
	/* Check rejected value. */ \
	if (cilong != val1) \
	    goto bad; \
	GETLONG(l, p); \
	cilong = lwip_htonl(l); \
	/* Check rejected value. */ \
	if (cilong != val2) \
	    goto bad; \
	try_.old_addrs = 0; \
    }
#define REJCIDNS(opt, neg, dnsaddr) \
    if (go->neg && \
	((cilen = p[1]) == CILEN_ADDR) && \
	len >= cilen && \
	p[0] == opt) { \
	u32_t l; \
	len -= cilen; \
	INCPTR(2, p); \
	GETLONG(l, p); \
	cilong = lwip_htonl(l); \
	/* Check rejected value. */ \
	if (cilong != dnsaddr) \
	    goto bad; \
	try_.neg = 0; \
    }
#define REJCIVJ(opt, neg, val, old, maxslot, cflag) \
    if (go->neg && \
	p[1] == (old? CILEN_COMPRESS : CILEN_VJ) && \
	len >= p[1] && \
	p[0] == opt) { \
	len -= p[1]; \
	INCPTR(2, p); \
	GETSHORT(cishort, p); \
	/* Check rejected value. */  \
	if (cishort != val) \
	    goto bad; \
	if (!old) { \
	   GETCHAR(cimaxslotindex, p); \
	   if (cimaxslotindex != maxslot) \
	     goto bad; \
	   GETCHAR(ciflag, p); \
	   if (ciflag != cflag) \
	     goto bad; \
        } \
	try_.neg = 0; \
     }
#define get_iphl(x)	(((unsigned char *)(x))[0] & 0xF)
#define get_ipoff(x)	net_short((unsigned char *)(x) + 6)
#define get_ipproto(x)	(((unsigned char *)(x))[9])
#define get_tcpflags(x)	(((unsigned char *)(x))[13])
#define get_tcpoff(x)	(((unsigned char *)(x))[12] >> 4)
#define net_short(x)	(((x)[0] << 8) + (x)[1])
