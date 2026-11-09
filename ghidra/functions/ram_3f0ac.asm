; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003f0ac entry ram:0003f0ac
ram:0003f0ac	f1c0	push_s blink
ram:0003f0ae	260f0ff5	bl 0x000297d0
ram:0003f0b2	0ed1	ld_s r1,[pcl,0x38]
ram:0003f0b4	01df	mov_s r15,0x1
ram:0003f0b6	09de	mov_s r14,0x9
ram:0003f0b8	4081	ld_s r2,[r1,0x0]
ram:0003f0ba	6181	ld_s r3,[r1,0x4]
ram:0003f0bc	0a250090	mov.f r13,r0
ram:0003f0c0	10f2	beq_s 0x0003f0e0
ram:0003f0c2	170d1e10	bbit0 r13,0x0,0x0003f0d6
ram:0003f0c6	09d0	ld_s r0,[pcl,0x24]
ram:0003f0c8	f678	add3_s r0,r0,r15
ram:0003f0ca	2180	ld_s r1,[r0,0x4]
ram:0003f0cc	a20e6000	bl.d 0x0003ff6c
ram:0003f0d0	0080	_ld_s r0,[r0,0x0]
ram:0003f0d2	2873	mov_s r3,r1
ram:0003f0d4	0872	mov_s r2,r0
ram:0003f0d6	61be	sub_s r14,r14,0x1
ram:0003f0d8	bc78	asr_s r0,r13
ram:0003f0da	e50e7590	brhs.d r14,0x1,0x0003f0bc
ram:0003f0de	01e7	_add_s r15,r15,0x1
ram:0003f0e0	4870	mov_s r0,r2
ram:0003f0e2	59072ff5	b.d 0x00029838
ram:0003f0e6	6871	_mov_s r1,r3
