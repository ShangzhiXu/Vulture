#define REG32(addr)             ((volatile UINT32 *)(UINTPTR)(addr))
#define UARTREG(base, reg)      (*REG32((base) + (reg)))
