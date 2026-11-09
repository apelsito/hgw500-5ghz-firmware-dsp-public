; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000405e4 entry ram:000405e4
ram:000405e4	0c21c080	cmp r1,r3
ram:000405e8	cc208180	cmp.eq r0,r2
ram:000405ec	ca21cd00	mov.hi r1,r3
ram:000405f0	e07f	j_s.d [blink]
ram:000405f2	ca208d00	_mov.hi r0,r2
