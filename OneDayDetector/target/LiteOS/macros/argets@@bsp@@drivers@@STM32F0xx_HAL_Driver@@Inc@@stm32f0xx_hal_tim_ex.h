#define IS_TIM_REMAP(__INSTANCE__, __REMAP__)                                             \
          (((__INSTANCE__) == TIM14)  && (((__REMAP__) & 0xFFFFFFFCU) == 0x00000000U))
