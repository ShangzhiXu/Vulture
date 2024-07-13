  uint32_t Counter;    /*!< Specifies the WWDG free-running downcounter value.
  WWDG_InitTypeDef             Init;       /*!< WWDG required parameters */
  WWDG_TypeDef                 *Instance;  /*!< Register base address    */
  HAL_LockTypeDef              Lock;       /*!< WWDG locking object      */
  uint32_t Prescaler;  /*!< Specifies the prescaler value of the WWDG.
  __IO HAL_WWDG_StateTypeDef   State;      /*!< WWDG communication state */
  uint32_t Window;     /*!< Specifies the WWDG window value to be compared to the downcounter.
