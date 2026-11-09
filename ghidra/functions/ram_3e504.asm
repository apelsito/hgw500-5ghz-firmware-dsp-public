; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003e504 entry ram:0003e504
ram:0003e504	f1c0	push_s blink
ram:0003e506	e1c5	push_s r13
ram:0003e508	2875	mov_s r13,r1
ram:0003e50a	4873	mov_s r3,r2
ram:0003e50c	0ad9	mov_s r1,0xa
ram:0003e50e	a972	mov_s r2,r13
ram:0003e510	4a240000	mov r4,0x0
ram:0003e514	c7ff	bl_s 0x0003e430
ram:0003e516	35038ff5	b 0x00029848
