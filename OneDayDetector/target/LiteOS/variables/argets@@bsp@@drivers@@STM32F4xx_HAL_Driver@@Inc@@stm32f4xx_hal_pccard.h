  FMC_PCCARD_InitTypeDef       Init;                   /*!< PCCARD device control configuration parameters   */
  FMC_PCCARD_TypeDef           *Instance;              /*!< Register base address for PCCARD device          */
  void  (* ItCallback)             ( struct __PCCARD_HandleTypeDef * hpccard);    /*!< PCCARD IT callback                    */
  HAL_LockTypeDef              Lock;                   /*!< PCCARD Lock                                      */
  void  (* MspDeInitCallback)      ( struct __PCCARD_HandleTypeDef * hpccard);    /*!< PCCARD Msp DeInit callback            */
  void  (* MspInitCallback)        ( struct __PCCARD_HandleTypeDef * hpccard);    /*!< PCCARD Msp Init callback              */
  __IO HAL_PCCARD_StateTypeDef State;                  /*!< PCCARD device access state                       */
