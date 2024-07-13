#define netbuf_copy(buf,dataptr,len) netbuf_copy_partial(buf, dataptr, len, 0)
#define netbuf_copy_partial(buf, dataptr, len, offset) \
  pbuf_copy_partial((buf)->p, (dataptr), (len), (offset))
#define netbuf_destaddr(buf)         (&((buf)->toaddr))
#define netbuf_destport(buf)         (((buf)->flags & NETBUF_FLAG_DESTADDR) ? (buf)->toport_chksum : 0)
#define netbuf_destport(buf)         ((buf)->toport_chksum)
#define netbuf_fromaddr(buf)         (&((buf)->addr))
#define netbuf_fromport(buf)         ((buf)->port)
#define netbuf_len(buf)              ((buf)->p->tot_len)
#define netbuf_set_chksum(buf, chksum) do { (buf)->flags = NETBUF_FLAG_CHKSUM; \
                                            (buf)->toport_chksum = chksum; } while(0)
#define netbuf_set_destaddr(buf, destaddr) ip_addr_set(&((buf)->toaddr), destaddr)
#define netbuf_set_fromaddr(buf, fromaddr) ip_addr_set(&((buf)->addr), fromaddr)
#define netbuf_take(buf, dataptr, len) pbuf_take((buf)->p, dataptr, len)
