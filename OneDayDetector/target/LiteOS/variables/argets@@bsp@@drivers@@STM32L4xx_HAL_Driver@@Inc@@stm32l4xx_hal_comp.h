  uint32_t BlankingSrce;       /*!< Set comparator blanking source.
  uint32_t Hysteresis;         /*!< Set comparator hysteresis mode of the input minus.
  COMP_InitTypeDef   Init;            /*!< COMP required parameters */
  COMP_TypeDef       *Instance;       /*!< Register base address    */
  uint32_t InvertingInput;     /*!< Set comparator input minus (inverting input).
  HAL_LockTypeDef    Lock;            /*!< Locking object           */
  uint32_t Mode;               /*!< Set comparator operating mode to adjust power and speed.
  uint32_t NonInvertingInput;  /*!< Set comparator input plus (non-inverting input).
  uint32_t OutputPol;          /*!< Set comparator output polarity.
  __IO HAL_COMP_StateTypeDef  State;  /*!< COMP communication state */
  uint32_t TriggerMode;        /*!< Set the comparator output triggering External Interrupt Line (EXTI).
  uint32_t WindowMode;         /*!< Set window mode of a pair of comparators instances
