; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003c60c entry ram:0003c60c
ram:0003c60c	e1c5	push_s r13
ram:0003c60e	eb75	mov_s r13,blink
ram:0003c610	cf700b00fc80	mov_s r0,0xb80fc
ram:0003c616	8a21ff0f	mov r1,-0x1
ram:0003c61a	fa0e2001	bl.d 0x0003ed10
ram:0003c61e	80da	_mov_s r2,0x80
ram:0003c620	00d9	mov_s r1,0x0
ram:0003c622	8a23ff0f	mov r3,-0x1
ram:0003c626	cf720b007c81	mov_s r2,0xb817c
ram:0003c62c	1269	asl_s r0,r1,0x2
ram:0003c62e	1578	add2_s r0,r0,r0
ram:0003c630	01e1	add_s r1,r1,0x1
ram:0003c632	5860	add_s r0,r0,r2
ram:0003c634	f9093285	brlt.d r1,0x14,0x0003c62c
ram:0003c638	64b0	_stw_s r3,[r0,0x8]
ram:0003c63a	fb75	mov_s blink,r13
ram:0003c63c	e07f	j_s.d [blink]
ram:0003c63e	c1c5	_pop_s r13
