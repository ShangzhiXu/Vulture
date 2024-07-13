#define CLEARBOTTOM(u) (u.i.m &= -1ULL << 32)
#define CLEARBOTTOM(u) (u.i.lo = 0)
