; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00020c84 entry ram:00020c84
ram:00020c84	f1c0	push_s blink
ram:00020c86	e60fefff	bl.d 0x00020c68
ram:00020c8a	04b8	_asl_s r0,r0,0x4
ram:00020c8c	d1c0	pop_s blink
ram:00020c8e	e07e	j_s [blink]
