; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0002c4a8 entry ram:0002c4a8
ram:0002c4a8	53208201	bmsk r2,r0,0x6
ram:0002c4ac	27b8	lsr_s r0,r0,0x7
ram:0002c4ae	c1b8	bmsk_s r0,r0,0x1
ram:0002c4b0	61081501	brhs r0,0x4,0x0002c510
ram:0002c4b4	f0260c700200c4c4	ld.as r12,[0x2c4c4, r0]
ram:0002c4bc	cf730500584a	mov_s r3,0x54a58
ram:0002c4c2	007c	j_s [r12]
ram:0002c4d4	0e22810f00008000	rsub r1,r2,0x80
ram:0002c4dc	02b9	asl_s r1,r1,0x2
ram:0002c4de	3b63	add_s r3,r3,r1
ram:0002c4e0	e07f	j_s.d [blink]
ram:0002c4e2	80130000	_ld r0,[r3,0x80]
ram:0002c4e6	02ba	asl_s r2,r2,0x2
ram:0002c4e8	5b63	add_s r3,r3,r2
ram:0002c4ea	e07f	j_s.d [blink]
ram:0002c4ec	80130000	_ld r0,[r3,0x80]
ram:0002c4f0	0e22810f00008000	rsub r1,r2,0x80
ram:0002c4f8	02b9	asl_s r1,r1,0x2
ram:0002c4fa	3b63	add_s r3,r3,r1
ram:0002c4fc	80130200	ld r2,[r3,0x80]
ram:0002c500	e07f	j_s.d [blink]
ram:0002c502	5378	_neg_s r0,r2
ram:0002c504	02ba	asl_s r2,r2,0x2
ram:0002c506	5b63	add_s r3,r3,r2
ram:0002c508	80130100	ld r1,[r3,0x80]
ram:0002c50c	e07f	j_s.d [blink]
ram:0002c50e	3378	_neg_s r0,r1
ram:0002c510	00d8	mov_s r0,0x0
ram:0002c512	e07e	j_s [blink]
