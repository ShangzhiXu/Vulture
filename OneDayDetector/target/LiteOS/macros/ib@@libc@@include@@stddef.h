#define offsetof(type, member) ((size_t)( (char *)&(((type *)0)->member) - (char *)0 ))
#define offsetof(type, member) __builtin_offsetof(type, member)
