#define IS_CRC_INPUTDATA_INVERSION_MODE(MODE)     (((MODE) == CRC_INPUTDATA_INVERSION_NONE)     || \
                                                   ((MODE) == CRC_INPUTDATA_INVERSION_BYTE)     || \
                                                   ((MODE) == CRC_INPUTDATA_INVERSION_HALFWORD) || \
                                                   ((MODE) == CRC_INPUTDATA_INVERSION_WORD))
#define IS_CRC_OUTPUTDATA_INVERSION_MODE(MODE)    (((MODE) == CRC_OUTPUTDATA_INVERSION_DISABLE) || \
                                                   ((MODE) == CRC_OUTPUTDATA_INVERSION_ENABLE))
#define __HAL_CRC_OUTPUTREVERSAL_DISABLE(__HANDLE__) ((__HANDLE__)->Instance->CR &= ~(CRC_CR_REV_OUT))
#define  __HAL_CRC_OUTPUTREVERSAL_ENABLE(__HANDLE__) ((__HANDLE__)->Instance->CR |= CRC_CR_REV_OUT)
#define __HAL_CRC_POLYNOMIAL_CONFIG(__HANDLE__, __POLYNOMIAL__) ((__HANDLE__)->Instance->POL = (__POLYNOMIAL__))
