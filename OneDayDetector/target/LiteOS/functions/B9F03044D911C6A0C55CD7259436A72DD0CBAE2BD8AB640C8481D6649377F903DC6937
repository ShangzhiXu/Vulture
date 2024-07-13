static void cjson_create_object_reference_should_create_an_object_reference(void) {
    cJSON *number_reference = NULL;
    cJSON *number_object = cJSON_CreateObject();
    cJSON *number = cJSON_CreateNumber(42);
    const char key[] = "number";

    TEST_ASSERT_TRUE(cJSON_IsNumber(number));
    TEST_ASSERT_TRUE(cJSON_IsObject(number_object));
    cJSON_AddItemToObjectCS(number_object, key, number);

    number_reference = cJSON_CreateObjectReference(number);
    TEST_ASSERT_TRUE(number_reference->child == number);
    TEST_ASSERT_EQUAL_INT(cJSON_Object | cJSON_IsReference, number_reference->type);

    cJSON_Delete(number_object);
    cJSON_Delete(number_reference);
}
