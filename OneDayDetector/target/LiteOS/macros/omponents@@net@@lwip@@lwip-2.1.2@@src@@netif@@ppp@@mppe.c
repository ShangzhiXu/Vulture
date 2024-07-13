#define MPPE_BITS(p) ((p)[0] & 0xf0)
#define MPPE_CCOUNT(p) ((((p)[0] & 0x0f) << 8) + (p)[1])
