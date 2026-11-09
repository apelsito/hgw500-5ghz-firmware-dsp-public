; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00029888 entry ram:00029888
ram:00029888	53224281	bmsk.f r2,r2,0x5
ram:0002988c	e07c	jeq_s [blink]
ram:0002988e	4e220388	rsub.f r3,r2,0x20
ram:00029892	16000c00	ble 0x000298a6
ram:00029896	0029cc00	asl r12,r1,r3
ram:0002989a	02298100	asr r1,r1,r2
ram:0002989e	01288000	lsr r0,r0,r2
ram:000298a2	e07f	j_s.d [blink]
ram:000298a4	8578	_or_s r0,r0,r12
ram:000298a6	4e230300	neg r3,r3
ram:000298aa	0229c000	asr r0,r1,r3
ram:000298ae	e07f	j_s.d [blink]
ram:000298b0	4229c107	_asr r1,r1,0x1f
