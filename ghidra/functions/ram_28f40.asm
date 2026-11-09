; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_09 entry ram:00028f40
ram:00028f40	e1c4	push_s r12
ram:00028f42	e1c0	push_s r0
ram:00028f44	e1c1	push_s r1
ram:00028f46	e1c2	push_s r2
ram:00028f48	e1c3	push_s r3
ram:00028f4a	09db	mov_s r3,0x9
ram:00028f4c	cf7100e00400	mov_s r1,0xe0000004
ram:00028f52	b8110008	ld.di r0,[r1,0xb8]
ram:00028f56	5580	ld_s r2,[r0,0x54]
ram:00028f58	00228c0f00009010	add r12,r2,0x1090
ram:00028f60	001ce010	st.di r3,[r12]
ram:00028f64	c1c3	pop_s r3
ram:00028f66	c1c2	pop_s r2
ram:00028f68	c1c1	pop_s r1
ram:00028f6a	c1c0	pop_s r0
ram:00028f6c	c1c4	pop_s r12
ram:00028f6e	20204087	j.f [ilink]
