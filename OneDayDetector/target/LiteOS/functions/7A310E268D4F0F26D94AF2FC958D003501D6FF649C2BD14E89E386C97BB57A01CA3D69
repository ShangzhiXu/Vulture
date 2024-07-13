static void typecheck_functions_should_check_type(void)
{
    cJSON invalid[1];
    cJSON item[1];
    invalid->type = cJSON_Invalid;
    invalid->type |= cJSON_StringIsConst;
    item->type = cJSON_False;
    item->type |= cJSON_StringIsConst;

    TEST_ASSERT_FALSE(cJSON_IsInvalid(NULL));
    TEST_ASSERT_FALSE(cJSON_IsInvalid(item));
    TEST_ASSERT_TRUE(cJSON_IsInvalid(invalid));

    item->type = cJSON_False | cJSON_StringIsConst;
    TEST_ASSERT_FALSE(cJSON_IsFalse(NULL));
    TEST_ASSERT_FALSE(cJSON_IsFalse(invalid));
    TEST_ASSERT_TRUE(cJSON_IsFalse(item));
    TEST_ASSERT_TRUE(cJSON_IsBool(item));

    item->type = cJSON_True | cJSON_StringIsConst;
    TEST_ASSERT_FALSE(cJSON_IsTrue(NULL));
    TEST_ASSERT_FALSE(cJSON_IsTrue(invalid));
    TEST_ASSERT_TRUE(cJSON_IsTrue(item));
    TEST_ASSERT_TRUE(cJSON_IsBool(item));

    item->type = cJSON_NULL | cJSON_StringIsConst;
    TEST_ASSERT_FALSE(cJSON_IsNull(NULL));
    TEST_ASSERT_FALSE(cJSON_IsNull(invalid));
    TEST_ASSERT_TRUE(cJSON_IsNull(item));

    item->type = cJSON_Number | cJSON_StringIsConst;
    TEST_ASSERT_FALSE(cJSON_IsNumber(NULL));
    TEST_ASSERT_FALSE(cJSON_IsNumber(invalid));
    TEST_ASSERT_TRUE(cJSON_IsNumber(item));

    item->type = cJSON_String | cJSON_StringIsConst;
    TEST_ASSERT_FALSE(cJSON_IsString(NULL));
    TEST_ASSERT_FALSE(cJSON_IsString(invalid));
    TEST_ASSERT_TRUE(cJSON_IsString(item));

    item->type = cJSON_Array | cJSON_StringIsConst;
    TEST_ASSERT_FALSE(cJSON_IsArray(NULL));
    TEST_ASSERT_FALSE(cJSON_IsArray(invalid));
    TEST_ASSERT_TRUE(cJSON_IsArray(item));

    item->type = cJSON_Object | cJSON_StringIsConst;
    TEST_ASSERT_FALSE(cJSON_IsObject(NULL));
    TEST_ASSERT_FALSE(cJSON_IsObject(invalid));
    TEST_ASSERT_TRUE(cJSON_IsObject(item));

    item->type = cJSON_Raw | cJSON_StringIsConst;
    TEST_ASSERT_FALSE(cJSON_IsRaw(NULL));
    TEST_ASSERT_FALSE(cJSON_IsRaw(invalid));
    TEST_ASSERT_TRUE(cJSON_IsRaw(item));
}
