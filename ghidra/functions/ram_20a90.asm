; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00020a90 entry ram:00020a90
ram:00020a90	f1c0	push_s blink
ram:00020a92	720a000e	bl 0x0003cd00
ram:00020a96	aa0b4004	bl 0x0002963c
ram:00020a9a	d1c0	pop_s blink
ram:00020a9c	e07e	j_s [blink]
