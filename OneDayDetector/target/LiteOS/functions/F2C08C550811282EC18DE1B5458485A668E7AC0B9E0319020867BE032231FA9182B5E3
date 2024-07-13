static void cjson_get_object_item_case_sensitive_should_not_crash_with_array(void) {
    cJSON *array = NULL;
    cJSON *found = NULL;
    array = cJSON_Parse("[1]");

    found = cJSON_GetObjectItemCaseSensitive(array, "name");
    TEST_ASSERT_NULL(found);

    cJSON_Delete(array);
}
