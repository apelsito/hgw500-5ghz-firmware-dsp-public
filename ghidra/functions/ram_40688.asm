; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00040688 entry ram:00040688
ram:00040688	53224281	bmsk.f r2,r2,0x5
ram:0004068c	e07c	jeq_s [blink]
ram:0004068e	4e220388	rsub.f r3,r2,0x20
ram:00040692	16000c00	ble 0x000406a6
ram:00040696	0029cc00	asl r12,r1,r3
ram:0004069a	01298100	lsr r1,r1,r2
ram:0004069e	01288000	lsr r0,r0,r2
ram:000406a2	e07f	j_s.d [blink]
ram:000406a4	8578	_or_s r0,r0,r12
ram:000406a6	4e230300	neg r3,r3
ram:000406aa	0129c000	lsr r0,r1,r3
ram:000406ae	e07f	j_s.d [blink]
ram:000406b0	2279	_sub_s r1,r1,r1
