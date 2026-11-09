; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003e8e4 entry ram:0003e8e4
ram:0003e8e4	80e0	cmp_s r0,0x0
ram:0003e8e6	ca202100	mov.eq r0,0x0
ram:0003e8ea	04f2	beq_s 0x0003e8f0
ram:0003e8ec	20a8	stb_s r1,[r0,0x0]
ram:0003e8ee	01d8	mov_s r0,0x1
ram:0003e8f0	e07e	j_s [blink]
