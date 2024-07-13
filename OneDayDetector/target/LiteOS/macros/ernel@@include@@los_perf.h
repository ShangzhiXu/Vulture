#define LOS_PERF(EVENT) do {      \
        OsPerfHook(EVENT);        \
    } while (0)
#define LOS_PERF(EVENT)
