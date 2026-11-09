; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00027e1c entry ram:00027e1c
ram:00027e1c	c7700b000025	add_s r0,r0,0xb2500
ram:00027e22	1c108380	ldb r3,[r0,-0xe4]
ram:00027e26	336b	asl_s r1,r3,0x3
ram:00027e28	6279	sub_s r1,r1,r3
ram:00027e2a	04b9	asl_s r1,r1,0x4
ram:00027e2c	c7710b003c07	add_s r1,r1,0xb073c
ram:00027e32	1981	ld_s r0,[r1,0x64]
ram:00027e34	e07f	j_s.d [blink]
ram:00027e36	c0b8	_bmsk_s r0,r0,0x0
