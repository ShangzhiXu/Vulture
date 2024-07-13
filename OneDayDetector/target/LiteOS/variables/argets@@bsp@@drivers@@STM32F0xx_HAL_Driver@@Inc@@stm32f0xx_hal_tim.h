  uint32_t AutoReloadPreload;  /*!< Specifies the auto-reload preload.
  uint32_t AutomaticOutput;      /*!< TIM Automatic Output Enable state
  void (* Base_MspDeInitCallback)(struct __TIM_HandleTypeDef *htim);            /*!< TIM Base Msp DeInit Callback                            */
  void (* Base_MspInitCallback)(struct __TIM_HandleTypeDef *htim);              /*!< TIM Base Msp Init Callback                              */
  void (* BreakCallback)(struct __TIM_HandleTypeDef *htim);                     /*!< TIM Break Callback                                      */
  uint32_t BreakFilter;          /*!< Specifies the break input filter.
  uint32_t BreakPolarity;        /*!< TIM Break input polarity
  uint32_t BreakState;           /*!< TIM Break State
  HAL_TIM_ActiveChannel       Channel;       /*!< Active channel                    */
  uint32_t ClearInputFilter;     /*!< TIM Clear Input filter
  uint32_t ClearInputPolarity;   /*!< TIM Clear Input polarity
  uint32_t ClearInputPrescaler;  /*!< TIM Clear Input prescaler
  uint32_t ClearInputSource;     /*!< TIM clear Input sources
  uint32_t ClearInputState;      /*!< TIM clear Input state
  uint32_t ClockDivision;     /*!< Specifies the clock division.
  uint32_t ClockFilter;     /*!< TIM clock filter
  uint32_t ClockPolarity;   /*!< TIM clock polarity
  uint32_t ClockPrescaler;  /*!< TIM clock prescaler
  uint32_t ClockSource;     /*!< TIM clock sources
  void (* CommutationCallback)(struct __TIM_HandleTypeDef *htim);               /*!< TIM Commutation Callback                                */
  void (* CommutationHalfCpltCallback)(struct __TIM_HandleTypeDef *htim);       /*!< TIM Commutation half complete Callback                  */
  uint32_t CounterMode;       /*!< Specifies the counter mode.
  uint32_t DeadTime;             /*!< TIM dead Time
  uint32_t EncoderMode;   /*!< Specifies the active edge of the input signal.
  void (* Encoder_MspDeInitCallback)(struct __TIM_HandleTypeDef *htim);         /*!< TIM Encoder Msp DeInit Callback                         */
  void (* Encoder_MspInitCallback)(struct __TIM_HandleTypeDef *htim);           /*!< TIM Encoder Msp Init Callback                           */
  void (* ErrorCallback)(struct __TIM_HandleTypeDef *htim);                     /*!< TIM Error Callback                                      */
  void (* HallSensor_MspDeInitCallback)(struct __TIM_HandleTypeDef *htim);      /*!< TIM Hall Sensor Msp DeInit Callback                     */
  void (* HallSensor_MspInitCallback)(struct __TIM_HandleTypeDef *htim);        /*!< TIM Hall Sensor Msp Init Callback                       */
  uint32_t IC1Filter;     /*!< Specifies the input capture filter.
  uint32_t IC1Polarity;   /*!< Specifies the active edge of the input signal.
  uint32_t IC1Prescaler;  /*!< Specifies the Input Capture Prescaler.
  uint32_t IC1Selection;  /*!< Specifies the input.
  uint32_t IC2Filter;     /*!< Specifies the input capture filter.
  uint32_t IC2Polarity;   /*!< Specifies the active edge of the input signal.
  uint32_t IC2Prescaler;  /*!< Specifies the Input Capture Prescaler.
  uint32_t IC2Selection;  /*!< Specifies the input.
  uint32_t ICFilter;      /*!< Specifies the input capture filter.
  uint32_t ICFilter;     /*!< Specifies the input capture filter.
  uint32_t  ICPolarity;  /*!< Specifies the active edge of the input signal.
  uint32_t ICPolarity;    /*!< Specifies the active edge of the input signal.
  uint32_t ICPrescaler;  /*!< Specifies the Input Capture Prescaler.
  uint32_t ICSelection;   /*!< Specifies the input.
  uint32_t ICSelection;  /*!< Specifies the input.
  void (* IC_CaptureCallback)(struct __TIM_HandleTypeDef *htim);                /*!< TIM Input Capture Callback                              */
  void (* IC_CaptureHalfCpltCallback)(struct __TIM_HandleTypeDef *htim);        /*!< TIM Input Capture half complete Callback                */
  void (* IC_MspDeInitCallback)(struct __TIM_HandleTypeDef *htim);              /*!< TIM IC Msp DeInit Callback                              */
  void (* IC_MspInitCallback)(struct __TIM_HandleTypeDef *htim);                /*!< TIM IC Msp Init Callback                                */
  TIM_Base_InitTypeDef        Init;          /*!< TIM Time Base required parameters */
  uint32_t  InputTrigger;      /*!< Input Trigger source
  TIM_TypeDef                 *Instance;     /*!< Register base address             */
  HAL_LockTypeDef             Lock;          /*!< Locking object                    */
  uint32_t LockLevel;            /*!< TIM Lock level
  uint32_t  MasterOutputTrigger;   /*!< Trigger output (TRGO) selection
  uint32_t  MasterSlaveMode;       /*!< Master/slave mode selection
  uint32_t OCFastMode;    /*!< Specifies the Fast mode state.
  uint32_t OCIdleState;   /*!< Specifies the TIM Output Compare pin state during Idle state.
  uint32_t OCIdleState;   /*!< Specifies the TIM Output Compare pin state during Idle state.
  uint32_t OCMode;        /*!< Specifies the TIM mode.
  uint32_t OCMode;        /*!< Specifies the TIM mode.
  uint32_t OCNIdleState;  /*!< Specifies the TIM Output Compare pin state during Idle state.
  uint32_t OCNIdleState;  /*!< Specifies the TIM Output Compare pin state during Idle state.
  uint32_t OCNPolarity;   /*!< Specifies the complementary output polarity.
  uint32_t OCNPolarity;   /*!< Specifies the complementary output polarity.
  uint32_t OCPolarity;    /*!< Specifies the output polarity.
  uint32_t OCPolarity;    /*!< Specifies the output polarity.
  void (* OC_DelayElapsedCallback)(struct __TIM_HandleTypeDef *htim);           /*!< TIM Output Compare Delay Elapsed Callback               */
  void (* OC_MspDeInitCallback)(struct __TIM_HandleTypeDef *htim);              /*!< TIM OC Msp DeInit Callback                              */
  void (* OC_MspInitCallback)(struct __TIM_HandleTypeDef *htim);                /*!< TIM OC Msp Init Callback                                */
  uint32_t OffStateIDLEMode;     /*!< TIM off state in IDLE mode
  uint32_t OffStateRunMode;      /*!< TIM off state in run mode
  void (* OnePulse_MspDeInitCallback)(struct __TIM_HandleTypeDef *htim);        /*!< TIM One Pulse Msp DeInit Callback                       */
  void (* OnePulse_MspInitCallback)(struct __TIM_HandleTypeDef *htim);          /*!< TIM One Pulse Msp Init Callback                         */
  void (* PWM_MspDeInitCallback)(struct __TIM_HandleTypeDef *htim);             /*!< TIM PWM Msp DeInit Callback                             */
  void (* PWM_MspInitCallback)(struct __TIM_HandleTypeDef *htim);               /*!< TIM PWM Msp Init Callback                               */
  void (* PWM_PulseFinishedCallback)(struct __TIM_HandleTypeDef *htim);         /*!< TIM PWM Pulse Finished Callback                         */
  void (* PWM_PulseFinishedHalfCpltCallback)(struct __TIM_HandleTypeDef *htim); /*!< TIM PWM Pulse Finished half complete Callback           */
  uint32_t Period;            /*!< Specifies the period value to be loaded into the active
  void (* PeriodElapsedCallback)(struct __TIM_HandleTypeDef *htim);             /*!< TIM Period Elapsed Callback                             */
  void (* PeriodElapsedHalfCpltCallback)(struct __TIM_HandleTypeDef *htim);     /*!< TIM Period Elapsed half complete Callback               */
  uint32_t Prescaler;         /*!< Specifies the prescaler value used to divide the TIM clock.
  uint32_t Pulse;         /*!< Specifies the pulse value to be loaded into the Capture Compare Register.
  uint32_t Pulse;         /*!< Specifies the pulse value to be loaded into the Capture Compare Register.
  uint32_t RepetitionCounter;  /*!< Specifies the repetition counter value. Each time the RCR downcounter
  uint32_t  SlaveMode;         /*!< Slave mode selection
  __IO HAL_TIM_StateTypeDef   State;         /*!< TIM operation state               */
  void (* TriggerCallback)(struct __TIM_HandleTypeDef *htim);                   /*!< TIM Trigger Callback                                    */
  uint32_t  TriggerFilter;     /*!< Input trigger filter
  void (* TriggerHalfCpltCallback)(struct __TIM_HandleTypeDef *htim);           /*!< TIM Trigger half complete Callback                      */
  uint32_t  TriggerPolarity;   /*!< Input Trigger polarity
  uint32_t  TriggerPrescaler;  /*!< Input trigger prescaler
  DMA_HandleTypeDef           *hdma[7];      /*!< DMA Handlers array
