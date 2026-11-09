; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003e7fc entry ram:0003e7fc
ram:0003e7fc	800fffff	ble0x1f.d 0x0003e77c
ram:0003e800	ffff	_bl_s 0x0003e7fc
ram:0003e802	1076	cmp_s r14,r0
ram:0003e804	ca23ad28	mov.hi r19,0x22
ram:0003e808	d3f1	b_s 0x0003e7ae
ram:0003e80a	5271	cmp_s r1,r18
ram:0003e80c	ca23812fffffffff	mov.eq r19,0xffffffff
ram:0003e814	0a224084	mov.f r2,r17
ram:0003e818	02f2	beq_s 0x0003e81c
ram:0003e81a	20a2	st_s r1,[r2,0x0]
ram:0003e81c	09081020	breq r16,0x0,0x0003e824
ram:0003e820	0018c024	st r19,[r16]
ram:0003e824	f5074ff5	b 0x00029818
