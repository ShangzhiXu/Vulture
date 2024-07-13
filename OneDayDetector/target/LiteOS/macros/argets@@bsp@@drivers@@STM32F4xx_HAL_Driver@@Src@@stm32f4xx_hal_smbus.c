#define SMBUS_GET_PEC(__HANDLE__)             (((__HANDLE__)->Instance->SR2 & I2C_SR2_PEC) >> 8)
