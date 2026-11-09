; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000208a0 entry ram:000208a0
ram:000208a0	001601780b00a083	ld.di r1,[0xb83a0]
ram:000208a8	0f09800fcdababef	breq r1,0xabcdefab,0x000208b6
ram:000208b0	09002000	b.d 0x000208b8
ram:000208b4	01d8	_mov_s r0,0x1
ram:000208b6	00d8	mov_s r0,0x0
ram:000208b8	e07e	j_s [blink]
