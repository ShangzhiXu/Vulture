#  define SNTP_FRAC_TO_US(f)        ((u32_t)(((u64_t)(f) * 1000000UL) >> 32))
#  define SNTP_FRAC_TO_US(f)        ((u32_t)(f) / 4295)
# define SNTP_GET_SYSTEM_TIME_NTP(s, f) do { \
    u32_t sec_, usec_; \
    SNTP_GET_SYSTEM_TIME(sec_, usec_); \
    (s) = (s32_t)(sec_ - DIFF_SEC_1970_2036); \
    (f) = usec_ * 4295 - ((usec_ * 2143) >> 16) + 2147; \
  } while (0)
#define SNTP_RESET_RETRY_TIMEOUT() sntp_retry_timeout = SNTP_RETRY_TIMEOUT
#define SNTP_RESET_RETRY_TIMEOUT()
# define SNTP_SEC_FRAC_TO_S64(s, f) \
    ((s64_t)(((u64_t)(s) << 32) | (u32_t)(f)))
#  define SNTP_SET_SYSTEM_TIME_NTP(s, f) \
    SNTP_SET_SYSTEM_TIME_US((u32_t)((s) + DIFF_SEC_1970_2036), SNTP_FRAC_TO_US(f))
#  define SNTP_SET_SYSTEM_TIME_NTP(s, f) \
    SNTP_SET_SYSTEM_TIME((u32_t)((s) + DIFF_SEC_1970_2036))
# define SNTP_TIMESTAMP_TO_S64(t) \
    SNTP_SEC_FRAC_TO_S64(lwip_ntohl((t).sec), lwip_ntohl((t).frac))
