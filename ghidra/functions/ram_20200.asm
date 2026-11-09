; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00020200 entry ram:00020200
ram:00020200	aa21810c	lr r1,[0x72]
ram:00020204	8421c38f	and.f r1,r1,0xff
ram:00020208	e07c	jeq_s [blink]
ram:0002020a	aa210102	lr r1,[0x48]
ram:0002020e	c2d8	mov_s r0,0xc2
ram:00020210	ab200102	sr r0,[0x48]
ram:00020214	01d8	mov_s r0,0x1
ram:00020216	ab20c101	sr r0,[0x47]
ram:0002021a	aa200102	lr r0,[0x48]
ram:0002021e	84200480	and.f r0,r0,0x100
ram:00020222	fdf5	bne_s 0x0002021a
ram:00020224	e07f	j_s.d [blink]
ram:00020226	ab210102	_sr r1,[0x48]
