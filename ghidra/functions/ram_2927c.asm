; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_18 entry ram:0002927c
ram:0002927c	e1c4	push_s r12
ram:0002927e	e1c0	push_s r0
ram:00029280	e1c1	push_s r1
ram:00029282	e1c2	push_s r2
ram:00029284	e1c3	push_s r3
ram:00029286	12db	mov_s r3,0x12
ram:00029288	cf7100e00400	mov_s r1,0xe0000004
ram:0002928e	b8110008	ld.di r0,[r1,0xb8]
ram:00029292	5580	ld_s r2,[r0,0x54]
ram:00029294	00228c0f00009010	add r12,r2,0x1090
ram:0002929c	001ce010	st.di r3,[r12]
ram:000292a0	c1c3	pop_s r3
ram:000292a2	c1c2	pop_s r2
ram:000292a4	c1c1	pop_s r1
ram:000292a6	c1c0	pop_s r0
ram:000292a8	c1c4	pop_s r12
ram:000292aa	20204087	j.f [ilink]
