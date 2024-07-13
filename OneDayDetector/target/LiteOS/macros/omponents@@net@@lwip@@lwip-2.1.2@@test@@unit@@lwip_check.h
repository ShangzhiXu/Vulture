#define EXPECT(x) fail_unless(x)
#define EXPECT_RET(x) do { fail_unless(x); if(!(x)) { return; }} while(0)
#define EXPECT_RETNULL(x) EXPECT_RETX(x, NULL)
#define EXPECT_RETX(x, y) do { fail_unless(x); if(!(x)) { return y; }} while(0)
#define FAIL_RET() do { fail(); return; } while(0)
#define SKIP_POOL(x) (1 << x)
#define TESTFUNC(x) {(x), "" # x "" }
#define tcase_add_named_test(tc,tf) \
   _tcase_add_test((tc),(tf).func,(tf).name,0, 0, 0, 1)
