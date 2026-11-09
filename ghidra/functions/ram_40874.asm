; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00040874 entry ram:00040874
ram:00040874	e1c0	push_s r0
ram:00040876	e1c1	push_s r1
ram:00040878	8a20ff0f	mov r0,-0x1
ram:0004087c	1320c002	bmsk r0,r0,r11
ram:00040880	0479	and_s r1,r1,r0
ram:00040882	00288002	asl r0,r0,r10
ram:00040886	00298102	asl r1,r1,r10
ram:0004088a	06240c10	bic r12,r12,r0
ram:0004088e	257c	or_s r12,r12,r1
ram:00040890	c1c1	pop_s r1
ram:00040892	e07f	j_s.d [blink]
ram:00040894	c1c0	_pop_s r0
