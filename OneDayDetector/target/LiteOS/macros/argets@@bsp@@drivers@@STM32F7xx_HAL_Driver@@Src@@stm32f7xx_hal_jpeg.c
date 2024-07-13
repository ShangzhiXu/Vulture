#define JPEG_DISABLE_DMA(__HANDLE__,__DMA__) MODIFY_REG((__HANDLE__)->Instance->CR, ((__DMA__) & JPEG_DMA_MASK), 0UL)
#define JPEG_ENABLE_DMA(__HANDLE__,__DMA__)  ((__HANDLE__)->Instance->CR |= ((__DMA__) & JPEG_DMA_MASK))
