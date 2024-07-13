#define LOG_FAC(p) (((p)&LOG_FACMASK)>>3)
#define LOG_MASK(p) (1<<(p))
#define LOG_PRI(p) ((p)&LOG_PRIMASK)
#define LOG_UPTO(p) ((1<<((p)+1))-1)
