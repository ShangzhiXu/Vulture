#define ARM_MPU_AP_(RO, NP) ((((RO) & 1U) << 1U) | ((NP) & 1U))
#define ARM_MPU_ATTR(O, I) ((((O) & 0xFU) << 4U) | ((((O) & 0xFU) != 0U) ? ((I) & 0xFU) : (((I) & 0x3U) << 2U)))
#define ARM_MPU_ATTR_MEMORY_(NT, WB, RA, WA) \
  ((((NT) & 1U) << 3U) | (((WB) & 1U) << 2U) | (((RA) & 1U) << 1U) | ((WA) & 1U))
#define ARM_MPU_RBAR(BASE, SH, RO, NP, XN) \
  (((BASE) & MPU_RBAR_BASE_Msk) | \
  (((SH) << MPU_RBAR_SH_Pos) & MPU_RBAR_SH_Msk) | \
  ((ARM_MPU_AP_(RO, NP) << MPU_RBAR_AP_Pos) & MPU_RBAR_AP_Msk) | \
  (((XN) << MPU_RBAR_XN_Pos) & MPU_RBAR_XN_Msk))
#define ARM_MPU_RLAR(LIMIT, IDX) \
  (((LIMIT) & MPU_RLAR_LIMIT_Msk) | \
  (((IDX) << MPU_RLAR_AttrIndx_Pos) & MPU_RLAR_AttrIndx_Msk) | \
  (MPU_RLAR_EN_Msk))
#define ARM_MPU_RLAR_PXN(LIMIT, PXN, IDX) \
  (((LIMIT) & MPU_RLAR_LIMIT_Msk) | \
  (((PXN) << MPU_RLAR_PXN_Pos) & MPU_RLAR_PXN_Msk) | \
  (((IDX) << MPU_RLAR_AttrIndx_Pos) & MPU_RLAR_AttrIndx_Msk) | \
  (MPU_RLAR_EN_Msk))
