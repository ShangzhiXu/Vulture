#define ALIGN(addr, boundary)                       LOS_Align(addr, boundary)
#define GET_UINT16(addr)                            ({ UINT16 r = *((volatile UINT16 *)((UINTPTR)(addr))); dsb(); r; })
#define GET_UINT32(addr)                            ({ UINT32 r = *((volatile UINT32 *)((UINTPTR)(addr))); dsb(); r; })
#define GET_UINT64(addr)                            ({ UINT64 r = *((volatile UINT64 *)((UINTPTR)(addr))); dsb(); r; })
#define GET_UINT8(addr)                             ({ UINT8 r = *((volatile UINT8 *)((UINTPTR)(addr))); dsb(); r; })
#define LOS_ASSERT(judge) do {                                                     \
    if ((UINT32)(judge) == 0) {                                                    \
        (VOID)LOS_IntLock();                                                       \
        PRINT_ERR("ASSERT ERROR! %s, %d, %s\n", __FILE__, __LINE__, __FUNCTION__); \
        while (1) {}                                                               \
    }                                                                              \
} while (0)
#define LOS_ASSERT_COND(expression) LOS_ASSERT(expression)
#define READ_UINT16(value, addr)                    ({ (value) = *((volatile UINT16 *)((UINTPTR)(addr))); dsb(); })
#define READ_UINT32(value, addr)                    ({ (value) = *((volatile UINT32 *)((UINTPTR)(addr))); dsb(); })
#define READ_UINT64(value, addr)                    ({ (value) = *((volatile UINT64 *)((UINTPTR)(addr))); dsb(); })
#define READ_UINT8(value, addr)                     ({ (value) = *((volatile UINT8 *)((UINTPTR)(addr))); dsb(); })
#define SIZE(a) (a)
#define TRUNCATE(addr, size)                        ((UINTPTR)(addr) & ~((size) - 1))
#define WRITE_UINT16(value, addr)                   ({ dsb(); *((volatile UINT16 *)((UINTPTR)(addr))) = (value); })
#define WRITE_UINT32(value, addr)                   ({ dsb(); *((volatile UINT32 *)((UINTPTR)(addr))) = (value); })
#define WRITE_UINT64(value, addr)                   ({ dsb(); *((volatile UINT64 *)((UINTPTR)(addr))) = (value); })
#define WRITE_UINT8(value, addr)                    ({ dsb(); *((volatile UINT8 *)((UINTPTR)(addr))) = (value); })
