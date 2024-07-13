static void cjson_create_string_reference_should_create_a_string_reference(void) {
    const char *string = "I am a string!";

    cJSON *string_reference = cJSON_CreateStringReference(string);
    TEST_ASSERT_TRUE(string_reference->valuestring == string);
    TEST_ASSERT_EQUAL_INT(cJSON_IsReference | cJSON_String, string_reference->type);

    cJSON_Delete(string_reference);
}
