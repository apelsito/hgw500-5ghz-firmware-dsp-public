; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000406b4 entry ram:000406b4
ram:000406b4	f1c0	push_s blink
ram:000406b6	26080000	bl 0x000406d8
ram:000406ba	cf7400000000	mov_s r12,0x0
ram:000406c0	d1c0	pop_s blink
ram:000406c2	e07f	j_s.d [blink]
ram:000406c4	9860	_add_s r0,r0,r12
