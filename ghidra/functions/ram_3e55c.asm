; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003e55c entry ram:0003e55c
ram:0003e55c	f1c0	push_s blink
ram:0003e55e	e1c5	push_s r13
ram:0003e560	2875	mov_s r13,r1
ram:0003e562	4873	mov_s r3,r2
ram:0003e564	10d9	mov_s r1,0x10
ram:0003e566	a972	mov_s r2,r13
ram:0003e568	4a244000	mov r4,0x1
ram:0003e56c	b1ff	bl_s 0x0003e430
ram:0003e56e	dd028ff5	b 0x00029848
