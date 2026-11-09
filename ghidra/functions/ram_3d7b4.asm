; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003d7b4 entry ram:0003d7b4
ram:0003d7b4	f1c0	push_s blink
ram:0003d7b6	1a082ff6	bl.d 0x000297cc
ram:0003d7ba	6972	_mov_s r2,r11
ram:0003d7bc	0876	mov_s r14,r0
ram:0003d7be	01d8	mov_s r0,0x1
ram:0003d7c0	80e1	cmp_s r1,0x0
ram:0003d7c2	ca210200	mov.ne r1,r0
ram:0003d7c6	bed0	ld_s r0,[pcl,0x2f8]
ram:0003d7c8	30228f0f00004000	ld r15,[r2, 0x40]
ram:0003d7d0	30228d0f00003c00	ld r13,[r2, 0x3c]
ram:0003d7d8	15205000	add2 r16,r0,r1
ram:0003d7dc	00100120	ld r1,[r16]
ram:0003d7e0	e970	mov_s r0,r15
ram:0003d7e2	607d	jl_s.d [r13]
ram:0003d7e4	5326c210	_bmsk r2,r14,0x3
ram:0003d7e8	8c20ff8f	cmp r0,-0x1
ram:0003d7ec	0bf4	bne_s 0x0003d802
ram:0003d7ee	0ff0	b_s 0x0003d80a
ram:0003d7f0	00100120	ld r1,[r16]
ram:0003d7f4	e970	mov_s r0,r15
ram:0003d7f6	607d	jl_s.d [r13]
ram:0003d7f8	10da	_mov_s r2,0x10
ram:0003d7fa	8c20ff8f	cmp r0,-0x1
ram:0003d7fe	07f2	beq_s 0x0003d80a
ram:0003d800	70be	sub_s r14,r14,0x10
ram:0003d802	f10e1394	brge r14,0x10,0x0003d7f0
ram:0003d806	00d8	mov_s r0,0x0
ram:0003d808	03f0	b_s 0x0003d80e
ram:0003d80a	8a20ff0f	mov r0,-0x1
ram:0003d80e	25000ff6	b 0x00029830
