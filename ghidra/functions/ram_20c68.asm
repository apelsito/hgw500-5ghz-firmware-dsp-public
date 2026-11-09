; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00020c68 entry ram:00020c68
ram:00020c68	e1c5	push_s r13
ram:00020c6a	eb75	mov_s r13,blink
ram:00020c6c	0a240010	mov r12,r0
ram:00020c70	42244c90	sub.f r12,r12,0x1
ram:00020c74	e0208f0f0200700c	jpnz 0x00020c70
ram:00020c7c	fb75	mov_s blink,r13
ram:00020c7e	e07f	j_s.d [blink]
ram:00020c80	c1c5	_pop_s r13
