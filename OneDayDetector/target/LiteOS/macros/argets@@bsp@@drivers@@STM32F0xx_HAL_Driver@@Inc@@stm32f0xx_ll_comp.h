#define LL_COMP_ReadReg(__INSTANCE__, __REG__) READ_REG(__INSTANCE__->__REG__)
#define LL_COMP_WriteReg(__INSTANCE__, __REG__, __VALUE__) WRITE_REG(__INSTANCE__->__REG__, (__VALUE__))
#define __COMP_BITOFFSET_INSTANCE(__COMP_INSTANCE__)                           \
  (((uint32_t)(__COMP_INSTANCE__) - COMP_BASE) << 3U)
#define __COMP_IS_INSTANCE_EVEN(__COMP_INSTANCE__)                             \
  (((uint32_t)(__COMP_INSTANCE__) - COMP_BASE) >> 1U)
#define __COMP_IS_INSTANCE_ODD(__COMP_INSTANCE__)                              \
  ((~(((uint32_t)(__COMP_INSTANCE__) - COMP_BASE) >> 1U)) & 0x00000001)
#define __LL_COMP_COMMON_INSTANCE(__COMPx__)                                   \
  (COMP12_COMMON)
