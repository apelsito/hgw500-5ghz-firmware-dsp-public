; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_30 entry ram:000295d4
ram:000295d4	e1c4	push_s r12
ram:000295d6	e1c0	push_s r0
ram:000295d8	e1c1	push_s r1
ram:000295da	e1c2	push_s r2
ram:000295dc	e1c3	push_s r3
ram:000295de	1edb	mov_s r3,0x1e
ram:000295e0	cf7100e00400	mov_s r1,0xe0000004
ram:000295e6	b8110008	ld.di r0,[r1,0xb8]
ram:000295ea	5580	ld_s r2,[r0,0x54]
ram:000295ec	00228c0f00009010	add r12,r2,0x1090
ram:000295f4	001ce010	st.di r3,[r12]
ram:000295f8	c1c3	pop_s r3
ram:000295fa	c1c2	pop_s r2
ram:000295fc	c1c1	pop_s r1
ram:000295fe	c1c0	pop_s r0
ram:00029600	c1c4	pop_s r12
ram:00029602	20204087	j.f [ilink]
