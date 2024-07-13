#define TEST_ASSERT_EQUAL_EXAMPLE_STRUCT_T(expected, actual) UNITY_TEST_ASSERT_EQUAL_EXAMPLE_STRUCT_T(expected, actual, __LINE__, NULL);
#define UNITY_TEST_ASSERT_EQUAL_EXAMPLE_STRUCT_T(expected, actual, line, message) AssertEqualExampleStruct(expected, actual, line);
