#define IS_I2C_ANALOG_FILTER(FILTER)    (((FILTER) == I2C_ANALOGFILTER_ENABLE) || \
                                          ((FILTER) == I2C_ANALOGFILTER_DISABLE))
#define IS_I2C_DIGITAL_FILTER(FILTER)   ((FILTER) <= 0x0000000FU)
#define IS_I2C_FASTMODEPLUS(__CONFIG__) ((((__CONFIG__) & I2C_FASTMODEPLUS_PB6)  == I2C_FASTMODEPLUS_PB6)  || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_PB7)  == I2C_FASTMODEPLUS_PB7)  || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_PB8)  == I2C_FASTMODEPLUS_PB8)  || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_PB9)  == I2C_FASTMODEPLUS_PB9)  || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_I2C1) == I2C_FASTMODEPLUS_I2C1) || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_I2C2) == I2C_FASTMODEPLUS_I2C2) || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_I2C3) == I2C_FASTMODEPLUS_I2C3) || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_I2C4) == I2C_FASTMODEPLUS_I2C4))
#define IS_I2C_FASTMODEPLUS(__CONFIG__) ((((__CONFIG__) & I2C_FASTMODEPLUS_PB6)  == I2C_FASTMODEPLUS_PB6)  || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_PB7)  == I2C_FASTMODEPLUS_PB7)  || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_PB8)  == I2C_FASTMODEPLUS_PB8)  || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_PB9)  == I2C_FASTMODEPLUS_PB9)  || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_I2C1) == I2C_FASTMODEPLUS_I2C1) || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_I2C2) == I2C_FASTMODEPLUS_I2C2) || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_I2C3) == I2C_FASTMODEPLUS_I2C3))
#define IS_I2C_FASTMODEPLUS(__CONFIG__) ((((__CONFIG__) & I2C_FASTMODEPLUS_PB6)  == I2C_FASTMODEPLUS_PB6)  || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_PB7)  == I2C_FASTMODEPLUS_PB7)  || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_PB8)  == I2C_FASTMODEPLUS_PB8)  || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_PB9)  == I2C_FASTMODEPLUS_PB9)  || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_I2C1) == I2C_FASTMODEPLUS_I2C1) || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_I2C2) == I2C_FASTMODEPLUS_I2C2))
#define IS_I2C_FASTMODEPLUS(__CONFIG__) ((((__CONFIG__) & I2C_FASTMODEPLUS_PB6)  == I2C_FASTMODEPLUS_PB6)  || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_PB7)  == I2C_FASTMODEPLUS_PB7)  || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_PB8)  == I2C_FASTMODEPLUS_PB8)  || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_PB9)  == I2C_FASTMODEPLUS_PB9)  || \
                                         (((__CONFIG__) & I2C_FASTMODEPLUS_I2C1) == I2C_FASTMODEPLUS_I2C1))
