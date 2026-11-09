; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0002c580 entry ram:0002c580
ram:0002c580	402d8700	asl r7,r5,0x2
ram:0002c584	42270701	sub r7,r7,0x4
ram:0002c588	42244400	sub r4,r4,0x1
ram:0002c58c	0024c401	add r4,r4,r7
ram:0002c590	0a22801f0500584a	mov r10,0x54a58
ram:0002c598	32220711	ldb r7,[r10, r4]
ram:0002c59c	4a260000	mov r6,0x0
ram:0002c5a0	490ee301	brge.d r6,r7,0x0002c5e8
ram:0002c5a4	0a208011	_mov r8,r6
ram:0002c5a8	402d0401	asl r4,r5,0x4
ram:0002c5ac	42240404	sub r4,r4,0x10
ram:0002c5b0	0a21801f05007059	mov r9,0x55970
ram:0002c5b8	00240502	add r5,r4,r8
ram:0002c5bc	00258502	add r5,r5,r10
ram:0002c5c0	40158500	ldb r5,[r5,0x40]
ram:0002c5c4	110d5100	brne r5,0x1,0x0002c5d4
ram:0002c5c8	3221c510	ldb r5,[r9, r3]
ram:0002c5cc	11002000	b.d 0x0002c5dc
ram:0002c5d0	42258500	_sub r5,r5,0x2
ram:0002c5d4	0d0d1100	brne r5,0x0,0x0002c5e0
ram:0002c5d8	3221c510	ldb r5,[r9, r3]
ram:0002c5dc	00264601	add r6,r6,r5
ram:0002c5e0	40204810	add r8,r8,0x1
ram:0002c5e4	d508c291	brlt r8,r7,0x0002c5b8
ram:0002c5e8	6082	ld_s r3,[r2,0x0]
ram:0002c5ea	c073	add_s r3,r3,r6
ram:0002c5ec	9a6b	asr_s r12,r3,0x2
ram:0002c5ee	3dbc	lsr_s r12,r12,0x1d
ram:0002c5f0	0024c510	add r5,r12,r3
ram:0002c5f4	53258500	bmsk r5,r5,0x2
ram:0002c5f8	02250583	sub.f r5,r5,r12
ram:0002c5fc	0c002200	bne.d 0x0002c608
ram:0002c600	43bb	_asr_s r3,r3,0x3
ram:0002c602	0d002000	b.d 0x0002c60c
ram:0002c606	9873	_mov_s r4,r3
ram:0002c608	40234400	add r4,r3,0x1
ram:0002c60c	6080	ld_s r3,[r0,0x0]
ram:0002c60e	4a204010	mov r8,0x1
ram:0002c612	0013c700	ldb.x r7,[r3]
ram:0002c616	00118600	ldb r6,[r1]
ram:0002c61a	0526c601	or r6,r6,r7
ram:0002c61e	011b9201	stb.ab r6,[r3,0x1]
ram:0002c622	1b082311	brge.d r8,r4,0x0002c63a
ram:0002c626	60a0	_st_s r3,[r0,0x0]
ram:0002c628	32210602	ldb r6,[r1, r8]
ram:0002c62c	40204810	add r8,r8,0x1
ram:0002c630	f9082291	brlt.d r8,r4,0x0002c628
ram:0002c634	011b9201	_stb.ab r6,[r3,0x1]
ram:0002c638	60a0	st_s r3,[r0,0x0]
ram:0002c63a	0b0d5200	brlt r5,0x1,0x0002c642
ram:0002c63e	61bb	sub_s r3,r3,0x1
ram:0002c640	60a0	st_s r3,[r0,0x0]
ram:0002c642	e07f	j_s.d [blink]
ram:0002c644	001a4001	_st r5,[r2]
