; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003e8f8 entry ram:0003e8f8
ram:0003e8f6	02e0	add_s r0,r0,0x2
ram:0003e8f8	61ba	sub_s r2,r2,0x1
ram:0003e8fa	8c22ff8f	cmp r2,-0x1
ram:0003e8fe	06f2	beq_s 0x0003e908
ram:0003e900	6090	ldw_s r3,[r0,0x0]
ram:0003e902	f709c180	brne r1,r3,0x0003e8f6
ram:0003e906	03f0	b_s 0x0003e90a
ram:0003e908	00d8	mov_s r0,0x0
ram:0003e90a	e07e	j_s [blink]
