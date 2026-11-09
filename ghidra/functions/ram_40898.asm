; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00040898 entry ram:00040898
ram:00040898	e1c4	push_s r12
ram:0004089a	f1c0	push_s blink
ram:0004089c	da0fefff	bl.d 0x00040874
ram:000408a0	8080	_ld_s r12,[r0,0x0]
ram:000408a2	80a0	st_s r12,[r0,0x0]
ram:000408a4	04141f34	ld.ab blink,[sp,0x4]
ram:000408a8	e07f	j_s.d [blink]
ram:000408aa	c1c4	_pop_s r12
