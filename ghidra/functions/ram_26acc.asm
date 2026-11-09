; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00026acc entry ram:00026acc
ram:00026acc	4a250000	mov r5,0x0
ram:00026ad0	0a26800f0600dc22	mov r6,0x622dc
ram:00026ad8	03b8	asl_s r0,r0,0x3
ram:00026ada	1478	add1_s r0,r0,r0
ram:00026adc	00258301	add r3,r5,r6
ram:00026ae0	1b63	add_s r3,r3,r0
ram:00026ae2	488b	ldb_s r2,[r3,0x8]
ram:00026ae4	2d0a1303	brge r2,0xc,0x00026b10
ram:00026ae8	14228300	add1 r3,r2,r2
ram:00026aec	1522c400	add2 r4,r2,r3
ram:00026af0	402c4301	asl r3,r4,0x5
ram:00026af4	5b63	add_s r3,r3,r2
ram:00026af6	1522c400	add2 r4,r2,r3
ram:00026afa	14220201	add1 r2,r2,r4
ram:00026afe	736a	asl_s r3,r2,0x3
ram:00026b00	c77306001c23	add_s r3,r3,0x6231c
ram:00026b06	4083	ld_s r2,[r3,0x0]
ram:00026b08	04ea	breq_s r2,0,0x00026b10
ram:00026b0a	5493	ldw_s r2,[r3,0x28]
ram:00026b0c	13098000	breq r1,r2,0x00026b1e
ram:00026b10	40254500	add r5,r5,0x1
ram:00026b14	c90d1283	brlt r5,0xc,0x00026adc
ram:00026b18	09002000	b.d 0x00026b20
ram:00026b1c	00d8	_mov_s r0,0x0
ram:00026b1e	6870	mov_s r0,r3
ram:00026b20	e07e	j_s [blink]
