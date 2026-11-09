; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003d76c entry ram:0003d76c
ram:0003d76c	f1c0	push_s blink
ram:0003d76e	6971	mov_s r1,r11
ram:0003d770	3021800fffff40ff	ld r0,[r1, 0xffffff40]
ram:0003d778	4088	ldb_s r2,[r0,0x0]
ram:0003d77a	2b0a910a	brne r2,0x2a,0x0003d7a2
ram:0003d77e	01e0	add_s r0,r0,0x1
ram:0003d780	00218c0fffff40ff	add r12,r1,0xffffff40
ram:0003d788	3021820f00004400	ld r2,[r1, 0x44]
ram:0003d790	00a4	st_s r0,[r12,0x0]
ram:0003d792	cf7400004400	mov_s r12,0x44
ram:0003d798	046a	add_s r0,r2,0x4
ram:0003d79a	9961	add_s r1,r1,r12
ram:0003d79c	00a1	st_s r0,[r1,0x0]
ram:0003d79e	0082	ld_s r0,[r2,0x0]
ram:0003d7a0	08f0	b_s 0x0003d7b0
ram:0003d7a2	cf74ffff40ff	mov_s r12,0xffffff40
ram:0003d7a8	9961	add_s r1,r1,r12
ram:0003d7aa	ea0e6000	bl.d 0x0003e690
ram:0003d7ae	00da	_mov_s r2,0x0
ram:0003d7b0	d1c0	pop_s blink
ram:0003d7b2	e07e	j_s [blink]
