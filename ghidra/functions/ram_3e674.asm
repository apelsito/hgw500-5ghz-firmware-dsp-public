; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003e674 entry ram:0003e674
ram:0003e674	f1c0	push_s blink
ram:0003e676	6209aff5	bl.d 0x000297d4
ram:0003e67a	9873	_mov_s r4,r3
ram:0003e67c	2876	mov_s r14,r1
ram:0003e67e	4875	mov_s r13,r2
ram:0003e680	0ad9	mov_s r1,0xa
ram:0003e682	c972	mov_s r2,r14
ram:0003e684	a973	mov_s r3,r13
ram:0003e686	4a250000	mov r5,0x0
ram:0003e68a	bbff	bl_s 0x0003e574
ram:0003e68c	b5018ff5	b 0x00029840
