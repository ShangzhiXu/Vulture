  void    (* ErrorCallback)      ( struct __MDIOS_HandleTypeDef * hmdios);  /*!< MDIOS Error Callback          */
  MDIOS_InitTypeDef            Init;          /*!< MDIOS Init Structure        */
  MDIOS_TypeDef                *Instance;     /*!< Register base address       */
  HAL_LockTypeDef              Lock;          /*!< MDIOS Lock                  */
  void    (* MspDeInitCallback)  ( struct __MDIOS_HandleTypeDef * hmdios);  /*!< MDIOS Msp DeInit callback     */
  void    (* MspInitCallback)    ( struct __MDIOS_HandleTypeDef * hmdios);  /*!< MDIOS Msp Init callback       */
  uint32_t PortAddress;           /*!< Specifies the MDIOS port address.   
  uint32_t PreambleCheck;         /*!< Specifies whether the preamble check is enabled or disabled.   
  void    (* ReadCpltCallback)   ( struct __MDIOS_HandleTypeDef * hmdios);  /*!< MDIOS Read  Complete Callback */
  __IO HAL_MDIOS_StateTypeDef  State;         /*!< MDIOS communication state   */
  void    (* WakeUpCallback)     ( struct __MDIOS_HandleTypeDef * hmdios);  /*!< MDIOS Wake UP Callback        */
  void    (* WriteCpltCallback)  ( struct __MDIOS_HandleTypeDef * hmdios);  /*!< MDIOS Write Complete Callback */
