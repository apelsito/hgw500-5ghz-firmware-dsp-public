; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000279f0 entry ram:000279f0
ram:000279f0	e1c5	push_s r13
ram:000279f2	e1c6	push_s r14
ram:000279f4	eb76	mov_s r14,blink
ram:000279f6	d209efff	bl.d 0x000273c4
ram:000279fa	00dd	_mov_s r13,0x0
ram:000279fc	c2e0	cmp_s r0,0x42
ram:000279fe	50f6	bge_s 0x00027a1c
ram:00027a00	c7700b000025	add_s r0,r0,0xb2500
ram:00027a06	1c108280	ldb r2,[r0,-0xe4]
ram:00027a0a	136a	asl_s r0,r2,0x3
ram:00027a0c	4278	sub_s r0,r0,r2
ram:00027a0e	04b8	asl_s r0,r0,0x4
ram:00027a10	c7700b003c07	add_s r0,r0,0xb073c
ram:00027a16	3980	ld_s r1,[r0,0x64]
ram:00027a18	44218d00	and r13,r1,0x2
ram:00027a1c	a970	mov_s r0,r13
ram:00027a1e	fb76	mov_s blink,r14
ram:00027a20	c1c6	pop_s r14
ram:00027a22	e07f	j_s.d [blink]
ram:00027a24	c1c5	_pop_s r13
