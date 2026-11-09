; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_06 entry ram:00028ea4
ram:00028ea4	e1c4	push_s r12
ram:00028ea6	e1c0	push_s r0
ram:00028ea8	e1c1	push_s r1
ram:00028eaa	e1c2	push_s r2
ram:00028eac	e1c3	push_s r3
ram:00028eae	06db	mov_s r3,0x6
ram:00028eb0	cf7100e00400	mov_s r1,0xe0000004
ram:00028eb6	b8110008	ld.di r0,[r1,0xb8]
ram:00028eba	5580	ld_s r2,[r0,0x54]
ram:00028ebc	00228c0f00009010	add r12,r2,0x1090
ram:00028ec4	001ce010	st.di r3,[r12]
ram:00028ec8	c1c3	pop_s r3
ram:00028eca	c1c2	pop_s r2
ram:00028ecc	c1c1	pop_s r1
ram:00028ece	c1c0	pop_s r0
ram:00028ed0	c1c4	pop_s r12
ram:00028ed2	20204087	j.f [ilink]
