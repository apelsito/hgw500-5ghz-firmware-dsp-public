; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00020aa0 entry ram:00020aa0
ram:00020aa0	e1c5	push_s r13
ram:00020aa2	e1c6	push_s r14
ram:00020aa4	e1c7	push_s r15
ram:00020aa6	eb77	mov_s r15,blink
ram:00020aa8	0876	mov_s r14,r0
ram:00020aaa	2875	mov_s r13,r1
ram:00020aac	6a208002	lr r0,[status32]
ram:00020ab0	46208101	bic r1,r0,0x6
ram:00020ab4	4420be81	and.f 0,r0,0x6
ram:00020ab8	e9204200	flag.ne r1
ram:00020abc	dd65	add_s r13,r13,r14
ram:00020abe	aa210102	lr r1,[0x48]
ram:00020ac2	a6b9	bclr_s r1,r1,0x6
ram:00020ac4	ab210102	sr r1,[0x48]
ram:00020ac8	0f0e4513	brhs r14,r13,0x00020ad6
ram:00020acc	ab268112	sr r14,[0x4a]
ram:00020ad0	20e6	add_s r14,r14,0x20
ram:00020ad2	fd0e4493	brlo r14,r13,0x00020acc
ram:00020ad6	29200000	flag r0
ram:00020ada	fb77	mov_s blink,r15
ram:00020adc	c1c7	pop_s r15
ram:00020ade	c1c6	pop_s r14
ram:00020ae0	e07f	j_s.d [blink]
ram:00020ae2	c1c5	_pop_s r13
