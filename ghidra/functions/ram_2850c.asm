; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0002850c entry ram:0002850c
ram:0002850c	cf73f8dc0000	mov_s r3,0xdcf80000
ram:00028512	1d08c400	brlo r0,r3,0x0002852c
ram:00028516	cf7305006c59	mov_s r3,0x5596c
ram:0002851c	4083	ld_s r2,[r3,0x0]
ram:0002851e	1961	add_s r1,r1,r0
ram:00028520	0d098100	brne r1,r2,0x0002852c
ram:00028524	00a3	st_s r0,[r3,0x0]
ram:00028526	0b002000	b.d 0x0002852e
ram:0002852a	01d8	_mov_s r0,0x1
ram:0002852c	00d8	mov_s r0,0x0
ram:0002852e	e07e	j_s [blink]
