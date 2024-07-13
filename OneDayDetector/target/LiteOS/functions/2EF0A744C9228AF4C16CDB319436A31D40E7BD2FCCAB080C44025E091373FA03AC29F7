static void cjson_create_array_reference_should_create_an_array_reference(void) {
    cJSON *number_reference = NULL;
    cJSON *number_array = cJSON_CreateArray();
    cJSON *number = cJSON_CreateNumber(42);

    TEST_ASSERT_TRUE(cJSON_IsNumber(number));
    TEST_ASSERT_TRUE(cJSON_IsArray(number_array));
    cJSON_AddItemToArray(number_array, number);

    number_reference = cJSON_CreateArrayReference(number);
    TEST_ASSERT_TRUE(number_reference->child == number);
    TEST_ASSERT_EQUAL_INT(cJSON_Array | cJSON_IsReference, number_reference->type);

    cJSON_Delete(number_array);
    cJSON_Delete(number_reference);
}
