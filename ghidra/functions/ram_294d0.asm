; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_25 entry ram:000294d0
ram:000294d0	e1c4	push_s r12
ram:000294d2	e1c0	push_s r0
ram:000294d4	e1c1	push_s r1
ram:000294d6	e1c2	push_s r2
ram:000294d8	e1c3	push_s r3
ram:000294da	19db	mov_s r3,0x19
ram:000294dc	cf7100e00400	mov_s r1,0xe0000004
ram:000294e2	b8110008	ld.di r0,[r1,0xb8]
ram:000294e6	5580	ld_s r2,[r0,0x54]
ram:000294e8	00228c0f00009010	add r12,r2,0x1090
ram:000294f0	001ce010	st.di r3,[r12]
ram:000294f4	c1c3	pop_s r3
ram:000294f6	c1c2	pop_s r2
ram:000294f8	c1c1	pop_s r1
ram:000294fa	c1c0	pop_s r0
ram:000294fc	c1c4	pop_s r12
ram:000294fe	20204087	j.f [ilink]
