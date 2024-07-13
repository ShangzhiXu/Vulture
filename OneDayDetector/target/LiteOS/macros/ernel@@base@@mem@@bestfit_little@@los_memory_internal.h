#define ALIGNE(sz)                            (((sz) + HEAP_ALIGN - 1) & (~(HEAP_ALIGN - 1)))
#define OS_MEM_ALIGN(value, align)            (((UINT32)(UINTPTR)(value) + (UINT32)((align) - 1)) & \
                                               (~(UINT32)((align) - 1)))
#define OS_MEM_GET_ALIGN_FLAG(align)          ((align) & OS_MEM_ALIGN_FLAG)
#define OS_MEM_GET_ALIGN_GAPSIZE(align)       ((align) & (~OS_MEM_ALIGN_FLAG))
#define OS_MEM_SET_ALIGN_FLAG(align)          ((align) = ((align) | OS_MEM_ALIGN_FLAG))
