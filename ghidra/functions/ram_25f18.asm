; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00025f18 entry ram:00025f18
ram:00025f18	85081200	brlt r0,0x0,0x00025f9c
ram:00025f1c	8108d300	brge r0,0x3,0x00025f9c
ram:00025f20	7368	asl_s r3,r0,0x3
ram:00025f22	757b	add2_s r3,r3,r3
ram:00025f24	cf7006002022	mov_s r0,0x62220
ram:00025f2a	1b63	add_s r3,r3,r0
ram:00025f2c	4a250000	mov r5,0x0
ram:00025f30	001b4201	stb r5,[r3]
ram:00025f34	241b4001	st r5,[r3,0x24]
ram:00025f38	0a24800f00e00400	mov r4,0xe0000004
ram:00025f40	b8140308	ld.di r3,[r4,0xb8]
ram:00025f44	5583	ld_s r2,[r3,0x54]
ram:00025f46	3022808f00007810	ld.di r0,[r2, 0x1078]
ram:00025f4e	00228c0f00007810	add r12,r2,0x1078
ram:00025f56	61b8	sub_s r0,r0,0x1
ram:00025f58	001c2010	st.di r0,[r12]
ram:00025f5c	b8140108	ld.di r1,[r4,0xb8]
ram:00025f60	1581	ld_s r0,[r1,0x54]
ram:00025f62	3020818f00007810	ld.di r1,[r0, 0x1078]
ram:00025f6a	35091300	brge r1,0x0,0x00025f9c
ram:00025f6e	b8140208	ld.di r2,[r4,0xb8]
ram:00025f72	1582	ld_s r0,[r2,0x54]
ram:00025f74	3020828f00007c10	ld.di r2,[r0, 0x107c]
ram:00025f7c	00208c0f00007c10	add r12,r0,0x107c
ram:00025f84	01e2	add_s r2,r2,0x1
ram:00025f86	001ca010	st.di r2,[r12]
ram:00025f8a	b8140108	ld.di r1,[r4,0xb8]
ram:00025f8e	7581	ld_s r3,[r1,0x54]
ram:00025f90	00238c0f00007810	add r12,r3,0x1078
ram:00025f98	001c6011	st.di r5,[r12]
ram:00025f9c	e07e	j_s [blink]
