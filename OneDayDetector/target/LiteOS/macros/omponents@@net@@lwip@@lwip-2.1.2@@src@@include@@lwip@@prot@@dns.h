#define DNS_HDR_GET_OPCODE(hdr) ((((hdr)->flags1) >> 3) & 0xF)
