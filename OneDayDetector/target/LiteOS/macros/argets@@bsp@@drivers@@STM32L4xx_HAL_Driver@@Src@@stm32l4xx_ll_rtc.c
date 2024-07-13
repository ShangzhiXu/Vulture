#define IS_LL_RTC_ALMA_DATE_WEEKDAY_SEL(__SEL__) (((__SEL__) == LL_RTC_ALMA_DATEWEEKDAYSEL_DATE) || \
                                                  ((__SEL__) == LL_RTC_ALMA_DATEWEEKDAYSEL_WEEKDAY))
#define IS_LL_RTC_ALMA_MASK(__VALUE__) (((__VALUE__) == LL_RTC_ALMA_MASK_NONE) \
                                     || ((__VALUE__) == LL_RTC_ALMA_MASK_DATEWEEKDAY) \
                                     || ((__VALUE__) == LL_RTC_ALMA_MASK_HOURS) \
                                     || ((__VALUE__) == LL_RTC_ALMA_MASK_MINUTES) \
                                     || ((__VALUE__) == LL_RTC_ALMA_MASK_SECONDS) \
                                     || ((__VALUE__) == LL_RTC_ALMA_MASK_ALL))
#define IS_LL_RTC_ALMB_DATE_WEEKDAY_SEL(__SEL__) (((__SEL__) == LL_RTC_ALMB_DATEWEEKDAYSEL_DATE) || \
                                                  ((__SEL__) == LL_RTC_ALMB_DATEWEEKDAYSEL_WEEKDAY))
#define IS_LL_RTC_ALMB_MASK(__VALUE__) (((__VALUE__) == LL_RTC_ALMB_MASK_NONE) \
                                     || ((__VALUE__) == LL_RTC_ALMB_MASK_DATEWEEKDAY) \
                                     || ((__VALUE__) == LL_RTC_ALMB_MASK_HOURS) \
                                     || ((__VALUE__) == LL_RTC_ALMB_MASK_MINUTES) \
                                     || ((__VALUE__) == LL_RTC_ALMB_MASK_SECONDS) \
                                     || ((__VALUE__) == LL_RTC_ALMB_MASK_ALL))
#define IS_LL_RTC_ASYNCH_PREDIV(__VALUE__)   ((__VALUE__) <= 0x7FU)
#define IS_LL_RTC_DAY(__DAY__)    (((__DAY__) >= 1U) && ((__DAY__) <= 31U))
#define IS_LL_RTC_FORMAT(__VALUE__) (((__VALUE__) == LL_RTC_FORMAT_BIN) \
                                  || ((__VALUE__) == LL_RTC_FORMAT_BCD))
#define IS_LL_RTC_HOUR12(__HOUR__)            (((__HOUR__) > 0U) && ((__HOUR__) <= 12U))
#define IS_LL_RTC_HOUR24(__HOUR__)            ((__HOUR__) <= 23U)
#define IS_LL_RTC_HOURFORMAT(__VALUE__) (((__VALUE__) == LL_RTC_HOURFORMAT_24HOUR) \
                                      || ((__VALUE__) == LL_RTC_HOURFORMAT_AMPM))
#define IS_LL_RTC_MINUTES(__MINUTES__)        ((__MINUTES__) <= 59U)
#define IS_LL_RTC_MONTH(__VALUE__) (((__VALUE__) == LL_RTC_MONTH_JANUARY) \
                                 || ((__VALUE__) == LL_RTC_MONTH_FEBRUARY) \
                                 || ((__VALUE__) == LL_RTC_MONTH_MARCH) \
                                 || ((__VALUE__) == LL_RTC_MONTH_APRIL) \
                                 || ((__VALUE__) == LL_RTC_MONTH_MAY) \
                                 || ((__VALUE__) == LL_RTC_MONTH_JUNE) \
                                 || ((__VALUE__) == LL_RTC_MONTH_JULY) \
                                 || ((__VALUE__) == LL_RTC_MONTH_AUGUST) \
                                 || ((__VALUE__) == LL_RTC_MONTH_SEPTEMBER) \
                                 || ((__VALUE__) == LL_RTC_MONTH_OCTOBER) \
                                 || ((__VALUE__) == LL_RTC_MONTH_NOVEMBER) \
                                 || ((__VALUE__) == LL_RTC_MONTH_DECEMBER))
#define IS_LL_RTC_SECONDS(__SECONDS__)        ((__SECONDS__) <= 59U)
#define IS_LL_RTC_SYNCH_PREDIV(__VALUE__)    ((__VALUE__) <= 0x7FFFU)
#define IS_LL_RTC_TIME_FORMAT(__VALUE__) (((__VALUE__) == LL_RTC_TIME_FORMAT_AM_OR_24) \
                                       || ((__VALUE__) == LL_RTC_TIME_FORMAT_PM))
#define IS_LL_RTC_WEEKDAY(__VALUE__) (((__VALUE__) == LL_RTC_WEEKDAY_MONDAY) \
                                   || ((__VALUE__) == LL_RTC_WEEKDAY_TUESDAY) \
                                   || ((__VALUE__) == LL_RTC_WEEKDAY_WEDNESDAY) \
                                   || ((__VALUE__) == LL_RTC_WEEKDAY_THURSDAY) \
                                   || ((__VALUE__) == LL_RTC_WEEKDAY_FRIDAY) \
                                   || ((__VALUE__) == LL_RTC_WEEKDAY_SATURDAY) \
                                   || ((__VALUE__) == LL_RTC_WEEKDAY_SUNDAY))
#define IS_LL_RTC_YEAR(__YEAR__) ((__YEAR__) <= 99U)
#define assert_param(expr) ((void)0U)
