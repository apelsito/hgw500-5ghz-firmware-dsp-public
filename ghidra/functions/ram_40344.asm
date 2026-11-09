; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00040344 entry ram:00040344
ram:00040344	e1c4	push_s r12
ram:00040346	cf740b00a083	mov_s r12,0xb83a0
ram:0004034c	150c0317	brge r12,sp,0x00040360
ram:00040350	cf740b00a0ab	mov_s r12,0xbaba0
ram:00040356	0d0c0217	brlt r12,sp,0x00040360
ram:0004035a	c1c4	pop_s r12
ram:0004035c	2020c007	j [blink]
ram:00040360	ff7f	brk_s
ram:00040362	e078	nop_s
ram:00040364	0721cb00	xor r11,r1,r3
ram:00040368	2f2640f0	asl.f 0,r1
ram:0004036c	4a220010	mov r10,0x0
ram:00040370	10002600	bnc.d 0x00040380
ram:00040374	2f23c412	_rrc r11,r11
ram:00040378	0e208082	rsub.f r0,r0,r10
ram:0004037c	03224110	sbc r1,r10,r1
ram:00040380	150bde07	bbit0 r3,0x1f,0x00040394
ram:00040384	0e228282	rsub.f r2,r2,r10
ram:00040388	0322c310	sbc r3,r10,r3
ram:0004038c	04f0	b_s 0x00040394
