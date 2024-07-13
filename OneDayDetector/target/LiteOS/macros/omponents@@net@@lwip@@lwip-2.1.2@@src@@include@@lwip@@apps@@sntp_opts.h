#define SNTP_GET_SYSTEM_TIME(sec, us)     do { (sec) = 0; (us) = 0; } while(0)
#define SNTP_SET_SYSTEM_TIME(sec)   LWIP_UNUSED_ARG(sec)
