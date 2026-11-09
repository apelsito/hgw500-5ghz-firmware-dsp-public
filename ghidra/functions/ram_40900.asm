; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00040900 entry ram:00040900
ram:00040900	cf7200e00400	mov_s r2,0xe0000004
ram:00040906	08e8	breq_s r0,0,0x00040914
ram:00040908	5c120108	ld.di r1,[r2,0x5c]
ram:0004090c	97b9	bset_s r1,r1,0x17
ram:0004090e	5c1a6000	st.di r1,[r2,0x5c]
ram:00040912	07f0	b_s 0x0004091e
ram:00040914	5c120008	ld.di r0,[r2,0x5c]
ram:00040918	b7b8	bclr_s r0,r0,0x17
ram:0004091a	5c1a2000	st.di r0,[r2,0x5c]
ram:0004091e	e07e	j_s [blink]
