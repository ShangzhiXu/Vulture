#define NOR_ADDR_SHIFT(__NOR_ADDRESS__, NOR_MEMORY_WIDTH, ADDRESS)    (uint32_t)(((NOR_MEMORY_WIDTH) == NOR_MEMORY_16B)? ((uint32_t)((__NOR_ADDRESS__) + (2U * (ADDRESS)))):\
                                                                                 ((uint32_t)((__NOR_ADDRESS__) + (ADDRESS))))
#define NOR_WRITE(ADDRESS, DATA)  (*(__IO uint16_t *)((uint32_t)(ADDRESS)) = (DATA))
#define __HAL_NOR_RESET_HANDLE_STATE(__HANDLE__)          do {                                             \
                                                               (__HANDLE__)->State = HAL_NOR_STATE_RESET;  \
                                                               (__HANDLE__)->MspInitCallback = NULL;       \
                                                               (__HANDLE__)->MspDeInitCallback = NULL;     \
                                                             } while(0)
#define __HAL_NOR_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_NOR_STATE_RESET)
