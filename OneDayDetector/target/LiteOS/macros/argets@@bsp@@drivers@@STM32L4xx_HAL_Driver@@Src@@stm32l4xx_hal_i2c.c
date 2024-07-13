#define I2C_GET_DMA_REMAIN_DATA(__HANDLE__) ((((__HANDLE__)->State) == HAL_I2C_STATE_BUSY_TX)   ? \
                                            ((uint32_t)(((DMA_Channel_TypeDef *)(__HANDLE__)->hdmatx->Instance)->CNDTR)) : \
                                            ((uint32_t)(((DMA_Channel_TypeDef *)(__HANDLE__)->hdmarx->Instance)->CNDTR)))
