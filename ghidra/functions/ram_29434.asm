; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_22 entry ram:00029434
ram:00029434	e1c4	push_s r12
ram:00029436	e1c0	push_s r0
ram:00029438	e1c1	push_s r1
ram:0002943a	e1c2	push_s r2
ram:0002943c	e1c3	push_s r3
ram:0002943e	16db	mov_s r3,0x16
ram:00029440	cf7100e00400	mov_s r1,0xe0000004
ram:00029446	b8110008	ld.di r0,[r1,0xb8]
ram:0002944a	5580	ld_s r2,[r0,0x54]
ram:0002944c	00228c0f00009010	add r12,r2,0x1090
ram:00029454	001ce010	st.di r3,[r12]
ram:00029458	c1c3	pop_s r3
ram:0002945a	c1c2	pop_s r2
ram:0002945c	c1c1	pop_s r1
ram:0002945e	c1c0	pop_s r0
ram:00029460	c1c4	pop_s r12
ram:00029462	20204087	j.f [ilink]
