#define IS_CRC_INPUTDATA_FORMAT(FORMAT)           (((FORMAT) == CRC_INPUTDATA_FORMAT_BYTES)     || \
                                                   ((FORMAT) == CRC_INPUTDATA_FORMAT_HALFWORDS) || \
                                                   ((FORMAT) == CRC_INPUTDATA_FORMAT_WORDS))
#define IS_CRC_POL_LENGTH(LENGTH)     (((LENGTH) == CRC_POLYLENGTH_32B) || \
                                       ((LENGTH) == CRC_POLYLENGTH_16B) || \
                                       ((LENGTH) == CRC_POLYLENGTH_8B)  || \
                                       ((LENGTH) == CRC_POLYLENGTH_7B))
#define IS_DEFAULT_INIT_VALUE(VALUE)  (((VALUE) == DEFAULT_INIT_VALUE_ENABLE) || \
                                       ((VALUE) == DEFAULT_INIT_VALUE_DISABLE))
#define IS_DEFAULT_POLYNOMIAL(DEFAULT) (((DEFAULT) == DEFAULT_POLYNOMIAL_ENABLE) || \
                                        ((DEFAULT) == DEFAULT_POLYNOMIAL_DISABLE))
#define __HAL_CRC_DR_RESET(__HANDLE__) ((__HANDLE__)->Instance->CR |= CRC_CR_RESET)
#define __HAL_CRC_GET_IDR(__HANDLE__) (((__HANDLE__)->Instance->IDR) & CRC_IDR_IDR)
#define __HAL_CRC_INITIALCRCVALUE_CONFIG(__HANDLE__, __INIT__) ((__HANDLE__)->Instance->INIT = (__INIT__))
#define __HAL_CRC_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_CRC_STATE_RESET)
#define __HAL_CRC_SET_IDR(__HANDLE__, __VALUE__) (WRITE_REG((__HANDLE__)->Instance->IDR, (__VALUE__)))
