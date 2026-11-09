; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003cd00 entry ram:0003cd00
ram:0003cd00	6b26c078ffffffff	sr 0xffffffff,[limit0]
ram:0003cd08	6b26407800000000	sr 0x0,[count0]
ram:0003cd10	6b26807800000300	sr 0x3,[control0]
ram:0003cd18	e07e	j_s [blink]
