; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00025ea4 entry ram:00025ea4
ram:00025ea4	39e8	breq_s r0,0,0x00025f16
ram:00025ea6	4a250000	mov r5,0x0
ram:00025eaa	00184201	stb r5,[r0]
ram:00025eae	24184001	st r5,[r0,0x24]
ram:00025eb2	0a24800f00e00400	mov r4,0xe0000004
ram:00025eba	b8140208	ld.di r2,[r4,0xb8]
ram:00025ebe	3582	ld_s r1,[r2,0x54]
ram:00025ec0	3021828f00007810	ld.di r2,[r1, 0x1078]
ram:00025ec8	00218c0f00007810	add r12,r1,0x1078
ram:00025ed0	61ba	sub_s r2,r2,0x1
ram:00025ed2	001ca010	st.di r2,[r12]
ram:00025ed6	b8140008	ld.di r0,[r4,0xb8]
ram:00025eda	7580	ld_s r3,[r0,0x54]
ram:00025edc	3023808f00007810	ld.di r0,[r3, 0x1078]
ram:00025ee4	33081300	brge r0,0x0,0x00025f16
ram:00025ee8	b8140108	ld.di r1,[r4,0xb8]
ram:00025eec	7581	ld_s r3,[r1,0x54]
ram:00025eee	3023818f00007c10	ld.di r1,[r3, 0x107c]
ram:00025ef6	00238c0f00007c10	add r12,r3,0x107c
ram:00025efe	01e1	add_s r1,r1,0x1
ram:00025f00	001c6010	st.di r1,[r12]
ram:00025f04	b8140308	ld.di r3,[r4,0xb8]
ram:00025f08	5583	ld_s r2,[r3,0x54]
ram:00025f0a	00228c0f00007810	add r12,r2,0x1078
ram:00025f12	001c6011	st.di r5,[r12]
ram:00025f16	e07e	j_s [blink]
