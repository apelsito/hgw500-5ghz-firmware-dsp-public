; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_26 entry ram:00029504
ram:00029504	e1c4	push_s r12
ram:00029506	e1c0	push_s r0
ram:00029508	e1c1	push_s r1
ram:0002950a	e1c2	push_s r2
ram:0002950c	e1c3	push_s r3
ram:0002950e	1adb	mov_s r3,0x1a
ram:00029510	cf7100e00400	mov_s r1,0xe0000004
ram:00029516	b8110008	ld.di r0,[r1,0xb8]
ram:0002951a	5580	ld_s r2,[r0,0x54]
ram:0002951c	00228c0f00009010	add r12,r2,0x1090
ram:00029524	001ce010	st.di r3,[r12]
ram:00029528	c1c3	pop_s r3
ram:0002952a	c1c2	pop_s r2
ram:0002952c	c1c1	pop_s r1
ram:0002952e	c1c0	pop_s r0
ram:00029530	c1c4	pop_s r12
ram:00029532	20204087	j.f [ilink]
