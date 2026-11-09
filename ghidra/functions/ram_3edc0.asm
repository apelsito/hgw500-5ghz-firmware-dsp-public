; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003edc0 entry ram:0003edc0
ram:0003edc0	f1c0	push_s blink
ram:0003edc2	160a4ff5	bl 0x000297d4
ram:0003edc6	4876	mov_s r14,r2
ram:0003edc8	01da	mov_s r2,0x1
ram:0003edca	80e0	cmp_s r0,0x0
ram:0003edcc	ca208100	mov.eq r0,r2
ram:0003edd0	4969	sub_s r2,r1,0x1
ram:0003edd2	3070	cmp_s r0,r1
ram:0003edd4	ca258a10	mov.ge r13,r2
ram:0003edd8	ca250b10	mov.lt r13,r0
ram:0003eddc	c970	mov_s r0,r14
ram:0003edde	30d9	mov_s r1,0x30
ram:0003ede0	320fefff	bl.d 0x0003ed10
ram:0003ede4	a972	_mov_s r2,r13
ram:0003ede6	00d8	mov_s r0,0x0
ram:0003ede8	be66	add_s r14,r14,r13
ram:0003edea	59026ff5	b.d 0x00029840
ram:0003edee	00ae	_stb_s r0,[r14,0x0]
