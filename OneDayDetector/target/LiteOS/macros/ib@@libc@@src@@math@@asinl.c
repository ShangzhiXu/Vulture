#define CLEARBOTTOM(u) (u.i.m &= -1ULL << 32)
#define CLEARBOTTOM(u) (u.i.lo = 0)
#define CLOSETO1(u) (u.i.m>>56 >= 0xf7)
#define CLOSETO1(u) (u.i.top >= 0xee00)
