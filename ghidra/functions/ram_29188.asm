; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_15 entry ram:00029188
ram:00029188	e1c4	push_s r12
ram:0002918a	e1c0	push_s r0
ram:0002918c	e1c1	push_s r1
ram:0002918e	e1c2	push_s r2
ram:00029190	e1c3	push_s r3
ram:00029192	0fdb	mov_s r3,0xf
ram:00029194	cf7100e00400	mov_s r1,0xe0000004
ram:0002919a	b8110008	ld.di r0,[r1,0xb8]
ram:0002919e	5580	ld_s r2,[r0,0x54]
ram:000291a0	00228c0f00009010	add r12,r2,0x1090
ram:000291a8	001ce010	st.di r3,[r12]
ram:000291ac	c1c3	pop_s r3
ram:000291ae	c1c2	pop_s r2
ram:000291b0	c1c1	pop_s r1
ram:000291b2	c1c0	pop_s r0
ram:000291b4	c1c4	pop_s r12
ram:000291b6	20204087	j.f [ilink]
