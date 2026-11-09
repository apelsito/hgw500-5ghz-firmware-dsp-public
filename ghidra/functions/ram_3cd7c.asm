; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003cd7c entry ram:0003cd7c
ram:0003cd7c	84e8	brne_s r0,0,0x0003cd84
ram:0003cd7e	3f002000	b.d 0x0003cdba
ram:0003cd82	01d8	_mov_s r0,0x1
ram:0003cd84	00d9	mov_s r1,0x0
ram:0003cd86	25a0	st_s r1,[r0,0x14]
ram:0003cd88	26a0	st_s r1,[r0,0x18]
ram:0003cd8a	2eb0	stw_s r1,[r0,0x1c]
ram:0003cd8c	0018800f45670123	st 0x67452301,[r0]
ram:0003cd94	0418800fcdef89ab	st 0xefcdab89,[r0,0x4]
ram:0003cd9c	0818800fba98fedc	st 0x98badcfe,[r0,0x8]
ram:0003cda4	0c18800f32107654	st 0x10325476,[r0,0xc]
ram:0003cdac	1018800fd2c3f0e1	st 0xc3d2e1f0,[r0,0x10]
ram:0003cdb4	38a0	st_s r1,[r0,0x60]
ram:0003cdb6	39a0	st_s r1,[r0,0x64]
ram:0003cdb8	2870	mov_s r0,r1
ram:0003cdba	e07e	j_s [blink]
