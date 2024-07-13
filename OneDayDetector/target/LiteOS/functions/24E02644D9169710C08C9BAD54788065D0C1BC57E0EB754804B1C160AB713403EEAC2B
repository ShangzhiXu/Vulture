static void cjson_add_item_to_object_should_not_use_after_free_when_string_is_aliased(void)
{
    cJSON *object = cJSON_CreateObject();
    cJSON *number = cJSON_CreateNumber(42);
    char *name = (char*)cJSON_strdup((const unsigned char*)"number", &global_hooks);

    TEST_ASSERT_NOT_NULL(object);
    TEST_ASSERT_NOT_NULL(number);
    TEST_ASSERT_NOT_NULL(name);

    number->string = name;

    /* The following should not have a use after free
     * that would show up in valgrind or with AddressSanitizer */
    cJSON_AddItemToObject(object, number->string, number);

    cJSON_Delete(object);
}
