; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00026d3c entry ram:00026d3c
ram:00026d3c	00d9	mov_s r1,0x0
ram:00026d3e	03b8	asl_s r0,r0,0x3
ram:00026d40	1478	add1_s r0,r0,r0
ram:00026d42	c7700600dc22	add_s r0,r0,0x622dc
ram:00026d48	e07f	j_s.d [blink]
ram:00026d4a	21a8	_stb_s r1,[r0,0x1]
