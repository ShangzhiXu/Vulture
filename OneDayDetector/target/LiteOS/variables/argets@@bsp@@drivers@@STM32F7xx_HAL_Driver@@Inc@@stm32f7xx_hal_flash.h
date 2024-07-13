  __IO uint32_t               Address;            /* Internal variable to save address selected for program                        */
  __IO uint32_t               ErrorCode;          /* FLASH error code                                                              */
  HAL_LockTypeDef             Lock;               /* FLASH locking object                                                          */
  __IO uint32_t               NbSectorsToErase;   /* Internal variable to save the remaining sectors to erase in IT context        */
  __IO FLASH_ProcedureTypeDef ProcedureOnGoing;   /* Internal variable to indicate which procedure is ongoing or not in IT context */
  __IO uint32_t               Sector;             /* Internal variable to define the current sector which is erasing               */
  __IO uint8_t                VoltageForErase;    /* Internal variable to provide voltage range selected by user in IT context     */
