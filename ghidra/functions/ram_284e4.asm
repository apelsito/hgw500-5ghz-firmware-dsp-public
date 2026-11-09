; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000284e4 entry ram:000284e4
ram:000284e4	cf7305006c59	mov_s r3,0x5596c
ram:000284ea	4083	ld_s r2,[r3,0x0]
ram:000284ec	cf71f8dc0018	mov_s r1,0xdcf81800
ram:000284f2	5860	add_s r0,r0,r2
ram:000284f4	03e0	add_s r0,r0,0x3
ram:000284f6	84203f0f	and r0,r0,-0x4
ram:000284fa	0f090400	brlo r1,r0,0x00028506
ram:000284fe	00a3	st_s r0,[r3,0x0]
ram:00028500	09002000	b.d 0x00028508
ram:00028504	4870	_mov_s r0,r2
ram:00028506	00d8	mov_s r0,0x0
ram:00028508	e07e	j_s [blink]
