#define IRDA_DIV_SAMPLING16(__PCLK__, __BAUD__, __PRESCALER__)  ((((__PCLK__)/IRDAPrescTable[(__PRESCALER__)]) + ((__BAUD__)/2)) / (__BAUD__))
#define IRDA_DIV_SAMPLING16(__PCLK__, __BAUD__)  (((__PCLK__) + ((__BAUD__)/2)) / (__BAUD__))
