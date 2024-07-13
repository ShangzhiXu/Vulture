#define FOLD_U32T(u)          ((u32_t)(((u) >> 16) + ((u) & 0x0000ffffUL)))
#  define LWIP_CHKSUM_COPY(dst, src, len) lwip_chksum_copy(dst, src, len)
#define SWAP_BYTES_IN_WORD(w) (((w) & 0xff) << 8) | (((w) & 0xff00) >> 8)
