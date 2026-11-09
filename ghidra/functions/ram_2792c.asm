; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0002792c entry ram:0002792c
ram:0002792c	0016837005006859	ldb r3,[0x55968]
ram:00027934	00d8	mov_s r0,0x0
ram:00027936	3908c300	brge r0,r3,0x0002796c
ram:0002793a	0a25800f0b000025	mov r5,0xb2500
ram:00027942	0a24800f0b003c07	mov r4,0xb073c
ram:0002794a	00250200	add r2,r5,r0
ram:0002794e	1c128280	ldb r2,[r2,-0xe4]
ram:00027952	01e0	add_s r0,r0,0x1
ram:00027954	0f78	extb_s r0,r0
ram:00027956	336a	asl_s r1,r2,0x3
ram:00027958	4279	sub_s r1,r1,r2
ram:0002795a	04b9	asl_s r1,r1,0x4
ram:0002795c	00244200	add r2,r4,r1
ram:00027960	5982	ld_s r2,[r2,0x64]
ram:00027962	8071	add_s r1,r1,r4
ram:00027964	a1ba	bclr_s r2,r2,0x1
ram:00027966	e708e280	brlt.d r0,r3,0x0002794a
ram:0002796a	59a1	_st_s r2,[r1,0x64]
ram:0002796c	e07e	j_s [blink]
