#define IS_FLASH_ADDRESS(ADDRESS) ((((ADDRESS) >= FLASH_BASE) && ((ADDRESS) <= FLASH_END)) || \
                                   (((ADDRESS) >= FLASH_OTP_BASE) && ((ADDRESS) <= FLASH_OTP_END)))
#define IS_FLASH_BANK(BANK)        (((BANK) == FLASH_BANK_1)  || \
                                    ((BANK) == FLASH_BANK_2)  || \
                                    ((BANK) == FLASH_BANK_BOTH))
#define IS_FLASH_LATENCY(LATENCY) (((LATENCY) == FLASH_LATENCY_0)  || \
                                   ((LATENCY) == FLASH_LATENCY_1)  || \
                                   ((LATENCY) == FLASH_LATENCY_2)  || \
                                   ((LATENCY) == FLASH_LATENCY_3)  || \
                                   ((LATENCY) == FLASH_LATENCY_4)  || \
                                   ((LATENCY) == FLASH_LATENCY_5)  || \
                                   ((LATENCY) == FLASH_LATENCY_6)  || \
                                   ((LATENCY) == FLASH_LATENCY_7)  || \
                                   ((LATENCY) == FLASH_LATENCY_8)  || \
                                   ((LATENCY) == FLASH_LATENCY_9)  || \
                                   ((LATENCY) == FLASH_LATENCY_10) || \
                                   ((LATENCY) == FLASH_LATENCY_11) || \
                                   ((LATENCY) == FLASH_LATENCY_12) || \
                                   ((LATENCY) == FLASH_LATENCY_13) || \
                                   ((LATENCY) == FLASH_LATENCY_14) || \
                                   ((LATENCY) == FLASH_LATENCY_15))
#define IS_FLASH_NBSECTORS(NBSECTORS) (((NBSECTORS) != 0U) && ((NBSECTORS) <= FLASH_SECTOR_TOTAL))
#define IS_FLASH_SECTOR(SECTOR) (((SECTOR) == FLASH_SECTOR_0)   || ((SECTOR) == FLASH_SECTOR_1)   ||\
                                 ((SECTOR) == FLASH_SECTOR_2)   || ((SECTOR) == FLASH_SECTOR_3)   ||\
                                 ((SECTOR) == FLASH_SECTOR_4)   || ((SECTOR) == FLASH_SECTOR_5)   ||\
                                 ((SECTOR) == FLASH_SECTOR_6)   || ((SECTOR) == FLASH_SECTOR_7))
#define IS_FLASH_SECTOR(SECTOR) (((SECTOR) == FLASH_SECTOR_0)   || ((SECTOR) == FLASH_SECTOR_1)   ||\
                                 ((SECTOR) == FLASH_SECTOR_2)   || ((SECTOR) == FLASH_SECTOR_3)   ||\
                                 ((SECTOR) == FLASH_SECTOR_4)   || ((SECTOR) == FLASH_SECTOR_5)   ||\
                                 ((SECTOR) == FLASH_SECTOR_6)   || ((SECTOR) == FLASH_SECTOR_7)   ||\
                                 ((SECTOR) == FLASH_SECTOR_8)   || ((SECTOR) == FLASH_SECTOR_9)   ||\
                                 ((SECTOR) == FLASH_SECTOR_10)  || ((SECTOR) == FLASH_SECTOR_11)  ||\
                                 ((SECTOR) == FLASH_SECTOR_12)  || ((SECTOR) == FLASH_SECTOR_13)  ||\
                                 ((SECTOR) == FLASH_SECTOR_14)  || ((SECTOR) == FLASH_SECTOR_15)  ||\
                                 ((SECTOR) == FLASH_SECTOR_16)  || ((SECTOR) == FLASH_SECTOR_17)  ||\
                                 ((SECTOR) == FLASH_SECTOR_18)  || ((SECTOR) == FLASH_SECTOR_19)  ||\
                                 ((SECTOR) == FLASH_SECTOR_20)  || ((SECTOR) == FLASH_SECTOR_21)  ||\
                                 ((SECTOR) == FLASH_SECTOR_22)  || ((SECTOR) == FLASH_SECTOR_23))
#define IS_FLASH_SECTOR(SECTOR) (((SECTOR) == FLASH_SECTOR_0)   || ((SECTOR) == FLASH_SECTOR_1)   ||\
                                 ((SECTOR) == FLASH_SECTOR_2)   || ((SECTOR) == FLASH_SECTOR_3))
#define IS_FLASH_SECTOR(SECTOR) (((SECTOR) == FLASH_SECTOR_0)   || ((SECTOR) == FLASH_SECTOR_1))
#define IS_FLASH_TYPEERASE(VALUE)(((VALUE) == FLASH_TYPEERASE_SECTORS) || \
                                  ((VALUE) == FLASH_TYPEERASE_MASSERASE))
#define IS_OB_BOOT_ADDRESS(ADDRESS) ((ADDRESS) <= 0x8013)
#define IS_OB_BOR_LEVEL(LEVEL) (((LEVEL) == OB_BOR_LEVEL1) || ((LEVEL) == OB_BOR_LEVEL2) ||\
                                ((LEVEL) == OB_BOR_LEVEL3) || ((LEVEL) == OB_BOR_OFF))
#define IS_OB_IWDG_SOURCE(SOURCE) (((SOURCE) == OB_IWDG_SW) || ((SOURCE) == OB_IWDG_HW))
#define IS_OB_IWDG_STDBY_FREEZE(FREEZE) (((FREEZE) == OB_IWDG_STDBY_FREEZE) || ((FREEZE) == OB_IWDG_STDBY_ACTIVE))
#define IS_OB_IWDG_STOP_FREEZE(FREEZE) (((FREEZE) == OB_IWDG_STOP_FREEZE) || ((FREEZE) == OB_IWDG_STOP_ACTIVE))
#define IS_OB_NDBANK(VALUE)        (((VALUE) == OB_NDBANK_SINGLE_BANK) || \
                                    ((VALUE) == OB_NDBANK_DUAL_BANK))
#define IS_OB_NDBOOT(VALUE)        (((VALUE) == OB_DUAL_BOOT_DISABLE) || \
                                    ((VALUE) == OB_DUAL_BOOT_ENABLE))
#define IS_OB_PCROP_RDP_VALUE(VALUE) (((VALUE) == OB_PCROP_RDP_DISABLE) || \
                                      ((VALUE) == OB_PCROP_RDP_ENABLE))
#define IS_OB_PCROP_SECTOR(SECTOR)   (((SECTOR) & (uint32_t)0xFFFFFF00U) == 0x00000000U)
#define IS_OB_RDP_LEVEL(LEVEL) (((LEVEL) == OB_RDP_LEVEL_0)   ||\
                                ((LEVEL) == OB_RDP_LEVEL_1)   ||\
                                ((LEVEL) == OB_RDP_LEVEL_2))
#define IS_OB_STDBY_SOURCE(SOURCE) (((SOURCE) == OB_STDBY_NO_RST) || ((SOURCE) == OB_STDBY_RST))
#define IS_OB_STOP_SOURCE(SOURCE) (((SOURCE) == OB_STOP_NO_RST) || ((SOURCE) == OB_STOP_RST))
#define IS_OB_WRP_SECTOR(SECTOR)  ((((SECTOR) & 0xFF00FFFFU) == 0x00000000U) && ((SECTOR) != 0x00000000U))
#define IS_OB_WRP_SECTOR(SECTOR)  ((((SECTOR) & 0xF000FFFFU) == 0x00000000U) && ((SECTOR) != 0x00000000U))
#define IS_OB_WRP_SECTOR(SECTOR)  ((((SECTOR) & 0xFFF0FFFFU) == 0x00000000U) && ((SECTOR) != 0x00000000U))
#define IS_OB_WRP_SECTOR(SECTOR)  ((((SECTOR) & 0xFFFCFFFFU) == 0x00000000U) && ((SECTOR) != 0x00000000U))
#define IS_OB_WWDG_SOURCE(SOURCE) (((SOURCE) == OB_WWDG_SW) || ((SOURCE) == OB_WWDG_HW))
#define IS_OPTIONBYTE(VALUE)(((VALUE) <= (OPTIONBYTE_WRP | OPTIONBYTE_RDP        | OPTIONBYTE_USER |\
                                          OPTIONBYTE_BOR | OPTIONBYTE_BOOTADDR_0 | OPTIONBYTE_BOOTADDR_1 |\
                                          OPTIONBYTE_PCROP | OPTIONBYTE_PCROP_RDP)))
#define IS_OPTIONBYTE(VALUE)(((VALUE) <= (OPTIONBYTE_WRP | OPTIONBYTE_RDP        | OPTIONBYTE_USER |\
                                          OPTIONBYTE_BOR | OPTIONBYTE_BOOTADDR_0 | OPTIONBYTE_BOOTADDR_1)))
#define IS_VOLTAGERANGE(RANGE)(((RANGE) == FLASH_VOLTAGE_RANGE_1) || \
                               ((RANGE) == FLASH_VOLTAGE_RANGE_2) || \
                               ((RANGE) == FLASH_VOLTAGE_RANGE_3) || \
                               ((RANGE) == FLASH_VOLTAGE_RANGE_4))
#define IS_WRPSTATE(VALUE)(((VALUE) == OB_WRPSTATE_DISABLE) || \
                           ((VALUE) == OB_WRPSTATE_ENABLE))
#define __HAL_FLASH_CALC_BOOT_BASE_ADR(__ADDRESS__) ((__ADDRESS__) >> 14)
