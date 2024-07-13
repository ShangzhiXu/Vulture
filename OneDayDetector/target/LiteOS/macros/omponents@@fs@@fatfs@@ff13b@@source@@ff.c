#define ABORT(fs, res)		{ fp->err = (BYTE)(res); LEAVE_FF(fs, res); }
#define FREE_NAMBUF()
#define FREE_NAMBUF()
#define FREE_NAMBUF()
#define FREE_NAMBUF()
#define FREE_NAMBUF()	ff_memfree(lfn)
#define FREE_NAMBUF()	ff_memfree(lfn)
#define GET_FATTIME()	((DWORD)(FF_NORTC_YEAR - 1980) << 25 | (DWORD)FF_NORTC_MON << 21 | (DWORD)FF_NORTC_MDAY << 16)
#define GET_FATTIME()	get_fattime()
#define INIT_NAMBUF(fs)
#define INIT_NAMBUF(fs)
#define INIT_NAMBUF(fs)	{ (fs)->lfnbuf = lbuf; (fs)->dirbuf = dbuf; }
#define INIT_NAMBUF(fs)	{ (fs)->lfnbuf = lbuf; }
#define INIT_NAMBUF(fs)	{ lfn = ff_memalloc((FF_MAX_LFN+1)*2 + MAXDIRB(FF_MAX_LFN)); if (!lfn) LEAVE_FF(fs, FR_NOT_ENOUGH_CORE); (fs)->lfnbuf = lfn; (fs)->dirbuf = (BYTE*)(lfn+FF_MAX_LFN+1); }
#define INIT_NAMBUF(fs)	{ lfn = ff_memalloc((FF_MAX_LFN+1)*2); if (!lfn) LEAVE_FF(fs, FR_NOT_ENOUGH_CORE); (fs)->lfnbuf = lfn; }
#define IsDigit(c)		((c) >= '0' && (c) <= '9')
#define IsLower(c)		((c) >= 'a' && (c) <= 'z')
#define IsSurrogate(c)	((c) >= 0xD800 && (c) <= 0xDFFF)
#define IsSurrogateH(c)	((c) >= 0xD800 && (c) <= 0xDBFF)
#define IsSurrogateL(c)	((c) >= 0xDC00 && (c) <= 0xDFFF)
#define IsUpper(c)		((c) >= 'A' && (c) <= 'Z')
#define LD2PD(vol) VolToPart[vol].pd	/* Get physical drive number */
#define LD2PD(vol) (BYTE)(vol)	/* Each logical drive is bound to the same physical drive number */
#define LD2PT(vol) VolToPart[vol].pt	/* Get partition index */
#define LD2PT(vol) 0			/* Find first valid partition or in SFD */
#define LEAVE_FF(fs, res)	{ unlock_fs(fs, res); return res; }
#define LEAVE_FF(fs, res)	return res
#define LEAVE_MKFS(res)	return res
#define LEAVE_MKFS(res)	return res
#define LEAVE_MKFS(res)	return res
#define LEAVE_MKFS(res)	{ if (!work) ff_memfree(buf); return res; }
#define MAXDIRB(nc)	((nc + 44U) / 15 * SZDIRE)	/* exFAT: Size of directory entry block scratchpad buffer needed for the name length */
#define MERGE_2STR(a, b) a ## b
#define MKCVTBL(hd, cp) MERGE_2STR(hd, cp)
#define SS(fs)	((fs)->ssize)	/* Variable sector size */
#define dir_read_file(dp) dir_read(dp, 0)
#define dir_read_label(dp) dir_read(dp, 1)
