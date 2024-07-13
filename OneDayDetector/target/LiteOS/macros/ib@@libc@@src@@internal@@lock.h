#define LOCK(x) pthread_mutex_lock((pthread_mutex_t *)(&(x)))
#define LOCK(x) __lock(x)
#define UNLOCK(x) pthread_mutex_unlock((pthread_mutex_t *)(&(x)))
#define UNLOCK(x) __unlock(x)
