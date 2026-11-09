; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00022ad0 entry ram:00022ad0
ram:00022ad0	e1c5	push_s r13
ram:00022ad2	e1c6	push_s r14
ram:00022ad4	e1c7	push_s r15
ram:00022ad6	fc1c08b4	st.aw r16,[sp,-0x4]
ram:00022ada	0a20c027	mov r16,blink
ram:00022ade	0877	mov_s r15,r0
ram:00022ae0	2875	mov_s r13,r1
ram:00022ae2	cf7600e00400	mov_s r14,0xe0000004
ram:00022ae8	b8160318	ld.di r3,[r14,0xb8]
ram:00022aec	5583	ld_s r2,[r3,0x54]
ram:00022aee	3022818f00004810	ld.di r1,[r2, 0x1048]
ram:00022af6	00228c0f00004810	add r12,r2,0x1048
ram:00022afe	01e1	add_s r1,r1,0x1
ram:00022b00	001c6010	st.di r1,[r12]
ram:00022b04	046f	add_s r0,r15,0x4
ram:00022b06	00da	mov_s r2,0x0
ram:00022b08	04170318	ld.di r3,[r15,0x4]
ram:00022b0c	8c23ff8f	cmp r3,-0x1
ram:00022b10	24000200	bne 0x00022b34
ram:00022b14	041f6013	st.di r13,[r15,0x4]
ram:00022b18	00100008	ld.di r0,[r0]
ram:00022b1c	e078	nop_s
ram:00022b1e	401ea01f01000100	st.di 0x10001,[r14,0x40]
ram:00022b26	cf7000e04400	mov_s r0,0xe0000044
ram:00022b2c	00100008	ld.di r0,[r0]
ram:00022b30	e078	nop_s
ram:00022b32	01da	mov_s r2,0x1
ram:00022b34	89ea	brne_s r2,0,0x00022b46
ram:00022b36	00d8	mov_s r0,0x0
ram:00022b38	e078	nop_s
ram:00022b3a	01e0	add_s r0,r0,0x1
ram:00022b3c	8c200f8a	cmp r0,0x3e8
ram:00022b40	bcf6	blt_s 0x00022b38
ram:00022b42	a907cfff	b 0x00022ae8
ram:00022b46	0a270034	mov blink,r16
ram:00022b4a	04141034	ld.ab r16,[sp,0x4]
ram:00022b4e	c1c7	pop_s r15
ram:00022b50	c1c6	pop_s r14
ram:00022b52	e07f	j_s.d [blink]
ram:00022b54	c1c5	_pop_s r13
