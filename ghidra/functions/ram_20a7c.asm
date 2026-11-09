; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00020a7c entry ram:00020a7c
ram:00020a7c	f1c0	push_s blink
ram:00020a7e	420ecfff	bl 0x000208bc
ram:00020a82	0a20c00f	mov r0,pcl
ram:00020a86	620f8fff	bl 0x000201e4
ram:00020a8a	d1c0	pop_s blink
ram:00020a8c	e07e	j_s [blink]
