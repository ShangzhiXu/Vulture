#define QUOBITS(x) ((uint32_t)(int32_t)x & 0x7fffffff)
#define QUOBITS(x) ((uint32_t)(int64_t)x & 0x7fffffff)
#define SMALL(u) (((u.i.se & 0x7fffU)<<16 | u.i.m>>48) < ((0x3fff + 25)<<16 | 0x921f>>1 | 0x8000))
#define SMALL(u) (((u.i.se & 0x7fffU)<<16 | u.i.top) < ((0x3fff + 45)<<16 | 0x921f))
