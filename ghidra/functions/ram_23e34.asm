; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00023e34 entry ram:00023e34
ram:00023e34	e1c5	push_s r13
ram:00023e36	e1c6	push_s r14
ram:00023e38	e1c7	push_s r15
ram:00023e3a	fc1c08b4	st.aw r16,[sp,-0x4]
ram:00023e3e	fc1c48b4	st.aw r17,[sp,-0x4]
ram:00023e42	a2c1	sub_s sp,sp,0x8
ram:00023e44	0a21c027	mov r17,blink
ram:00023e48	cf7700e00400	mov_s r15,0xe0000004
ram:00023e4e	b8170218	ld.di r2,[r15,0xb8]
ram:00023e52	5582	ld_s r2,[r2,0x54]
ram:00023e54	2876	mov_s r14,r1
ram:00023e56	3022818f0000180e	ld.di r1,[r2, 0xe18]
ram:00023e5e	1a70	mov_s r16,r0
ram:00023e60	9f093e03	bbit0.d r1,0xc,0x00023efe
ram:00023e64	00dd	_mov_s r13,0x0
ram:00023e66	b8170118	ld.di r1,[r15,0xb8]
ram:00023e6a	1581	ld_s r0,[r1,0x54]
ram:00023e6c	3020838f0000180e	ld.di r3,[r0, 0xe18]
ram:00023e74	b8170218	ld.di r2,[r15,0xb8]
ram:00023e78	3582	ld_s r1,[r2,0x54]
ram:00023e7a	acbb	bclr_s r3,r3,0xc
ram:00023e7c	00218c0f0000180e	add r12,r1,0xe18
ram:00023e84	001ce010	st.di r3,[r12]
ram:00023e88	770e5210	brlt r14,0x1,0x00023efe
ram:00023e8c	b8170318	ld.di r3,[r15,0xb8]
ram:00023e90	7583	ld_s r3,[r3,0x54]
ram:00023e92	3023808f0000140e	ld.di r0,[r3, 0xe14]
ram:00023e9a	30e8	breq_s r0,0,0x00023ef8
ram:00023e9c	b8170018	ld.di r0,[r15,0xb8]
ram:00023ea0	5580	ld_s r2,[r0,0x54]
ram:00023ea2	3022828f0000140e	ld.di r2,[r2, 0xe14]
ram:00023eaa	28ea	breq_s r2,0,0x00023ef8
ram:00023eac	cf7005008452	mov_s r0,0x55284
ram:00023eb2	402d4811	asl r8,r13,0x5
ram:00023eb6	30200222	ld r2,[r16, r8]
ram:00023eba	00200322	add r3,r16,r8
ram:00023ebe	6183	ld_s r3,[r3,0x4]
ram:00023ec0	00200422	add r4,r16,r8
ram:00023ec4	08140400	ld r4,[r4,0x8]
ram:00023ec8	00200522	add r5,r16,r8
ram:00023ecc	0c150500	ld r5,[r5,0xc]
ram:00023ed0	00200622	add r6,r16,r8
ram:00023ed4	00200722	add r7,r16,r8
ram:00023ed8	00200122	add r1,r16,r8
ram:00023edc	2681	ld_s r1,[r1,0x18]
ram:00023ede	14170700	ld r7,[r7,0x14]
ram:00023ee2	00200814	add r8,r8,r16
ram:00023ee6	40c1	st_s r1,[sp,0x0]
ram:00023ee8	1c100110	ld r1,[r8,0x1c]
ram:00023eec	10160600	ld r6,[r6,0x10]
ram:00023ef0	41c1	st_s r1,[sp,0x4]
ram:00023ef2	7e096ffe	bl.d 0x0002086c
ram:00023ef6	a971	_mov_s r1,r13
ram:00023ef8	01e5	add_s r13,r13,0x1
ram:00023efa	950d8293	brlt r13,r14,0x00023e8c
ram:00023efe	0a274034	mov blink,r17
ram:00023f02	a2c0	add_s sp,sp,0x8
ram:00023f04	04141134	ld.ab r17,[sp,0x4]
ram:00023f08	04141034	ld.ab r16,[sp,0x4]
ram:00023f0c	c1c7	pop_s r15
ram:00023f0e	c1c6	pop_s r14
ram:00023f10	e07f	j_s.d [blink]
ram:00023f12	c1c5	_pop_s r13
