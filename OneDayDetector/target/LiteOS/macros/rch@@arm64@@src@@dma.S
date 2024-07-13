.macro CACHE_RANGE_OP, cache op
    bic     x3, x0, #(CACHE_LINE - 1)  /* align the start with a cache line */
.L_CACHE_RANGE_OP_LOOP\@:
    \cache  \op, x3
    add     x3, x3, #CACHE_LINE
    cmp     x3, x1
    blo     .L_CACHE_RANGE_OP_LOOP\@
    dsb     sy
.endm
