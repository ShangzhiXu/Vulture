  #define __ALIGNED(x)                           __attribute__((aligned(x)))
#define __BKPT(value)                       __ASM volatile ("bkpt "#value)
#define __CMSIS_GCC_OUT_REG(r) "=l" (r)
#define __CMSIS_GCC_OUT_REG(r) "=r" (r)
#define __CMSIS_GCC_RW_REG(r) "+l" (r)
#define __CMSIS_GCC_RW_REG(r) "+r" (r)
#define __CMSIS_GCC_USE_REG(r) "l" (r)
#define __CMSIS_GCC_USE_REG(r) "r" (r)
  #define __COMPILER_BARRIER()                   __ASM volatile("":::"memory")
#define __NOP()                             __ASM volatile ("nop")
#define __PKHBT(ARG1,ARG2,ARG3)          ( ((((uint32_t)(ARG1))          ) & 0x0000FFFFUL) |  \
                                           ((((uint32_t)(ARG2)) << (ARG3)) & 0xFFFF0000UL)  )
#define __PKHTB(ARG1,ARG2,ARG3)          ( ((((uint32_t)(ARG1))          ) & 0xFFFF0000UL) |  \
                                           ((((uint32_t)(ARG2)) >> (ARG3)) & 0x0000FFFFUL)  )
#define __SEV()                             __ASM volatile ("sev")
#define __SSAT(ARG1, ARG2) \
__extension__ \
({                          \
  int32_t __RES, __ARG1 = (ARG1); \
  __ASM volatile ("ssat %0, %1, %2" : "=r" (__RES) :  "I" (ARG2), "r" (__ARG1) : "cc" ); \
  __RES; \
 })
#define __SSAT16(ARG1, ARG2) \
({                          \
  int32_t __RES, __ARG1 = (ARG1); \
  __ASM volatile ("ssat16 %0, %1, %2" : "=r" (__RES) :  "I" (ARG2), "r" (__ARG1) : "cc" ); \
  __RES; \
 })
  #define __UNALIGNED_UINT16_READ(addr)          (((const struct T_UINT16_READ *)(const void *)(addr))->v)
  #define __UNALIGNED_UINT16_WRITE(addr, val)    (void)((((struct T_UINT16_WRITE *)(void *)(addr))->v) = (val))
  #define __UNALIGNED_UINT32(x)                  (((struct T_UINT32 *)(x))->v)
  #define __UNALIGNED_UINT32_READ(addr)          (((const struct T_UINT32_READ *)(const void *)(addr))->v)
  #define __UNALIGNED_UINT32_WRITE(addr, val)    (void)((((struct T_UINT32_WRITE *)(void *)(addr))->v) = (val))
#define __USAT(ARG1, ARG2) \
 __extension__ \
({                          \
  uint32_t __RES, __ARG1 = (ARG1); \
  __ASM volatile ("usat %0, %1, %2" : "=r" (__RES) :  "I" (ARG2), "r" (__ARG1) : "cc" ); \
  __RES; \
 })
#define __USAT16(ARG1, ARG2) \
({                          \
  uint32_t __RES, __ARG1 = (ARG1); \
  __ASM volatile ("usat16 %0, %1, %2" : "=r" (__RES) :  "I" (ARG2), "r" (__ARG1) : "cc" ); \
  __RES; \
 })
#define __WFE()                             __ASM volatile ("wfe":::"memory")
#define __WFI()                             __ASM volatile ("wfi":::"memory")
  #define __has_builtin(x) (0)
