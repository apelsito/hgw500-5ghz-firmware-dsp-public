; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_28 entry ram:0002956c
ram:0002956c	e1c4	push_s r12
ram:0002956e	e1c0	push_s r0
ram:00029570	e1c1	push_s r1
ram:00029572	e1c2	push_s r2
ram:00029574	e1c3	push_s r3
ram:00029576	1cdb	mov_s r3,0x1c
ram:00029578	cf7100e00400	mov_s r1,0xe0000004
ram:0002957e	b8110008	ld.di r0,[r1,0xb8]
ram:00029582	5580	ld_s r2,[r0,0x54]
ram:00029584	00228c0f00009010	add r12,r2,0x1090
ram:0002958c	001ce010	st.di r3,[r12]
ram:00029590	c1c3	pop_s r3
ram:00029592	c1c2	pop_s r2
ram:00029594	c1c1	pop_s r1
ram:00029596	c1c0	pop_s r0
ram:00029598	c1c4	pop_s r12
ram:0002959a	20204087	j.f [ilink]
