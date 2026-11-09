; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_14 entry ram:00029154
ram:00029154	e1c4	push_s r12
ram:00029156	e1c0	push_s r0
ram:00029158	e1c1	push_s r1
ram:0002915a	e1c2	push_s r2
ram:0002915c	e1c3	push_s r3
ram:0002915e	0edb	mov_s r3,0xe
ram:00029160	cf7100e00400	mov_s r1,0xe0000004
ram:00029166	b8110008	ld.di r0,[r1,0xb8]
ram:0002916a	5580	ld_s r2,[r0,0x54]
ram:0002916c	00228c0f00009010	add r12,r2,0x1090
ram:00029174	001ce010	st.di r3,[r12]
ram:00029178	c1c3	pop_s r3
ram:0002917a	c1c2	pop_s r2
ram:0002917c	c1c1	pop_s r1
ram:0002917e	c1c0	pop_s r0
ram:00029180	c1c4	pop_s r12
ram:00029182	20204087	j.f [ilink]
