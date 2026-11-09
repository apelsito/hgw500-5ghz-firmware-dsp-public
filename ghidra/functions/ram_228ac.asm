; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000228ac entry ram:000228ac
ram:000228ac	2088	ldb_s r1,[r0,0x0]
ram:000228ae	18e9	breq_s r1,0,0x000228dc
ram:000228b0	0a24800f00f08000	mov r4,0xf0000080
ram:000228b8	1509b102	brne.d r1,0xa,0x000228cc
ram:000228bc	01e0	_add_s r0,r0,0x1
ram:000228be	0ddb	mov_s r3,0xd
ram:000228c0	94148288	ldb.di r2,[r4,-0x6c]
ram:000228c4	fd0a9e81	bbit0 r2,0x6,0x000228c0
ram:000228c8	801ce280	stb.di r3,[r4,-0x80]
ram:000228cc	94148388	ldb.di r3,[r4,-0x6c]
ram:000228d0	fd0b9e81	bbit0 r3,0x6,0x000228cc
ram:000228d4	801c6280	stb.di r1,[r4,-0x80]
ram:000228d8	2088	ldb_s r1,[r0,0x0]
ram:000228da	f0e9	brne_s r1,0,0x000228b8
ram:000228dc	e07e	j_s [blink]
