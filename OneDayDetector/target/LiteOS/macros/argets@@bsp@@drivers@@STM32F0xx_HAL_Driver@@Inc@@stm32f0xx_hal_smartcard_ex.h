#define IS_SMARTCARD_TRANSMISSION_COMPLETION(__TXCOMPLETE__) (((__TXCOMPLETE__) == SMARTCARD_TCBGT) || \
                                                              ((__TXCOMPLETE__) == SMARTCARD_TC))
#define SMARTCARD_GETCLOCKSOURCE(__HANDLE__,__CLOCKSOURCE__) \
  do {                                                         \
     switch(__HAL_RCC_GET_USART1_SOURCE())                     \
     {                                                         \
      case RCC_USART1CLKSOURCE_PCLK1:                          \
        (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_PCLK1;           \
        break;                                                 \
      case RCC_USART1CLKSOURCE_HSI:                            \
        (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_HSI;             \
        break;                                                 \
      case RCC_USART1CLKSOURCE_SYSCLK:                         \
        (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_SYSCLK;          \
        break;                                                 \
      case RCC_USART1CLKSOURCE_LSE:                            \
        (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_LSE;             \
        break;                                                 \
      default:                                                 \
        (__CLOCKSOURCE__) = SMARTCARD_CLOCKSOURCE_UNDEFINED;       \
        break;                                                 \
     }                                                         \
  } while(0)
#define SMARTCARD_TRANSMISSION_COMPLETION_FLAG(__HANDLE__)  \
  (((__HANDLE__)->AdvancedInit.TxCompletionIndication == SMARTCARD_TC) ? (SMARTCARD_FLAG_TC) :  (SMARTCARD_FLAG_TCBGT))
#define SMARTCARD_TRANSMISSION_COMPLETION_SETTING(__HANDLE__)                                                \
  do {                                                                                                       \
    if (HAL_IS_BIT_CLR((__HANDLE__)->AdvancedInit.AdvFeatureInit, SMARTCARD_ADVFEATURE_TXCOMPLETION))        \
    {                                                                                                        \
      (__HANDLE__)->AdvancedInit.TxCompletionIndication = SMARTCARD_TC;                                      \
    }                                                                                                        \
    else                                                                                                     \
    {                                                                                                        \
      assert_param(IS_SMARTCARD_TRANSMISSION_COMPLETION((__HANDLE__)->AdvancedInit.TxCompletionIndication)); \
    }                                                                                                        \
  } while(0U)
