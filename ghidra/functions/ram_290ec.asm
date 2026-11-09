; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_12 entry ram:000290ec
ram:000290ec	e1c4	push_s r12
ram:000290ee	e1c0	push_s r0
ram:000290f0	e1c1	push_s r1
ram:000290f2	e1c2	push_s r2
ram:000290f4	e1c3	push_s r3
ram:000290f6	0cdb	mov_s r3,0xc
ram:000290f8	cf7100e00400	mov_s r1,0xe0000004
ram:000290fe	b8110008	ld.di r0,[r1,0xb8]
ram:00029102	5580	ld_s r2,[r0,0x54]
ram:00029104	00228c0f00009010	add r12,r2,0x1090
ram:0002910c	001ce010	st.di r3,[r12]
ram:00029110	c1c3	pop_s r3
ram:00029112	c1c2	pop_s r2
ram:00029114	c1c1	pop_s r1
ram:00029116	c1c0	pop_s r0
ram:00029118	c1c4	pop_s r12
ram:0002911a	20204087	j.f [ilink]
