; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003d5e4 entry ram:0003d5e4
ram:0003d5e4	f1c0	push_s blink
ram:0003d5e6	e1c5	push_s r13
ram:0003d5e8	a3c1	sub_s sp,sp,0xc
ram:0003d5ea	40c0	st_s r0,[sp,0x0]
ram:0003d5ec	25d0	ld_s r0,[pcl,0x94]
ram:0003d5ee	41c1	st_s r1,[sp,0x4]
ram:0003d5f0	00dd	mov_s r13,0x0
ram:0003d5f2	42c5	st_s r13,[sp,0x8]
ram:0003d5f4	460e2000	bl.d 0x0003dc38
ram:0003d5f8	8b71	_mov_s r1,sp
ram:0003d5fa	00c1	ld_s r1,[sp,0x0]
ram:0003d5fc	a0a9	stb_s r13,[r1,0x0]
ram:0003d5fe	4d022ff6	b.d 0x00029848
ram:0003d602	a3c0	_add_s sp,sp,0xc
