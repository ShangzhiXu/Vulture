#define IS_SMARTCARD_ADVFEATURE_DATAINV(__DATAINV__) (((__DATAINV__) == SMARTCARD_ADVFEATURE_DATAINV_DISABLE) || \
                                                      ((__DATAINV__) == SMARTCARD_ADVFEATURE_DATAINV_ENABLE))
#define IS_SMARTCARD_ADVFEATURE_DMAONRXERROR(__DMA__) (((__DMA__) == SMARTCARD_ADVFEATURE_DMA_ENABLEONRXERROR) || \
                                                       ((__DMA__) == SMARTCARD_ADVFEATURE_DMA_DISABLEONRXERROR))
#define IS_SMARTCARD_ADVFEATURE_INIT(__INIT__) ((__INIT__) <= (SMARTCARD_ADVFEATURE_NO_INIT                | \
                                                               SMARTCARD_ADVFEATURE_TXINVERT_INIT          | \
                                                               SMARTCARD_ADVFEATURE_RXINVERT_INIT          | \
                                                               SMARTCARD_ADVFEATURE_DATAINVERT_INIT        | \
                                                               SMARTCARD_ADVFEATURE_SWAP_INIT              | \
                                                               SMARTCARD_ADVFEATURE_RXOVERRUNDISABLE_INIT  | \
                                                               SMARTCARD_ADVFEATURE_DMADISABLEONERROR_INIT | \
                                                               SMARTCARD_ADVFEATURE_MSBFIRST_INIT))
#define IS_SMARTCARD_ADVFEATURE_MSBFIRST(__MSBFIRST__) (((__MSBFIRST__) == SMARTCARD_ADVFEATURE_MSBFIRST_DISABLE) || \
                                                        ((__MSBFIRST__) == SMARTCARD_ADVFEATURE_MSBFIRST_ENABLE))
#define IS_SMARTCARD_ADVFEATURE_RXINV(__RXINV__) (((__RXINV__) == SMARTCARD_ADVFEATURE_RXINV_DISABLE) || \
                                                  ((__RXINV__) == SMARTCARD_ADVFEATURE_RXINV_ENABLE))
#define IS_SMARTCARD_ADVFEATURE_SWAP(__SWAP__) (((__SWAP__) == SMARTCARD_ADVFEATURE_SWAP_DISABLE) || \
                                                ((__SWAP__) == SMARTCARD_ADVFEATURE_SWAP_ENABLE))
#define IS_SMARTCARD_ADVFEATURE_TXINV(__TXINV__) (((__TXINV__) == SMARTCARD_ADVFEATURE_TXINV_DISABLE) || \
                                                  ((__TXINV__) == SMARTCARD_ADVFEATURE_TXINV_ENABLE))
#define IS_SMARTCARD_AUTORETRY_COUNT(__COUNT__)         ((__COUNT__) <= 0x7U)
#define IS_SMARTCARD_BAUDRATE(__BAUDRATE__) ((__BAUDRATE__) < 13500001U)
#define IS_SMARTCARD_BLOCKLENGTH(__LENGTH__) ((__LENGTH__) <= 0xFFU)
#define IS_SMARTCARD_LASTBIT(__LASTBIT__) (((__LASTBIT__) == SMARTCARD_LASTBIT_DISABLE) || \
                                           ((__LASTBIT__) == SMARTCARD_LASTBIT_ENABLE))
#define IS_SMARTCARD_MODE(__MODE__) ((((__MODE__) & 0xFFF3U) == 0x00U) && ((__MODE__) != 0x00U))
#define IS_SMARTCARD_NACK(__NACK__) (((__NACK__) == SMARTCARD_NACK_ENABLE) || \
                                     ((__NACK__) == SMARTCARD_NACK_DISABLE))
#define IS_SMARTCARD_ONE_BIT_SAMPLE(__ONEBIT__) (((__ONEBIT__) == SMARTCARD_ONE_BIT_SAMPLE_DISABLE) || \
                                                 ((__ONEBIT__) == SMARTCARD_ONE_BIT_SAMPLE_ENABLE))
#define IS_SMARTCARD_OVERRUN(__OVERRUN__) (((__OVERRUN__) == SMARTCARD_ADVFEATURE_OVERRUN_ENABLE) || \
                                           ((__OVERRUN__) == SMARTCARD_ADVFEATURE_OVERRUN_DISABLE))
#define IS_SMARTCARD_PARITY(__PARITY__) (((__PARITY__) == SMARTCARD_PARITY_EVEN) || \
                                         ((__PARITY__) == SMARTCARD_PARITY_ODD))
#define IS_SMARTCARD_PHASE(__CPHA__) (((__CPHA__) == SMARTCARD_PHASE_1EDGE) || ((__CPHA__) == SMARTCARD_PHASE_2EDGE))
#define IS_SMARTCARD_POLARITY(__CPOL__) (((__CPOL__) == SMARTCARD_POLARITY_LOW) || ((__CPOL__) == SMARTCARD_POLARITY_HIGH))
#define IS_SMARTCARD_REQUEST_PARAMETER(__PARAM__) (((__PARAM__) == SMARTCARD_RXDATA_FLUSH_REQUEST) || \
                                                   ((__PARAM__) == SMARTCARD_TXDATA_FLUSH_REQUEST))
#define IS_SMARTCARD_STOPBITS(__STOPBITS__) (((__STOPBITS__) == SMARTCARD_STOPBITS_0_5) ||\
                                             ((__STOPBITS__) == SMARTCARD_STOPBITS_1_5))
#define IS_SMARTCARD_TIMEOUT(__TIMEOUT__) (((__TIMEOUT__) == SMARTCARD_TIMEOUT_DISABLE) || \
                                           ((__TIMEOUT__) == SMARTCARD_TIMEOUT_ENABLE))
#define IS_SMARTCARD_TIMEOUT_VALUE(__TIMEOUTVALUE__)    ((__TIMEOUTVALUE__) <= 0xFFFFFFU)
#define IS_SMARTCARD_WORD_LENGTH(__LENGTH__) ((__LENGTH__) == SMARTCARD_WORDLENGTH_9B)
#define SMARTCARD_GETCLOCKSOURCE(__HANDLE__, __CLOCKSOURCE__)  \
  do {                                                         \
    if((__HANDLE__)->Instance == USART1)                       \
    {                                                          \
       switch(__HAL_RCC_GET_USART1_SOURCE())                   \
       {                                                       \
        case RCC_USART1CLKSOURCE_PCLK2:                        \
          (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_PCLK2;     \
          break;                                               \
        case RCC_USART1CLKSOURCE_HSI:                          \
          (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_HSI;       \
          break;                                               \
        case RCC_USART1CLKSOURCE_SYSCLK:                       \
          (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_SYSCLK;    \
          break;                                               \
        case RCC_USART1CLKSOURCE_LSE:                          \
          (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_LSE;       \
          break;                                               \
        default:                                               \
          (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_UNDEFINED; \
          break;                                               \
       }                                                       \
    }                                                          \
    else if((__HANDLE__)->Instance == USART2)                  \
    {                                                          \
       switch(__HAL_RCC_GET_USART2_SOURCE())                   \
       {                                                       \
        case RCC_USART2CLKSOURCE_PCLK1:                        \
          (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_PCLK1;     \
          break;                                               \
        case RCC_USART2CLKSOURCE_HSI:                          \
          (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_HSI;       \
          break;                                               \
        case RCC_USART2CLKSOURCE_SYSCLK:                       \
          (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_SYSCLK;    \
          break;                                               \
        case RCC_USART2CLKSOURCE_LSE:                          \
          (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_LSE;       \
          break;                                               \
        default:                                               \
          (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_UNDEFINED; \
          break;                                               \
       }                                                       \
    }                                                          \
    else if((__HANDLE__)->Instance == USART3)                  \
    {                                                          \
       switch(__HAL_RCC_GET_USART3_SOURCE())                   \
       {                                                       \
        case RCC_USART3CLKSOURCE_PCLK1:                        \
          (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_PCLK1;     \
          break;                                               \
        case RCC_USART3CLKSOURCE_HSI:                          \
          (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_HSI;       \
          break;                                               \
        case RCC_USART3CLKSOURCE_SYSCLK:                       \
          (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_SYSCLK;    \
          break;                                               \
        case RCC_USART3CLKSOURCE_LSE:                          \
          (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_LSE;       \
          break;                                               \
        default:                                               \
          (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_UNDEFINED; \
          break;                                               \
       }                                                       \
    }                                                          \
    else if((__HANDLE__)->Instance == USART6)                  \
    {                                                          \
       switch(__HAL_RCC_GET_USART6_SOURCE())                   \
       {                                                       \
        case RCC_USART6CLKSOURCE_PCLK2:                        \
          (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_PCLK2;     \
          break;                                               \
        case RCC_USART6CLKSOURCE_HSI:                          \
          (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_HSI;       \
          break;                                               \
        case RCC_USART6CLKSOURCE_SYSCLK:                       \
          (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_SYSCLK;    \
          break;                                               \
        case RCC_USART6CLKSOURCE_LSE:                          \
          (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_LSE;       \
          break;                                               \
        default:                                               \
          (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_UNDEFINED; \
          break;                                               \
       }                                                       \
    }                                                          \
    else                                                       \
    {                                                          \
      (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_UNDEFINED;     \
    }                                                          \
  } while(0U)
#define __HAL_SMARTCARD_CLEAR_FEFLAG(__HANDLE__)   __HAL_SMARTCARD_CLEAR_FLAG((__HANDLE__), SMARTCARD_CLEAR_FEF)
#define __HAL_SMARTCARD_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->ICR = (__FLAG__))
#define __HAL_SMARTCARD_CLEAR_IDLEFLAG(__HANDLE__)   __HAL_SMARTCARD_CLEAR_FLAG((__HANDLE__), SMARTCARD_CLEAR_IDLEF)
#define __HAL_SMARTCARD_CLEAR_IT(__HANDLE__, __IT_CLEAR__) ((__HANDLE__)->Instance->ICR |= (uint32_t)(__IT_CLEAR__))
#define __HAL_SMARTCARD_CLEAR_NEFLAG(__HANDLE__)   __HAL_SMARTCARD_CLEAR_FLAG((__HANDLE__), SMARTCARD_CLEAR_NEF)
#define __HAL_SMARTCARD_CLEAR_OREFLAG(__HANDLE__)   __HAL_SMARTCARD_CLEAR_FLAG((__HANDLE__), SMARTCARD_CLEAR_OREF)
#define __HAL_SMARTCARD_CLEAR_PEFLAG(__HANDLE__)   __HAL_SMARTCARD_CLEAR_FLAG((__HANDLE__), SMARTCARD_CLEAR_PEF)
#define __HAL_SMARTCARD_DISABLE(__HANDLE__)              ((__HANDLE__)->Instance->CR1 &=  ~USART_CR1_UE)
#define __HAL_SMARTCARD_DISABLE_IT(__HANDLE__, __INTERRUPT__)  (((((__INTERRUPT__) & SMARTCARD_CR_MASK) >> SMARTCARD_CR_POS) == 1U)? ((__HANDLE__)->Instance->CR1 &= ~ ((uint32_t)1U << ((__INTERRUPT__) & SMARTCARD_IT_MASK))): \
                                                                ((((__INTERRUPT__) & SMARTCARD_CR_MASK) >> SMARTCARD_CR_POS) == 2U)? ((__HANDLE__)->Instance->CR2 &= ~ ((uint32_t)1U << ((__INTERRUPT__) & SMARTCARD_IT_MASK))): \
                                                                ((__HANDLE__)->Instance->CR3 &= ~ ((uint32_t)1U << ((__INTERRUPT__) & SMARTCARD_IT_MASK))))
#define __HAL_SMARTCARD_ENABLE(__HANDLE__)               ((__HANDLE__)->Instance->CR1 |=  USART_CR1_UE)
#define __HAL_SMARTCARD_ENABLE_IT(__HANDLE__, __INTERRUPT__)   (((((__INTERRUPT__) & SMARTCARD_CR_MASK) >> SMARTCARD_CR_POS) == 1U)? ((__HANDLE__)->Instance->CR1 |= ((uint32_t)1U << ((__INTERRUPT__) & SMARTCARD_IT_MASK))): \
                                                                ((((__INTERRUPT__) & SMARTCARD_CR_MASK) >> SMARTCARD_CR_POS) == 2U)? ((__HANDLE__)->Instance->CR2 |= ((uint32_t)1U << ((__INTERRUPT__) & SMARTCARD_IT_MASK))): \
                                                                ((__HANDLE__)->Instance->CR3 |= ((uint32_t)1U << ((__INTERRUPT__) & SMARTCARD_IT_MASK))))
#define __HAL_SMARTCARD_FLUSH_DRREGISTER(__HANDLE__)                        \
    do{                                                                     \
      SET_BIT((__HANDLE__)->Instance->RQR, SMARTCARD_RXDATA_FLUSH_REQUEST); \
      SET_BIT((__HANDLE__)->Instance->RQR, SMARTCARD_TXDATA_FLUSH_REQUEST); \
      } while(0U)
#define __HAL_SMARTCARD_GET_FLAG(__HANDLE__, __FLAG__) (((__HANDLE__)->Instance->ISR & (__FLAG__)) == (__FLAG__))
#define __HAL_SMARTCARD_GET_IT(__HANDLE__, __INTERRUPT__) ((((__HANDLE__)->Instance->ISR & ((uint32_t)0x01U << (((__INTERRUPT__) & SMARTCARD_ISR_MASK)>> SMARTCARD_ISR_POS))) != 0U) ? SET : RESET)
#define __HAL_SMARTCARD_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((((((((__INTERRUPT__) & SMARTCARD_CR_MASK) >> SMARTCARD_CR_POS) == 0x01U)? (__HANDLE__)->Instance->CR1 : \
                                                                    (((((__INTERRUPT__) & SMARTCARD_CR_MASK) >> SMARTCARD_CR_POS) == 0x02U)? (__HANDLE__)->Instance->CR2 : \
                                                                    (__HANDLE__)->Instance->CR3)) & ((uint32_t)0x01U << (((uint16_t)(__INTERRUPT__)) & SMARTCARD_IT_MASK)))  != 0U) ? SET : RESET)
#define __HAL_SMARTCARD_ONE_BIT_SAMPLE_DISABLE(__HANDLE__) ((__HANDLE__)->Instance->CR3 &= (uint32_t)~((uint32_t)USART_CR3_ONEBIT))
#define __HAL_SMARTCARD_ONE_BIT_SAMPLE_ENABLE(__HANDLE__) ((__HANDLE__)->Instance->CR3|= USART_CR3_ONEBIT)
#define __HAL_SMARTCARD_RESET_HANDLE_STATE(__HANDLE__)  do{                                                       \
                                                           (__HANDLE__)->gState = HAL_SMARTCARD_STATE_RESET;      \
                                                           (__HANDLE__)->RxState = HAL_SMARTCARD_STATE_RESET;     \
                                                           (__HANDLE__)->MspInitCallback = NULL;                  \
                                                           (__HANDLE__)->MspDeInitCallback = NULL;                \
                                                          } while(0U)
#define __HAL_SMARTCARD_RESET_HANDLE_STATE(__HANDLE__)  do{                                                       \
                                                           (__HANDLE__)->gState = HAL_SMARTCARD_STATE_RESET;      \
                                                           (__HANDLE__)->RxState = HAL_SMARTCARD_STATE_RESET;     \
                                                          } while(0U)
#define __HAL_SMARTCARD_SEND_REQ(__HANDLE__, __REQ__) ((__HANDLE__)->Instance->RQR |= (uint16_t)(__REQ__))
