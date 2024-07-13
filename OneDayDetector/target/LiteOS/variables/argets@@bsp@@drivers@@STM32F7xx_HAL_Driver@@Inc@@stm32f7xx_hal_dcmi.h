  uint32_t ByteSelectMode;              /*!< Specifies the data to be captured by the interface 
  uint32_t ByteSelectStart;             /*!< Specifies if the data to be captured by the interface is even or odd
  uint32_t  CaptureRate;                /*!< Specifies the frequency of frame capture: All, 1/2 or 1/4.
  DMA_HandleTypeDef             *DMA_Handle;         /*!< Pointer to the DMA handler   */
  void    (* ErrorCallback)      ( struct __DCMI_HandleTypeDef *hdcmi);  /*!< DCMI Error Callback       */
  __IO uint32_t                 ErrorCode;           /*!< DCMI Error code              */
  uint32_t  ExtendedDataMode;           /*!< Specifies the data width: 8-bit, 10-bit, 12-bit or 14-bit.
  uint8_t FrameEndCode;   /*!< Specifies the code of the frame end delimiter.   */
  void    (* FrameEventCallback) ( struct __DCMI_HandleTypeDef *hdcmi);  /*!< DCMI Frame Event Callback */
  uint8_t FrameStartCode; /*!< Specifies the code of the frame start delimiter. */
  uint32_t  HSPolarity;                 /*!< Specifies the Horizontal synchronization polarity: High or Low.
  DCMI_InitTypeDef              Init;                /*!< DCMI parameters              */
  DCMI_TypeDef                  *Instance;           /*!< DCMI Register base address   */
  uint32_t JPEGMode;                    /*!< Enable or Disable the JPEG mode.                                
  uint8_t LineEndCode;    /*!< Specifies the code of the line end delimiter.    */
  void    (* LineEventCallback ) ( struct __DCMI_HandleTypeDef *hdcmi);  /*!< DCMI Line Event Callback  */ 
  uint32_t LineSelectMode;              /*!< Specifies the line of data to be captured by the interface 
  uint32_t LineSelectStart;             /*!< Specifies if the line of data to be captured by the interface is even or odd
  uint8_t LineStartCode;  /*!< Specifies the code of the line start delimiter.  */
  HAL_LockTypeDef               Lock;                /*!< DCMI locking object          */
  void    (* MspDeInitCallback)  ( struct __DCMI_HandleTypeDef *hdcmi);  /*!< DCMI Msp DeInit callback  */  
  void    (* MspInitCallback)    ( struct __DCMI_HandleTypeDef *hdcmi);  /*!< DCMI Msp Init callback    */
  uint32_t  PCKPolarity;                /*!< Specifies the Pixel clock polarity: Falling or Rising.
  __IO HAL_DCMI_StateTypeDef    State;               /*!< DCMI state                   */
  uint32_t  SynchroMode;                /*!< Specifies the Synchronization Mode: Hardware or Embedded.
  DCMI_CodesInitTypeDef SyncroCode;     /*!< Specifies the code of the line/frame start delimiter and the
  uint32_t  VSPolarity;                 /*!< Specifies the Vertical synchronization polarity: High or Low.
  void    (* VsyncEventCallback) ( struct __DCMI_HandleTypeDef *hdcmi);  /*!< DCMI Vsync Event Callback */
  __IO uint32_t                 XferCount;           /*!< DMA transfer counter         */
  __IO uint32_t                 XferSize;            /*!< DMA transfer size            */
  uint32_t                      XferTransferNumber;  /*!< DMA transfer number          */
  uint32_t                      pBuffPtr;            /*!< Pointer to DMA output buffer */
