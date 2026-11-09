; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0002963c entry ram:0002963c
ram:0002963c	8a23ff0f	mov r3,-0x1
ram:00029640	cf7200e00400	mov_s r2,0xe0000004
ram:00029646	241ae000	st.di r3,[r2,0x24]
ram:0002964a	611af800	st.di.as r3,[r2,0x61]
ram:0002964e	ab26087012000804	sr 0x120408,[0x200]
ram:00029656	aa200800	lr r0,[0x200]
ram:0002965a	93b8	bset_s r0,r0,0x13
ram:0002965c	ab200800	sr r0,[0x200]
ram:00029660	6a218002	lr r1,[status32]
ram:00029664	82b9	bset_s r1,r1,0x2
ram:00029666	29204000	flag r1
ram:0002966a	e07e	j_s [blink]
