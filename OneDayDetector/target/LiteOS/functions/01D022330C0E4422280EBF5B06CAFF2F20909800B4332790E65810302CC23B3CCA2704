static void skip_utf8_bom_should_not_skip_bom_if_not_at_beginning(void)
{
    const unsigned char string[] = " \xEF\xBB\xBF{}";
    parse_buffer buffer = { 0, 0, 0, 0, { 0, 0, 0 } };
    buffer.content = string;
    buffer.length = sizeof(string);
    buffer.hooks = global_hooks;
    buffer.offset = 1;

    TEST_ASSERT_NULL(skip_utf8_bom(&buffer));
}
