  uint32_t             AlphaMode;         /*!< Configures the DMA2D foreground or background alpha mode.
  uint32_t CLUTColorMode;           /*!< Configures the DMA2D CLUT color mode.
  void                        (* CLUTLoadingCpltCallback)( struct __DMA2D_HandleTypeDef * hdma2d); /*!< DMA2D CLUT loading completion callback. */
  uint32_t             ColorMode;          /*!< Configures the color format of the output image.
  __IO uint32_t               ErrorCode;                                                    /*!< DMA2D error code.                          */
  DMA2D_InitTypeDef           Init;                                                         /*!< DMA2D communication parameters.            */
  uint32_t             InputAlpha;        /*!< Specifies the DMA2D foreground or background alpha value and color value in case of A8 or A4 color mode.
  uint32_t             InputColorMode;    /*!< Configures the DMA2D foreground or background color mode.
  uint32_t             InputOffset;       /*!< Configures the DMA2D foreground or background offset.
  DMA2D_TypeDef               *Instance;                                                    /*!< DMA2D register base address.               */
  DMA2D_LayerCfgTypeDef       LayerCfg[MAX_DMA2D_LAYER];                                    /*!< DMA2D Layers parameters           */
  void                        (* LineEventCallback)( struct __DMA2D_HandleTypeDef * hdma2d);   /*!< DMA2D line event callback.      */
  HAL_LockTypeDef             Lock;                                                         /*!< DMA2D lock.                                */
  uint32_t             Mode;               /*!< Configures the DMA2D transfer mode.
  void                        (* MspDeInitCallback)( struct __DMA2D_HandleTypeDef * hdma2d); /*!< DMA2D Msp DeInit callback.        */
  void                        (* MspInitCallback)( struct __DMA2D_HandleTypeDef * hdma2d);   /*!< DMA2D Msp Init callback.          */
  uint32_t             OutputOffset;       /*!< Specifies the Offset value.
  uint32_t Size;                    /*!< Configures the DMA2D CLUT size.
  __IO HAL_DMA2D_StateTypeDef State;                                                        /*!< DMA2D transfer state.                      */
  void                        (* XferCpltCallback)(struct __DMA2D_HandleTypeDef * hdma2d);  /*!< DMA2D transfer complete callback.          */
  void                        (* XferErrorCallback)(struct __DMA2D_HandleTypeDef * hdma2d); /*!< DMA2D transfer error callback.             */
  uint32_t *pCLUT;                  /*!< Configures the DMA2D CLUT memory address.*/
