#define DECODEL(f) { \
  if (*cp == 0) {\
    u32_t tmp_ = lwip_ntohl(f) + ((cp[1] << 8) | cp[2]); \
    (f) = lwip_htonl(tmp_); \
    cp += 3; \
  } else { \
    u32_t tmp_ = lwip_ntohl(f) + (u32_t)*cp++; \
    (f) = lwip_htonl(tmp_); \
  } \
}
#define DECODES(f) { \
  if (*cp == 0) {\
    u16_t tmp_ = lwip_ntohs(f) + (((u16_t)cp[1] << 8) | cp[2]); \
    (f) = lwip_htons(tmp_); \
    cp += 3; \
  } else { \
    u16_t tmp_ = lwip_ntohs(f) + (u16_t)*cp++; \
    (f) = lwip_htons(tmp_); \
  } \
}
#define DECODEU(f) { \
  if (*cp == 0) {\
    (f) = lwip_htons(((u16_t)cp[1] << 8) | cp[2]); \
    cp += 3; \
  } else { \
    (f) = lwip_htons((u16_t)*cp++); \
  } \
}
#define ENCODE(n) { \
  if ((u16_t)(n) >= 256) { \
    *cp++ = 0; \
    cp[1] = (u8_t)(n); \
    cp[0] = (u8_t)((n) >> 8); \
    cp += 2; \
  } else { \
    *cp++ = (u8_t)(n); \
  } \
}
#define ENCODEZ(n) { \
  if ((u16_t)(n) >= 256 || (u16_t)(n) == 0) { \
    *cp++ = 0; \
    cp[1] = (u8_t)(n); \
    cp[0] = (u8_t)((n) >> 8); \
    cp += 2; \
  } else { \
    *cp++ = (u8_t)(n); \
  } \
}
#define INCR(counter) ++comp->stats.counter
#define INCR(counter)
