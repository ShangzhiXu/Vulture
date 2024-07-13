#define EXPMAN(u) ((u.i.se & 0x7fff)<<8 | (u.i.m>>55 & 0xff))
#define EXPMAN(u) ((u.i.se & 0x7fff)<<8 | u.i.top>>8)
