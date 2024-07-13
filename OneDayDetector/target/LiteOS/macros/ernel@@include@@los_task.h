#define CPUID_TO_AFFI_MASK(cpuid)               (0x1u << (cpuid))
    #define LOS_TASK_PARAM_INIT_ARG(initParam, arg) \
            initParam.pArgs = (VOID *)arg
    #define LOS_TASK_PARAM_INIT_ARG(initParam, arg) LOS_TASK_PARAM_INIT_ARG_0(initParam, arg)
    #define LOS_TASK_PARAM_INIT_ARG_0(initParam, arg) \
            initParam.auwArgs[0] = (UINTPTR)arg
