#define IS_JPEG_CHROMASUBSAMPLING(SUBSAMPLING) (((SUBSAMPLING) == JPEG_444_SUBSAMPLING) || \
                                                ((SUBSAMPLING) == JPEG_420_SUBSAMPLING) || \
                                                ((SUBSAMPLING) == JPEG_422_SUBSAMPLING))
#define IS_JPEG_COLORSPACE(COLORSPACE) (((COLORSPACE) == JPEG_GRAYSCALE_COLORSPACE) || \
                                        ((COLORSPACE) == JPEG_YCBCR_COLORSPACE)     || \
                                        ((COLORSPACE) == JPEG_CMYK_COLORSPACE))
#define IS_JPEG_IMAGE_QUALITY(NUMBER) (((NUMBER) >= JPEG_IMAGE_QUALITY_MIN) && ((NUMBER) <= JPEG_IMAGE_QUALITY_MAX))
#define IS_JPEG_PAUSE_RESUME_STATE(VALUE) (((VALUE) == JPEG_PAUSE_RESUME_INPUT) || \
                                           ((VALUE) == JPEG_PAUSE_RESUME_OUTPUT)|| \
                                           ((VALUE) == JPEG_PAUSE_RESUME_INPUT_OUTPUT))
#define __HAL_JPEG_CLEAR_FLAG(__HANDLE__,__FLAG__)  (((__HANDLE__)->Instance->CFR |= ((__FLAG__) & (JPEG_FLAG_EOCF | JPEG_FLAG_HPDF))))
#define __HAL_JPEG_DISABLE(__HANDLE__) ((__HANDLE__)->Instance->CR &=  ~JPEG_CR_JCEN)
#define __HAL_JPEG_DISABLE_IT(__HANDLE__,__INTERRUPT__) MODIFY_REG((__HANDLE__)->Instance->CR, (__INTERRUPT__), 0UL)
#define __HAL_JPEG_ENABLE(__HANDLE__)  ((__HANDLE__)->Instance->CR |=  JPEG_CR_JCEN)
#define __HAL_JPEG_ENABLE_IT(__HANDLE__,__INTERRUPT__)  ((__HANDLE__)->Instance->CR |= (__INTERRUPT__) )
#define __HAL_JPEG_GET_FLAG(__HANDLE__,__FLAG__)  (((__HANDLE__)->Instance->SR & (__FLAG__)))
#define __HAL_JPEG_GET_IT_SOURCE(__HANDLE__,__INTERRUPT__)     ((__HANDLE__)->Instance->CR & (__INTERRUPT__))
#define __HAL_JPEG_RESET_HANDLE_STATE(__HANDLE__) do{\
                                                      (__HANDLE__)->State = HAL_JPEG_STATE_RESET;\
                                                      (__HANDLE__)->MspInitCallback = NULL;\
                                                      (__HANDLE__)->MspDeInitCallback = NULL;\
                                                      }while(0)
#define __HAL_JPEG_RESET_HANDLE_STATE(__HANDLE__) ( (__HANDLE__)->State = HAL_JPEG_STATE_RESET)
