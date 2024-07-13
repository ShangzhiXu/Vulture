#define LWIP_TCP_OPT_LENGTH_SEGMENT(flags, pcb) LWIP_HOOK_TCP_OUT_TCPOPT_LENGTH(pcb, LWIP_TCP_OPT_LENGTH(flags))
#define LWIP_TCP_OPT_LENGTH_SEGMENT(flags, pcb) LWIP_TCP_OPT_LENGTH(flags)
#define TCP_CHECKSUM_ON_COPY_SANITY_CHECK_FAIL(msg) LWIP_DEBUGF(TCP_DEBUG | LWIP_DBG_LEVEL_WARNING, msg)
#define TCP_DATA_COPY(dst, src, len, seg)                     MEMCPY(dst, src, len)
#define TCP_DATA_COPY(dst, src, len, seg) do { \
  tcp_seg_add_chksum(LWIP_CHKSUM_COPY(dst, src, len), \
                     len, &seg->chksum, &seg->chksum_swapped); \
  seg->flags |= TF_SEG_DATA_CHECKSUMMED; } while(0)
#define TCP_DATA_COPY2(dst, src, len, chksum, chksum_swapped)  \
  tcp_seg_add_chksum(LWIP_CHKSUM_COPY(dst, src, len), len, chksum, chksum_swapped);
#define TCP_DATA_COPY2(dst, src, len, chksum, chksum_swapped) MEMCPY(dst, src, len)
#define TCP_OVERSIZE_CALC_LENGTH(length) ((length) + TCP_OVERSIZE)
#define tcp_pbuf_prealloc(layer, length, mx, os, pcb, api, fst) pbuf_alloc((layer), (length), PBUF_RAM)
