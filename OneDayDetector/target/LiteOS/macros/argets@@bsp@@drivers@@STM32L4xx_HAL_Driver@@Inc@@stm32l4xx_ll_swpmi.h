#define LL_SWPMI_ReadReg(__INSTANCE__, __REG__) READ_REG(__INSTANCE__->__REG__)
#define LL_SWPMI_WriteReg(__INSTANCE__, __REG__, __VALUE__) WRITE_REG(__INSTANCE__->__REG__, (__VALUE__))
#define __LL_SWPMI_CALC_BITRATE_PRESCALER(__FSWP__, __FSWPCLK__)   ((uint32_t)(((__FSWPCLK__) / ((__FSWP__) * 4)) - 1))
