  void (* ErrorCallback)(struct __RNG_HandleTypeDef *hrng);                            /*!< RNG Error Callback         */
  __IO  uint32_t              ErrorCode;     /*!< RNG Error code               */
  RNG_TypeDef                 *Instance;    /*!< Register base address   */
  HAL_LockTypeDef             Lock;         /*!< RNG locking object      */
  void (* MspDeInitCallback)(struct __RNG_HandleTypeDef *hrng);                        /*!< RNG Msp DeInit callback    */
  void (* MspInitCallback)(struct __RNG_HandleTypeDef *hrng);                          /*!< RNG Msp Init callback      */
  uint32_t                    RandomNumber; /*!< Last Generated RNG Data */
  void (* ReadyDataCallback)(struct __RNG_HandleTypeDef *hrng, uint32_t random32bit);  /*!< RNG Data Ready Callback    */
  __IO HAL_RNG_StateTypeDef   State;        /*!< RNG communication state */
