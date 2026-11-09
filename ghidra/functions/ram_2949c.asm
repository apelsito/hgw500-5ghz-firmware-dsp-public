; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_24 entry ram:0002949c
ram:0002949c	e1c4	push_s r12
ram:0002949e	e1c0	push_s r0
ram:000294a0	e1c1	push_s r1
ram:000294a2	e1c2	push_s r2
ram:000294a4	e1c3	push_s r3
ram:000294a6	18db	mov_s r3,0x18
ram:000294a8	cf7100e00400	mov_s r1,0xe0000004
ram:000294ae	b8110008	ld.di r0,[r1,0xb8]
ram:000294b2	5580	ld_s r2,[r0,0x54]
ram:000294b4	00228c0f00009010	add r12,r2,0x1090
ram:000294bc	001ce010	st.di r3,[r12]
ram:000294c0	c1c3	pop_s r3
ram:000294c2	c1c2	pop_s r2
ram:000294c4	c1c1	pop_s r1
ram:000294c6	c1c0	pop_s r0
ram:000294c8	c1c4	pop_s r12
ram:000294ca	20204087	j.f [ilink]
