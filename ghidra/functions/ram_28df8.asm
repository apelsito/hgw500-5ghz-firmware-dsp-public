; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_04 entry ram:00028df8
ram:00028df8	e1c4	push_s r12
ram:00028dfa	e1c0	push_s r0
ram:00028dfc	e1c1	push_s r1
ram:00028dfe	e1c2	push_s r2
ram:00028e00	e1c3	push_s r3
ram:00028e02	04db	mov_s r3,0x4
ram:00028e04	cf7100e00400	mov_s r1,0xe0000004
ram:00028e0a	b8110008	ld.di r0,[r1,0xb8]
ram:00028e0e	5580	ld_s r2,[r0,0x54]
ram:00028e10	00228c0f00009010	add r12,r2,0x1090
ram:00028e18	001ce010	st.di r3,[r12]
ram:00028e1c	c1c3	pop_s r3
ram:00028e1e	c1c2	pop_s r2
ram:00028e20	c1c1	pop_s r1
ram:00028e22	c1c0	pop_s r0
ram:00028e24	c1c4	pop_s r12
ram:00028e26	20204087	j.f [ilink]
