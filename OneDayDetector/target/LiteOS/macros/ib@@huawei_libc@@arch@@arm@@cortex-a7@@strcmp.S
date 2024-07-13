.macro compare_word_bytes offsetlo offsethi
    mov     r6, #0
    ldr     r5, [r1], 4
    .p2align        2
9:
    ldr     r3, [r0], 4
    and     r2, r3, r7, S2LOMEM #\offsetlo
    cmp     r2, r5, S2LOMEM #\offsetlo /* compare 4-offsetlo bytes. */
    ittt    eq
    uadd8eq r8, r3, r7
    seleq   r8, r6, r7 /* is there a zero byte in r3? */
    cmpeq   r8, #0 /* if r8 is not equal to 0, it has zero byte in r3.*/
    bne     10f
    ldr     r5, [r1], 4
    eor     r2, r2, r3
    cmp     r2, r5, S2HIMEM #\offsethi /* compare offsetlo bytes. */
    bne     11f
    b       9b
.endm
.macro find_zero_or_different_bytes w1 w2 branch
    uadd8 ip, \w1, r7
    eor   ip, \w1, \w2
    sel   ip, ip, r7
    cmp   ip, #0 /* there's a zero or a different byte in the word if ip is not equal to 0. */
    bne   \branch
.endm
