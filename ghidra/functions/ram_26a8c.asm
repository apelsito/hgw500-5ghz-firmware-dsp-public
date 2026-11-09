; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00026a8c entry ram:00026a8c
ram:00026a8c	3d091303	brge r1,0xc,0x00026ac8
ram:00026a90	0021820f0600dc22	add r2,r1,0x622dc
ram:00026a98	3368	asl_s r1,r0,0x3
ram:00026a9a	3479	add1_s r1,r1,r1
ram:00026a9c	3a62	add_s r2,r2,r1
ram:00026a9e	088a	ldb_s r0,[r2,0x8]
ram:00026aa0	29081303	brge r0,0xc,0x00026ac8
ram:00026aa4	14200100	add1 r1,r0,r0
ram:00026aa8	15204300	add2 r3,r0,r1
ram:00026aac	356b	asl_s r1,r3,0x5
ram:00026aae	1961	add_s r1,r1,r0
ram:00026ab0	15204300	add2 r3,r0,r1
ram:00026ab4	7478	add1_s r0,r0,r3
ram:00026ab6	cf7206001c23	mov_s r2,0x6231c
ram:00026abc	3368	asl_s r1,r0,0x3
ram:00026abe	2062	ld_s r0,[r2,r1]
ram:00026ac0	04e8	breq_s r0,0,0x00026ac8
ram:00026ac2	0b002000	b.d 0x00026aca
ram:00026ac6	3862	_add_s r0,r2,r1
ram:00026ac8	00d8	mov_s r0,0x0
ram:00026aca	e07e	j_s [blink]
