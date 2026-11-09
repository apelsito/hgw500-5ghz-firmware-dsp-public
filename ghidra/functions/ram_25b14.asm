; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00025b14 entry ram:00025b14
ram:00025b14	e1c5	push_s r13
ram:00025b16	e1c6	push_s r14
ram:00025b18	eb76	mov_s r14,blink
ram:00025b1a	0871	mov_s r1,r0
ram:00025b1c	cf7500e00400	mov_s r13,0xe0000004
ram:00025b22	b8150018	ld.di r0,[r13,0xb8]
ram:00025b26	1580	ld_s r0,[r0,0x54]
ram:00025b28	20e9	breq_s r1,0,0x00025b68
ram:00025b2a	04da	mov_s r2,0x4
ram:00025b2c	0419a000	st.di r2,[r1,0x4]
ram:00025b30	0019a000	st.di r2,[r1]
ram:00025b34	5c110108	ld.di r1,[r1,0x5c]
ram:00025b38	22088ffe	bl 0x00022b58
ram:00025b3c	b8150218	ld.di r2,[r13,0xb8]
ram:00025b40	7582	ld_s r3,[r2,0x54]
ram:00025b42	3023818f00006810	ld.di r1,[r3, 0x1068]
ram:00025b4a	00238c0f00006810	add r12,r3,0x1068
ram:00025b52	cf70050000bf	mov_s r0,0x5bf00
ram:00025b58	01e1	add_s r1,r1,0x1
ram:00025b5a	001c6010	st.di r1,[r12]
ram:00025b5e	00100308	ld.di r3,[r0]
ram:00025b62	01e3	add_s r3,r3,0x1
ram:00025b64	0018e000	st.di r3,[r0]
ram:00025b68	fb76	mov_s blink,r14
ram:00025b6a	c1c6	pop_s r14
ram:00025b6c	e07f	j_s.d [blink]
ram:00025b6e	c1c5	_pop_s r13
