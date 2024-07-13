#define OS_GET_CYCLECOMPENSATE(cyclesPre, cyclesCur) (((cyclesPre) > (cyclesCur)) ? \
    (((GET_SYS_CLOCK()) / (g_tickPerSecond)) - (cyclesCur)) : \
    ((((GET_SYS_CLOCK()) / (g_tickPerSecond)) << 1) - (cyclesCur)))
