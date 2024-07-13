static void cjson_set_number_value_should_set_numbers(void)
{
    cJSON number[1] = {{NULL, NULL, NULL, cJSON_Number, NULL, 0, 0, NULL}};

    cJSON_SetNumberValue(number, 1.5);
    TEST_ASSERT_EQUAL(1, number->valueint);
    TEST_ASSERT_EQUAL_DOUBLE(1.5, number->valuedouble);

    cJSON_SetNumberValue(number, -1.5);
    TEST_ASSERT_EQUAL(-1, number->valueint);
    TEST_ASSERT_EQUAL_DOUBLE(-1.5, number->valuedouble);

    cJSON_SetNumberValue(number, 1 + (double)INT_MAX);
    TEST_ASSERT_EQUAL(INT_MAX, number->valueint);
    TEST_ASSERT_EQUAL_DOUBLE(1 + (double)INT_MAX, number->valuedouble);

    cJSON_SetNumberValue(number, -1 + (double)INT_MIN);
    TEST_ASSERT_EQUAL(INT_MIN, number->valueint);
    TEST_ASSERT_EQUAL_DOUBLE(-1 + (double)INT_MIN, number->valuedouble);
}
