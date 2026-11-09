; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000406d8 entry ram:000406d8
ram:000406d8	f1c0	push_s blink
ram:000406da	e1c5	push_s r13
ram:000406dc	6a248012	lr r12,[status32]
ram:000406e0	e1c4	push_s r12
ram:000406e2	09d1	ld_s r1,[pcl,0x24]
ram:000406e4	0081	ld_s r0,[r1,0x0]
ram:000406e6	09d5	ld_s r13,[pcl,0x24]
ram:000406e8	08e8	breq_s r0,0,0x000406f8
ram:000406ea	00d8	mov_s r0,0x0
ram:000406ec	80e5	cmp_s r13,0x0
ram:000406ee	00a1	st_s r0,[r1,0x0]
ram:000406f0	d80fc1ff	bleq 0x000406c8
ram:000406f4	0a090000	bl 0x000407fc
ram:000406f8	a970	mov_s r0,r13
ram:000406fa	c1c4	pop_s r12
ram:000406fc	29200003	flag r12
ram:00040700	49018ff4	b 0x00029848
