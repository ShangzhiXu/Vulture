#define CHECK(condition)                               TEST_ASSERT_TRUE((condition))
#define DOUBLES_EQUAL(expected, actual, delta)         TEST_ASSERT_DOUBLE_WITHIN((delta), (expected), (actual))
#define FAIL(message)                                  TEST_FAIL_MESSAGE((message))
#define IGNORE_TEST(group, name) \
    void TEST_##group##_##name##_(void);\
    void TEST_##group##_##name##_run(void);\
    void TEST_##group##_##name##_run(void)\
    {\
        UnityIgnoreTest("IGNORE_TEST(" #group ", " #name ")", TEST_GROUP_##group, #name);\
    }\
    void TEST_##group##_##name##_(void)
#define LONGS_EQUAL(expected, actual)                  TEST_ASSERT_EQUAL_INT((expected), (actual))
#define RUN_TEST_CASE(group, name) \
    { void TEST_##group##_##name##_run(void);\
      TEST_##group##_##name##_run(); }
#define RUN_TEST_GROUP(group)\
    { void TEST_##group##_GROUP_RUNNER(void);\
      TEST_##group##_GROUP_RUNNER(); }
#define STRCMP_EQUAL(expected, actual)                 TEST_ASSERT_EQUAL_STRING((expected), (actual))
#define TEST(group, name) \
    void TEST_##group##_##name##_(void);\
    void TEST_##group##_##name##_run(void);\
    void TEST_##group##_##name##_run(void)\
    {\
        UnityTestRunner(TEST_##group##_SETUP,\
            TEST_##group##_##name##_,\
            TEST_##group##_TEAR_DOWN,\
            "TEST(" #group ", " #name ")",\
            TEST_GROUP_##group, #name,\
            __FILE__, __LINE__);\
    }\
    void  TEST_##group##_##name##_(void)
#define TEST_ASSERT_BYTES_EQUAL(expected, actual)      TEST_ASSERT_EQUAL_HEX8(0xff & (expected), 0xff & (actual))
#define TEST_ASSERT_POINTERS_EQUAL(expected, actual)   TEST_ASSERT_EQUAL_PTR((expected), (actual))
#define TEST_GROUP(group)\
    static const char* TEST_GROUP_##group = #group
#define TEST_GROUP_RUNNER(group)\
    void TEST_##group##_GROUP_RUNNER(void);\
    void TEST_##group##_GROUP_RUNNER(void)
#define TEST_SETUP(group) void TEST_##group##_SETUP(void);\
    void TEST_##group##_SETUP(void)
#define TEST_TEAR_DOWN(group) void TEST_##group##_TEAR_DOWN(void);\
    void TEST_##group##_TEAR_DOWN(void)
#define UT_PTR_SET(ptr, newPointerValue)               UnityPointer_Set((void**)&(ptr), (void*)(newPointerValue), __LINE__)
