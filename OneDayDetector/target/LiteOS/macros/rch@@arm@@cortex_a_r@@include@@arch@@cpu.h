#define CPU_MAP_GET(cpuid)          g_cpuMap[(cpuid)]
#define CPU_MAP_SET(cpuid, hwid)    (g_cpuMap[(cpuid)] = (hwid))
