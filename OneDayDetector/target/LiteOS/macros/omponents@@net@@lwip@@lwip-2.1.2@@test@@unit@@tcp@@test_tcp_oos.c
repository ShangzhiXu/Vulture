#define EXPECT_OOSEQ(x) EXPECT(x)
#define EXPECT_OOSEQ(x)
#define FIN_TEST(name, num) \
  START_TEST(name) \
  { \
    LWIP_UNUSED_ARG(_i); \
    test_tcp_recv_ooseq_double_FINs(num); \
  } \
  END_TEST
