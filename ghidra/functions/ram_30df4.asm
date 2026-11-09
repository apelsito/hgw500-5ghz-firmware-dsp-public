; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00030df4 entry ram:00030df4
ram:00030df4	550b7200	brlt.d r3,0x1,0x00030e48
ram:00030df8	4a220010	_mov r10,0x0
ram:00030dfc	450a7200	brlt.d r2,0x1,0x00030e40
ram:00030e00	4a200010	_mov r8,0x0
ram:00030e04	402a8610	asl r6,r10,0x2
ram:00030e08	30208501	ld r5,[r0, r6]
ram:00030e0c	00264900	add r9,r6,r1
ram:00030e10	00260600	add r6,r6,r0
ram:00030e14	40280711	asl r7,r8,0x4
ram:00030e18	35274402	ldh.x r4,[r7, r9]
ram:00030e1c	40204810	add r8,r8,0x1
ram:00030e20	422c0402	asr r4,r4,0x8
ram:00030e24	011d1201	stb.ab r4,[r5,0x1]
ram:00030e28	00274402	add r4,r7,r9
ram:00030e2c	02144401	ldh.x r4,[r4,0x2]
ram:00030e30	422c0402	asr r4,r4,0x8
ram:00030e34	e108a290	brlt.d r8,r2,0x00030e14
ram:00030e38	011d1201	_stb.ab r4,[r5,0x1]
ram:00030e3c	001e4001	st r5,[r6]
ram:00030e40	40224a10	add r10,r10,0x1
ram:00030e44	b90ac290	brlt r10,r3,0x00030dfc
ram:00030e48	e07f	j_s.d [blink]
ram:00030e4a	00d8	_mov_s r0,0x0
