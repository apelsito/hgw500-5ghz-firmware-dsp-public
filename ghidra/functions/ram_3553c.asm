; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003553c entry ram:0003553c
ram:0003553c	a6c1	sub_s sp,sp,0x18
ram:0003553e	6382	ld_s r3,[r2,0xc]
ram:00035540	08e3	add_s r3,r3,0x8
ram:00035542	40c3	st_s r3,[sp,0x0]
ram:00035544	6482	ld_s r3,[r2,0x10]
ram:00035546	08e3	add_s r3,r3,0x8
ram:00035548	41c3	st_s r3,[sp,0x4]
ram:0003554a	6582	ld_s r3,[r2,0x14]
ram:0003554c	08e3	add_s r3,r3,0x8
ram:0003554e	42c3	st_s r3,[sp,0x8]
ram:00035550	6682	ld_s r3,[r2,0x18]
ram:00035552	08e3	add_s r3,r3,0x8
ram:00035554	43c3	st_s r3,[sp,0xc]
ram:00035556	6782	ld_s r3,[r2,0x1c]
ram:00035558	08e3	add_s r3,r3,0x8
ram:0003555a	4882	ld_s r2,[r2,0x20]
ram:0003555c	44c3	st_s r3,[sp,0x10]
ram:0003555e	4a220010	mov r10,0x0
ram:00035562	0a23801f05007c4d	mov r11,0x54d7c
ram:0003556a	40220302	add r3,r2,0x8
ram:0003556e	45c3	st_s r3,[sp,0x14]
ram:00035570	7369	asl_s r3,r1,0x3
ram:00035572	402a8210	asl r2,r10,0x2
ram:00035576	00238410	add r4,r11,r2
ram:0003557a	18140400	ld r4,[r4,0x18]
ram:0003557e	30238110	ld r1,[r11, r2]
ram:00035582	4a270000	mov r7,0x0
ram:00035586	30248930	ld r9,[sp, r2]
ram:0003558a	00244400	add r4,r4,r1
ram:0003558e	2f22c001	asl r2,r7
ram:00035592	7a62	add_s r2,r2,r3
ram:00035594	302a3e01	mululw 0,r2,r4
ram:00035598	362a3e01	machlw 0,r2,r4
ram:0003559c	00214572	add r5,mlo,r9
ram:000355a0	2b0c7200	brlt.d r4,0x1,0x000355ca
ram:000355a4	4a260000	_mov r6,0x0
ram:000355a8	402f8800	asl r8,r7,0x2
ram:000355ac	00208111	add r1,r8,r6
ram:000355b0	02b9	asl_s r1,r1,0x2
ram:000355b2	35204200	ldh.x r2,[r0, r1]
ram:000355b6	40264600	add r6,r6,0x1
ram:000355ba	1961	add_s r1,r1,r0
ram:000355bc	011d9200	stb.ab r2,[r5,0x1]
ram:000355c0	2199	ldw_s.x r1,[r1,0x2]
ram:000355c2	ed0e2281	brlt.d r6,r4,0x000355ac
ram:000355c6	011d5200	_stb.ab r1,[r5,0x1]
ram:000355ca	40274700	add r7,r7,0x1
ram:000355ce	c30f1281	brlt r7,0x4,0x0003558e
ram:000355d2	40224a10	add r10,r10,0x1
ram:000355d6	9f0a9291	brlt r10,0x6,0x00035572
ram:000355da	e07f	j_s.d [blink]
ram:000355dc	a6c0	_add_s sp,sp,0x18
