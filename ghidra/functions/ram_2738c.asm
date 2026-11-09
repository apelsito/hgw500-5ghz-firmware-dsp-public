; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0002738c entry ram:0002738c
ram:0002738c	f1c0	push_s blink
ram:0002738e	00d9	mov_s r1,0x0
ram:00027390	cf7005006859	mov_s r0,0x55968
ram:00027396	20a8	stb_s r1,[r0,0x0]
ram:00027398	21a8	stb_s r1,[r0,0x1]
ram:0002739a	cf700b003c07	mov_s r0,0xb073c
ram:000273a0	e7d9	mov_s r1,0xe7
ram:000273a2	6e0ba00c	bl.d 0x0004070c
ram:000273a6	05b9	_asl_s r1,r1,0x5
ram:000273a8	d1c0	pop_s blink
ram:000273aa	e07e	j_s [blink]
