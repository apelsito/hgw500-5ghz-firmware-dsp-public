; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_07 entry ram:00028ed8
ram:00028ed8	e1c4	push_s r12
ram:00028eda	e1c0	push_s r0
ram:00028edc	e1c1	push_s r1
ram:00028ede	e1c2	push_s r2
ram:00028ee0	e1c3	push_s r3
ram:00028ee2	07db	mov_s r3,0x7
ram:00028ee4	cf7100e00400	mov_s r1,0xe0000004
ram:00028eea	b8110008	ld.di r0,[r1,0xb8]
ram:00028eee	5580	ld_s r2,[r0,0x54]
ram:00028ef0	00228c0f00009010	add r12,r2,0x1090
ram:00028ef8	001ce010	st.di r3,[r12]
ram:00028efc	c1c3	pop_s r3
ram:00028efe	c1c2	pop_s r2
ram:00028f00	c1c1	pop_s r1
ram:00028f02	c1c0	pop_s r0
ram:00028f04	c1c4	pop_s r12
ram:00028f06	20204087	j.f [ilink]
