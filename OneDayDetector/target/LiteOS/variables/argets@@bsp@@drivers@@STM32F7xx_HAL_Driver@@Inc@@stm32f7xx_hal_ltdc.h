  uint32_t            AccumulatedActiveH;        /*!< configures the accumulated active height.
  uint32_t            AccumulatedActiveW;        /*!< configures the accumulated active width.
  uint32_t            AccumulatedHBP;            /*!< configures the accumulated horizontal back porch width.
  uint32_t            AccumulatedVBP;            /*!< configures the accumulated vertical back porch height.
  uint32_t Alpha;                      /*!< Specifies the constant alpha used for blending.
  uint32_t Alpha0;                     /*!< Configures the default alpha value.
  LTDC_ColorTypeDef   Backcolor;                 /*!< Configures the background color. */
  LTDC_ColorTypeDef   Backcolor;       /*!< Configures the layer background color. */
  uint32_t BlendingFactor1;            /*!< Select the blending factor 1.
  uint32_t BlendingFactor2;            /*!< Select the blending factor 2.
  uint8_t Blue;                    /*!< Configures the blue value.
  uint32_t            DEPolarity;                /*!< configures the data enable polarity.
  void (* ErrorCallback)(struct __LTDC_HandleTypeDef *hltdc);         /*!< LTDC Error Callback         */
  __IO uint32_t               ErrorCode;                /*!< LTDC Error code                           */
  uint32_t FBStartAdress;              /*!< Configures the color frame buffer address */
  uint8_t Green;                   /*!< Configures the green value.
  uint32_t            HSPolarity;                /*!< configures the horizontal synchronization polarity.
  uint32_t            HorizontalSync;            /*!< configures the number of Horizontal synchronization width.
  uint32_t ImageHeight;                /*!< Specifies the number of line in frame buffer.
  uint32_t ImageWidth;                 /*!< Configures the color frame buffer line length.
  LTDC_InitTypeDef            Init;                     /*!< LTDC parameters                           */
  LTDC_TypeDef                *Instance;                /*!< LTDC Register base address                */
  LTDC_LayerCfgTypeDef        LayerCfg[MAX_LAYER];      /*!< LTDC Layers parameters                    */
  void (* LineEventCallback)(struct __LTDC_HandleTypeDef *hltdc);     /*!< LTDC Line Event Callback    */
  HAL_LockTypeDef             Lock;                     /*!< LTDC Lock                                 */
  void (* MspDeInitCallback)(struct __LTDC_HandleTypeDef *hltdc);     /*!< LTDC Msp DeInit callback    */
  void (* MspInitCallback)(struct __LTDC_HandleTypeDef *hltdc);       /*!< LTDC Msp Init callback      */
  uint32_t            PCPolarity;                /*!< configures the pixel clock polarity.
  uint32_t PixelFormat;                /*!< Specifies the pixel format.
  uint8_t Red;                     /*!< Configures the red value.
  void (* ReloadEventCallback)(struct __LTDC_HandleTypeDef *hltdc);   /*!< LTDC Reload Event Callback  */
  uint8_t Reserved;                /*!< Reserved 0xFF */
  __IO HAL_LTDC_StateTypeDef  State;                    /*!< LTDC state                                */
  uint32_t            TotalHeigh;                /*!< configures the total height.
  uint32_t            TotalWidth;                /*!< configures the total width.
  uint32_t            VSPolarity;                /*!< configures the vertical synchronization polarity.
  uint32_t            VerticalSync;              /*!< configures the number of Vertical synchronization height.
  uint32_t WindowX0;                   /*!< Configures the Window Horizontal Start Position.
  uint32_t WindowX1;                   /*!< Configures the Window Horizontal Stop Position.
  uint32_t WindowY0;                   /*!< Configures the Window vertical Start Position.
  uint32_t WindowY1;                   /*!< Configures the Window vertical Stop Position.
