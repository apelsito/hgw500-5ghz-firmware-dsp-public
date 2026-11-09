; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000407fc entry ram:000407fc
ram:000407fc	f1c0	push_s blink
ram:000407fe	e1c5	push_s r13
ram:00040800	1bd0	ld_s r0,[pcl,0x6c]
ram:00040802	a180	ld_s r13,[r0,0x4]
ram:00040804	05ed	breq_s r13,0,0x0004080e
ram:00040806	0185	ld_s r0,[r13,0x4]
ram:00040808	4078	jl_s [r0]
ram:0004080a	a285	ld_s r13,[r13,0x8]
ram:0004080c	fded	brne_s r13,0,0x00040806
ram:0004080e	3d008ff4	b 0x00029848
