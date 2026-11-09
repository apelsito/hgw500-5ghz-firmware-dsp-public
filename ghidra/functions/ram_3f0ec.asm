; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003f0ec entry ram:0003f0ec
ram:0003f0ec	f1c0	push_s blink
ram:0003f0ee	ea0e0ff5	bl 0x000297d4
ram:0003f0f2	0876	mov_s r14,r0
ram:0003f0f4	2875	mov_s r13,r1
ram:0003f0f6	2870	mov_s r0,r1
ram:0003f0f8	07d2	ld_s r2,[pcl,0x1c]
ram:0003f0fa	660cefff	bl.d 0x0003ed5c
ram:0003f0fe	00d9	_mov_s r1,0x0
ram:0003f100	a278	sub_s r0,r0,r13
ram:0003f102	4168	add_s r2,r0,0x1
ram:0003f104	c970	mov_s r0,r14
ram:0003f106	5e0befff	bl.d 0x0003ec60
ram:0003f10a	a971	_mov_s r1,r13
ram:0003f10c	35072ff5	b.d 0x00029840
ram:0003f110	c970	_mov_s r0,r14
