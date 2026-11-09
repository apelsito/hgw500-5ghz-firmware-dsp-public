; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00025e54 entry ram:00025e54
ram:00025e54	00db	mov_s r3,0x0
ram:00025e56	0a27800f06005c22	mov r7,0x6225c
ram:00025e5e	0a26800f0600c020	mov r6,0x620c0
ram:00025e66	536b	asl_s r2,r3,0x3
ram:00025e68	557a	add2_s r2,r2,r2
ram:00025e6a	00278400	add r4,r7,r2
ram:00025e6e	c4148480	ldb r4,[r4,-0x3c]
ram:00025e72	1f0c1000	breq r4,0x0,0x00025e8e
ram:00025e76	00268500	add r5,r6,r2
ram:00025e7a	b2150507	ldh.as r5,[r5,0xb2]
ram:00025e7e	13086101	brne.d r0,r5,0x00025e8e
ram:00025e82	00268400	_add r4,r6,r2
ram:00025e86	b3140407	ldh.as r4,[r4,0xb3]
ram:00025e8a	13090001	breq r1,r4,0x00025e9a
ram:00025e8e	01e3	add_s r3,r3,0x1
ram:00025e90	d70bd280	brlt r3,0x3,0x00025e66
ram:00025e94	0d002000	b.d 0x00025ea0
ram:00025e98	00d8	_mov_s r0,0x0
ram:00025e9a	4227000f	sub r0,r7,0x3c
ram:00025e9e	5860	add_s r0,r0,r2
ram:00025ea0	e07e	j_s [blink]
