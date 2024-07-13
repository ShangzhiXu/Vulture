  DMA_HandleTypeDef             *DMA_Handle;         /*!< Pointer to the DMA handler   */
  void    (* ErrorCallback)      ( struct __DCMI_HandleTypeDef *hdcmi);  /*!< DCMI Error Callback       */
  __IO uint32_t                 ErrorCode;           /*!< DCMI Error code              */
  uint8_t FrameEndUnmask;   /*!< Specifies the frame end delimiter unmask.   */
  void    (* FrameEventCallback) ( struct __DCMI_HandleTypeDef *hdcmi);  /*!< DCMI Frame Event Callback */
  uint8_t FrameStartUnmask; /*!< Specifies the frame start delimiter unmask. */
  DCMI_InitTypeDef              Init;                /*!< DCMI parameters              */
  DCMI_TypeDef                  *Instance;           /*!< DCMI Register base address   */
  uint8_t LineEndUnmask;    /*!< Specifies the line end delimiter unmask.    */
  void    (* LineEventCallback ) ( struct __DCMI_HandleTypeDef *hdcmi);  /*!< DCMI Line Event Callback  */ 
  uint8_t LineStartUnmask;  /*!< Specifies the line start delimiter unmask.  */
  HAL_LockTypeDef               Lock;                /*!< DCMI locking object          */
  void    (* MspDeInitCallback)  ( struct __DCMI_HandleTypeDef *hdcmi);  /*!< DCMI Msp DeInit callback  */  
  void    (* MspInitCallback)    ( struct __DCMI_HandleTypeDef *hdcmi);  /*!< DCMI Msp Init callback    */
  __IO HAL_DCMI_StateTypeDef    State;               /*!< DCMI state                   */
  void    (* VsyncEventCallback) ( struct __DCMI_HandleTypeDef *hdcmi);  /*!< DCMI Vsync Event Callback */
  __IO uint32_t                 XferCount;           /*!< DMA transfer counter         */
  __IO uint32_t                 XferSize;            /*!< DMA transfer size            */
  uint32_t                      XferTransferNumber;  /*!< DMA transfer number          */
  uint32_t                      pBuffPtr;            /*!< Pointer to DMA output buffer */
