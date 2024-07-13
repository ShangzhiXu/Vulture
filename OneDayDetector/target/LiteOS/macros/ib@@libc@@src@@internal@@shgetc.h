#define sh_fromstring(f, s) \
	((f)->buf = (f)->rpos = (void *)(s), (f)->rend = (void*)-1)
#define shcnt(f) ((f)->shcnt + ((f)->rpos - (f)->buf))
#define shgetc(f) (((f)->rpos != (f)->shend) ? *(f)->rpos++ : __shgetc(f))
#define shlim(f, lim) __shlim((f), (lim))
#define shunget(f) ((f)->shlim>=0 ? (void)(f)->rpos-- : (void)0)
