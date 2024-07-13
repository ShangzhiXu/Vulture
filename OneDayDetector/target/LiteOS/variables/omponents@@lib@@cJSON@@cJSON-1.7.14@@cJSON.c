    void (CJSON_CDECL *deallocate)(void *pointer);
    void *(CJSON_CDECL *allocate)(size_t size);
    void *(CJSON_CDECL *reallocate)(void *pointer, size_t size);
    unsigned char *buffer;
    const unsigned char *content;
    size_t depth; /* How deeply nested (in arrays/objects) is the input at the current offset. */
    size_t depth; /* current nesting depth (for formatted printing) */
    cJSON_bool format; /* is this print a formatted print */
    internal_hooks hooks;
    internal_hooks hooks;
    const unsigned char *json;
    size_t length;
    size_t length;
    cJSON_bool noalloc;
    size_t offset;
    size_t offset;
    size_t position;
