#define LOCAL_IP_ADDR(addr)						  \
	(((addr) & 0xff000000) == 0x0a000000		/* 10.x.x.x */	  \
	 || ((addr) & 0xfff00000) == 0xac100000		/* 172.16.x.x */  \
	 || ((addr) & 0xffff0000) == 0xc0a80000)	/* 192.168.x.x */
#define process_exists(n)	(kill((n), 0) == 0 || errno != ESRCH)
#define set_ip_epdisc(ep, addr) do {	\
	ep->length = 4;			\
	ep->value[0] = addr >> 24;	\
	ep->value[1] = addr >> 16;	\
	ep->value[2] = addr >> 8;	\
	ep->value[3] = addr;		\
} while (0)
