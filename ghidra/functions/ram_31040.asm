; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00031040 entry ram:00031040
ram:00031040	4a240000	mov r4,0x0
ram:00031044	02ba	asl_s r2,r2,0x2
ram:00031046	402c8300	asl r3,r4,0x2
ram:0003104a	3020c500	ld r5,[r0, r3]
ram:0003104e	40244400	add r4,r4,0x1
ram:00031052	00150300	ld r3,[r5]
ram:00031056	0419d000	st.ab r3,[r1,0x4]
ram:0003105a	30258300	ld r3,[r5, r2]
ram:0003105e	eb0c3281	brlt.d r4,0x4,0x00031046
ram:00031062	0419d000	_st.ab r3,[r1,0x4]
ram:00031066	e07f	j_s.d [blink]
ram:00031068	00d8	_mov_s r0,0x0
