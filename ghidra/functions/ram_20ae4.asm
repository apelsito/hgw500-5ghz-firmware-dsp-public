; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00020ae4 entry ram:00020ae4
ram:00020ae4	e1c5	push_s r13
ram:00020ae6	e1c6	push_s r14
ram:00020ae8	e1c7	push_s r15
ram:00020aea	eb77	mov_s r15,blink
ram:00020aec	0876	mov_s r14,r0
ram:00020aee	2875	mov_s r13,r1
ram:00020af0	6a208002	lr r0,[status32]
ram:00020af4	46208101	bic r1,r0,0x6
ram:00020af8	4420be81	and.f 0,r0,0x6
ram:00020afc	e9204200	flag.ne r1
ram:00020b00	dd65	add_s r13,r13,r14
ram:00020b02	aa210102	lr r1,[0x48]
ram:00020b06	86b9	bset_s r1,r1,0x6
ram:00020b08	ab210102	sr r1,[0x48]
ram:00020b0c	0f0e4513	brhs r14,r13,0x00020b1a
ram:00020b10	ab268112	sr r14,[0x4a]
ram:00020b14	20e6	add_s r14,r14,0x20
ram:00020b16	fd0e4493	brlo r14,r13,0x00020b10
ram:00020b1a	aa220102	lr r2,[0x48]
ram:00020b1e	ff0a1f82	bbit1 r2,0x8,0x00020b1a
ram:00020b22	29200000	flag r0
ram:00020b26	fb77	mov_s blink,r15
ram:00020b28	c1c7	pop_s r15
ram:00020b2a	c1c6	pop_s r14
ram:00020b2c	e07f	j_s.d [blink]
ram:00020b2e	c1c5	_pop_s r13
