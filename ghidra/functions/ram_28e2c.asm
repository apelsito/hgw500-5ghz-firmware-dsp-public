; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_05 entry ram:00028e2c
ram:00028e2c	e1c4	push_s r12
ram:00028e2e	e1c0	push_s r0
ram:00028e30	e1c1	push_s r1
ram:00028e32	e1c2	push_s r2
ram:00028e34	e1c3	push_s r3
ram:00028e36	ab26447000000000	sr 0x0,[0x101]
ram:00028e3e	ab26047000000000	sr 0x0,[0x100]
ram:00028e46	05d8	mov_s r0,0x5
ram:00028e48	cf7300e00400	mov_s r3,0xe0000004
ram:00028e4e	b8130208	ld.di r2,[r3,0xb8]
ram:00028e52	3582	ld_s r1,[r2,0x54]
ram:00028e54	00218c0f00009010	add r12,r1,0x1090
ram:00028e5c	001c2010	st.di r0,[r12]
ram:00028e60	b8130008	ld.di r0,[r3,0xb8]
ram:00028e64	1580	ld_s r0,[r0,0x54]
ram:00028e66	3020818f00008c10	ld.di r1,[r0, 0x108c]
ram:00028e6e	00208c0f00008c10	add r12,r0,0x108c
ram:00028e76	01e1	add_s r1,r1,0x1
ram:00028e78	001c6010	st.di r1,[r12]
ram:00028e7c	ab2684700000a861	sr 0x61a8,[0x102]
ram:00028e84	ab26447000000300	sr 0x3,[0x101]
ram:00028e8c	ab26047000000000	sr 0x0,[0x100]
ram:00028e94	c1c3	pop_s r3
ram:00028e96	c1c2	pop_s r2
ram:00028e98	c1c1	pop_s r1
ram:00028e9a	c1c0	pop_s r0
ram:00028e9c	c1c4	pop_s r12
ram:00028e9e	20208087	j.f [r30]
