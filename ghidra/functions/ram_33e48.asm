; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00033e48 entry ram:00033e48
ram:00033e48	e1c5	push_s r13
ram:00033e4a	e1c6	push_s r14
ram:00033e4c	e1c7	push_s r15
ram:00033e4e	fc1c08b4	st.aw r16,[sp,-0x4]
ram:00033e52	4876	mov_s r14,r2
ram:00033e54	4382	ld_s r2,[r2,0xc]
ram:00033e56	4a240000	mov r4,0x0
ram:00033e5a	0a20c027	mov r16,blink
ram:00033e5e	310a2401	brlo.d r2,r4,0x00033e8c
ram:00033e62	2875	_mov_s r13,r1
ram:00033e64	32200381	ldb.di r3,[r0, r4]
ram:00033e68	ffe3	cmp_s r3,0x7f
ram:00033e6a	2f210001	asl r1,r4
ram:00033e6e	10002c00	ble.d 0x00033e7c
ram:00033e72	b961	_add_s r1,r1,r13
ram:00033e74	0b002000	b.d 0x00033e7e
ram:00033e78	8223020a	_sub r3,r3,0xa8
ram:00033e7c	58e3	add_s r3,r3,0x58
ram:00033e7e	40244400	add r4,r4,0x1
ram:00033e82	2f240701	extb r4,r4
ram:00033e86	e10a2581	brhs.d r2,r4,0x00033e64
ram:00033e8a	60b1	_stw_s r3,[r1,0x0]
ram:00033e8c	cf7700e00400	mov_s r15,0xe0000004
ram:00033e92	b8170118	ld.di r1,[r15,0xb8]
ram:00033e96	7581	ld_s r3,[r1,0x54]
ram:00033e98	3023838f0000180e	ld.di r3,[r3, 0xe18]
ram:00033ea0	0b0b9f02	bbit1 r3,0xa,0x00033eaa
ram:00033ea4	53002000	b.d 0x00033ef6
ram:00033ea8	3296	_ldw_s r1,[r14,0x24]
ram:00033eaa	b8170118	ld.di r1,[r15,0xb8]
ram:00033eae	3581	ld_s r1,[r1,0x54]
ram:00033eb0	3021808f0000140e	ld.di r0,[r1, 0xe14]
ram:00033eb8	76e8	breq_s r0,0,0x00033ea4
ram:00033eba	b8170318	ld.di r3,[r15,0xb8]
ram:00033ebe	1583	ld_s r0,[r3,0x54]
ram:00033ec0	3020838f0000140e	ld.di r3,[r0, 0xe14]
ram:00033ec8	2f0b3000	breq.d r3,0x0,0x00033ef6
ram:00033ecc	3296	_ldw_s r1,[r14,0x24]
ram:00033ece	409d	ldw_s.x r2,[r13,0x0]
ram:00033ed0	619d	ldw_s.x r3,[r13,0x2]
ram:00033ed2	cf7005002457	mov_s r0,0x55724
ram:00033ed8	04154411	ldh.x r4,[r13,0x4]
ram:00033edc	06154511	ldh.x r5,[r13,0x6]
ram:00033ee0	42ba	asr_s r2,r2,0x2
ram:00033ee2	42bb	asr_s r3,r3,0x2
ram:00033ee4	422c8400	asr r4,r4,0x2
ram:00033ee8	86096ff6	bl.d 0x0002086c
ram:00033eec	422d8500	_asr r5,r5,0x2
ram:00033ef0	b507efff	b.d 0x00033ea4
ram:00033ef4	4386	_ld_s r2,[r14,0xc]
ram:00033ef6	2e78	sexw_s r0,r1
ram:00033ef8	e20d2004	bl.d 0x0003c4d8
ram:00033efc	a971	_mov_s r1,r13
ram:00033efe	b8170018	ld.di r0,[r15,0xb8]
ram:00033f02	1580	ld_s r0,[r0,0x54]
ram:00033f04	3020818f0000180e	ld.di r1,[r0, 0xe18]
ram:00033f0c	6b099e02	bbit0 r1,0xa,0x00033f76
ram:00033f10	b8170118	ld.di r1,[r15,0xb8]
ram:00033f14	7581	ld_s r3,[r1,0x54]
ram:00033f16	3023828f0000140e	ld.di r2,[r3, 0xe14]
ram:00033f1e	1cea	breq_s r2,0,0x00033f54
ram:00033f20	b8170218	ld.di r2,[r15,0xb8]
ram:00033f24	5582	ld_s r2,[r2,0x54]
ram:00033f26	3022838f0000140e	ld.di r3,[r2, 0xe14]
ram:00033f2e	14eb	breq_s r3,0,0x00033f54
ram:00033f30	409d	ldw_s.x r2,[r13,0x0]
ram:00033f32	619d	ldw_s.x r3,[r13,0x2]
ram:00033f34	cf7005005857	mov_s r0,0x55758
ram:00033f3a	04154411	ldh.x r4,[r13,0x4]
ram:00033f3e	06154511	ldh.x r5,[r13,0x6]
ram:00033f42	42ba	asr_s r2,r2,0x2
ram:00033f44	42bb	asr_s r3,r3,0x2
ram:00033f46	422c8400	asr r4,r4,0x2
ram:00033f4a	422d8500	asr r5,r5,0x2
ram:00033f4e	22096ff6	bl.d 0x0002086c
ram:00033f52	3296	_ldw_s r1,[r14,0x24]
ram:00033f54	b8170318	ld.di r3,[r15,0xb8]
ram:00033f58	1583	ld_s r0,[r3,0x54]
ram:00033f5a	3020808f0000180e	ld.di r0,[r0, 0xe18]
ram:00033f62	b8170318	ld.di r3,[r15,0xb8]
ram:00033f66	3583	ld_s r1,[r3,0x54]
ram:00033f68	aab8	bclr_s r0,r0,0xa
ram:00033f6a	00218c0f0000180e	add r12,r1,0xe18
ram:00033f72	001c2010	st.di r0,[r12]
ram:00033f76	0a270034	mov blink,r16
ram:00033f7a	04141034	ld.ab r16,[sp,0x4]
ram:00033f7e	c1c7	pop_s r15
ram:00033f80	c1c6	pop_s r14
ram:00033f82	e07f	j_s.d [blink]
ram:00033f84	c1c5	_pop_s r13
