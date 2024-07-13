#define PPPOE_ADD_16(PTR, VAL) \
    *(PTR)++ = (u8_t)((VAL) / 256);    \
    *(PTR)++ = (u8_t)((VAL) % 256)
#define PPPOE_ADD_HEADER(PTR, CODE, SESS, LEN)  \
    *(PTR)++ = PPPOE_VERTYPE;  \
    *(PTR)++ = (CODE);         \
    PPPOE_ADD_16(PTR, SESS);   \
    PPPOE_ADD_16(PTR, LEN)
