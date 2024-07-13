#define GET_DWORD(buf, pos) MAKE_DWORD(buf[pos], buf[pos + 1], buf[pos + 2], buf[pos + 3])
#define GET_WORD(buf, pos) MAKE_WORD(buf[pos], buf[pos + 1])
#define MAKE_DWORD(a, b, c, d) \
    ((((uint32_t)(a)) << 24) | (((uint32_t)(b)) << 16) | (((uint32_t)(c)) << 8) | ((uint32_t)(d)))
#define MAKE_WORD(a, b) ((((uint32_t)(a)) << 8) | ((uint32_t)(b)))
