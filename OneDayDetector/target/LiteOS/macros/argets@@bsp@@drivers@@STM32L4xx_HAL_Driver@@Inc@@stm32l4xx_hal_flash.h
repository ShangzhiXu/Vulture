#define IS_FLASH_BANK(BANK)                (((BANK) == FLASH_BANK_1)  || \
                                            ((BANK) == FLASH_BANK_2)  || \
                                            ((BANK) == FLASH_BANK_BOTH))
#define IS_FLASH_BANK(BANK)                ((BANK) == FLASH_BANK_1)
#define IS_FLASH_BANK_EXCLUSIVE(BANK)      (((BANK) == FLASH_BANK_1)  || \
                                            ((BANK) == FLASH_BANK_2))
#define IS_FLASH_BANK_EXCLUSIVE(BANK)      ((BANK) == FLASH_BANK_1)
#define IS_FLASH_LATENCY(LATENCY)          (((LATENCY) == FLASH_LATENCY_0) || ((LATENCY) == FLASH_LATENCY_1) || \
                                            ((LATENCY) == FLASH_LATENCY_2) || ((LATENCY) == FLASH_LATENCY_3) || \
                                            ((LATENCY) == FLASH_LATENCY_4) || ((LATENCY) == FLASH_LATENCY_5) || \
                                            ((LATENCY) == FLASH_LATENCY_6) || ((LATENCY) == FLASH_LATENCY_7) || \
                                            ((LATENCY) == FLASH_LATENCY_8) || ((LATENCY) == FLASH_LATENCY_9) || \
                                            ((LATENCY) == FLASH_LATENCY_10) || ((LATENCY) == FLASH_LATENCY_11) || \
                                            ((LATENCY) == FLASH_LATENCY_12) || ((LATENCY) == FLASH_LATENCY_13) || \
                                            ((LATENCY) == FLASH_LATENCY_14) || ((LATENCY) == FLASH_LATENCY_15))
#define IS_FLASH_LATENCY(LATENCY)          (((LATENCY) == FLASH_LATENCY_0) || \
                                            ((LATENCY) == FLASH_LATENCY_1) || \
                                            ((LATENCY) == FLASH_LATENCY_2) || \
                                            ((LATENCY) == FLASH_LATENCY_3) || \
                                            ((LATENCY) == FLASH_LATENCY_4))
#define IS_FLASH_MAIN_MEM_ADDRESS(ADDRESS) (((ADDRESS) >= FLASH_BASE) && ((ADDRESS) <= FLASH_BASE+0x1FFFFF))
#define IS_FLASH_MAIN_MEM_ADDRESS(ADDRESS) (((ADDRESS) >= FLASH_BASE)        && ((((*((uint16_t *)FLASH_SIZE_DATA_REGISTER)) & (0x0FFF)) == 0x400) ? \
                                            ((ADDRESS) <= FLASH_BASE+0xFFFFF) : ((((*((uint16_t *)FLASH_SIZE_DATA_REGISTER)) & (0x0FFF)) == 0x200) ? \
                                            ((ADDRESS) <= FLASH_BASE+0x7FFFF) : ((((*((uint16_t *)FLASH_SIZE_DATA_REGISTER)) & (0x0FFF)) == 0x100) ? \
                                            ((ADDRESS) <= FLASH_BASE+0x3FFFF) : ((((*((uint16_t *)FLASH_SIZE_DATA_REGISTER)) & (0x0FFF)) == 0x80) ? \
                                            ((ADDRESS) <= FLASH_BASE+0x1FFFF) : ((ADDRESS) <= FLASH_BASE+0xFFFFF)))))) 
#define IS_FLASH_OTP_ADDRESS(ADDRESS)      (((ADDRESS) >= 0x1FFF7000) && ((ADDRESS) <= 0x1FFF73FF))
#define IS_FLASH_PAGE(PAGE)                ((PAGE) < 256)
#define IS_FLASH_PAGE(PAGE)                (((((*((uint16_t *)FLASH_SIZE_DATA_REGISTER)) & (0x0FFF)) == 0x400) ? ((PAGE) < 256) : \
                                            ((((*((uint16_t *)FLASH_SIZE_DATA_REGISTER)) & (0x0FFF)) == 0x200) ? ((PAGE) < 128) : \
                                            ((((*((uint16_t *)FLASH_SIZE_DATA_REGISTER)) & (0x0FFF)) == 0x100) ? ((PAGE) < 64) : \
                                            ((PAGE) < 256)))))
#define IS_FLASH_PAGE(PAGE)                (((((*((uint16_t *)FLASH_SIZE_DATA_REGISTER)) & (0x0FFF)) == 0x200) ? ((PAGE) < 256) : \
                                            ((((*((uint16_t *)FLASH_SIZE_DATA_REGISTER)) & (0x0FFF)) == 0x100) ? ((PAGE) < 128) : \
                                            ((PAGE) < 256))))
#define IS_FLASH_PAGE(PAGE)                (((((*((uint16_t *)FLASH_SIZE_DATA_REGISTER)) & (0x0FFF)) == 0x100) ? ((PAGE) < 128) : \
                                            ((((*((uint16_t *)FLASH_SIZE_DATA_REGISTER)) & (0x0FFF)) == 0x80)  ? ((PAGE) < 64) : \
                                            ((PAGE) < 128))))
#define IS_FLASH_PROGRAM_ADDRESS(ADDRESS)  (IS_FLASH_MAIN_MEM_ADDRESS(ADDRESS) || IS_FLASH_OTP_ADDRESS(ADDRESS))
#define IS_FLASH_TYPEERASE(VALUE)          (((VALUE) == FLASH_TYPEERASE_PAGES) || \
                                            ((VALUE) == FLASH_TYPEERASE_MASSERASE))  
#define IS_FLASH_TYPEPROGRAM(VALUE)        (((VALUE) == FLASH_TYPEPROGRAM_DOUBLEWORD) || \
                                            ((VALUE) == FLASH_TYPEPROGRAM_FAST) || \
                                            ((VALUE) == FLASH_TYPEPROGRAM_FAST_AND_LAST))  
#define IS_OB_PCROP_RDP(VALUE)             (((VALUE) == OB_PCROP_RDP_NOT_ERASE) || ((VALUE) == OB_PCROP_RDP_ERASE))
#define IS_OB_RDP_LEVEL(LEVEL)             (((LEVEL) == OB_RDP_LEVEL_0)   ||\
                                            ((LEVEL) == OB_RDP_LEVEL_1)/* ||\
                                            ((LEVEL) == OB_RDP_LEVEL_2)*/)
#define IS_OB_USER_BFB2(VALUE)             (((VALUE) == OB_BFB2_DISABLE) || ((VALUE) == OB_BFB2_ENABLE))
#define IS_OB_USER_BOOT0(VALUE)            (((VALUE) == OB_BOOT0_RESET) || ((VALUE) == OB_BOOT0_SET))
#define IS_OB_USER_BOOT1(VALUE)            (((VALUE) == OB_BOOT1_SRAM) || ((VALUE) == OB_BOOT1_SYSTEM))
#define IS_OB_USER_BOR_LEVEL(LEVEL)        (((LEVEL) == OB_BOR_LEVEL_0) || ((LEVEL) == OB_BOR_LEVEL_1) || \
                                            ((LEVEL) == OB_BOR_LEVEL_2) || ((LEVEL) == OB_BOR_LEVEL_3) || \
                                            ((LEVEL) == OB_BOR_LEVEL_4))
#define IS_OB_USER_DBANK(VALUE)            (((VALUE) == OB_DBANK_128_BITS) || ((VALUE) == OB_DBANK_64_BITS))
#define IS_OB_USER_DUALBANK(VALUE)         (((VALUE) == OB_DUALBANK_SINGLE) || ((VALUE) == OB_DUALBANK_DUAL))
#define IS_OB_USER_IWDG(VALUE)             (((VALUE) == OB_IWDG_HW) || ((VALUE) == OB_IWDG_SW))
#define IS_OB_USER_IWDG_STDBY(VALUE)       (((VALUE) == OB_IWDG_STDBY_FREEZE) || ((VALUE) == OB_IWDG_STDBY_RUN))
#define IS_OB_USER_IWDG_STOP(VALUE)        (((VALUE) == OB_IWDG_STOP_FREEZE) || ((VALUE) == OB_IWDG_STOP_RUN))
#define IS_OB_USER_SHUTDOWN(VALUE)         (((VALUE) == OB_SHUTDOWN_RST) || ((VALUE) == OB_SHUTDOWN_NORST))
#define IS_OB_USER_SRAM2_PARITY(VALUE)     (((VALUE) == OB_SRAM2_PARITY_ENABLE) || ((VALUE) == OB_SRAM2_PARITY_DISABLE))
#define IS_OB_USER_SRAM2_RST(VALUE)        (((VALUE) == OB_SRAM2_RST_ERASE) || ((VALUE) == OB_SRAM2_RST_NOT_ERASE))
#define IS_OB_USER_STANDBY(VALUE)          (((VALUE) == OB_STANDBY_RST) || ((VALUE) == OB_STANDBY_NORST))
#define IS_OB_USER_STOP(VALUE)             (((VALUE) == OB_STOP_RST) || ((VALUE) == OB_STOP_NORST))
#define IS_OB_USER_SWBOOT0(VALUE)          (((VALUE) == OB_BOOT0_FROM_OB) || ((VALUE) == OB_BOOT0_FROM_PIN))
#define IS_OB_USER_TYPE(TYPE)              (((TYPE) <= (uint32_t)0xFFFF) && ((TYPE) != 0))
#define IS_OB_USER_TYPE(TYPE)              (((TYPE) <= (uint32_t)0x1FFF) && ((TYPE) != 0))
#define IS_OB_USER_TYPE(TYPE)              (((TYPE) <= (uint32_t)0x7E7F) && ((TYPE) != 0) && (((TYPE)&0x0180) == 0))
#define IS_OB_USER_WWDG(VALUE)             (((VALUE) == OB_WWDG_HW) || ((VALUE) == OB_WWDG_SW))
#define IS_OB_WRPAREA(VALUE)               (((VALUE) == OB_WRPAREA_BANK1_AREAA) || ((VALUE) == OB_WRPAREA_BANK1_AREAB) || \
                                            ((VALUE) == OB_WRPAREA_BANK2_AREAA) || ((VALUE) == OB_WRPAREA_BANK2_AREAB))
#define IS_OB_WRPAREA(VALUE)               (((VALUE) == OB_WRPAREA_BANK1_AREAA) || ((VALUE) == OB_WRPAREA_BANK1_AREAB))
#define IS_OPTIONBYTE(VALUE)               (((VALUE) <= (OPTIONBYTE_WRP | OPTIONBYTE_RDP | OPTIONBYTE_USER | OPTIONBYTE_PCROP)))
#define __HAL_FLASH_CLEAR_FLAG(__FLAG__)        do { if((__FLAG__) & (FLASH_FLAG_ECCC | FLASH_FLAG_ECCD)) { SET_BIT(FLASH->ECCR, ((__FLAG__) & (FLASH_FLAG_ECCC | FLASH_FLAG_ECCD))); }\
                                                     if((__FLAG__) & ~(FLASH_FLAG_ECCC | FLASH_FLAG_ECCD)) { WRITE_REG(FLASH->SR, ((__FLAG__) & ~(FLASH_FLAG_ECCC | FLASH_FLAG_ECCD))); }\
                                                   } while(0)
#define __HAL_FLASH_DATA_CACHE_DISABLE()        CLEAR_BIT(FLASH->ACR, FLASH_ACR_DCEN)
#define __HAL_FLASH_DATA_CACHE_ENABLE()         SET_BIT(FLASH->ACR, FLASH_ACR_DCEN)
#define __HAL_FLASH_DATA_CACHE_RESET()          do { SET_BIT(FLASH->ACR, FLASH_ACR_DCRST);   \
                                                     CLEAR_BIT(FLASH->ACR, FLASH_ACR_DCRST); \
                                                   } while (0)
#define __HAL_FLASH_DISABLE_IT(__INTERRUPT__)   do { if((__INTERRUPT__) & FLASH_IT_ECCC) { CLEAR_BIT(FLASH->ECCR, FLASH_ECCR_ECCIE); }\
                                                     if((__INTERRUPT__) & (~FLASH_IT_ECCC)) { CLEAR_BIT(FLASH->CR, ((__INTERRUPT__) & (~FLASH_IT_ECCC))); }\
                                                   } while(0)
#define __HAL_FLASH_ENABLE_IT(__INTERRUPT__)    do { if((__INTERRUPT__) & FLASH_IT_ECCC) { SET_BIT(FLASH->ECCR, FLASH_ECCR_ECCIE); }\
                                                     if((__INTERRUPT__) & (~FLASH_IT_ECCC)) { SET_BIT(FLASH->CR, ((__INTERRUPT__) & (~FLASH_IT_ECCC))); }\
                                                   } while(0)
#define __HAL_FLASH_GET_FLAG(__FLAG__)          (((__FLAG__) & (FLASH_FLAG_ECCC | FLASH_FLAG_ECCD)) ? \
                                                 (READ_BIT(FLASH->ECCR, (__FLAG__)) == (__FLAG__))  : \
                                                 (READ_BIT(FLASH->SR,   (__FLAG__)) == (__FLAG__)))
#define __HAL_FLASH_GET_LATENCY()               READ_BIT(FLASH->ACR, FLASH_ACR_LATENCY)
#define __HAL_FLASH_INSTRUCTION_CACHE_DISABLE() CLEAR_BIT(FLASH->ACR, FLASH_ACR_ICEN)
#define __HAL_FLASH_INSTRUCTION_CACHE_ENABLE()  SET_BIT(FLASH->ACR, FLASH_ACR_ICEN)
#define __HAL_FLASH_INSTRUCTION_CACHE_RESET()   do { SET_BIT(FLASH->ACR, FLASH_ACR_ICRST);   \
                                                     CLEAR_BIT(FLASH->ACR, FLASH_ACR_ICRST); \
                                                   } while (0)
#define __HAL_FLASH_POWER_DOWN_DISABLE()        do { WRITE_REG(FLASH->PDKEYR, FLASH_PDKEY1); \
                                                     WRITE_REG(FLASH->PDKEYR, FLASH_PDKEY2); \
                                                     CLEAR_BIT(FLASH->ACR, FLASH_ACR_RUN_PD); \
                                                   } while (0)
#define __HAL_FLASH_POWER_DOWN_ENABLE()         do { WRITE_REG(FLASH->PDKEYR, FLASH_PDKEY1); \
                                                     WRITE_REG(FLASH->PDKEYR, FLASH_PDKEY2); \
                                                     SET_BIT(FLASH->ACR, FLASH_ACR_RUN_PD);   \
                                                   } while (0)
#define __HAL_FLASH_PREFETCH_BUFFER_DISABLE()   CLEAR_BIT(FLASH->ACR, FLASH_ACR_PRFTEN)
#define __HAL_FLASH_PREFETCH_BUFFER_ENABLE()    SET_BIT(FLASH->ACR, FLASH_ACR_PRFTEN)
#define __HAL_FLASH_SET_LATENCY(__LATENCY__)    (MODIFY_REG(FLASH->ACR, FLASH_ACR_LATENCY, (__LATENCY__)))
#define __HAL_FLASH_SLEEP_POWERDOWN_DISABLE()   CLEAR_BIT(FLASH->ACR, FLASH_ACR_SLEEP_PD)
#define __HAL_FLASH_SLEEP_POWERDOWN_ENABLE()    SET_BIT(FLASH->ACR, FLASH_ACR_SLEEP_PD)
