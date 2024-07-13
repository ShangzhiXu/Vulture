#define LL_CRS_ReadReg(__INSTANCE__, __REG__) READ_REG(__INSTANCE__->__REG__)
#define LL_CRS_WriteReg(__INSTANCE__, __REG__, __VALUE__) WRITE_REG(__INSTANCE__->__REG__, (__VALUE__))
#define __LL_CRS_CALC_CALCULATE_RELOADVALUE(__FTARGET__, __FSYNC__) (((__FTARGET__) / (__FSYNC__)) - 1U)
