; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function dsp_vector_target_20 entry ram:000293c8
ram:000293c8	e1c4	push_s r12
ram:000293ca	e1c0	push_s r0
ram:000293cc	e1c1	push_s r1
ram:000293ce	e1c2	push_s r2
ram:000293d0	e1c3	push_s r3
ram:000293d2	cf73050000c0	mov_s r3,0x5c000
ram:000293d8	00130108	ld.di r1,[r3]
ram:000293dc	01e1	add_s r1,r1,0x1
ram:000293de	001b6000	st.di r1,[r3]
ram:000293e2	cf7200e00400	mov_s r2,0xe0000004
ram:000293e8	5c120008	ld.di r0,[r2,0x5c]
ram:000293ec	b7b8	bclr_s r0,r0,0x17
ram:000293ee	5c1a2000	st.di r0,[r2,0x5c]
ram:000293f2	c1c3	pop_s r3
ram:000293f4	c1c2	pop_s r2
ram:000293f6	c1c1	pop_s r1
ram:000293f8	c1c0	pop_s r0
ram:000293fa	c1c4	pop_s r12
ram:000293fc	20208087	j.f [r30]
