; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00023dc8 entry ram:00023dc8
ram:00023dc8	cf7305002049	mov_s r3,0x54920
ram:00023dce	1f0a7000	breq.d r2,0x1,0x00023dea
ram:00023dd2	84203f0f	_and r0,r0,-0x4
ram:00023dd6	230a9000	breq r2,0x2,0x00023df6
ram:00023dda	2b0ad000	breq r2,0x3,0x00023e02
ram:00023dde	4a240002	mov r4,0x8
ram:00023de2	2b002000	b.d 0x00023e0a
ram:00023de6	56238505	_add3 r5,r3,0x16
ram:00023dea	4a248000	mov r4,0x2
ram:00023dee	1f002000	b.d 0x00023e0a
ram:00023df2	56238502	_add3 r5,r3,0xa
ram:00023df6	4a240001	mov r4,0x4
ram:00023dfa	13002000	b.d 0x00023e0a
ram:00023dfe	56230503	_add3 r5,r3,0xc
ram:00023e02	4a248001	mov r4,0x6
ram:00023e06	56230504	add3 r5,r3,0x10
ram:00023e0a	29097400	brlo.d r1,0x1,0x00023e30
ram:00023e0e	4a260000	_mov r6,0x0
ram:00023e12	00db	mov_s r3,0x0
ram:00023e14	150b0501	brhs r3,r4,0x00023e28
ram:00023e18	526b	asl_s r2,r3,0x2
ram:00023e1a	01e3	add_s r3,r3,0x1
ram:00023e1c	30258200	ld r2,[r5, r2]
ram:00023e20	f90b2481	brlo.d r3,r4,0x00023e18
ram:00023e24	04189000	_st.ab r2,[r0,0x4]
ram:00023e28	40264600	add r6,r6,0x1
ram:00023e2c	e70e4480	brlo r6,r1,0x00023e12
ram:00023e30	e07e	j_s [blink]
