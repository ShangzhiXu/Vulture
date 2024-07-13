#define ArchGetFp() ({ \
    UINTPTR _regFp; \
    __asm__ __volatile__("mov %0, X29" : "=r"(_regFp)); \
    _regFp; \
})
