#define ALIGN_D(size) ALIGN_H(size)
#define ALIGN_H(size) (((size) + sizeof(long) - 1U) & ~(sizeof(long)-1U))
#define CMSG_DATA(cmsg) ((void*)((u8_t *)(cmsg) + \
                         ALIGN_D(sizeof(struct cmsghdr))))
#define CMSG_FIRSTHDR(mhdr) \
          ((mhdr)->msg_controllen >= sizeof(struct cmsghdr) ? \
           (struct cmsghdr *)(mhdr)->msg_control : \
           (struct cmsghdr *)NULL)
#define CMSG_LEN(length) (ALIGN_D(sizeof(struct cmsghdr)) + \
                           length)
#define CMSG_NXTHDR(mhdr, cmsg) \
        (((cmsg) == NULL) ? CMSG_FIRSTHDR(mhdr) : \
         (((u8_t *)(cmsg) + ALIGN_H((cmsg)->cmsg_len) \
                            + ALIGN_D(sizeof(struct cmsghdr)) > \
           (u8_t *)((mhdr)->msg_control) + (mhdr)->msg_controllen) ? \
          (struct cmsghdr *)NULL : \
          (struct cmsghdr *)((void*)((u8_t *)(cmsg) + \
                                      ALIGN_H((cmsg)->cmsg_len)))))
#define CMSG_SPACE(length) (ALIGN_D(sizeof(struct cmsghdr)) + \
                            ALIGN_H(length))
#define FDSETSAFEGET(n, code) (((n) - LWIP_SOCKET_OFFSET < MEMP_NUM_NETCONN) && (((int)(n) - LWIP_SOCKET_OFFSET) >= 0) ?\
  (code) : 0)
#define FDSETSAFESET(n, code) do { \
  if (((n) - LWIP_SOCKET_OFFSET < MEMP_NUM_NETCONN) && (((int)(n) - LWIP_SOCKET_OFFSET) >= 0)) { \
  code; }} while(0)
#define FD_CLR(n, p)  FDSETSAFESET(n, (p)->fd_bits[((n)-LWIP_SOCKET_OFFSET)/8] = (u8_t)((p)->fd_bits[((n)-LWIP_SOCKET_OFFSET)/8] & ~(1 << (((n)-LWIP_SOCKET_OFFSET) & 7))))
#define FD_ISSET(n,p) FDSETSAFEGET(n, (p)->fd_bits[((n)-LWIP_SOCKET_OFFSET)/8] &   (1 << (((n)-LWIP_SOCKET_OFFSET) & 7)))
#define FD_SET(n, p)  FDSETSAFESET(n, (p)->fd_bits[((n)-LWIP_SOCKET_OFFSET)/8] = (u8_t)((p)->fd_bits[((n)-LWIP_SOCKET_OFFSET)/8] |  (1 << (((n)-LWIP_SOCKET_OFFSET) & 7))))
#define FD_ZERO(p)    memset((void*)(p), 0, sizeof(*(p)))
#define IPTOS_PREC(tos)                ((tos) & IPTOS_PREC_MASK)
#define IPTOS_TOS(tos)          ((tos) & IPTOS_TOS_MASK)
#define _IO(x,y)        ((long)(IOC_VOID|((x)<<8)|(y)))
#define _IOR(x,y,t)     ((long)(IOC_OUT|((sizeof(t)&IOCPARM_MASK)<<16)|((x)<<8)|(y)))
#define _IOW(x,y,t)     ((long)(IOC_IN|((sizeof(t)&IOCPARM_MASK)<<16)|((x)<<8)|(y)))
#define accept(s,addr,addrlen)                    lwip_accept(s,addr,addrlen)
#define bind(s,name,namelen)                      lwip_bind(s,name,namelen)
#define close(s)                                  lwip_close(s)
#define closesocket(s)    close(s)
#define closesocket(s)                            lwip_close(s)
#define connect(s,name,namelen)                   lwip_connect(s,name,namelen)
#define fcntl(s,cmd,val)                          lwip_fcntl(s,cmd,val)
#define getpeername(s,name,namelen)               lwip_getpeername(s,name,namelen)
#define getsockname(s,name,namelen)               lwip_getsockname(s,name,namelen)
#define getsockopt(s,level,optname,opval,optlen)  lwip_getsockopt(s,level,optname,opval,optlen)
#define inet_ntop(af,src,dst,size)                lwip_inet_ntop(af,src,dst,size)
#define inet_pton(af,src,dst)                     lwip_inet_pton(af,src,dst)
#define ioctl(s,cmd,argp)                         lwip_ioctl(s,cmd,argp)
#define ioctlsocket(s,cmd,argp)                   lwip_ioctl(s,cmd,argp)
#define listen(s,backlog)                         lwip_listen(s,backlog)
#define lwip_socket_init() /* Compatibility define, no init needed. */
#define poll(fds,nfds,timeout)                    lwip_poll(fds,nfds,timeout)
#define read(s,mem,len)                           lwip_read(s,mem,len)
#define readv(s,iov,iovcnt)                       lwip_readv(s,iov,iovcnt)
#define recv(s,mem,len,flags)                     lwip_recv(s,mem,len,flags)
#define recvfrom(s,mem,len,flags,from,fromlen)    lwip_recvfrom(s,mem,len,flags,from,fromlen)
#define recvmsg(s,message,flags)                  lwip_recvmsg(s,message,flags)
#define select(maxfdp1,readset,writeset,exceptset,timeout)     lwip_select(maxfdp1,readset,writeset,exceptset,timeout)
#define send(s,dataptr,size,flags)                lwip_send(s,dataptr,size,flags)
#define sendmsg(s,message,flags)                  lwip_sendmsg(s,message,flags)
#define sendto(s,dataptr,size,flags,to,tolen)     lwip_sendto(s,dataptr,size,flags,to,tolen)
#define setsockopt(s,level,optname,opval,optlen)  lwip_setsockopt(s,level,optname,opval,optlen)
#define shutdown(s,how)                           lwip_shutdown(s,how)
#define socket(domain,type,protocol)              lwip_socket(domain,type,protocol)
#define write(s,dataptr,len)                      lwip_write(s,dataptr,len)
#define writev(s,iov,iovcnt)                      lwip_writev(s,iov,iovcnt)
