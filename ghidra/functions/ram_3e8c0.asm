; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003e8c0 entry ram:0003e8c0
ram:0003e8c0	0a238080	mov.f r3,r2
ram:0003e8c4	00da	mov_s r2,0x0
ram:0003e8c6	ca24c270	mov.ne lp_count,r3
ram:0003e8ca	e820e202	lpne 0x0003e8de
ram:0003e8ce	f4218300	ldh.as r3,[r1, r2]
ram:0003e8d2	5c60	add_s r12,r0,r2
ram:0003e8d4	2f26c7f0	extb.f 0,r3
ram:0003e8d8	60ac	stb_s r3,[r12,0x0]
ram:0003e8da	03f2	beq_s 0x0003e8de
ram:0003e8dc	01e2	add_s r2,r2,0x1
ram:0003e8de	e07f	j_s.d [blink]
ram:0003e8e0	4870	_mov_s r0,r2
