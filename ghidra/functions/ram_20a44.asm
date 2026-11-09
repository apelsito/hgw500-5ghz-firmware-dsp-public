; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00020a44 entry ram:00020a44
ram:00020a44	f1c0	push_s blink
ram:00020a46	4088	ldb_s r2,[r0,0x0]
ram:00020a48	4222020c	sub r2,r2,0x30
ram:00020a4c	cf7300e00400	mov_s r3,0xe0000004
ram:00020a52	b8130108	ld.di r1,[r3,0xb8]
ram:00020a56	3581	ld_s r1,[r1,0x54]
ram:00020a58	00218c0f00009410	add r12,r1,0x1094
ram:00020a60	001ca010	st.di r2,[r12]
ram:00020a64	4a0ee000	bl.d 0x000228ac
ram:00020a68	01e0	_add_s r0,r0,0x1
ram:00020a6a	560ecfff	bl 0x000208bc
ram:00020a6e	c5ff	bl_s 0x00020980
ram:00020a70	0a20c00f	mov r0,pcl
ram:00020a74	720f8fff	bl 0x000201e4
ram:00020a78	d1c0	pop_s blink
ram:00020a7a	e07e	j_s [blink]
