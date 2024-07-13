  uint32_t                    ClockErrorDetection; /*!< Clock error detection */
  RNG_InitTypeDef             Init;       /*!< RNG configuration parameters */
  RNG_TypeDef                 *Instance;  /*!< Register base address        */
  HAL_LockTypeDef             Lock;       /*!< RNG locking object           */
  uint32_t               RandomNumber;    /*!< Last Generated RNG Data */
  __IO HAL_RNG_StateTypeDef   State;      /*!< RNG communication state      */
