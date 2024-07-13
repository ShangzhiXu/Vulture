#define LWIP_PERF_STOP(x)  end_ms = sys_now(); \
                       perf_print(start_ms, end_ms, x)
#define PERF_STOP(x)  /* null definition */
