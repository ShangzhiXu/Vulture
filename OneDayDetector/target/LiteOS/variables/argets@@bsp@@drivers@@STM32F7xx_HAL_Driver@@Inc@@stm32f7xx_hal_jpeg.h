  uint32_t ChromaSubsampling;        /*!< Chroma Subsampling in case of YCBCR or CMYK color space, 0-> 4:4:4 , 1-> 4:2:2, 2 -> 4:1:1, 3 -> 4:2:0
  uint32_t ColorSpace;               /*!< Image Color space : gray-scale, YCBCR, RGB or CMYK
  JPEG_ConfTypeDef         Conf;             /*!< Current JPEG encoding/decoding parameters */
  __IO uint32_t Context;                     /*!< JPEG Internal context */
  uint8_t                  CustomQuanTable;  /*!< If set to 1 specify that user customized quantization tables are used */
  void (*DataReadyCallback)(struct __JPEG_HandleTypeDef *hjpeg, uint8_t *pDataOut,
                            uint32_t OutDataLength);   /*!< JPEG Data ready callback */
  void (*DecodeCpltCallback)(struct __JPEG_HandleTypeDef
                             *hjpeg);                          /*!< JPEG Decode complete callback */
  void (*EncodeCpltCallback)(struct __JPEG_HandleTypeDef
                             *hjpeg);                          /*!< JPEG Encode complete callback */
  void (*ErrorCallback)(struct __JPEG_HandleTypeDef
                        *hjpeg);                               /*!< JPEG Error callback           */
  __IO  uint32_t           ErrorCode;        /*!< JPEG Error code */
  void (*GetDataCallback)(struct __JPEG_HandleTypeDef *hjpeg,
                          uint32_t NbDecodedData);     /*!< JPEG Get Data callback        */
  uint32_t ImageHeight;              /*!< Image height : number of lines */
  uint32_t ImageQuality;             /*!< Quality of the JPEG encoding : from 1 to 100 */
  uint32_t ImageWidth;               /*!< Image width : number of pixels per line */
  uint32_t                 InDataLength;     /*!< Input Buffer Length in Bytes */
  void (*InfoReadyCallback)(struct __JPEG_HandleTypeDef *hjpeg,
                            JPEG_ConfTypeDef *pInfo);  /*!< JPEG Info ready callback      */
  JPEG_TypeDef             *Instance;        /*!< JPEG peripheral register base address */
  __IO uint32_t            JpegInCount;      /*!< Internal Counter of input data */
  __IO uint32_t            JpegOutCount;     /*!< Internal Counter of output data */
  HAL_LockTypeDef          Lock;             /*!< JPEG locking object */
  void (* MspDeInitCallback)(struct __JPEG_HandleTypeDef
                             *hjpeg);                          /*!< JPEG Msp DeInit callback  */
  void (* MspInitCallback)(struct __JPEG_HandleTypeDef *hjpeg);                            /*!< JPEG Msp Init callback  */
  uint32_t                 OutDataLength;    /*!< Output Buffer Length in Bytes */
  uint8_t                  *QuantTable0;     /*!< Basic Quantization Table for component 0 */
  uint8_t                  *QuantTable1;     /*!< Basic Quantization Table for component 1 */
  uint8_t                  *QuantTable2;     /*!< Basic Quantization Table for component 2 */
  uint8_t                  *QuantTable3;     /*!< Basic Quantization Table for component 3 */
  __IO  HAL_JPEG_STATETypeDef State;         /*!< JPEG peripheral state */
  DMA_HandleTypeDef        *hdmain;          /*!< JPEG In DMA handle parameters */
  DMA_HandleTypeDef        *hdmaout;         /*!< JPEG Out DMA handle parameters */
  uint8_t                  *pJpegInBuffPtr;  /*!< Pointer to JPEG processing (encoding, decoding,...) input buffer */
  uint8_t                  *pJpegOutBuffPtr; /*!< Pointer to JPEG processing (encoding, decoding,...) output buffer */
