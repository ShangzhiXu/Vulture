  uint32_t ByteSelectMode;              /*!< Specifies the data to be captured by the interface 
  uint32_t ByteSelectStart;             /*!< Specifies if the data to be captured by the interface is even or odd
  uint32_t  CaptureRate;                /*!< Specifies the frequency of frame capture: All, 1/2 or 1/4.
  uint32_t  ExtendedDataMode;           /*!< Specifies the data width: 8-bit, 10-bit, 12-bit or 14-bit.
  uint8_t FrameEndCode;   /*!< Specifies the code of the frame end delimiter.   */
  uint8_t FrameStartCode; /*!< Specifies the code of the frame start delimiter. */
  uint32_t  HSPolarity;                 /*!< Specifies the Horizontal synchronization polarity: High or Low.
  uint32_t JPEGMode;                    /*!< Enable or Disable the JPEG mode
  uint8_t LineEndCode;    /*!< Specifies the code of the line end delimiter.    */
  uint32_t LineSelectMode;              /*!< Specifies the line of data to be captured by the interface 
  uint32_t LineSelectStart;             /*!< Specifies if the line of data to be captured by the interface is even or odd
  uint8_t LineStartCode;  /*!< Specifies the code of the line start delimiter.  */
  uint32_t  PCKPolarity;                /*!< Specifies the Pixel clock polarity: Falling or Rising.
  uint32_t  SynchroMode;                /*!< Specifies the Synchronization Mode: Hardware or Embedded.
  DCMI_CodesInitTypeDef SyncroCode;     /*!< Specifies the code of the frame start delimiter.                  */
  uint32_t  VSPolarity;                 /*!< Specifies the Vertical synchronization polarity: High or Low.
