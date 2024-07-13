  __IO uint32_t      ErrorCode;                                   /*!< COMP Error code */
  uint32_t Hysteresis;         /*!< Selects the hysteresis voltage of the comparator.
  COMP_InitTypeDef            Init;                               /*!< COMP required parameters */
  COMP_TypeDef                *Instance;                          /*!< Register base address    */
  uint32_t InvertingInput;     /*!< Selects the inverting input of the comparator.
  HAL_LockTypeDef             Lock;                               /*!< Locking object           */
  uint32_t Mode;               /*!< Selects the operating comsumption mode of the comparator
  void (* MspDeInitCallback)(struct __COMP_HandleTypeDef *hcomp); /*!< COMP Msp DeInit callback */
  void (* MspInitCallback)(struct __COMP_HandleTypeDef *hcomp);   /*!< COMP Msp Init callback */
  uint32_t NonInvertingInput;  /*!< Selects the non inverting input of the comparator.
  uint32_t Output;             /*!< Selects the output redirection of the comparator.
  uint32_t OutputPol;          /*!< Selects the output polarity of the comparator.
  __IO uint32_t               State;                              /*!< COMP communication state 
  void (* TriggerCallback)(struct __COMP_HandleTypeDef *hcomp);   /*!< COMP trigger callback */
  uint32_t TriggerMode;        /*!< Selects the trigger mode of the comparator (interrupt mode).
  uint32_t WindowMode;         /*!< Selects the window mode of the comparator 1 & 2.
