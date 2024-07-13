#define LOCKDEP_GET_ADDR(lockDep, index)    ((lockDep)->heldLocks[(index)].lockAddr)
#define LOCKDEP_GET_NAME(lockDep, index)    (((SPIN_LOCK_S *)((lockDep)->heldLocks[(index)].lockPtr))->name)
