; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_31 entry ram:00029608
ram:00029608	e1c4	push_s r12
ram:0002960a	e1c0	push_s r0
ram:0002960c	e1c1	push_s r1
ram:0002960e	e1c2	push_s r2
ram:00029610	e1c3	push_s r3
ram:00029612	1fdb	mov_s r3,0x1f
ram:00029614	cf7100e00400	mov_s r1,0xe0000004
ram:0002961a	b8110008	ld.di r0,[r1,0xb8]
ram:0002961e	5580	ld_s r2,[r0,0x54]
ram:00029620	00228c0f00009010	add r12,r2,0x1090
ram:00029628	001ce010	st.di r3,[r12]
ram:0002962c	c1c3	pop_s r3
ram:0002962e	c1c2	pop_s r2
ram:00029630	c1c1	pop_s r1
ram:00029632	c1c0	pop_s r0
ram:00029634	c1c4	pop_s r12
ram:00029636	20204087	j.f [ilink]
