; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_23 entry ram:00029468
ram:00029468	e1c4	push_s r12
ram:0002946a	e1c0	push_s r0
ram:0002946c	e1c1	push_s r1
ram:0002946e	e1c2	push_s r2
ram:00029470	e1c3	push_s r3
ram:00029472	17db	mov_s r3,0x17
ram:00029474	cf7100e00400	mov_s r1,0xe0000004
ram:0002947a	b8110008	ld.di r0,[r1,0xb8]
ram:0002947e	5580	ld_s r2,[r0,0x54]
ram:00029480	00228c0f00009010	add r12,r2,0x1090
ram:00029488	001ce010	st.di r3,[r12]
ram:0002948c	c1c3	pop_s r3
ram:0002948e	c1c2	pop_s r2
ram:00029490	c1c1	pop_s r1
ram:00029492	c1c0	pop_s r0
ram:00029494	c1c4	pop_s r12
ram:00029496	20204087	j.f [ilink]
