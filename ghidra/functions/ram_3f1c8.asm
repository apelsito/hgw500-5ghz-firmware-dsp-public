; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003f1c8 entry ram:0003f1c8
ram:0003f1c8	0180	ld_s r0,[r0,0x4]
ram:0003f1ca	34b8	lsr_s r0,r0,0x14
ram:0003f1cc	cab8	bmsk_s r0,r0,0xa
ram:0003f1ce	e07f	j_s.d [blink]
ram:0003f1d0	82208f0f	_sub r0,r0,0x3fe
