#define LL_USART_ReadReg(__INSTANCE__, __REG__) READ_REG(__INSTANCE__->__REG__)
#define LL_USART_WriteReg(__INSTANCE__, __REG__, __VALUE__) WRITE_REG(__INSTANCE__->__REG__, (__VALUE__))
#define __LL_USART_DIV_SAMPLING16(__PERIPHCLK__, __BAUDRATE__) (((__PERIPHCLK__) + ((__BAUDRATE__)/2U))/(__BAUDRATE__))
#define __LL_USART_DIV_SAMPLING8(__PERIPHCLK__, __BAUDRATE__) ((((__PERIPHCLK__)*2U)\
                                                                + ((__BAUDRATE__)/2U))/(__BAUDRATE__))
