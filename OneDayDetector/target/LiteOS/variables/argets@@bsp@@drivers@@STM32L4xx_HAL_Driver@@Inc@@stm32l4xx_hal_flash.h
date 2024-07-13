  __IO uint32_t               Address;           /* Internal variable to save address selected for program in IT context */
  __IO uint32_t               Bank;              /* Internal variable to save current bank selected during erase in IT context */
  uint32_t Banks;       /*!< Select bank to erase.
  __IO FLASH_CacheTypeDef     CacheToReactivate; /* Internal variable to indicate which caches should be reactivated */
  __IO uint32_t               ErrorCode;         /* FLASH error code */
  HAL_LockTypeDef             Lock;              /* FLASH locking object */
  uint32_t NbPages;     /*!< Number of pages to be erased.
  __IO uint32_t               NbPagesToErase;    /* Internal variable to save the remaining pages to erase in IT context */
  uint32_t OptionType;     /*!< Option byte to be configured.
  uint32_t PCROPConfig;    /*!< Configuration of the PCROP (used for OPTIONBYTE_PCROP).
  uint32_t PCROPEndAddr;   /*!< PCROP End address (used for OPTIONBYTE_PCROP).
  uint32_t PCROPStartAddr; /*!< PCROP Start address (used for OPTIONBYTE_PCROP).
  __IO uint32_t               Page;              /* Internal variable to define the current page which is erasing in IT context */
  uint32_t Page;        /*!< Initial Flash page to erase when page erase is disabled
  __IO FLASH_ProcedureTypeDef ProcedureOnGoing;  /* Internal variable to indicate which procedure is ongoing or not in IT context */
  uint32_t RDPLevel;       /*!< Set the read protection level.. (used for OPTIONBYTE_RDP).
  uint32_t TypeErase;   /*!< Mass erase or page erase.
  uint32_t USERConfig;     /*!< Value of the user option byte (used for OPTIONBYTE_USER).
  uint32_t USERType;       /*!< User option byte(s) to be configured (used for OPTIONBYTE_USER).
  uint32_t WRPArea;        /*!< Write protection area to be programmed (used for OPTIONBYTE_WRP).
  uint32_t WRPEndOffset;   /*!< Write protection end offset (used for OPTIONBYTE_WRP).
  uint32_t WRPStartOffset; /*!< Write protection start offset (used for OPTIONBYTE_WRP).
