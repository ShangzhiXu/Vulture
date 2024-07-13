  uint32_t ByteSelectMode;              /*!< Specifies the data to be captured by the interface. 
  uint32_t ByteSelectStart;             /*!< Specifies if the data to be captured by the interface is even or odd.
  uint32_t  CaptureRate;                /*!< Specifies the frequency of frame capture: All, 1/2 or 1/4.
  DMA_HandleTypeDef             *DMAM2M_Handle;      /*!< Pointer to DMA handler for memory to memory copy
  DMA_HandleTypeDef             *DMA_Handle;         /*!< Pointer to DMA handler       */
  __IO uint32_t                 ErrorCode;           /*!< DCMI Error code              */
  uint32_t  ExtendedDataMode;           /*!< Specifies the data width: 8-bit, 10-bit, 12-bit or 14-bit.
  uint8_t FrameEndCode;   /*!< Specifies the code of the frame end delimiter.   */
  uint8_t FrameEndUnmask;   /*!< Specifies the frame end delimiter unmask.   */
  uint8_t FrameStartCode; /*!< Specifies the code of the frame start delimiter. */
  uint8_t FrameStartUnmask; /*!< Specifies the frame start delimiter unmask. */
  uint32_t  HSPolarity;                 /*!< Specifies the Horizontal synchronization polarity: High or Low.
  uint32_t                      HalfCopyLength;      /*!< Intermediate copies length
  DCMI_InitTypeDef              Init;                /*!< DCMI init parameters         */
  DCMI_TypeDef                  *Instance;           /*!< DCMI Register base address   */
  uint32_t JPEGMode;                    /*!< Enable or Disable the JPEG mode.                                
  uint8_t LineEndCode;    /*!< Specifies the code of the line end delimiter.    */
  uint8_t LineEndUnmask;    /*!< Specifies the line end delimiter unmask.    */
  uint32_t LineSelectMode;              /*!< Specifies the data line to be captured by the interface. 
  uint32_t LineSelectStart;             /*!< Specifies if the data line to be captured by the interface is even or odd.
  uint8_t LineStartCode;  /*!< Specifies the code of the line start delimiter.  */
  uint8_t LineStartUnmask;  /*!< Specifies the line start delimiter unmask.  */
  HAL_LockTypeDef               Lock;                /*!< DCMI locking object          */
  uint32_t  PCKPolarity;                /*!< Specifies the Pixel clock polarity: Falling or Rising.
  __IO HAL_DCMI_StateTypeDef    State;               /*!< DCMI state                   */
  DCMI_CodesInitTypeDef SynchroCode;    /*!< Specifies the frame start delimiter codes.                       */
  uint32_t  SynchroMode;                /*!< Specifies the Synchronization Mode: Hardware or Embedded.
  uint32_t  VSPolarity;                 /*!< Specifies the Vertical synchronization polarity: High or Low.
  __IO uint32_t                 XferCount;           /*!< DMA transfers counter        */
  __IO uint32_t                 XferSize;            /*!< DMA transfer size            */
  uint32_t                      pBuffPtr;            /*!< Pointer to DMA output buffer */
  uint32_t                      pCircularBuffer;     /*!< Pointer to intermediate copy buffer 
