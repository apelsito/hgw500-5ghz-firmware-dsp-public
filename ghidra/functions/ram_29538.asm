; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_27 entry ram:00029538
ram:00029538	e1c4	push_s r12
ram:0002953a	e1c0	push_s r0
ram:0002953c	e1c1	push_s r1
ram:0002953e	e1c2	push_s r2
ram:00029540	e1c3	push_s r3
ram:00029542	1bdb	mov_s r3,0x1b
ram:00029544	cf7100e00400	mov_s r1,0xe0000004
ram:0002954a	b8110008	ld.di r0,[r1,0xb8]
ram:0002954e	5580	ld_s r2,[r0,0x54]
ram:00029550	00228c0f00009010	add r12,r2,0x1090
ram:00029558	001ce010	st.di r3,[r12]
ram:0002955c	c1c3	pop_s r3
ram:0002955e	c1c2	pop_s r2
ram:00029560	c1c1	pop_s r1
ram:00029562	c1c0	pop_s r0
ram:00029564	c1c4	pop_s r12
ram:00029566	20204087	j.f [ilink]
