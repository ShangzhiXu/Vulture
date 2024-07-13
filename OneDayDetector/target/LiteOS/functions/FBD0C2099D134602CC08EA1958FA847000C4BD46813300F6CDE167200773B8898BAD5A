static void cjson_get_string_value_should_get_a_string(void)
{
    cJSON *string = cJSON_CreateString("test");
    cJSON *number = cJSON_CreateNumber(1);

    TEST_ASSERT_TRUE(cJSON_GetStringValue(string) == string->valuestring);
    TEST_ASSERT_NULL(cJSON_GetStringValue(number));
    TEST_ASSERT_NULL(cJSON_GetStringValue(NULL));

    cJSON_Delete(number);
    cJSON_Delete(string);
}
