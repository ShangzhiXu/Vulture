#define IN6_LLADDR_FROM_EUI64(ip6, eui64) do {    \
  ip6.addr[0] = PP_HTONL(0xfe800000);             \
  ip6.addr[1] = 0;                                \
  eui64_copy(eui64, ip6.addr[2]);                 \
  } while (0)
