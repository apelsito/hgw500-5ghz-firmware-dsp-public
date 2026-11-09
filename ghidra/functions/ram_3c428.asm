; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003c428 entry ram:0003c428
ram:0003c428	e1c5	push_s r13
ram:0003c42a	e1c6	push_s r14
ram:0003c42c	e1c7	push_s r15
ram:0003c42e	a1c1	sub_s sp,sp,0x4
ram:0003c430	eb77	mov_s r15,blink
ram:0003c432	cf7500e00400	mov_s r13,0xe0000004
ram:0003c438	b8150018	ld.di r0,[r13,0xb8]
ram:0003c43c	7580	ld_s r3,[r0,0x54]
ram:0003c43e	3023828f0000180e	ld.di r2,[r3, 0xe18]
ram:0003c446	870a9e02	bbit0 r2,0xa,0x0003c4ca
ram:0003c44a	b8150118	ld.di r1,[r13,0xb8]
ram:0003c44e	5581	ld_s r2,[r1,0x54]
ram:0003c450	3022828f0000140e	ld.di r2,[r2, 0xe14]
ram:0003c458	0eea	breq_s r2,0,0x0003c474
ram:0003c45a	b8150218	ld.di r2,[r13,0xb8]
ram:0003c45e	3582	ld_s r1,[r2,0x54]
ram:0003c460	3021818f0000140e	ld.di r1,[r1, 0xe14]
ram:0003c468	06e9	breq_s r1,0,0x0003c474
ram:0003c46a	cf700500f458	mov_s r0,0x558f4
ram:0003c470	fe0b0ff2	bl 0x0002086c
ram:0003c474	00de	mov_s r14,0x0
ram:0003c476	b8150318	ld.di r3,[r13,0xb8]
ram:0003c47a	1583	ld_s r0,[r3,0x54]
ram:0003c47c	3020838f0000140e	ld.di r3,[r0, 0xe14]
ram:0003c484	20eb	breq_s r3,0,0x0003c4c4
ram:0003c486	b8150018	ld.di r0,[r13,0xb8]
ram:0003c48a	7580	ld_s r3,[r0,0x54]
ram:0003c48c	3023808f0000140e	ld.di r0,[r3, 0xe14]
ram:0003c494	18e8	breq_s r0,0,0x0003c4c4
ram:0003c496	726e	asl_s r3,r14,0x2
ram:0003c498	757b	add2_s r3,r3,r3
ram:0003c49a	c7730b007c81	add_s r3,r3,0xb817c
ram:0003c4a0	10130400	ld r4,[r3,0x10]
ram:0003c4a4	00134501	ldh.x r5,[r3]
ram:0003c4a8	cf700500f858	mov_s r0,0x558f8
ram:0003c4ae	02134601	ldh.x r6,[r3,0x2]
ram:0003c4b2	239b	ldw_s.x r1,[r3,0x6]
ram:0003c4b4	04134701	ldh.x r7,[r3,0x4]
ram:0003c4b8	40c1	st_s r1,[sp,0x0]
ram:0003c4ba	449b	ldw_s.x r2,[r3,0x8]
ram:0003c4bc	c971	mov_s r1,r14
ram:0003c4be	b20b2ff2	bl.d 0x0002086c
ram:0003c4c2	6383	_ld_s r3,[r3,0xc]
ram:0003c4c4	01e6	add_s r14,r14,0x1
ram:0003c4c6	b30e1295	brlt r14,0x14,0x0003c476
ram:0003c4ca	fb77	mov_s blink,r15
ram:0003c4cc	a1c0	add_s sp,sp,0x4
ram:0003c4ce	c1c7	pop_s r15
ram:0003c4d0	c1c6	pop_s r14
ram:0003c4d2	e07f	j_s.d [blink]
ram:0003c4d4	c1c5	_pop_s r13
