#define OUTCHAR(c)	(buflen > 0? (--buflen, *buf++ = (c)): 0)
