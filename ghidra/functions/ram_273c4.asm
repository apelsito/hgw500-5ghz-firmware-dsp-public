; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000273c4 entry ram:000273c4
ram:000273c4	0016867005006859	ldb r6,[0x55968]
ram:000273cc	00da	mov_s r2,0x0
ram:000273ce	4f0a8301	brge r2,r6,0x0002741a
ram:000273d2	0a20801f0b000025	mov r8,0xb2500
ram:000273da	0a27800f0b003c07	mov r7,0xb073c
ram:000273e2	00208410	add r4,r8,r2
ram:000273e6	1c148480	ldb r4,[r4,-0xe4]
ram:000273ea	402cc300	asl r3,r4,0x3
ram:000273ee	02230301	sub r3,r3,r4
ram:000273f2	04bb	asl_s r3,r3,0x4
ram:000273f4	3427c400	ldh r4,[r7, r3]
ram:000273f8	0f082101	brne.d r0,r4,0x00027406
ram:000273fc	e073	_add_s r3,r3,r7
ram:000273fe	02130501	ldh r5,[r3,0x2]
ram:00027402	21094001	breq r1,r5,0x00027420
ram:00027406	0f090101	brne r1,r4,0x00027412
ram:0002740a	02130501	ldh r5,[r3,0x2]
ram:0002740e	15084001	breq r0,r5,0x00027420
ram:00027412	01e2	add_s r2,r2,0x1
ram:00027414	4f7a	extb_s r2,r2
ram:00027416	cf0a8281	brlt r2,r6,0x000273e2
ram:0002741a	0b002000	b.d 0x00027422
ram:0002741e	42d8	_mov_s r0,0x42
ram:00027420	4870	mov_s r0,r2
ram:00027422	e07e	j_s [blink]
