; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003d6a8 entry ram:0003d6a8
ram:0003d6a8	f1c0	push_s blink
ram:0003d6aa	de080ff6	bl 0x00029784
ram:0003d6ae	e1c5	push_s r13
ram:0003d6b0	a1c1	sub_s sp,sp,0x4
ram:0003d6b2	40c0	st_s r0,[sp,0x0]
ram:0003d6b4	0fd0	ld_s r0,[pcl,0x3c]
ram:0003d6b6	2872	mov_s r2,r1
ram:0003d6b8	44c1	st_s r1,[sp,0x10]
ram:0003d6ba	85c3	add_s r3,sp,0x14
ram:0003d6bc	7e0d2000	bl.d 0x0003dc38
ram:0003d6c0	8b71	_mov_s r1,sp
ram:0003d6c2	00c1	ld_s r1,[sp,0x0]
ram:0003d6c4	00dd	mov_s r13,0x0
ram:0003d6c6	a0a9	stb_s r13,[r1,0x0]
ram:0003d6c8	24dc	mov_s r12,0x24
ram:0003d6ca	83012ff6	b.d 0x0002984a
ram:0003d6ce	a1c0	_add_s sp,sp,0x4
