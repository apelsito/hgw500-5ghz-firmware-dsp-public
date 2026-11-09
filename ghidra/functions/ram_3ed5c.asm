; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003ed5c entry ram:0003ed5c
ram:0003ed5c	2f79	extb_s r1,r1
ram:0003ed5e	03f0	b_s 0x0003ed62
ram:0003ed60	01e0	add_s r0,r0,0x1
ram:0003ed62	61ba	sub_s r2,r2,0x1
ram:0003ed64	8c22ff8f	cmp r2,-0x1
ram:0003ed68	05f2	beq_s 0x0003ed72
ram:0003ed6a	6088	ldb_s r3,[r0,0x0]
ram:0003ed6c	f509c180	brne r1,r3,0x0003ed60
ram:0003ed70	02f0	b_s 0x0003ed74
ram:0003ed72	00d8	mov_s r0,0x0
ram:0003ed74	e07e	j_s [blink]
