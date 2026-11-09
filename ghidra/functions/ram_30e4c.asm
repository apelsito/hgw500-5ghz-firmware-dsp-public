; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00030e4c entry ram:00030e4c
ram:00030e4c	0a21c017	mov r9,blink
ram:00030e50	b870	mov_s r5,r0
ram:00030e52	9871	mov_s r4,r1
ram:00030e54	40210304	add r3,r1,0x10
ram:00030e58	f10ab200	brlt.d r2,0x2,0x00030f48
ram:00030e5c	4a260000	_mov r6,0x0
ram:00030e60	00144201	ldh.x r2,[r4]
ram:00030e64	209b	ldw_s.x r1,[r3,0x0]
ram:00030e66	402e8800	asl r8,r6,0x2
ram:00030e6a	30250702	ld r7,[r5, r8]
ram:00030e6e	48ba	asr_s r2,r2,0x8
ram:00030e70	48b9	asr_s r1,r1,0x8
ram:00030e72	1cb9	asl_s r1,r1,0x1c
ram:00030e74	001f8200	stb r2,[r7]
ram:00030e78	02144201	ldh.x r2,[r4,0x2]
ram:00030e7c	30250702	ld r7,[r5, r8]
ram:00030e80	5cb9	asr_s r1,r1,0x1c
ram:00030e82	48ba	asr_s r2,r2,0x8
ram:00030e84	011f8200	stb r2,[r7,0x1]
ram:00030e88	30250702	ld r7,[r5, r8]
ram:00030e8c	e870	mov_s r0,r7
ram:00030e8e	3a0ae007	bl.d 0x000408c4
ram:00030e92	40240401	_add r4,r4,0x4
ram:00030e96	209b	ldw_s.x r1,[r3,0x0]
ram:00030e98	30250702	ld r7,[r5, r8]
ram:00030e9c	4cb9	asr_s r1,r1,0xc
ram:00030e9e	1cb9	asl_s r1,r1,0x1c
ram:00030ea0	5cb9	asr_s r1,r1,0x1c
ram:00030ea2	40270001	add r0,r7,0x4
ram:00030ea6	0a0ae007	bl.d 0x000408ac
ram:00030eaa	40264600	_add r6,r6,0x1
ram:00030eae	419b	ldw_s.x r2,[r3,0x2]
ram:00030eb0	30250702	ld r7,[r5, r8]
ram:00030eb4	48ba	asr_s r2,r2,0x8
ram:00030eb6	402a0106	asl r1,r2,0x18
ram:00030eba	58b9	asr_s r1,r1,0x18
ram:00030ebc	40270001	add r0,r7,0x4
ram:00030ec0	360ae007	bl.d 0x000408f4
ram:00030ec4	04e3	_add_s r3,r3,0x4
ram:00030ec6	9d0e9280	brlt r6,0x2,0x00030e60
ram:00030eca	4a268000	mov r6,0x2
ram:00030ece	00144201	ldh.x r2,[r4]
ram:00030ed2	402e8800	asl r8,r6,0x2
ram:00030ed6	30250702	ld r7,[r5, r8]
ram:00030eda	48ba	asr_s r2,r2,0x8
ram:00030edc	402a0106	asl r1,r2,0x18
ram:00030ee0	58b9	asr_s r1,r1,0x18
ram:00030ee2	40270001	add r0,r7,0x4
ram:00030ee6	d609e007	bl.d 0x000408b8
ram:00030eea	40264600	_add r6,r6,0x1
ram:00030eee	02144201	ldh.x r2,[r4,0x2]
ram:00030ef2	30250702	ld r7,[r5, r8]
ram:00030ef6	48ba	asr_s r2,r2,0x8
ram:00030ef8	402a0106	asl r1,r2,0x18
ram:00030efc	58b9	asr_s r1,r1,0x18
ram:00030efe	40270001	add r0,r7,0x4
ram:00030f02	de09e007	bl.d 0x000408dc
ram:00030f06	40240401	_add r4,r4,0x4
ram:00030f0a	209b	ldw_s.x r1,[r3,0x0]
ram:00030f0c	30250702	ld r7,[r5, r8]
ram:00030f10	48b9	asr_s r1,r1,0x8
ram:00030f12	1cb9	asl_s r1,r1,0x1c
ram:00030f14	5cb9	asr_s r1,r1,0x1c
ram:00030f16	40270001	add r0,r7,0x4
ram:00030f1a	d209e007	bl.d 0x000408e8
ram:00030f1e	4c260081	_cmp r6,0x4
ram:00030f22	209b	ldw_s.x r1,[r3,0x0]
ram:00030f24	30250702	ld r7,[r5, r8]
ram:00030f28	4cb9	asr_s r1,r1,0xc
ram:00030f2a	1cb9	asl_s r1,r1,0x1c
ram:00030f2c	5cb9	asr_s r1,r1,0x1c
ram:00030f2e	e870	mov_s r0,r7
ram:00030f30	a209c007	bl 0x000408d0
ram:00030f34	419b	ldw_s.x r2,[r3,0x2]
ram:00030f36	30250702	ld r7,[r5, r8]
ram:00030f3a	48ba	asr_s r2,r2,0x8
ram:00030f3c	031f8200	stb r2,[r7,0x3]
ram:00030f40	8e07ebff	blt.d 0x00030ece
ram:00030f44	04e3	_add_s r3,r3,0x4
ram:00030f46	61f0	b_s 0x00031006
ram:00030f48	c873	mov_s r3,r6
ram:00030f4a	00144201	ldh.x r2,[r4]
ram:00030f4e	402e8800	asl r8,r6,0x2
ram:00030f52	30250702	ld r7,[r5, r8]
ram:00030f56	48ba	asr_s r2,r2,0x8
ram:00030f58	001f8200	stb r2,[r7]
ram:00030f5c	02144201	ldh.x r2,[r4,0x2]
ram:00030f60	30250702	ld r7,[r5, r8]
ram:00030f64	48ba	asr_s r2,r2,0x8
ram:00030f66	011f8200	stb r2,[r7,0x1]
ram:00030f6a	30250702	ld r7,[r5, r8]
ram:00030f6e	00d9	mov_s r1,0x0
ram:00030f70	e870	mov_s r0,r7
ram:00030f72	5609e007	bl.d 0x000408c4
ram:00030f76	40240401	_add r4,r4,0x4
ram:00030f7a	30250702	ld r7,[r5, r8]
ram:00030f7e	40270001	add r0,r7,0x4
ram:00030f82	2e09e007	bl.d 0x000408ac
ram:00030f86	40264600	_add r6,r6,0x1
ram:00030f8a	30250702	ld r7,[r5, r8]
ram:00030f8e	40270001	add r0,r7,0x4
ram:00030f92	6609e007	bl.d 0x000408f4
ram:00030f96	4c268080	_cmp r6,0x2
ram:00030f9a	b207cbff	blt 0x00030f4a
ram:00030f9e	4a268000	mov r6,0x2
ram:00030fa2	00144201	ldh.x r2,[r4]
ram:00030fa6	402e8800	asl r8,r6,0x2
ram:00030faa	30250702	ld r7,[r5, r8]
ram:00030fae	48ba	asr_s r2,r2,0x8
ram:00030fb0	402a0106	asl r1,r2,0x18
ram:00030fb4	58b9	asr_s r1,r1,0x18
ram:00030fb6	40270001	add r0,r7,0x4
ram:00030fba	0209e007	bl.d 0x000408b8
ram:00030fbe	40264600	_add r6,r6,0x1
ram:00030fc2	02144201	ldh.x r2,[r4,0x2]
ram:00030fc6	30250702	ld r7,[r5, r8]
ram:00030fca	48ba	asr_s r2,r2,0x8
ram:00030fcc	402a0106	asl r1,r2,0x18
ram:00030fd0	58b9	asr_s r1,r1,0x18
ram:00030fd2	40270001	add r0,r7,0x4
ram:00030fd6	0a09e007	bl.d 0x000408dc
ram:00030fda	40240401	_add r4,r4,0x4
ram:00030fde	30250702	ld r7,[r5, r8]
ram:00030fe2	00d9	mov_s r1,0x0
ram:00030fe4	40270001	add r0,r7,0x4
ram:00030fe8	0209e007	bl.d 0x000408e8
ram:00030fec	4c260081	_cmp r6,0x4
ram:00030ff0	30250702	ld r7,[r5, r8]
ram:00030ff4	e870	mov_s r0,r7
ram:00030ff6	de08c007	bl 0x000408d0
ram:00030ffa	30250702	ld r7,[r5, r8]
ram:00030ffe	a607ebff	blt.d 0x00030fa2
ram:00031002	031fc200	_stb r3,[r7,0x3]
ram:00031006	0a274032	mov blink,r9
ram:0003100a	e07f	j_s.d [blink]
ram:0003100c	00d8	_mov_s r0,0x0
