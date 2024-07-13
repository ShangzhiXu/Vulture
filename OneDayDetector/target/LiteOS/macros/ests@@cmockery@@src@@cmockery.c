#define ARRAY_LENGTH(x) (sizeof(x) / sizeof((x)[0]))
#define EXCEPTION_CODE_INFO(exception_code) {exception_code, #exception_code}
#define cast_largest_integral_type_to_pointer( \
    pointer_type, largest_integral_type) \
    ((pointer_type)((ValuePointer*)&(largest_integral_type))->pointer)
#define declare_initialize_value_pointer_pointer(name, ptr) \
    ValuePointer name ; \
    name.value = 0; \
    name.pointer = (void*)(ptr)
#define declare_initialize_value_pointer_value(name, val) \
    ValuePointer name ; \
    name.value = val
