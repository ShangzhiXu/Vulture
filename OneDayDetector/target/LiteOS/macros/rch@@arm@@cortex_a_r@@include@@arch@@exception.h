#define ArchGetFp() ({ \
    UINTPTR _regFp; \
    __asm__ __volatile__("mov %0, fp" : "=r"(_regFp)); \
    _regFp; \
})
