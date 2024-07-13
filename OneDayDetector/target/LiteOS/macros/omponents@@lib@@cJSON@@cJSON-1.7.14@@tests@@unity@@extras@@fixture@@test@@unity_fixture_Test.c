#define ASSIGN_VALUE(a)                    VAL_##a
#define EXPAND_AND_USE_2ND(a, b)           SECOND_PARAM(a, b, throwaway)
#define SECOND_PARAM(a, b, ...)            b
#define TEST_ASSERT_MEMORY_ALL_FREE_LIFO_ORDER(first_mem_ptr, ptr) \
    ptr = malloc(10); free(ptr);                                   \
    TEST_ASSERT_EQUAL_PTR_MESSAGE(first_mem_ptr, ptr, "Memory was stranded, free in LIFO order");
#define USING_SPY_AS(a)                    EXPAND_AND_USE_2ND(ASSIGN_VALUE(a), 0)
