  socklen_t  cmsg_len;   /* number of bytes, including header */
  int        cmsg_level; /* originating protocol */
  int        cmsg_type;  /* protocol-specific type */
  short events;
  int fd;
  unsigned char fd_bits [(FD_SETSIZE+7)/8];
  char ifr_name[IFNAMSIZ]; /* Interface name */
    struct in_addr imr_interface; /* local IP address of interface */
    struct in_addr imr_multiaddr; /* IP multicast address of group */
  void  *iov_base;
  size_t iov_len;
  struct in_addr ipi_addr;     /* Destination (from header) address */
  unsigned int   ipi_ifindex;  /* Interface index */
  unsigned int    ipv6mr_interface; /*  interface index, or 0 */
  struct in6_addr ipv6mr_multiaddr; /*  IPv6 multicast addr */
  int l_linger;               /* linger time in seconds */
  int l_onoff;                /* option on/off */
  void         *msg_control;
  socklen_t     msg_controllen;
  int           msg_flags;
  struct iovec *msg_iov;
  int           msg_iovlen;
  void         *msg_name;
  socklen_t     msg_namelen;
  short revents;
  char        s2_data1[2];
  u32_t       s2_data2[3];
  u32_t       s2_data3[3];
  u8_t        s2_len;
  char        sa_data[14];
  sa_family_t sa_family;
  u8_t        sa_len;
  struct in6_addr sin6_addr;     /* IPv6 address                */
  sa_family_t     sin6_family;   /* AF_INET6                    */
  u32_t           sin6_flowinfo; /* IPv6 flow information       */
  u8_t            sin6_len;      /* length of this structure    */
  in_port_t       sin6_port;     /* Transport layer port #      */
  u32_t           sin6_scope_id; /* Set of interfaces for scope */
  struct in_addr  sin_addr;
  sa_family_t     sin_family;
  u8_t            sin_len;
  in_port_t       sin_port;
  char            sin_zero[SIN_ZERO_LEN];
  sa_family_t ss_family;
  long    tv_sec;         /* seconds */
  long    tv_usec;        /* and microseconds */
