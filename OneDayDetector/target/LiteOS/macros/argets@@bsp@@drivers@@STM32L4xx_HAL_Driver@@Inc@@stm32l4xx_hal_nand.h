#define ADDR_1ST_CYCLE(__ADDRESS__)       (uint8_t)(__ADDRESS__)              /* 1st addressing cycle */
#define ADDR_2ND_CYCLE(__ADDRESS__)       (uint8_t)((__ADDRESS__) >> 8)       /* 2nd addressing cycle */
#define ADDR_3RD_CYCLE(__ADDRESS__)       (uint8_t)((__ADDRESS__) >> 16)      /* 3rd addressing cycle */
#define ADDR_4TH_CYCLE(__ADDRESS__)       (uint8_t)((__ADDRESS__) >> 24)      /* 4th addressing cycle */
#define ARRAY_ADDRESS(__ADDRESS__ , __HANDLE__) (((__ADDRESS__)->Page) + \
                         (((__ADDRESS__)->Block + (((__ADDRESS__)->Zone) * ((__HANDLE__)->Info.ZoneSize)))* ((__HANDLE__)->Info.BlockSize * ((__HANDLE__)->Info.PageSize + (__HANDLE__)->Info.SpareAreaSize))))
#define __HAL_NAND_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_NAND_STATE_RESET)
