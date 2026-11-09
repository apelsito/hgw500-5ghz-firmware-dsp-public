; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_08 entry ram:00028f0c
ram:00028f0c	e1c4	push_s r12
ram:00028f0e	e1c0	push_s r0
ram:00028f10	e1c1	push_s r1
ram:00028f12	e1c2	push_s r2
ram:00028f14	e1c3	push_s r3
ram:00028f16	08db	mov_s r3,0x8
ram:00028f18	cf7100e00400	mov_s r1,0xe0000004
ram:00028f1e	b8110008	ld.di r0,[r1,0xb8]
ram:00028f22	5580	ld_s r2,[r0,0x54]
ram:00028f24	00228c0f00009010	add r12,r2,0x1090
ram:00028f2c	001ce010	st.di r3,[r12]
ram:00028f30	c1c3	pop_s r3
ram:00028f32	c1c2	pop_s r2
ram:00028f34	c1c1	pop_s r1
ram:00028f36	c1c0	pop_s r0
ram:00028f38	c1c4	pop_s r12
ram:00028f3a	20204087	j.f [ilink]
