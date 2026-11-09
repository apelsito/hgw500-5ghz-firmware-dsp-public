; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00022b58 entry ram:00022b58
ram:00022b58	e1c5	push_s r13
ram:00022b5a	e1c6	push_s r14
ram:00022b5c	e1c7	push_s r15
ram:00022b5e	fc1c08b4	st.aw r16,[sp,-0x4]
ram:00022b62	0a20c027	mov r16,blink
ram:00022b66	0877	mov_s r15,r0
ram:00022b68	2875	mov_s r13,r1
ram:00022b6a	cf7600e00400	mov_s r14,0xe0000004
ram:00022b70	b8160318	ld.di r3,[r14,0xb8]
ram:00022b74	5583	ld_s r2,[r3,0x54]
ram:00022b76	3022818f00004810	ld.di r1,[r2, 0x1048]
ram:00022b7e	00228c0f00004810	add r12,r2,0x1048
ram:00022b86	01e1	add_s r1,r1,0x1
ram:00022b88	001c6010	st.di r1,[r12]
ram:00022b8c	55274014	add2 r0,r15,0x11
ram:00022b90	00da	mov_s r2,0x0
ram:00022b92	44170318	ld.di r3,[r15,0x44]
ram:00022b96	8c23ff8f	cmp r3,-0x1
ram:00022b9a	26000200	bne 0x00022bbe
ram:00022b9e	441f6013	st.di r13,[r15,0x44]
ram:00022ba2	00100008	ld.di r0,[r0]
ram:00022ba6	e078	nop_s
ram:00022ba8	381ea01f01000100	st.di 0x10001,[r14,0x38]
ram:00022bb0	cf7000e03c00	mov_s r0,0xe000003c
ram:00022bb6	00100008	ld.di r0,[r0]
ram:00022bba	e078	nop_s
ram:00022bbc	01da	mov_s r2,0x1
ram:00022bbe	8aea	brne_s r2,0,0x00022bd0
ram:00022bc0	00d8	mov_s r0,0x0
ram:00022bc2	e078	nop_s
ram:00022bc4	01e0	add_s r0,r0,0x1
ram:00022bc6	8c200f8a	cmp r0,0x3e8
ram:00022bca	bdf6	blt_s 0x00022bc2
ram:00022bcc	a507cfff	b 0x00022b70
ram:00022bd0	0a270034	mov blink,r16
ram:00022bd4	04141034	ld.ab r16,[sp,0x4]
ram:00022bd8	c1c7	pop_s r15
ram:00022bda	c1c6	pop_s r14
ram:00022bdc	e07f	j_s.d [blink]
ram:00022bde	c1c5	_pop_s r13
