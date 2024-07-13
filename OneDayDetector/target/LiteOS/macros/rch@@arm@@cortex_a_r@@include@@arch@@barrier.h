#define BARRIER()   __asm__ volatile("":::"memory")
#define DMB()       __asm__ volatile("dmb" : : : "memory")
#define DSB()       __asm__ volatile("dsb" : : : "memory")
#define ISB()       __asm__ volatile("isb" : : : "memory")
#define SEV()       __asm__ volatile("sev" : : : "memory")
#define WFE()       __asm__ volatile("wfe" : : : "memory");
#define WFI()       __asm__ volatile("wfi" : : : "memory");
