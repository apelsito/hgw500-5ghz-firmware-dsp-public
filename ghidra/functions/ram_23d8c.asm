; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00023d8c entry ram:00023d8c
ram:00023d8c	4a240000	mov r4,0x0
ram:00023d90	302a7e00	mululw 0,r2,r1
ram:00023d94	362a7e00	machlw 0,r2,r1
ram:00023d98	4029c170	asl r1,mlo,0x3
ram:00023d9c	42b9	asr_s r1,r1,0x2
ram:00023d9e	1f0c6500	brhs.d r4,r1,0x00023dba
ram:00023da2	84203f0f	_and r0,r0,-0x4
ram:00023da6	6080	ld_s r3,[r0,0x0]
ram:00023da8	89eb	brne_s r3,0,0x00023dba
ram:00023daa	40244400	add r4,r4,0x1
ram:00023dae	0f0c4500	brhs r4,r1,0x00023dba
ram:00023db2	402c8200	asl r2,r4,0x2
ram:00023db6	4360	ld_s r3,[r0,r2]
ram:00023db8	79eb	breq_s r3,0,0x00023daa
ram:00023dba	0d0c4500	brhs r4,r1,0x00023dc4
ram:00023dbe	0b002000	b.d 0x00023dc6
ram:00023dc2	00d8	_mov_s r0,0x0
ram:00023dc4	01d8	mov_s r0,0x1
ram:00023dc6	e07e	j_s [blink]
