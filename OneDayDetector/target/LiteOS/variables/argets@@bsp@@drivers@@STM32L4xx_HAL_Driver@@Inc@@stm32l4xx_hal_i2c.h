  __IO uint32_t              AddrEventCount; /*!< I2C Address Event counter                 */
  uint32_t AddressingMode;      /*!< Specifies if 7-bit or 10-bit addressing mode is selected.
  uint32_t DualAddressMode;     /*!< Specifies if dual addressing mode is selected.
  __IO uint32_t              ErrorCode;      /*!< I2C Error code                            */
  uint32_t GeneralCallMode;     /*!< Specifies if general call mode is selected.
  I2C_InitTypeDef            Init;           /*!< I2C communication parameters              */
  I2C_TypeDef                *Instance;      /*!< I2C registers base address                */
  HAL_LockTypeDef            Lock;           /*!< I2C locking object                        */
  __IO HAL_I2C_ModeTypeDef   Mode;           /*!< I2C communication mode                    */
  uint32_t NoStretchMode;       /*!< Specifies if nostretch mode is selected.
  uint32_t OwnAddress1;         /*!< Specifies the first device own address.
  uint32_t OwnAddress2;         /*!< Specifies the second device own address if dual addressing mode is selected
  uint32_t OwnAddress2Masks;    /*!< Specifies the acknowledge mask address second device own address if dual addressing mode is selected
  __IO uint32_t              PreviousState;  /*!< I2C communication Previous state          */
  __IO HAL_I2C_StateTypeDef  State;          /*!< I2C communication state                   */
  uint32_t Timing;              /*!< Specifies the I2C_TIMINGR_register value.
  __IO uint16_t              XferCount;      /*!< I2C transfer counter                      */
  HAL_StatusTypeDef(*XferISR)(struct __I2C_HandleTypeDef *hi2c, uint32_t ITFlags, uint32_t ITSources);  /*!< I2C transfer IRQ handler function pointer */
  __IO uint32_t              XferOptions;    /*!< I2C sequantial transfer options, this parameter can
  uint16_t                   XferSize;       /*!< I2C transfer size                         */
  DMA_HandleTypeDef          *hdmarx;        /*!< I2C Rx DMA handle parameters              */
  DMA_HandleTypeDef          *hdmatx;        /*!< I2C Tx DMA handle parameters              */
  uint8_t                    *pBuffPtr;      /*!< Pointer to I2C transfer buffer            */
