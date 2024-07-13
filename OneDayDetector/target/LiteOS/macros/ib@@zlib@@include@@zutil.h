#  define Assert(cond,msg) {if(!(cond)) z_error(msg);}
#  define Assert(cond,msg)
#define ERR_MSG(err) z_errmsg[Z_NEED_DICT-(err)]
#define ERR_RETURN(strm,err) \
  return (strm->msg = ERR_MSG(err), (err))
#  define F_OPEN(name, mode) \
     fopen((name), (mode), "mbc=60", "ctx=stm", "rfm=fix", "mrs=512")
#  define F_OPEN(name, mode) fopen((name), (mode))
#define TRY_FREE(s, p) {if (p) ZFREE(s, p);}
#  define Trace(x) {if (z_verbose>=0) fprintf x ;}
#  define Trace(x)
#  define Tracec(c,x) {if (z_verbose>0 && (c)) fprintf x ;}
#  define Tracec(c,x)
#  define Tracecv(c,x) {if (z_verbose>1 && (c)) fprintf x ;}
#  define Tracecv(c,x)
#  define Tracev(x) {if (z_verbose>0) fprintf x ;}
#  define Tracev(x)
#  define Tracevv(x) {if (z_verbose>1) fprintf x ;}
#  define Tracevv(x)
#define ZALLOC(strm, items, size) \
           (*((strm)->zalloc))((strm)->opaque, (items), (size))
#define ZFREE(strm, addr)  (*((strm)->zfree))((strm)->opaque, (voidpf)(addr))
#define ZSWAP32(q) ((((q) >> 24) & 0xff) + (((q) >> 8) & 0xff00) + \
                    (((q) & 0xff00) << 8) + (((q) & 0xff) << 24))
#        define fdopen(fd,mode) NULL /* No fdopen() */
#    define fdopen(fd,mode) NULL /* No fdopen() */
#    define fdopen(fd,type)  _fdopen(fd,type)
#  define fdopen(fd,mode) NULL /* No fdopen() */
#    define zmemzero(dest, len) _fmemset(dest, 0, len)
#    define zmemzero(dest, len) memset(dest, 0, len)
