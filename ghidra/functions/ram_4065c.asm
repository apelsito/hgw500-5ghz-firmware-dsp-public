; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0004065c entry ram:0004065c
ram:0004065c	53224281	bmsk.f r2,r2,0x5
ram:00040660	e07c	jeq_s [blink]
ram:00040662	4e220388	rsub.f r3,r2,0x20
ram:00040666	16000c00	ble 0x0004067a
ram:0004066a	0128cc00	lsr r12,r0,r3
ram:0004066e	00298100	asl r1,r1,r2
ram:00040672	00288000	asl r0,r0,r2
ram:00040676	e07f	j_s.d [blink]
ram:00040678	8579	_or_s r1,r1,r12
ram:0004067a	4e230300	neg r3,r3
ram:0004067e	0028c100	asl r1,r0,r3
ram:00040682	e07f	j_s.d [blink]
ram:00040684	0278	_sub_s r0,r0,r0
