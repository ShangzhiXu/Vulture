#define pthread_cleanup_pop(arg) pthread_cleanup_pop_inner(&cb, (arg)); } while(0)
#define pthread_cleanup_push(routine, arg) do { struct pthread_cleanup_buffer cb; pthread_cleanup_push_inner(&cb, routine, arg);
#define pthread_equal(x,y) ((x)==(y))
