.macro cache_range_op, cache op
    bic     x3, x0, #(CACHE_LINE-1) /* align the start with a cache line */
.Lcache_range_op_loop\@:
    \cache  \op, x3
    add     x3, x3, #CACHE_LINE
    cmp     x3, x1
    blo     .Lcache_range_op_loop\@
    dsb     sy
.endm
