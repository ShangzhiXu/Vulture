#define LOS_GET_DL_NX_HEAP_BASE()     (g_dlNxHeapBase)
#define LOS_GET_DL_NX_HEAP_SIZE()     (g_dlNxHeapSize)
#define LOS_GET_NX_CFG()              (g_nxEnabled)
#define LOS_SET_DL_NX_HEAP_BASE(addr) (g_dlNxHeapBase = (addr))
#define LOS_SET_DL_NX_HEAP_SIZE(size) (g_dlNxHeapSize = (size))
#define LOS_SET_NX_CFG(value)         (g_nxEnabled = (value))
#define STRINGIFY(x)                            STRINGIFY_1(x)
#define STRINGIFY_1(x)                          #x
#define VERSION_NUM(a, b, c)                    (((a) << 16) | ((b) << 8) | (c))
#define _T(x)                                   x
#define _V(v)                                   _T(HW_LITEOS_SYSNAME)_T(HW_LITEOS_SEP)_T(v)
