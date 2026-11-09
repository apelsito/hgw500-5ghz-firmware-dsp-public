; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003cd68 entry ram:0003cd68
ram:0003cd68	cf71050000c1	mov_s r1,0x5c100
ram:0003cd6e	00110008	ld.di r0,[r1]
ram:0003cd72	01e0	add_s r0,r0,0x1
ram:0003cd74	00192000	st.di r0,[r1]
ram:0003cd78	e07e	j_s [blink]
