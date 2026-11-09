; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00031010 entry ram:00031010
ram:00031010	4a240000	mov r4,0x0
ram:00031014	02ba	asl_s r2,r2,0x2
ram:00031016	402c8600	asl r6,r4,0x2
ram:0003101a	04110504	ld.ab r5,[r1,0x4]
ram:0003101e	30208301	ld r3,[r0, r6]
ram:00031022	40244400	add r4,r4,0x1
ram:00031026	001b4001	st r5,[r3]
ram:0003102a	30208301	ld r3,[r0, r6]
ram:0003102e	04110504	ld.ab r5,[r1,0x4]
ram:00031032	5b63	add_s r3,r3,r2
ram:00031034	e30c3281	brlt.d r4,0x4,0x00031016
ram:00031038	001b4001	_st r5,[r3]
ram:0003103c	e07f	j_s.d [blink]
ram:0003103e	00d8	_mov_s r0,0x0
