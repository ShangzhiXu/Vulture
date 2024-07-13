  mem_size_t avail;
  STAT_COUNTER cachehit;
  STAT_COUNTER chkerr;           /* Checksum error. */
  STAT_COUNTER chkerr;           /* Checksum error. */
  STAT_COUNTER drop;             /* Dropped packets. */
  STAT_COUNTER drop;             /* Dropped packets. */
  STAT_COUNTER err;              /* Misc error. */
  STAT_COUNTER err;
  STAT_COUNTER err;
  struct stats_proto etharp;
  STAT_COUNTER fw;               /* Forwarded packets. */
  struct stats_proto icmp;
  struct stats_proto icmp6;
  u32_t icmpinaddrmaskreps;
  u32_t icmpinaddrmasks;
  u32_t icmpindestunreachs;
  u32_t icmpinechoreps;
  u32_t icmpinechos;
  u32_t icmpinerrors;
  u32_t icmpinmsgs;
  u32_t icmpinparmprobs;
  u32_t icmpinredirects;
  u32_t icmpinsrcquenchs;
  u32_t icmpintimeexcds;
  u32_t icmpintimestampreps;
  u32_t icmpintimestamps;
  u32_t icmpoutdestunreachs;
  u32_t icmpoutechoreps;
  u32_t icmpoutechos; /* can be incremented by user application ('ping') */
  u32_t icmpouterrors;
  u32_t icmpoutmsgs;
  u32_t icmpouttimeexcds;
  u32_t ifindiscards;
  u32_t ifinerrors;
  u32_t ifinnucastpkts;
  u32_t ifinoctets;
  u32_t ifinucastpkts;
  u32_t ifinunknownprotos;
  u32_t ifoutdiscards;
  u32_t ifouterrors;
  u32_t ifoutnucastpkts;
  u32_t ifoutoctets;
  u32_t ifoutucastpkts;
  struct stats_igmp igmp;
  STAT_COUNTER illegal;
  struct stats_proto ip;
  struct stats_proto ip6;
  struct stats_proto ip6_frag;
  struct stats_proto ip_frag;
  u32_t ipforwdatagrams;
  u32_t ipfragcreates;
  u32_t ipfragfails;
  u32_t ipfragoks;
  u32_t ipinaddrerrors;
  u32_t ipindelivers;
  u32_t ipindiscards;
  u32_t ipinhdrerrors;
  u32_t ipinreceives;
  u32_t ipinunknownprotos;
  u32_t ipoutdiscards;
  u32_t ipoutnoroutes;
  u32_t ipoutrequests;
  u32_t ipreasmfails;
  u32_t ipreasmoks;
  u32_t ipreasmreqds;
  STAT_COUNTER lenerr;           /* Invalid length error. */
  STAT_COUNTER lenerr;           /* Invalid length error. */
  struct stats_proto link;
  STAT_COUNTER max;
  mem_size_t max;
  struct stats_syselem mbox;
  struct stats_mem mem;
  STAT_COUNTER memerr;           /* Out of memory error. */
  STAT_COUNTER memerr;           /* Out of memory error. */
  struct stats_mem *memp[MEMP_MAX];
  struct stats_mib2 mib2;
  struct stats_igmp mld6;
  struct stats_syselem mutex;
  const char *name;
  struct stats_proto nd6;
  STAT_COUNTER opterr;           /* Error in options. */
  STAT_COUNTER proterr;          /* Protocol error. */
  STAT_COUNTER proterr;          /* Protocol error. */
  STAT_COUNTER recv;             /* Received packets. */
  STAT_COUNTER recv;             /* Received packets. */
  STAT_COUNTER rterr;            /* Routing error. */
  STAT_COUNTER rx_general;       /* Received general queries. */
  STAT_COUNTER rx_group;         /* Received group-specific queries. */
  STAT_COUNTER rx_report;        /* Received reports. */
  STAT_COUNTER rx_v1;            /* Received v1 frames. */
  struct stats_syselem sem;
  struct stats_sys sys;
  struct stats_proto tcp;
  u32_t tcpactiveopens;
  u32_t tcpattemptfails;
  u32_t tcpestabresets;
  u32_t tcpinerrs;
  u32_t tcpinsegs;
  u32_t tcpoutrsts;
  u32_t tcpoutsegs;
  u32_t tcppassiveopens;
  u32_t tcpretranssegs;
  STAT_COUNTER tx_join;          /* Sent joins. */
  STAT_COUNTER tx_leave;         /* Sent leaves. */
  STAT_COUNTER tx_report;        /* Sent reports. */
  struct stats_proto udp;
  u32_t udpindatagrams;
  u32_t udpinerrors;
  u32_t udpnoports;
  u32_t udpoutdatagrams;
  STAT_COUNTER used;
  mem_size_t used;
  STAT_COUNTER xmit;             /* Transmitted packets. */
  STAT_COUNTER xmit;             /* Transmitted packets. */
