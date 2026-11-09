; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_13 entry ram:00029120
ram:00029120	e1c4	push_s r12
ram:00029122	e1c0	push_s r0
ram:00029124	e1c1	push_s r1
ram:00029126	e1c2	push_s r2
ram:00029128	e1c3	push_s r3
ram:0002912a	0ddb	mov_s r3,0xd
ram:0002912c	cf7100e00400	mov_s r1,0xe0000004
ram:00029132	b8110008	ld.di r0,[r1,0xb8]
ram:00029136	5580	ld_s r2,[r0,0x54]
ram:00029138	00228c0f00009010	add r12,r2,0x1090
ram:00029140	001ce010	st.di r3,[r12]
ram:00029144	c1c3	pop_s r3
ram:00029146	c1c2	pop_s r2
ram:00029148	c1c1	pop_s r1
ram:0002914a	c1c0	pop_s r0
ram:0002914c	c1c4	pop_s r12
ram:0002914e	20204087	j.f [ilink]
