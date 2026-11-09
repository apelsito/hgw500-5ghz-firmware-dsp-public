; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003ed10 entry ram:0003ed10
ram:0003ed10	e1c5	push_s r13
ram:0003ed12	2f79	extb_s r1,r1
ram:0003ed14	40290302	asl r3,r1,0x8
ram:0003ed18	257b	or_s r3,r3,r1
ram:0003ed1a	402b0104	asl r1,r3,0x10
ram:0003ed1e	6579	or_s r1,r1,r3
ram:0003ed20	250a3402	brlo.d r2,0x8,0x0003ed44
ram:0003ed24	0873	_mov_s r3,r0
ram:0003ed26	05f0	b_s 0x0003ed2e
ram:0003ed28	011b5200	stb.ab r1,[r3,0x1]
ram:0003ed2c	61ba	sub_s r2,r2,0x1
ram:0003ed2e	53237e80	bmsk.f 0,r3,0x1
ram:0003ed32	fcf5	bne_s 0x0003ed28
ram:0003ed34	412a8d00	lsr r13,r2,0x2
ram:0003ed38	c1ba	bmsk_s r2,r2,0x1
ram:0003ed3a	42254d90	sub.f r13,r13,0x1
ram:0003ed3e	041b5000	st.ab r1,[r3,0x4]
ram:0003ed42	fdf5	bne_s 0x0003ed3a
ram:0003ed44	09ea	breq_s r2,0,0x0003ed56
ram:0003ed46	2f248970	abs lp_count,r2
ram:0003ed4a	e078	nop_s
ram:0003ed4c	a8204001	lp 0x0003ed56
ram:0003ed50	011b5200	stb.ab r1,[r3,0x1]
ram:0003ed54	e078	nop_s
ram:0003ed56	e07f	j_s.d [blink]
ram:0003ed58	c1c5	_pop_s r13
