; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00030360 entry ram:00030360
ram:00030360	cf72040020c9	mov_s r2,0x4c920
ram:00030366	cf70f8dc0018	mov_s r0,0xdcf81800
ram:0003036c	00db	mov_s r3,0x0
ram:0003036e	08124105	ldh.ab.x r1,[r2,0x8]
ram:00030372	01e3	add_s r3,r3,0x1
ram:00030374	d77300000010	cmp_s r3,0x1000
ram:0003037a	f607e5ff	bc.d 0x0003036e
ram:0003037e	02185400	_sth.ab r1,[r0,0x2]
ram:00030382	cf7204002009	mov_s r2,0x40920
ram:00030388	cf70fadc0010	mov_s r0,0xdcfa1000
ram:0003038e	00db	mov_s r3,0x0
ram:00030390	08124105	ldh.ab.x r1,[r2,0x8]
ram:00030394	01e3	add_s r3,r3,0x1
ram:00030396	d77300000018	cmp_s r3,0x1800
ram:0003039c	f407e5ff	bc.d 0x00030390
ram:000303a0	02185400	_sth.ab r1,[r0,0x2]
ram:000303a4	e07e	j_s [blink]
