  uint16_t Block;  /*!< NAND memory Block address */
  uint32_t BlockNbr;       /*!< NAND memory number of blocks                                    */
  uint32_t BlockSize;      /*!< NAND memory block size number of pages                          */
  uint8_t Device_Id;
  uint8_t Fourth_Id;
  NAND_InfoTypeDef             Info;       /*!< NAND characteristic information structure    */
  FMC_NAND_InitTypeDef         Init;       /*!< NAND device control configuration parameters */
  FMC_NAND_TypeDef             *Instance;  /*!< Register base address                        */
  HAL_LockTypeDef              Lock;       /*!< NAND locking object                          */
  uint8_t Maker_Id; 
  uint16_t Page;   /*!< NAND memory Page address  */
  uint32_t PageSize;       /*!< NAND memory page (without spare area) size measured in K. bytes */
  uint32_t SpareAreaSize;  /*!< NAND memory spare area size measured in K. bytes                */
  __IO HAL_NAND_StateTypeDef   State;      /*!< NAND device access state                     */
  uint8_t Third_Id;
  uint16_t Zone;   /*!< NAND memory Zone address  */
  uint32_t ZoneSize;       /*!< NAND memory zone size measured in number of blocks              */
