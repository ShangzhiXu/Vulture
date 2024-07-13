#define IS_FIREWALL_CODE_SEGMENT_ADDRESS(ADDRESS)        (((ADDRESS) >= FLASH_BASE) && ((ADDRESS) < (FLASH_BASE + FLASH_SIZE)))                                                   
#define IS_FIREWALL_CODE_SEGMENT_LENGTH(ADDRESS, LENGTH) (((ADDRESS) + (LENGTH)) <= (FLASH_BASE + FLASH_SIZE))
#define IS_FIREWALL_NONVOLATILEDATA_SEGMENT_ADDRESS(ADDRESS)        (((ADDRESS) >= FLASH_BASE) && ((ADDRESS) < (FLASH_BASE + FLASH_SIZE)))                                                   
#define IS_FIREWALL_NONVOLATILEDATA_SEGMENT_LENGTH(ADDRESS, LENGTH) (((ADDRESS) + (LENGTH)) <= (FLASH_BASE + FLASH_SIZE)) 
#define IS_FIREWALL_VOLATILEDATA_EXECUTE(EXECUTE) (((EXECUTE) == FIREWALL_VOLATILEDATA_NOT_EXECUTABLE) || \
                                                   ((EXECUTE) == FIREWALL_VOLATILEDATA_EXECUTABLE))                                                                                    
#define IS_FIREWALL_VOLATILEDATA_SEGMENT_ADDRESS(ADDRESS)        (((ADDRESS) >= SRAM1_BASE) && ((ADDRESS) < (SRAM1_BASE + SRAM1_SIZE_MAX)))
#define IS_FIREWALL_VOLATILEDATA_SEGMENT_LENGTH(ADDRESS, LENGTH) (((ADDRESS) + (LENGTH)) <= (SRAM1_BASE + SRAM1_SIZE_MAX))                                                        
#define IS_FIREWALL_VOLATILEDATA_SHARE(SHARE) (((SHARE) == FIREWALL_VOLATILEDATA_NOT_SHARED) || \
                                               ((SHARE) == FIREWALL_VOLATILEDATA_SHARED))
#define __HAL_FIREWALL_GET_PREARM() ((FIREWALL->CR & FW_CR_FPA) == FW_CR_FPA)
#define __HAL_FIREWALL_GET_VOLATILEDATA_EXECUTION() ((FIREWALL->CR & FW_CR_VDE) == FW_CR_VDE)
#define __HAL_FIREWALL_GET_VOLATILEDATA_SHARED() ((FIREWALL->CR & FW_CR_VDS) == FW_CR_VDS)
#define  __HAL_FIREWALL_IS_ENABLED()  HAL_IS_BIT_CLR(SYSCFG->CFGR1, SYSCFG_CFGR1_FWDIS)  
#define __HAL_FIREWALL_PREARM_DISABLE()                                        \
             do {                                                              \
                  __IO uint32_t tmpreg;                                        \
                  CLEAR_BIT(FIREWALL->CR, FW_CR_FPA) ;                         \
                  /* Read bit back to ensure it is taken into account by IP */ \
                  /* (introduce proper delay inside macro execution) */        \
                  tmpreg = READ_BIT(FIREWALL->CR, FW_CR_FPA) ;                 \
                  UNUSED(tmpreg);                                              \
                } while(0)
#define __HAL_FIREWALL_PREARM_ENABLE()                                         \
             do {                                                              \
                  __IO uint32_t tmpreg;                                        \
                  SET_BIT(FIREWALL->CR, FW_CR_FPA) ;                           \
                  /* Read bit back to ensure it is taken into account by IP */ \
                  /* (introduce proper delay inside macro execution) */        \
                  tmpreg = READ_BIT(FIREWALL->CR, FW_CR_FPA) ;                 \
                  UNUSED(tmpreg);                                              \
                } while(0)
#define __HAL_FIREWALL_VOLATILEDATA_EXECUTION_DISABLE()                           \
             do {                                                              \
                  __IO uint32_t tmpreg;                                        \
                  CLEAR_BIT(FIREWALL->CR, FW_CR_VDE) ;                         \
                  /* Read bit back to ensure it is taken into account by IP */ \
                  /* (introduce proper delay inside macro execution) */        \
                  tmpreg = READ_BIT(FIREWALL->CR, FW_CR_VDE) ;                 \
                  UNUSED(tmpreg);                                              \
                } while(0)   
#define __HAL_FIREWALL_VOLATILEDATA_EXECUTION_ENABLE()                         \
             do {                                                              \
                  __IO uint32_t tmpreg;                                        \
                  SET_BIT(FIREWALL->CR, FW_CR_VDE) ;                           \
                  /* Read bit back to ensure it is taken into account by IP */ \
                  /* (introduce proper delay inside macro execution) */        \
                  tmpreg = READ_BIT(FIREWALL->CR, FW_CR_VDE) ;                 \
                  UNUSED(tmpreg);                                              \
                } while(0)
#define __HAL_FIREWALL_VOLATILEDATA_SHARED_DISABLE()                           \
             do {                                                              \
                  __IO uint32_t tmpreg;                                        \
                  CLEAR_BIT(FIREWALL->CR, FW_CR_VDS) ;                         \
                  /* Read bit back to ensure it is taken into account by IP */ \
                  /* (introduce proper delay inside macro execution) */        \
                  tmpreg = READ_BIT(FIREWALL->CR, FW_CR_VDS) ;                 \
                  UNUSED(tmpreg);                                              \
                } while(0)
#define __HAL_FIREWALL_VOLATILEDATA_SHARED_ENABLE()                            \
             do {                                                              \
                  __IO uint32_t tmpreg;                                        \
                  SET_BIT(FIREWALL->CR, FW_CR_VDS) ;                           \
                  /* Read bit back to ensure it is taken into account by IP */ \
                  /* (introduce proper delay inside macro execution) */        \
                  tmpreg = READ_BIT(FIREWALL->CR, FW_CR_VDS) ;                 \
                  UNUSED(tmpreg);                                              \
                } while(0)
