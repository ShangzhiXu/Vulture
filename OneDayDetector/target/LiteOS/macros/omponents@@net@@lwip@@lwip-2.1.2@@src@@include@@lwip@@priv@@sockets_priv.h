#define SELECT_SEM_PTR(sem) (sem)
#define SELECT_SEM_PTR(sem) (&(sem))
#define set_errno(err) do { if (err) { errno = (err); } } while(0)
