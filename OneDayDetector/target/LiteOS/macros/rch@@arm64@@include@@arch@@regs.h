#define AARCH64_SYSREG_READ(reg)                                 \
    ({                                                           \
        UINT64 _val;                                             \
        __asm__ volatile("mrs %0," STRINGIFY(reg) : "=r"(_val)); \
        _val;                                                    \
    })
#define AARCH64_SYSREG_WRITE(reg, val)                             \
    ({                                                             \
        __asm__ volatile("msr " STRINGIFY(reg) ", %0" ::"r"(val)); \
        __asm__ volatile("isb" ::: "memory");                      \
    })
#define MIDR_PARTNO(midr)   (((midr)&MIDR_PARTNO_MASK) >> MIDR_PARTNO_SHIFT)
#define MIDR_REV(midr)      ((midr)&MIDR_REV_MASK)
#define MPIDR_AFF_LEVEL(mpidr, level) (((mpidr) >> MPIDR_AFF_SHIFT(level)) & MPIDR_AFF_LEVEL_MASK)
#define MPIDR_AFF_SHIFT(level) (((1 << (level)) >> 1) << 3)
#define STRINGIFY(x) STRINGIFY_1(x)
#define STRINGIFY_1(x) #x
