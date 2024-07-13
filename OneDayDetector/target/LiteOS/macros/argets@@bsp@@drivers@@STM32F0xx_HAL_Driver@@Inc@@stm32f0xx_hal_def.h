#define HAL_IS_BIT_CLR(REG, BIT)         (((REG) & (BIT)) == 0U)
#define HAL_IS_BIT_SET(REG, BIT)         (((REG) & (BIT)) == (BIT))
#define UNUSED(X) (void)X      /* To avoid gcc/g++ warnings */
#define __HAL_LINKDMA(__HANDLE__, __PPP_DMA_FIELD_, __DMA_HANDLE_)                 \
                        do{                                                        \
                              (__HANDLE__)->__PPP_DMA_FIELD_ = &(__DMA_HANDLE_);   \
                              (__DMA_HANDLE_).Parent = (__HANDLE__);               \
                          } while(0)
  #define __HAL_LOCK(__HANDLE__)                                           \
                                do{                                        \
                                    if((__HANDLE__)->Lock == HAL_LOCKED)   \
                                    {                                      \
                                       return HAL_BUSY;                    \
                                    }                                      \
                                    else                                   \
                                    {                                      \
                                       (__HANDLE__)->Lock = HAL_LOCKED;    \
                                    }                                      \
       	                          }while (0)
#define __HAL_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = 0)
  #define __HAL_UNLOCK(__HANDLE__)                                          \
                                  do{                                       \
                                      (__HANDLE__)->Lock = HAL_UNLOCKED;    \
                                    }while (0)
