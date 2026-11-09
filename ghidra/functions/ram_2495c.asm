; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0002495c entry ram:0002495c
ram:0002495c	e1c5	push_s r13
ram:0002495e	eb75	mov_s r13,blink
ram:00024960	5970	mov_s r10,r0
ram:00024962	3971	mov_s r9,r1
ram:00024964	f872	mov_s r7,r2
ram:00024966	1973	mov_s r8,r3
ram:00024968	0a250001	mov r5,r4
ram:0002496c	0a24800f00e00400	mov r4,0xe0000004
ram:00024974	b8140108	ld.di r1,[r4,0xb8]
ram:00024978	5581	ld_s r2,[r1,0x54]
ram:0002497a	3022828f0000180e	ld.di r2,[r2, 0xe18]
ram:00024982	690ade02	bbit0 r2,0xb,0x000249e8
ram:00024986	b8140108	ld.di r1,[r4,0xb8]
ram:0002498a	7581	ld_s r3,[r1,0x54]
ram:0002498c	3023808f0000180e	ld.di r0,[r3, 0xe18]
ram:00024994	abb8	bclr_s r0,r0,0xb
ram:00024996	b8140308	ld.di r3,[r4,0xb8]
ram:0002499a	3583	ld_s r1,[r3,0x54]
ram:0002499c	00218c0f0000180e	add r12,r1,0xe18
ram:000249a4	001c2010	st.di r0,[r12]
ram:000249a8	b8140008	ld.di r0,[r4,0xb8]
ram:000249ac	5580	ld_s r2,[r0,0x54]
ram:000249ae	3022838f0000140e	ld.di r3,[r2, 0xe14]
ram:000249b6	1aeb	breq_s r3,0,0x000249e8
ram:000249b8	b8140208	ld.di r2,[r4,0xb8]
ram:000249bc	3582	ld_s r1,[r2,0x54]
ram:000249be	3021808f0000140e	ld.di r0,[r1, 0xe14]
ram:000249c6	12e8	breq_s r0,0,0x000249e8
ram:000249c8	001686700600f022	ldb r6,[0x622f0]
ram:000249d0	28120111	ldh r1,[r10,0x28]
ram:000249d4	28110211	ldh r2,[r9,0x28]
ram:000249d8	cf7005006453	mov_s r0,0x55364
ram:000249de	e873	mov_s r3,r7
ram:000249e0	8e0eeffd	bl.d 0x0002086c
ram:000249e4	0a240002	_mov r4,r8
ram:000249e8	fb75	mov_s blink,r13
ram:000249ea	e07f	j_s.d [blink]
ram:000249ec	c1c5	_pop_s r13
