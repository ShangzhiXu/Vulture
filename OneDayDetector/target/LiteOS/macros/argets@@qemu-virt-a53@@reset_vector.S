.macro STACK_MAGIC_SET param0, param1, param2
    ldr     x0, =\param0
    mov     x2, \param1
    ldr     x1, =\param2
    bl      excstack_magic_set
.endm
