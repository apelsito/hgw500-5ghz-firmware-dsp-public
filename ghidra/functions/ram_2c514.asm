; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0002c514 entry ram:0002c514
ram:0002c514	53208201	bmsk r2,r0,0x6
ram:0002c518	27b8	lsr_s r0,r0,0x7
ram:0002c51a	c1b8	bmsk_s r0,r0,0x1
ram:0002c51c	61081501	brhs r0,0x4,0x0002c57c
ram:0002c520	f0260c70020030c5	ld.as r12,[0x2c530, r0]
ram:0002c528	cf730500584a	mov_s r3,0x54a58
ram:0002c52e	007c	j_s [r12]
ram:0002c540	0e22810f00008000	rsub r1,r2,0x80
ram:0002c548	02b9	asl_s r1,r1,0x2
ram:0002c54a	3b63	add_s r3,r3,r1
ram:0002c54c	e07f	j_s.d [blink]
ram:0002c54e	80130000	_ld r0,[r3,0x80]
ram:0002c552	02ba	asl_s r2,r2,0x2
ram:0002c554	5b63	add_s r3,r3,r2
ram:0002c556	e07f	j_s.d [blink]
ram:0002c558	80130000	_ld r0,[r3,0x80]
ram:0002c55c	0e22810f00008000	rsub r1,r2,0x80
ram:0002c564	02b9	asl_s r1,r1,0x2
ram:0002c566	3b63	add_s r3,r3,r1
ram:0002c568	80130200	ld r2,[r3,0x80]
ram:0002c56c	e07f	j_s.d [blink]
ram:0002c56e	5378	_neg_s r0,r2
ram:0002c570	02ba	asl_s r2,r2,0x2
ram:0002c572	5b63	add_s r3,r3,r2
ram:0002c574	80130100	ld r1,[r3,0x80]
ram:0002c578	e07f	j_s.d [blink]
ram:0002c57a	3378	_neg_s r0,r1
ram:0002c57c	00d8	mov_s r0,0x0
ram:0002c57e	e07e	j_s [blink]
