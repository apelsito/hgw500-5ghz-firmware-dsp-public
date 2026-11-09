; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00026d2c entry ram:00026d2c
ram:00026d2c	01d9	mov_s r1,0x1
ram:00026d2e	03b8	asl_s r0,r0,0x3
ram:00026d30	1478	add1_s r0,r0,r0
ram:00026d32	c7700600dc22	add_s r0,r0,0x622dc
ram:00026d38	e07f	j_s.d [blink]
ram:00026d3a	21a8	_stb_s r1,[r0,0x1]
