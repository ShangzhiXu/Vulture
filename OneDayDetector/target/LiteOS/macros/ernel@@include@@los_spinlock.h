#define LOCKDEP_CHECK_IN(lock)  OsLockDepCheckIn(lock)
#define LOCKDEP_CHECK_OUT(lock) OsLockDepCheckOut(lock)
#define LOCKDEP_CLEAR_LOCKS()   OsLockdepClearSpinlocks()
#define LOCKDEP_RECORD(lock)    OsLockDepRecord(lock)
#define SPIN_LOCK_INIT(lock)  SPIN_LOCK_S lock = SPIN_LOCK_INITIALIZER(lock)
#define SPIN_LOCK_INITIALIZER(lockName) \
{                                       \
    .rawLock    = 0U,                   \
    .cpuid      = (UINT32)(-1),         \
    .owner      = SPINLOCK_OWNER_INIT,  \
    .name       = #lockName,            \
}
