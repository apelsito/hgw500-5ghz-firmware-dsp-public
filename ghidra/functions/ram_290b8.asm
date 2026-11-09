; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_11 entry ram:000290b8
ram:000290b8	e1c4	push_s r12
ram:000290ba	e1c0	push_s r0
ram:000290bc	e1c1	push_s r1
ram:000290be	e1c2	push_s r2
ram:000290c0	e1c3	push_s r3
ram:000290c2	0bdb	mov_s r3,0xb
ram:000290c4	cf7100e00400	mov_s r1,0xe0000004
ram:000290ca	b8110008	ld.di r0,[r1,0xb8]
ram:000290ce	5580	ld_s r2,[r0,0x54]
ram:000290d0	00228c0f00009010	add r12,r2,0x1090
ram:000290d8	001ce010	st.di r3,[r12]
ram:000290dc	c1c3	pop_s r3
ram:000290de	c1c2	pop_s r2
ram:000290e0	c1c1	pop_s r1
ram:000290e2	c1c0	pop_s r0
ram:000290e4	c1c4	pop_s r12
ram:000290e6	20204087	j.f [ilink]
