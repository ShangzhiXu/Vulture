.macro  unaligned_bytes_compare offsetlo offsethi
        ldr     r4, [r1], #4
10:
        /* r1 is unaligned, so it need to execute lsr and lsl opts to get full four bytes. */
        mov     ip, r4, lsr \offsetlo
        ldr     r3, [r0], #4
        ldr     r4, [r1], #4
        orr     ip, ip, r4, lsl \offsethi
        eors    ip, r3, ip /* compare r3 and ip, if it is not equal to 0, go to compare bt byte-wise. */
        bne     12f
        moveq   ip, r4, lsr \offsetlo
        ldreq   r3, [r0], #4
        ldreq   r4, [r1], #4
        orreq   ip, ip, r4, lsl \offsethi
        eorseq  ip, r3, ip
        bne     11f
        subs    r2, r2, #8
        bhi     10b /* if size is bigger than 0, continuing 8-bytes comparison in a cycle. */
        cmp     r2, #0
        beq     8f
        add     r2, r2, #8 /* sub is executed once more and size needs to be added back. */
11:
        sub     r0, r0, #8
        sub     r1, r1, #8 /* reback the address because the ldr instruction will add address. */
        b       13f
12:
        sub     r0, r0, #4
        sub     r1, r1, #4
13: /* r1 is executed bic instruction to aligne address, so needs to reback the unaligned bytes. */
        rsb     r5, r5, #4
        sub     r1, r1, r5
        b       7f
.endm
