#define NOR_ADDR_SHIFT(__NOR_ADDRESS, __NOR_MEMORY_WIDTH_, __ADDRESS__)       \
            ((uint32_t)(((__NOR_MEMORY_WIDTH_) == NOR_MEMORY_16B)?              \
              ((uint32_t)((__NOR_ADDRESS) + (2 * (__ADDRESS__)))):              \
              ((uint32_t)((__NOR_ADDRESS) + (__ADDRESS__)))))
#define NOR_WRITE(__ADDRESS__, __DATA__)   do{                                                             \
                                                 (*(__IO uint16_t *)((uint32_t)(__ADDRESS__)) = (__DATA__)); \
                                                 __DSB();                                                    \
                                               } while(0)
#define __HAL_NOR_RESET_HANDLE_STATE(__HANDLE__)          do {                                             \
                                                               (__HANDLE__)->State = HAL_NOR_STATE_RESET;  \
                                                               (__HANDLE__)->MspInitCallback = NULL;       \
                                                               (__HANDLE__)->MspDeInitCallback = NULL;     \
                                                             } while(0)
#define __HAL_NOR_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_NOR_STATE_RESET)
