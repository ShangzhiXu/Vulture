.macro  DCACHE_LINE_SIZE, reg, tmp
    mrc     p15, 0, \tmp, c0, c0, 1
    lsr     \tmp, \tmp, #16
    and     \tmp, \tmp, #0xf
    mov     \reg, #4
    mov     \reg, \reg, lsl \tmp
.endm
