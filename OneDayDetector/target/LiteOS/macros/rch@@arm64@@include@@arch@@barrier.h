#define BARRIER()   __asm__ volatile("" : : : "memory")
#define DMB()       __asm__ volatile("dmb sy" : : : "memory")
#define DMB_ISHST() __asm__ volatile("dmb ishst" : : : "memory")
#define DSB()       __asm__ volatile("dsb sy" : : : "memory")
#define DSB_ISHST() __asm__ volatile("dsb ishst" : : : "memory")
#define ISB()       __asm__ volatile("isb" : : : "memory")
#define SEV()       __asm__ volatile("sev" : : : "memory");
#define WFE()       __asm__ volatile("wfe" : : : "memory")
#define WFI()       __asm__ volatile("wfi" : : : "memory");
