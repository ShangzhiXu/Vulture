#define FFINALLOCK(f) ((f)->lock>=0 ? __lockfile((f)) : 0)
#define FLOCK(f) int __need_unlock = ((f)->lock>=0 ? __lockfile((f)) : 0)
#define FUNLOCK(f) do { if (__need_unlock) __unlockfile((f)); } while (0)
#define __INIT_LOCK_ATTR(_lock) \
	_lock.stAttr.protocol = PTHREAD_PRIO_INHERIT, \
	_lock.stAttr.prioceiling = OS_TASK_PRIORITY_LOWEST, \
	_lock.stAttr.type = PTHREAD_MUTEX_RECURSIVE_NP, \
	_lock.stAttr.reserved = 0, \
	_lock.stLock.muxList.pstPrev = (struct LOS_DL_LIST *)NULL, \
	_lock.stLock.muxList.pstNext = (struct LOS_DL_LIST *)NULL, \
	_lock.stLock.owner = (LosTaskCB *)NULL, \
	_lock.stLock.muxCount = 0
#define feof(f) ((f)->flags & F_EOF)
#define ferror(f) ((f)->flags & F_ERR)
#define getc_unlocked(f) \
	( ((f)->rpos != (f)->rend) ? *(f)->rpos++ : __uflow((f)) )
#define putc_unlocked(c, f) \
	( (((unsigned char)(c)!=(f)->lbf && (f)->wpos!=(f)->wend)) \
	? *(f)->wpos++ = (unsigned char)(c) \
	: __overflow((f),(unsigned char)(c)) )
