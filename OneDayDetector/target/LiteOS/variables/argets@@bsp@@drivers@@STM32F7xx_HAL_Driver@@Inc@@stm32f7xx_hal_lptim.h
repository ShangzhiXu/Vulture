  uint32_t ActiveEdge;    /*!< Selects the Trigger active edge.
  void  (* AutoReloadMatchCallback) (struct __LPTIM_HandleTypeDef *hlptim); /*!< LPTIM Auto Reload Match Callback */
  void  (* AutoReloadWriteCallback) (struct __LPTIM_HandleTypeDef *hlptim); /*!< LPTIM Auto Reload Write Callback */
  LPTIM_ClockConfigTypeDef     Clock;               /*!< Specifies the clock parameters */
  void  (* CompareMatchCallback)    (struct __LPTIM_HandleTypeDef *hlptim); /*!< LPTIM Compare Match Callback     */
  void  (* CompareWriteCallback)    (struct __LPTIM_HandleTypeDef *hlptim); /*!< LPTIM Compare Write Callback     */
  uint32_t                     CounterSource;       /*!< Specifies whether the counter is incremented each internal event
  void  (* DirectionDownCallback)   (struct __LPTIM_HandleTypeDef *hlptim); /*!< LPTIM Direction Down Callback    */
  void  (* DirectionUpCallback)     (struct __LPTIM_HandleTypeDef *hlptim); /*!< LPTIM Direction Up Callback      */
  LPTIM_InitTypeDef              Init;          /*!< LPTIM required parameters */
  LPTIM_TypeDef                 *Instance;      /*!< Register base address     */
  HAL_LockTypeDef                Lock;          /*!< LPTIM locking object      */
  void  (* MspDeInitCallback)       (struct __LPTIM_HandleTypeDef *hlptim); /*!< LPTIM Msp DeInit Callback        */
  void  (* MspInitCallback)         (struct __LPTIM_HandleTypeDef *hlptim); /*!< LPTIM Msp Init Callback          */
  uint32_t                     OutputPolarity;      /*!< Specifies the Output polarity.
  uint32_t Polarity;      /*!< Selects the polarity of the active edge for the counter unit
  uint32_t Prescaler;      /*!< Specifies the counter clock Prescaler.
  uint32_t SampleTime;     /*!< Selects the clock sampling time to configure the clock glitch filter.
  uint32_t SampleTime;    /*!< Selects the trigger sampling time to configure the clock glitch filter.
  uint32_t Source;         /*!< Selects the clock source.
  uint32_t Source;        /*!< Selects the Trigger source.
  __IO  HAL_LPTIM_StateTypeDef   State;         /*!< LPTIM peripheral state    */
  HAL_StatusTypeDef              Status;        /*!< LPTIM peripheral status   */
  LPTIM_TriggerConfigTypeDef   Trigger;             /*!< Specifies the Trigger parameters */
  void  (* TriggerCallback)         (struct __LPTIM_HandleTypeDef *hlptim); /*!< LPTIM Trigger Callback           */
  LPTIM_ULPClockConfigTypeDef  UltraLowPowerClock;  /*!< Specifies the Ultra Low Power clock parameters */
  uint32_t                     UpdateMode;          /*!< Specifies whether the update of the autorelaod and the compare
