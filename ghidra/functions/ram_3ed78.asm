; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003ed78 entry ram:0003ed78
ram:0003ed78	f1c0	push_s blink
ram:0003ed7a	e1c5	push_s r13
ram:0003ed7c	0d092500	brhs.d r1,r0,0x0003ed88
ram:0003ed80	0875	_mov_s r13,r0
ram:0003ed82	5861	add_s r0,r1,r2
ram:0003ed84	2d0d0410	brlo r13,r0,0x0003edb0
ram:0003ed88	1b0a5502	brhs r2,0x9,0x0003eda2
ram:0003ed8c	a973	mov_s r3,r13
ram:0003ed8e	06f0	b_s 0x0003ed98
ram:0003ed90	01118004	ldb.ab r0,[r1,0x1]
ram:0003ed94	011b1200	stb.ab r0,[r3,0x1]
ram:0003ed98	61ba	sub_s r2,r2,0x1
ram:0003ed9a	8c22ff8f	cmp r2,-0x1
ram:0003ed9e	faf5	bne_s 0x0003ed90
ram:0003eda0	0cf0	b_s 0x0003edb8
ram:0003eda2	c20eefff	bl.d 0x0003ec60
ram:0003eda6	a970	_mov_s r0,r13
ram:0003eda8	08f0	b_s 0x0003edb8
ram:0003edaa	4861	ldb_s r0,[r1,r2]
ram:0003edac	5c65	add_s r12,r13,r2
ram:0003edae	00ac	stb_s r0,[r12,0x0]
ram:0003edb0	61ba	sub_s r2,r2,0x1
ram:0003edb2	8c22ff8f	cmp r2,-0x1
ram:0003edb6	fbf5	bne_s 0x0003edaa
ram:0003edb8	91026ff5	b.d 0x00029848
ram:0003edbc	a970	_mov_s r0,r13
