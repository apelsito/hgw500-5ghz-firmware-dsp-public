; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003cd1c entry ram:0003cd1c
ram:0003cd1c	e1c5	push_s r13
ram:0003cd1e	e1c6	push_s r14
ram:0003cd20	e1c7	push_s r15
ram:0003cd22	cf72050000c1	mov_s r2,0x5c100
ram:0003cd28	00120108	ld.di r1,[r2]
ram:0003cd2c	6a254018	lr r13,[count0]
ram:0003cd30	00120008	ld.di r0,[r2]
ram:0003cd34	0b092000	breq.d r1,r0,0x0003cd3e
ram:0003cd38	eb77	_mov_s r15,blink
ram:0003cd3a	6a254018	lr r13,[count0]
ram:0003cd3e	00de	mov_s r14,0x0
ram:0003cd40	c971	mov_s r1,r14
ram:0003cd42	1e09e001	bl.d 0x0004065c
ram:0003cd46	20da	_mov_s r2,0x20
ram:0003cd48	00204083	add.f r0,r0,r13
ram:0003cd4c	fb77	mov_s blink,r15
ram:0003cd4e	01218103	adc r1,r1,r14
ram:0003cd52	c1c7	pop_s r15
ram:0003cd54	c1c6	pop_s r14
ram:0003cd56	e07f	j_s.d [blink]
ram:0003cd58	c1c5	_pop_s r13
