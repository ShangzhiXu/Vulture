#define LL_OPAMP_ReadReg(__INSTANCE__, __REG__) READ_REG(__INSTANCE__->__REG__)
#define LL_OPAMP_WriteReg(__INSTANCE__, __REG__, __VALUE__) WRITE_REG(__INSTANCE__->__REG__, (__VALUE__))
#define __LL_OPAMP_COMMON_INSTANCE(__OPAMPx__)                                 \
  (OPAMP12_COMMON)
#define __LL_OPAMP_COMMON_INSTANCE(__OPAMPx__)                                 \
  (OPAMP1_COMMON)
#define __LL_OPAMP_IS_ENABLED_ALL_COMMON_INSTANCE()                            \
  (LL_OPAMP_IsEnabled(OPAMP1) |                                                \
   LL_OPAMP_IsEnabled(OPAMP2)  )
#define __LL_OPAMP_IS_ENABLED_ALL_COMMON_INSTANCE()                            \
  (LL_OPAMP_IsEnabled(OPAMP1))
#define __OPAMP_PTR_REG_OFFSET(__REG__, __REG_OFFSET__)                        \
 ((uint32_t *)((uint32_t) ((uint32_t)(&(__REG__)) + ((__REG_OFFSET__) << 2U))))
