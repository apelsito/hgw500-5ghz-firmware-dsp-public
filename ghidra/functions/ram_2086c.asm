; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0002086c entry ram:0002086c
ram:0002086c	f1c0	push_s blink
ram:0002086e	1a0f4004	bl 0x00029784
ram:00020872	e1c5	push_s r13
ram:00020874	e1c6	push_s r14
ram:00020876	0872	mov_s r2,r0
ram:00020878	43c0	st_s r0,[sp,0xc]
ram:0002087a	84c3	add_s r3,sp,0x10
ram:0002087c	cf76050020c1	mov_s r14,0x5c120
ram:00020882	c970	mov_s r0,r14
ram:00020884	620d600e	bl.d 0x0003d5e4
ram:00020888	8a210400	_mov r1,0x100
ram:0002088c	0875	mov_s r13,r0
ram:0002088e	22082001	bl.d 0x000228ac
ram:00020892	c970	_mov_s r0,r14
ram:00020894	a970	mov_s r0,r13
ram:00020896	c1c6	pop_s r14
ram:00020898	c1c5	pop_s r13
ram:0002089a	d1c0	pop_s blink
ram:0002089c	e07f	j_s.d [blink]
ram:0002089e	a8c0	_add_s sp,sp,0x20
