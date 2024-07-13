  void (* AbortCpltCallback)(struct __I2C_HandleTypeDef *hi2c);              /*!< I2C Abort callback                        */
  void (* AddrCallback)(struct __I2C_HandleTypeDef *hi2c, uint8_t TransferDirection, uint16_t AddrMatchCode);  /*!< I2C Slave Address Match callback */
  uint32_t AddressingMode;   /*!< Specifies if 7-bit or 10-bit addressing mode is selected.
  uint32_t ClockSpeed;       /*!< Specifies the clock frequency.
  __IO uint32_t              Devaddress;     /*!< I2C Target device address                */
  uint32_t DualAddressMode;  /*!< Specifies if dual addressing mode is selected.
  uint32_t DutyCycle;        /*!< Specifies the I2C fast mode duty cycle.
  void (* ErrorCallback)(struct __I2C_HandleTypeDef *hi2c);                  /*!< I2C Error callback                        */
  __IO uint32_t              ErrorCode;      /*!< I2C Error code                           */
  __IO uint32_t              EventCount;     /*!< I2C Event counter                        */
  uint32_t GeneralCallMode;  /*!< Specifies if general call mode is selected.
  I2C_InitTypeDef            Init;           /*!< I2C communication parameters             */
  I2C_TypeDef                *Instance;      /*!< I2C registers base address               */
  void (* ListenCpltCallback)(struct __I2C_HandleTypeDef *hi2c);             /*!< I2C Listen Complete callback              */
  HAL_LockTypeDef            Lock;           /*!< I2C locking object                       */
  void (* MasterRxCpltCallback)(struct __I2C_HandleTypeDef *hi2c);           /*!< I2C Master Rx Transfer completed callback */
  void (* MasterTxCpltCallback)(struct __I2C_HandleTypeDef *hi2c);           /*!< I2C Master Tx Transfer completed callback */
  void (* MemRxCpltCallback)(struct __I2C_HandleTypeDef *hi2c);              /*!< I2C Memory Rx Transfer completed callback */
  void (* MemTxCpltCallback)(struct __I2C_HandleTypeDef *hi2c);              /*!< I2C Memory Tx Transfer completed callback */
  __IO uint32_t              MemaddSize;     /*!< I2C Target memory address  size          */
  __IO uint32_t              Memaddress;     /*!< I2C Target memory address                */
  __IO HAL_I2C_ModeTypeDef   Mode;           /*!< I2C communication mode                   */
  void (* MspDeInitCallback)(struct __I2C_HandleTypeDef *hi2c);              /*!< I2C Msp DeInit callback                   */
  void (* MspInitCallback)(struct __I2C_HandleTypeDef *hi2c);                /*!< I2C Msp Init callback                     */
  uint32_t NoStretchMode;    /*!< Specifies if nostretch mode is selected.
  uint32_t OwnAddress1;      /*!< Specifies the first device own address.
  uint32_t OwnAddress2;      /*!< Specifies the second device own address if dual addressing mode is selected
  __IO uint32_t              PreviousState;  /*!< I2C communication Previous state and mode
  void (* SlaveRxCpltCallback)(struct __I2C_HandleTypeDef *hi2c);            /*!< I2C Slave Rx Transfer completed callback  */
  void (* SlaveTxCpltCallback)(struct __I2C_HandleTypeDef *hi2c);            /*!< I2C Slave Tx Transfer completed callback  */
  __IO HAL_I2C_StateTypeDef  State;          /*!< I2C communication state                  */
  __IO uint16_t              XferCount;      /*!< I2C transfer counter                     */
  __IO uint32_t              XferOptions;    /*!< I2C transfer options                     */
  uint16_t                   XferSize;       /*!< I2C transfer size                        */
  DMA_HandleTypeDef          *hdmarx;        /*!< I2C Rx DMA handle parameters             */
  DMA_HandleTypeDef          *hdmatx;        /*!< I2C Tx DMA handle parameters             */
  uint8_t                    *pBuffPtr;      /*!< Pointer to I2C transfer buffer           */
