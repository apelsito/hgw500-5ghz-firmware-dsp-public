; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00029784 entry ram:00029784
ram:00029784	fc1c88b1	st.aw r6,[sp,-0x4]
ram:00029788	fc1c48b1	st.aw r5,[sp,-0x4]
ram:0002978c	fc1c08b1	st.aw r4,[sp,-0x4]
ram:00029790	e1c3	push_s r3
ram:00029792	e1c2	push_s r2
ram:00029794	e1c1	push_s r1
ram:00029796	e1c0	push_s r0
ram:00029798	07c0	ld_s r0,[sp,0x1c]
ram:0002979a	1c1cc031	st r7,[sp,0x1c]
ram:0002979e	e1c0	push_s r0
ram:000297a0	e07f	j_s.d [blink]
ram:000297a2	01c0	_ld_s r0,[sp,0x4]
