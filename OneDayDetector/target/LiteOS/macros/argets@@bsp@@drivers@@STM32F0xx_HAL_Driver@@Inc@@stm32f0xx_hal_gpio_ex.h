#define GPIO_GET_INDEX(__GPIOx__)    (((__GPIOx__) == (GPIOA))? 0U :\
                                      ((__GPIOx__) == (GPIOB))? 1U :\
                                      ((__GPIOx__) == (GPIOC))? 2U :\
                                      ((__GPIOx__) == (GPIOD))? 3U :\
                                      ((__GPIOx__) == (GPIOE))? 4U : 5U)
#define GPIO_GET_INDEX(__GPIOx__)    (((__GPIOx__) == (GPIOA))? 0U :\
                                      ((__GPIOx__) == (GPIOB))? 1U :\
                                      ((__GPIOx__) == (GPIOC))? 2U :\
                                      ((__GPIOx__) == (GPIOD))? 3U : 5U)
#define GPIO_GET_INDEX(__GPIOx__)    (((__GPIOx__) == (GPIOA))? 0U :\
                                      ((__GPIOx__) == (GPIOB))? 1U :\
                                      ((__GPIOx__) == (GPIOC))? 2U :\
                                      ((__GPIOx__) == (GPIOE))? 4U : 5U)
#define GPIO_GET_INDEX(__GPIOx__)    (((__GPIOx__) == (GPIOA))? 0U :\
                                      ((__GPIOx__) == (GPIOB))? 1U :\
                                      ((__GPIOx__) == (GPIOC))? 2U : 5U)
#define IS_GPIO_AF(AF)        ((AF) <= (uint8_t)0x06U)
#define IS_GPIO_AF(AF)        ((AF) <= (uint8_t)0x06U)
#define IS_GPIO_AF(AF)        ((AF) <= (uint8_t)0x07U)
#define IS_GPIO_AF(AF)        ((AF) <= (uint8_t)0x07U)
#define IS_GPIO_AF(AF)        ((AF) <= (uint8_t)0x07U)
#define IS_GPIO_AF(AF)        ((AF) <= (uint8_t)0x06U)
#define IS_GPIO_AF(AF)        ((AF) <= (uint8_t)0x07U)
#define IS_GPIO_AF(AF)        ((AF) <= (uint8_t)0x06U)
#define IS_GPIO_AF(AF)        ((AF) <= (uint8_t)0x06U)
#define IS_GPIO_AF(AF)        ((AF) <= (uint8_t)0x06U)
#define IS_GPIO_AF(AF)        ((AF) <= (uint8_t)0x06U)
