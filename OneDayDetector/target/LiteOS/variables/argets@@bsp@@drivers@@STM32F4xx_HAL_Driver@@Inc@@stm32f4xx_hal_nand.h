  uint16_t Block;  /*!< NAND memory Block address   */
  uint32_t        BlockNbr;              /*!< NAND memory number of total blocks                               */
  uint32_t        BlockSize;             /*!< NAND memory block size measured in number of pages               */
  NAND_DeviceConfigTypeDef       Config;     /*!< NAND phusical characteristic information structure    */
  uint8_t Device_Id;
  FunctionalState ExtraCommandEnable;    /*!< NAND extra command needed for Page reading mode. This 
  uint8_t Fourth_Id;
  FMC_NAND_InitTypeDef           Init;       /*!< NAND device control configuration parameters          */
  FMC_NAND_TypeDef               *Instance;  /*!< Register base address                                 */
  void  (* ItCallback)             ( struct __NAND_HandleTypeDef * hnand);    /*!< NAND IT callback                    */
  HAL_LockTypeDef                Lock;       /*!< NAND locking object                                   */
  uint8_t Maker_Id; 
  void  (* MspDeInitCallback)      ( struct __NAND_HandleTypeDef * hnand);    /*!< NAND Msp DeInit callback            */
  void  (* MspInitCallback)        ( struct __NAND_HandleTypeDef * hnand);    /*!< NAND Msp Init callback              */
  uint16_t Page;   /*!< NAND memory Page address    */
  uint32_t        PageSize;              /*!< NAND memory page (without spare area) size measured in bytes 
  uint16_t Plane;   /*!< NAND memory Plane address  */
  uint32_t        PlaneNbr;              /*!< NAND memory number of planes                                     */
  uint32_t        PlaneSize;             /*!< NAND memory plane size measured in number of blocks               */
  uint32_t        SpareAreaSize;         /*!< NAND memory spare area size measured in bytes 
  __IO HAL_NAND_StateTypeDef     State;      /*!< NAND device access state                              */
  uint8_t Third_Id;
