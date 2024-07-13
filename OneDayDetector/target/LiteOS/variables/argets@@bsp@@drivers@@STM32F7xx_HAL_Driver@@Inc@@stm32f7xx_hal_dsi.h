  uint32_t AcknowledgeRequest;           /*!< Acknowledge Request Enable
  uint32_t AutomaticClockLaneControl;    /*!< Automatic clock lane control
  uint32_t AutomaticRefresh;             /*!< Automatic refresh mode
  uint32_t BTATimeout;                   /*!< BTA time-out                                             */
  uint32_t ClockLaneHS2LPTime;           /*!< The maximum time that the D-PHY clock lane takes to go from high-speed
  uint32_t ClockLaneLP2HSTime;           /*!< The maximum time that the D-PHY clock lane takes to go from low-power
  uint32_t ColorCoding;                  /*!< Color coding for LTDC interface
  uint32_t ColorCoding;                  /*!< Color coding for LTDC interface
  uint32_t CommandSize;                  /*!< Maximum allowed size for an LTDC write memory command, measured in
  uint32_t DEPolarity;                   /*!< Data Enable pin polarity
  uint32_t DEPolarity;                   /*!< Data Enable pin polarity
  uint32_t DataLaneHS2LPTime;            /*!< The maximum time that the D-PHY data lanes takes to go from high-speed
  uint32_t DataLaneLP2HSTime;            /*!< The maximum time that the D-PHY data lanes takes to go from low-power
  uint32_t DataLaneMaxReadTime;          /*!< The maximum time required to perform a read command */
  void (* EndOfRefreshCallback)(struct __DSI_HandleTypeDef *hdsi);    /*!< DSI End Of Refresh Callback */
  void (* ErrorCallback)(struct __DSI_HandleTypeDef *hdsi);           /*!< DSI Error Callback          */
  __IO uint32_t             ErrorCode;    /*!< DSI Error code             */
  uint32_t                  ErrorMsk;     /*!< DSI Error monitoring mask  */
  uint32_t FrameBTAAcknowledgeEnable;    /*!< Frame bus-turn-around acknowledge enable
  uint32_t HSPolarity;                   /*!< HSYNC pin polarity
  uint32_t HSPolarity;                   /*!< HSYNC pin polarity
  uint32_t HighSpeedReadTimeout;         /*!< High-speed read time-out                                 */
  uint32_t HighSpeedTransmissionTimeout; /*!< High-speed transmission time-out                         */
  uint32_t HighSpeedWritePrespMode;      /*!< High-speed write presp mode
  uint32_t HighSpeedWriteTimeout;        /*!< High-speed write time-out                                */
  uint32_t HorizontalBackPorch;          /*!< Horizontal back-porch duration (in lane byte clock cycles)         */
  uint32_t HorizontalLine;               /*!< Horizontal line duration (in lane byte clock cycles)               */
  uint32_t HorizontalSyncActive;         /*!< Horizontal synchronism active duration (in lane byte clock cycles) */
  DSI_InitTypeDef           Init;         /*!< DSI required parameters    */
  DSI_TypeDef               *Instance;    /*!< Register base address      */
  uint32_t LPCommandEnable;              /*!< Low-power command enable
  uint32_t LPDcsLongWrite;               /*!< DCS Long Write Transmission
  uint32_t LPDcsShortReadNoP;            /*!< DCS Short Read Zero parameters Transmission
  uint32_t LPDcsShortWriteNoP;           /*!< DCS Short Write Zero parameters Transmission
  uint32_t LPDcsShortWriteOneP;          /*!< DCS Short Write One parameter Transmission
  uint32_t LPGenLongWrite;               /*!< Generic Long Write Transmission
  uint32_t LPGenShortReadNoP;            /*!< Generic Short Read Zero parameters Transmission
  uint32_t LPGenShortReadOneP;           /*!< Generic Short Read One parameter Transmission
  uint32_t LPGenShortReadTwoP;           /*!< Generic Short Read Two parameters Transmission
  uint32_t LPGenShortWriteNoP;           /*!< Generic Short Write Zero parameters Transmission
  uint32_t LPGenShortWriteOneP;          /*!< Generic Short Write One parameter Transmission
  uint32_t LPGenShortWriteTwoP;          /*!< Generic Short Write Two parameters Transmission
  uint32_t LPHorizontalBackPorchEnable;  /*!< Low-power horizontal back-porch enable
  uint32_t LPHorizontalFrontPorchEnable; /*!< Low-power horizontal front-porch enable
  uint32_t LPLargestPacketSize;          /*!< The size, in bytes, of the low power largest packet that
  uint32_t LPMaxReadPacket;              /*!< Maximum Read Packet Size Transmission
  uint32_t LPVACTLargestPacketSize;      /*!< The size, in bytes, of the low power largest packet that
  uint32_t LPVerticalActiveEnable;       /*!< Low-power vertical active enable
  uint32_t LPVerticalBackPorchEnable;    /*!< Low-power vertical back-porch enable
  uint32_t LPVerticalFrontPorchEnable;   /*!< Low-power vertical front-porch enable
  uint32_t LPVerticalSyncActiveEnable;   /*!< Low-power vertical sync active enable
  HAL_LockTypeDef           Lock;         /*!< DSI peripheral status      */
  uint32_t LooselyPacked;                /*!< Enable or disable loosely packed stream (needed only when using
  uint32_t LowPowerReadTimeout;          /*!< Low-power read time-out                                  */
  uint32_t LowPowerReceptionTimeout;     /*!< Low-power reception time-out                             */
  uint32_t LowPowerWriteTimeout;         /*!< Low-speed write time-out                                 */
  uint32_t Mode;                         /*!< Video mode type
  void (* MspDeInitCallback)(struct __DSI_HandleTypeDef *hdsi);       /*!< DSI Msp DeInit callback     */
  void (* MspInitCallback)(struct __DSI_HandleTypeDef *hdsi);         /*!< DSI Msp Init callback       */
  uint32_t NullPacketSize;               /*!< Null packet size                                                   */
  uint32_t NumberOfChunks;               /*!< Number of chunks                                                   */
  uint32_t NumberOfLanes;                /*!< Number of lanes
  uint32_t PLLIDF;                       /*!< PLL Input Division Factor
  uint32_t PLLNDIV;                      /*!< PLL Loop Division Factor
  uint32_t PLLODF;                       /*!< PLL Output Division Factor
  uint32_t PacketSize;                   /*!< Video packet size                                                  */
  __IO HAL_DSI_StateTypeDef State;        /*!< DSI communication state    */
  uint32_t StopWaitTime;                 /*!< The minimum wait period to request a High-Speed transmission after the
  uint32_t TEAcknowledgeRequest;         /*!< Tearing Effect Acknowledge Request Enable
  uint32_t TXEscapeCkdiv;                /*!< TX Escape clock division
  void (* TearingEffectCallback)(struct __DSI_HandleTypeDef *hdsi);   /*!< DSI Tearing Effect Callback */
  uint32_t TearingEffectPolarity;        /*!< Tearing effect pin polarity
  uint32_t TearingEffectSource;          /*!< Tearing effect source
  uint32_t TimeoutCkdiv;                 /*!< Time-out clock division                                  */
  uint32_t VSPolarity;                   /*!< VSYNC pin polarity
  uint32_t VSPolarity;                   /*!< VSYNC pin polarity
  uint32_t VSyncPol;                     /*!< VSync edge on which the LTDC is halted
  uint32_t VerticalActive;               /*!< Vertical active duration                                           */
  uint32_t VerticalBackPorch;            /*!< Vertical back-porch duration                                       */
  uint32_t VerticalFrontPorch;           /*!< Vertical front-porch duration                                      */
  uint32_t VerticalSyncActive;           /*!< Vertical synchronism active duration                               */
  uint32_t VirtualChannelID;             /*!< Virtual channel ID                                                */
  uint32_t VirtualChannelID;             /*!< Virtual channel ID                                                 */
