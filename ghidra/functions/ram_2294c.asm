; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0002294c entry ram:0002294c
ram:0002294c	0873	mov_s r3,r0
ram:0002294e	d77301000000	cmp_s r3,0x10000
ram:00022954	24002d00	bhi.d 0x00022978
ram:00022958	00d8	_mov_s r0,0x0
ram:0002295a	53237e80	bmsk.f 0,r3,0x1
ram:0002295e	0ef4	bne_s 0x00022978
ram:00022960	302a7e00	mululw 0,r2,r1
ram:00022964	352a7e00	machulw 0,r2,r1
ram:00022968	4029c070	asl r0,mlo,0x3
ram:0002296c	1b63	add_s r3,r3,r0
ram:0002296e	0d0ec570000000f5	brhs 0xf500,r3,0x00022978
ram:00022976	00d8	mov_s r0,0x0
ram:00022978	e07e	j_s [blink]
