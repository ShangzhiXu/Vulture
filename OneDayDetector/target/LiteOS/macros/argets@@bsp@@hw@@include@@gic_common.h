#define GICD_CPENDSGIR(n)               (GICD_OFFSET + 0xf10 + (n) * 4) /* SGI Clear-Pending Registers; */
#define GICD_ICACTIVER(n)               (GICD_OFFSET + 0x380 + (n) * 4) /* Interrupt Clear-Active Registers */
#define GICD_ICENABLER(n)               (GICD_OFFSET + 0x180 + (n) * 4) /* Interrupt Clear-Enable Registers */
#define GICD_ICFGR(n)                   (GICD_OFFSET + 0xc00 + (n) * 4) /* Interrupt Configuration Registers */
#define GICD_ICPENDR(n)                 (GICD_OFFSET + 0x280 + (n) * 4) /* Interrupt Clear-Pending Registers */
#define GICD_IGROUPR(n)                 (GICD_OFFSET + 0x080 + (n) * 4) /* Interrupt Group Registers */
#define GICD_IGRPMODR(n)                (GICD_OFFSET + 0x0d00 + (n) * 4) /* Interrupt Group Mode Registers */
#define GICD_IPRIORITYR(n)              (GICD_OFFSET + 0x400 + (n) * 4) /* Interrupt Priority Registers */
#define GICD_IROUTER(n)                 (GICD_OFFSET + 0x6000 + (n) * 8) /* Interrupt Rounter Registers */
#define GICD_ISACTIVER(n)               (GICD_OFFSET + 0x300 + (n) * 4) /* GICv2 Interrupt Set-Active Registers */
#define GICD_ISENABLER(n)               (GICD_OFFSET + 0x100 + (n) * 4) /* Interrupt Set-Enable Registers */
#define GICD_ISPENDR(n)                 (GICD_OFFSET + 0x200 + (n) * 4) /* Interrupt Set-Pending Registers */
#define GICD_ITARGETSR(n)               (GICD_OFFSET + 0x800 + (n) * 4) /* Interrupt Processor Targets Registers */
#define GICD_SPENDSGIR(n)               (GICD_OFFSET + 0xf20 + (n) * 4) /* SGI Set-Pending Registers; */
#define GIC_REG_32(reg)                 (*(volatile UINT32 *)((UINTPTR)(GIC_BASE_ADDR + (reg))))
#define GIC_REG_64(reg)                 (*(volatile UINT64 *)((UINTPTR)(GIC_BASE_ADDR + (reg))))
#define GIC_REG_8(reg)                  (*(volatile UINT8 *)((UINTPTR)(GIC_BASE_ADDR + (reg))))
