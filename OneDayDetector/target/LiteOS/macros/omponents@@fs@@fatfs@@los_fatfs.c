#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define POINTER_ASSERT(p) if (p == NULL) {    \
        return -EINVAL;    \
    }
