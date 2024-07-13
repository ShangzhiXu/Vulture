#define LWIP_TCP_SACK_VALID(pcb, idx) ((pcb)->rcv_sacks[idx].left != (pcb)->rcv_sacks[idx].right)
#define RCV_WND_SCALE(pcb, wnd) (((wnd) >> (pcb)->rcv_scale))
#define RCV_WND_SCALE(pcb, wnd) (wnd)
#define SND_WND_SCALE(pcb, wnd) (((wnd) << (pcb)->snd_scale))
#define SND_WND_SCALE(pcb, wnd) (wnd)
#define TCPWND16(x)             ((u16_t)LWIP_MIN((x), 0xFFFF))
#define TCPWND16(x)             (x)
#define TCP_PCB_COMMON(type) \
  type *next; /* for the linked list */ \
  void *callback_arg; \
  TCP_PCB_EXTARGS \
  enum tcp_state state; /* TCP state */ \
  u8_t prio; \
  /* ports are in host byte order */ \
  u16_t local_port
#define TCP_WND_INC(wnd, inc)   do { \
                                  if ((tcpwnd_size_t)(wnd + inc) >= wnd) { \
                                    wnd = (tcpwnd_size_t)(wnd + inc); \
                                  } else { \
                                    wnd = (tcpwnd_size_t)-1; \
                                  } \
                                } while(0)
#define TCP_WND_MAX(pcb)        ((tcpwnd_size_t)(((pcb)->flags & TF_WND_SCALE) ? TCP_WND : TCPWND16(TCP_WND)))
#define TCP_WND_MAX(pcb)        TCP_WND
#define          tcp_accepted(pcb) do { LWIP_UNUSED_ARG(pcb); } while(0) /* compatibility define, not needed any more */
#define          tcp_backlog_accepted(pcb)
#define          tcp_backlog_delayed(pcb)
#define          tcp_backlog_set(pcb, new_backlog) do { \
  LWIP_ASSERT("pcb->state == LISTEN (called for wrong pcb?)", (pcb)->state == LISTEN); \
  ((struct tcp_pcb_listen *)(pcb))->backlog = ((new_backlog) ? (new_backlog) : 1); } while(0)
#define          tcp_backlog_set(pcb, new_backlog)
#define          tcp_clear_flags(pcb, clr_flags)   do { (pcb)->flags = (tcpflags_t)((pcb)->flags & (tcpflags_t)(~(clr_flags) & TCP_ALLFLAGS)); } while(0)
#define tcp_dbg_get_tcp_state(pcb) ((pcb)->state)
#define          tcp_is_flag_set(pcb, flag)        (((pcb)->flags & (flag)) != 0)
#define          tcp_listen(pcb) tcp_listen_with_backlog(pcb, TCP_DEFAULT_LISTEN_BACKLOG)
#define          tcp_mss(pcb)             (((pcb)->flags & TF_TIMESTAMP) ? ((pcb)->mss - 12)  : (pcb)->mss)
#define          tcp_mss(pcb)             ((pcb)->mss)
#define          tcp_nagle_disable(pcb)   tcp_set_flags(pcb, TF_NODELAY)
#define          tcp_nagle_disabled(pcb)  tcp_is_flag_set(pcb, TF_NODELAY)
#define          tcp_nagle_enable(pcb)    tcp_clear_flags(pcb, TF_NODELAY)
#define tcp_new_ip6() tcp_new_ip_type(IPADDR_TYPE_V6)
#define          tcp_set_flags(pcb, set_flags)     do { (pcb)->flags = (tcpflags_t)((pcb)->flags |  (set_flags)); } while(0)
#define          tcp_sndbuf(pcb)          (TCPWND16((pcb)->snd_buf))
#define          tcp_sndqueuelen(pcb)     ((pcb)->snd_queuelen)
