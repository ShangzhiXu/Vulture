.macro FPU_POP ra, rb
    ldp     \ra, \rb, [sp], #32
.endm
.macro FPU_PUSH ra, rb
    stp     \ra, \rb, [sp, #-32]!
.endm
#define FUNCTION(x) .global x; .text; x:
.macro POP reg1, reg2
    ldp     \reg1, \reg2, [sp], #16
.endm
.macro PUSH reg1, reg2
    stp     \reg1, \reg2, [sp, #-16]!
.endm
