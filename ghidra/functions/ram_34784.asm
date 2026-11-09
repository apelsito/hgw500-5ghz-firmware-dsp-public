; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00034784 entry ram:00034784
ram:00034784	4a240000	mov r4,0x0
ram:00034788	0a250001	mov r5,r4
ram:0003478c	0a22801f0500c0bd	mov r10,0x5bdc0
ram:00034794	1970	mov_s r8,r0
ram:00034796	0a270001	mov r7,r4
ram:0003479a	2f234001	asl r3,r5
ram:0003479e	3422c310	ldh r3,[r10, r3]
ram:000347a2	4a210010	mov r9,0x0
ram:000347a6	8073	add_s r3,r3,r4
ram:000347a8	707b	extw_s r3,r3
ram:000347aa	302bfe00	mululw 0,r3,r3
ram:000347ae	352bfe00	machulw 0,r3,r3
ram:000347b2	2f72	mov_s r2,mlo
ram:000347b4	02208690	sub.f r6,r8,r2
ram:000347b8	03274202	sbc r2,r7,r9
ram:000347bc	0f0a1200	brlt r2,0x0,0x000347ca
ram:000347c0	0526be80	or.f 0,r6,r2
ram:000347c4	0e002100	beq.d 0x000347d2
ram:000347c8	9873	_mov_s r4,r3
ram:000347ca	40254500	add r5,r5,0x1
ram:000347ce	cf0d1484	brlo r5,0x10,0x0003479a
ram:000347d2	40244200	add r2,r4,0x1
ram:000347d6	507a	extw_s r2,r2
ram:000347d8	08220301	max r3,r2,r4
ram:000347dc	707a	extw_s r2,r3
ram:000347de	302a3e01	mululw 0,r2,r4
ram:000347e2	352a3e01	machulw 0,r2,r4
ram:000347e6	0d090570	brhs mlo,r0,0x000347f0
ram:000347ea	0d002000	b.d 0x000347f4
ram:000347ee	60b1	_stw_s r3,[r1,0x0]
ram:000347f0	00190401	sth r4,[r1]
ram:000347f4	e07e	j_s [blink]
