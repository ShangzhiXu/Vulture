#define OS_STACK_MAGIC_CHECK(topstack) (*(UINTPTR *)(topstack) == OS_STACK_MAGIC_WORD) /* 1:magic valid 0:unvalid */
