  FunctionalState Activation; /*!< Output clock enable/disable */
  DFSDM_Channel_AwdTypeDef             Awd;             /*!< DFSDM channel analog watchdog parameters */
  uint32_t Channel;         /*!< Analog watchdog channel selection.
  uint32_t DataPacking; /*!< Standard, interleaved or dual mode for internal register.
  uint32_t DataSource;      /*!< Values from digital filter or from channel watchdog filter.
  uint32_t        Divider;    /*!< Output clock divider.
  FunctionalState DmaMode;        /*!< Enable/disable DMA for injected conversion */
  FunctionalState DmaMode;  /*!< Enable/disable DMA for regular conversion */
  uint32_t                      ErrorCode;           /*!< DFSDM filter error code */  
  uint32_t        ExtTrigger;     /*!< External trigger.
  uint32_t                      ExtTriggerEdge;      /*!< Rising, falling or both edges selected */
  uint32_t        ExtTriggerEdge; /*!< External trigger edge: rising, falling or both.
  FunctionalState FastMode; /*!< Enable/disable fast mode for regular conversion */
  uint32_t FilterOrder;  /*!< Analog watchdog Sinc filter order.
  DFSDM_Filter_FilterParamTypeDef   FilterParam;   /*!< DFSDM filter parameters */
  uint32_t HighBreakSignal; /*!< Break signal assigned to analog watchdog high threshold event.
  int32_t  HighThreshold;   /*!< High threshold for the analog watchdog.
  DFSDM_Channel_InitTypeDef      Init;      /*!< DFSDM channel init parameters */
  DFSDM_Filter_InitTypeDef      Init;                /*!< DFSDM filter init parameters */
  uint32_t                      InjConvRemaining;    /*!< Injected conversions remaining */
  uint32_t                      InjectedChannelsNbr; /*!< Number of channels in injected sequence */
  DFSDM_Filter_InjectedParamTypeDef InjectedParam; /*!< DFSDM injected conversion parameters */
  FunctionalState               InjectedScanMode;    /*!< Injected scanning mode */
  uint32_t                      InjectedTrigger;     /*!< Trigger used for injected conversion */
  DFSDM_Channel_InputTypeDef           Input;           /*!< DFSDM channel input parameters */
  DFSDM_Channel_TypeDef          *Instance; /*!< DFSDM channel instance */
  DFSDM_Filter_TypeDef          *Instance;           /*!< DFSDM filter instance */
  uint32_t IntOversampling; /*!< Integrator oversampling ratio.
  uint32_t LowBreakSignal;  /*!< Break signal assigned to analog watchdog low threshold event.
  int32_t  LowThreshold;    /*!< Low threshold for the analog watchdog.
  uint32_t Multiplexer; /*!< Input is external serial inputs, internal register or ADC output.
  int32_t                              Offset;          /*!< DFSDM channel offset.
  DFSDM_Channel_OutputClockTypeDef     OutputClock;     /*!< DFSDM channel output clock parameters */
  uint32_t Oversampling;    /*!< Filter oversampling ratio.
  uint32_t Oversampling; /*!< Analog watchdog filter oversampling ratio.
  uint32_t Pins;        /*!< Input pins are taken from same or following channel.
  uint32_t                      RegularContMode;     /*!< Regular conversion continuous mode */
  DFSDM_Filter_RegularParamTypeDef  RegularParam;  /*!< DFSDM regular conversion parameters */
  uint32_t                      RegularTrigger;      /*!< Trigger used for regular conversion */
  uint32_t                             RightBitShift;   /*!< DFSDM channel right bit shift.
  FunctionalState ScanMode;       /*!< Enable/disable scanning mode for injected conversion */
  uint32_t        Selection;  /*!< Output clock is system clock or audio clock.
  DFSDM_Channel_SerialInterfaceTypeDef SerialInterface; /*!< DFSDM channel serial interface parameters */
  uint32_t SincOrder;       /*!< Sinc filter order.
  uint32_t SpiClock; /*!< SPI clock select (external or internal with different sampling point).
  HAL_DFSDM_Channel_StateTypeDef State;     /*!< DFSDM channel state */
  HAL_DFSDM_Filter_StateTypeDef State;               /*!< DFSDM filter state */
  uint32_t        Trigger;        /*!< Trigger used to start injected conversion: software, external or synchronous.
  uint32_t        Trigger;  /*!< Trigger used to start regular conversion: software or synchronous.
  uint32_t Type;     /*!< SPI or Manchester modes.
  DMA_HandleTypeDef             *hdmaInj;            /*!< Pointer on DMA handler for injected conversions */
  DMA_HandleTypeDef             *hdmaReg;            /*!< Pointer on DMA handler for regular conversions */
