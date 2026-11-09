; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0003d814 entry ram:0003d814
ram:0003d814	f1c0	push_s blink
ram:0003d816	ba0fcff5	bl 0x000297cc
ram:0003d81a	6975	mov_s r13,r11
ram:0003d81c	3025801fffff54ff	ld r0,[r13, 0xffffff54]
ram:0003d824	0de8	breq_s r0,0,0x0003d83e
ram:0003d826	3025801fffff4cff	ld r0,[r13, 0xffffff4c]
ram:0003d82e	13081e00	bbit0 r0,0x0,0x0003d83e
ram:0003d832	00d8	mov_s r0,0x0
ram:0003d834	00258c1fffff54ff	add r12,r13,0xffffff54
ram:0003d83c	00a4	st_s r0,[r12,0x0]
ram:0003d83e	3025841fffff58ff	ld r4,[r13, 0xffffff58]
ram:0003d846	00258c1fffff5cff	add r12,r13,0xffffff5c
ram:0003d84e	3025811f00004400	ld r1,[r13, 0x44]
ram:0003d856	001c0011	st r4,[r12]
ram:0003d85a	00258c1f00004400	add r12,r13,0x44
ram:0003d862	40210002	add r0,r1,0x8
ram:0003d866	00a4	st_s r0,[r12,0x0]
ram:0003d868	e081	ld_s r15,[r1,0x0]
ram:0003d86a	3025801fffff6cff	ld r0,[r13, 0xffffff6c]
ram:0003d872	04111000	ld r16,[r1,0x4]
ram:0003d876	cf74ffff90ff	mov_s r12,0xffffff90
ram:0003d87c	2168	add_s r1,r0,0x1
ram:0003d87e	8c244189	cmp r4,0x65
ram:0003d882	ca254100	mov.eq r5,r1
ram:0003d886	ca250200	mov.ne r5,r0
ram:0003d88a	9865	add_s r0,r13,r12
ram:0003d88c	cf74fffff0ff	mov_s r12,0xfffffff0
ram:0003d892	4fd9	mov_s r1,0x4f
ram:0003d894	e972	mov_s r2,r15
ram:0003d896	0a73	mov_s r3,r16
ram:0003d898	00250613	add r6,r13,r12
ram:0003d89c	cf74ffff74ff	mov_s r12,0xffffff74
ram:0003d8a2	520da000	bl.d 0x0003edf0
ram:0003d8a6	00250713	_add r7,r13,r12
ram:0003d8aa	00258c1fffff3cff	add r12,r13,0xffffff3c
ram:0003d8b2	00a4	st_s r0,[r12,0x0]
ram:0003d8b4	0876	mov_s r14,r0
ram:0003d8b6	53208027	bmsk r0,r16,0x1e
ram:0003d8ba	0520c083	or.f r0,r0,r15
ram:0003d8be	81d1	ld_s r1,[pcl,0x204]
ram:0003d8c0	01d8	mov_s r0,0x1
ram:0003d8c2	c078	sub_s.ne r0,r0,r0
ram:0003d8c4	00258c1ffffffcff	add r12,r13,0xfffffffc
ram:0003d8cc	00a4	st_s r0,[r12,0x0]
ram:0003d8ce	4208a000	bl.d 0x0003e90c
ram:0003d8d2	c970	_mov_s r0,r14
ram:0003d8d4	8ce8	brne_s r0,0,0x0003d8ec
ram:0003d8d6	3025801ffffff0ff	ld r0,[r13, 0xfffffff0]
ram:0003d8de	88e8	brne_s r0,0,0x0003d8ec
ram:0003d8e0	01d8	mov_s r0,0x1
ram:0003d8e2	00258c1ffffff0ff	add r12,r13,0xfffffff0
ram:0003d8ea	00a4	st_s r0,[r12,0x0]
ram:0003d8ec	c970	mov_s r0,r14
ram:0003d8ee	00de	mov_s r14,0x0
ram:0003d8f0	c971	mov_s r1,r14
ram:0003d8f2	75d7	ld_s r15,[pcl,0x1d4]
ram:0003d8f4	6a0ca000	bl.d 0x0003ed5c
ram:0003d8f8	e972	_mov_s r2,r15
ram:0003d8fa	00258c1fffff44ff	add r12,r13,0xffffff44
ram:0003d902	00a4	st_s r0,[r12,0x0]
ram:0003d904	80e0	cmp_s r0,0x0
ram:0003d906	ca20c103	mov.eq r0,r15
ram:0003d90a	07f2	beq_s 0x0003d916
ram:0003d90c	3025811fffff3cff	ld r1,[r13, 0xffffff3c]
ram:0003d914	2278	sub_s r0,r0,r1
ram:0003d916	3025811fffff3cff	ld r1,[r13, 0xffffff3c]
ram:0003d91e	6bd7	ld_s r15,[pcl,0x1ac]
ram:0003d920	00258c1ffffff4ff	add r12,r13,0xfffffff4
ram:0003d928	2089	ldb_s r1,[r1,0x0]
ram:0003d92a	2967	ldb_s r1,[r15,r1]
ram:0003d92c	00a4	st_s r0,[r12,0x0]
ram:0003d92e	15099f00	bbit1 r1,0x2,0x0003d940
ram:0003d932	cf74ffff7cff	mov_s r12,0xffffff7c
ram:0003d938	9d65	add_s r13,r13,r12
ram:0003d93a	fd022000	b.d 0x0003dc34
ram:0003d93e	00a5	_st_s r0,[r13,0x0]
ram:0003d940	00258c1fffff8cff	add r12,r13,0xffffff8c
ram:0003d948	c0a4	st_s r14,[r12,0x0]
ram:0003d94a	00258c1fffff88ff	add r12,r13,0xffffff88
ram:0003d952	c0a4	st_s r14,[r12,0x0]
ram:0003d954	00258c1fffff84ff	add r12,r13,0xffffff84
ram:0003d95c	c0a4	st_s r14,[r12,0x0]
ram:0003d95e	00258c1ffffff8ff	add r12,r13,0xfffffff8
ram:0003d966	c0a4	st_s r14,[r12,0x0]
ram:0003d968	00258c1fffff80ff	add r12,r13,0xffffff80
ram:0003d970	c0a4	st_s r14,[r12,0x0]
ram:0003d972	00258c1fffff7cff	add r12,r13,0xffffff7c
ram:0003d97a	c0a4	st_s r14,[r12,0x0]
ram:0003d97c	3025831fffff58ff	ld r3,[r13, 0xffffff58]
ram:0003d984	3025811fffff6cff	ld r1,[r13, 0xffffff6c]
ram:0003d98c	00258c1fffff68ff	add r12,r13,0xffffff68
ram:0003d994	e5e3	cmp_s r3,0x65
ram:0003d996	20a4	st_s r1,[r12,0x0]
ram:0003d998	16f2	beq_s 0x0003d9c4
ram:0003d99a	e6e3	cmp_s r3,0x66
ram:0003d99c	38f2	beq_s 0x0003da0c
ram:0003d99e	e7e3	cmp_s r3,0x67
ram:0003d9a0	03f2	beq_s 0x0003d9a6
ram:0003d9a2	00da	mov_s r2,0x0
ram:0003d9a4	eff0	b_s 0x0003db82
ram:0003d9a6	3025821ffffff0ff	ld r2,[r13, 0xfffffff0]
ram:0003d9ae	8c223f8f	cmp r2,-0x4
ram:0003d9b2	c4f6	ble_s 0x0003d9b8
ram:0003d9b4	4d098300	brge r1,r2,0x0003da00
ram:0003d9b8	61b9	sub_s r1,r1,0x1
ram:0003d9ba	00258c1fffff68ff	add r12,r13,0xffffff68
ram:0003d9c2	20a4	st_s r1,[r12,0x0]
ram:0003d9c4	00258c1fffff7cff	add r12,r13,0xffffff7c
ram:0003d9cc	01d9	mov_s r1,0x1
ram:0003d9ce	20a4	st_s r1,[r12,0x0]
ram:0003d9d0	61b8	sub_s r0,r0,0x1
ram:0003d9d2	00258c1fffff80ff	add r12,r13,0xffffff80
ram:0003d9da	00a4	st_s r0,[r12,0x0]
ram:0003d9dc	3025801ffffffcff	ld r0,[r13, 0xfffffffc]
ram:0003d9e4	e9081000	breq r0,0x0,0x0003dacc
ram:0003d9e8	00258c1ffffff0ff	add r12,r13,0xfffffff0
ram:0003d9f0	c0a4	st_s r14,[r12,0x0]
ram:0003d9f2	00258c1fffff48ff	add r12,r13,0xffffff48
ram:0003d9fa	c0a4	st_s r14,[r12,0x0]
ram:0003d9fc	00da	mov_s r2,0x0
ram:0003d9fe	81f0	b_s 0x0003dafe
ram:0003da00	4279	sub_s r1,r1,r2
ram:0003da02	00258c1fffff68ff	add r12,r13,0xffffff68
ram:0003da0a	20a4	st_s r1,[r12,0x0]
ram:0003da0c	3025821ffffff0ff	ld r2,[r13, 0xfffffff0]
ram:0003da14	590a5300	brge r2,0x1,0x0003da6c
ram:0003da18	01df	mov_s r15,0x1
ram:0003da1a	00258c1fffff84ff	add r12,r13,0xffffff84
ram:0003da22	80e2	cmp_s r2,0x0
ram:0003da24	e0a4	st_s r15,[r12,0x0]
ram:0003da26	ca222a00	mov.ge r2,0x0
ram:0003da2a	48f6	bge_s 0x0003da38
ram:0003da2c	537a	neg_s r2,r2
ram:0003da2e	00258c1fffff88ff	add r12,r13,0xffffff88
ram:0003da36	40a4	st_s r2,[r12,0x0]
ram:0003da38	210a4200	brlt r2,r1,0x0003da58
ram:0003da3c	e7e3	cmp_s r3,0x67
ram:0003da3e	08f2	beq_s 0x0003da4c
ram:0003da40	00258c1fffff88ff	add r12,r13,0xffffff88
ram:0003da48	20a4	st_s r1,[r12,0x0]
ram:0003da4a	32f0	b_s 0x0003daac
ram:0003da4c	00258c1fffff88ff	add r12,r13,0xffffff88
ram:0003da54	c0a4	st_s r14,[r12,0x0]
ram:0003da56	2cf0	b_s 0x0003daac
ram:0003da58	00258c1fffff80ff	add r12,r13,0xffffff80
ram:0003da60	00a4	st_s r0,[r12,0x0]
ram:0003da62	5860	add_s r0,r0,r2
ram:0003da64	49090300	brge r1,r0,0x0003daac
ram:0003da68	4279	sub_s r1,r1,r2
ram:0003da6a	1df0	b_s 0x0003daa2
ram:0003da6c	1d088300	brge r0,r2,0x0003da88
ram:0003da70	00258c1fffff7cff	add r12,r13,0xffffff7c
ram:0003da78	00a4	st_s r0,[r12,0x0]
ram:0003da7a	027a	sub_s r2,r2,r0
ram:0003da7c	00258c1fffff84ff	add r12,r13,0xffffff84
ram:0003da84	40a4	st_s r2,[r12,0x0]
ram:0003da86	14f0	b_s 0x0003daac
ram:0003da88	00258c1fffff7cff	add r12,r13,0xffffff7c
ram:0003da90	40a4	st_s r2,[r12,0x0]
ram:0003da92	4278	sub_s r0,r0,r2
ram:0003da94	00258c1fffff80ff	add r12,r13,0xffffff80
ram:0003da9c	11092300	brge.d r1,r0,0x0003daac
ram:0003daa0	00a4	_st_s r0,[r12,0x0]
ram:0003daa2	00258c1fffff80ff	add r12,r13,0xffffff80
ram:0003daaa	20a4	st_s r1,[r12,0x0]
ram:0003daac	66d8	mov_s r0,0x66
ram:0003daae	00258c1fffff60ff	add r12,r13,0xffffff60
ram:0003dab6	00a4	st_s r0,[r12,0x0]
ram:0003dab8	75f1	b_s 0x0003d9a2
ram:0003dacc	3025821ffffff0ff	ld r2,[r13, 0xfffffff0]
ram:0003dad4	00258c1ffffff0ff	add r12,r13,0xfffffff0
ram:0003dadc	61ba	sub_s r2,r2,0x1
ram:0003dade	80e2	cmp_s r2,0x0
ram:0003dae0	40a4	st_s r2,[r12,0x0]
ram:0003dae2	ca212a00	mov.ge r1,0x0
ram:0003dae6	00258c1fffff48ff	add r12,r13,0xffffff48
ram:0003daee	20a4	st_s r1,[r12,0x0]
ram:0003daf0	07e9	breq_s r1,0,0x0003dafe
ram:0003daf2	537a	neg_s r2,r2
ram:0003daf4	00258c1ffffff0ff	add r12,r13,0xfffffff0
ram:0003dafc	40a4	st_s r2,[r12,0x0]
ram:0003dafe	cf74ffffe4ff	mov_s r12,0xffffffe4
ram:0003db04	4871	mov_s r1,r2
ram:0003db06	9865	add_s r0,r13,r12
ram:0003db08	cf74fffff8ff	mov_s r12,0xfffffff8
ram:0003db0e	120a6000	bl.d 0x0003e51c
ram:0003db12	9a65	_add_s r2,r13,r12
ram:0003db14	3025821ffffff8ff	ld r2,[r13, 0xfffffff8]
ram:0003db1c	170ab300	brge.d r2,0x2,0x0003db32
ram:0003db20	0871	_mov_s r1,r0
ram:0003db22	4e22bc00	rsub lp_count,r2,0x2
ram:0003db26	a820c001	lp 0x0003db32
ram:0003db2a	30d8	mov_s r0,0x30
ram:0003db2c	ff190a80	stb.aw r0,[r1,-0x1]
ram:0003db30	01e2	add_s r2,r2,0x1
ram:0003db32	3025801fffff48ff	ld r0,[r13, 0xffffff48]
ram:0003db3a	6969	sub_s r3,r1,0x1
ram:0003db3c	00258c1fffff44ff	add r12,r13,0xffffff44
ram:0003db44	62b9	sub_s r1,r1,0x2
ram:0003db46	80e0	cmp_s r0,0x0
ram:0003db48	ca206200	mov.ne r0,0x1
ram:0003db4c	1b78	asl_s r0,r0
ram:0003db4e	2be0	add_s r0,r0,0x2b
ram:0003db50	00ab	stb_s r0,[r3,0x0]
ram:0003db52	3025801fffff64ff	ld r0,[r13, 0xffffff64]
ram:0003db5a	02e2	add_s r2,r2,0x2
ram:0003db5c	0867	ldb_s r0,[r15,r0]
ram:0003db5e	20a4	st_s r1,[r12,0x0]
ram:0003db60	00258c1ffffff8ff	add r12,r13,0xfffffff8
ram:0003db68	40a4	st_s r2,[r12,0x0]
ram:0003db6a	52200000	bxor r0,r0,0x0
ram:0003db6e	c0b8	bmsk_s r0,r0,0x0
ram:0003db70	05b8	asl_s r0,r0,0x5
ram:0003db72	45e0	add_s r0,r0,0x45
ram:0003db74	00a9	stb_s r0,[r1,0x0]
ram:0003db76	65d8	mov_s r0,0x65
ram:0003db78	00258c1fffff60ff	add r12,r13,0xffffff60
ram:0003db80	00a4	st_s r0,[r12,0x0]
ram:0003db82	3025831fffff80ff	ld r3,[r13, 0xffffff80]
ram:0003db8a	3025851fffff88ff	ld r5,[r13, 0xffffff88]
ram:0003db92	30258e1fffff68ff	ld r14,[r13, 0xffffff68]
ram:0003db9a	00234101	add r1,r3,r5
ram:0003db9e	2d098303	brge r1,r14,0x0003dbc8
ram:0003dba2	3025801fffff58ff	ld r0,[r13, 0xffffff58]
ram:0003dbaa	e7e0	cmp_s r0,0x67
ram:0003dbac	07f4	bne_s 0x0003dbba
ram:0003dbae	3025801fffff4cff	ld r0,[r13, 0xffffff4c]
ram:0003dbb6	1508de00	bbit0 r0,0x3,0x0003dbc8
ram:0003dbba	02264010	sub r0,r14,r1
ram:0003dbbe	00258c1fffff8cff	add r12,r13,0xffffff8c
ram:0003dbc6	00a4	st_s r0,[r12,0x0]
ram:0003dbc8	30258f1fffff7cff	ld r15,[r13, 0xffffff7c]
ram:0003dbd0	3025801fffff84ff	ld r0,[r13, 0xffffff84]
ram:0003dbd8	3025841fffff8cff	ld r4,[r13, 0xffffff8c]
ram:0003dbe0	1f67	add_s r15,r15,r0
ram:0003dbe2	00258c1fffff50ff	add r12,r13,0xffffff50
ram:0003dbea	00270011	add r0,r15,r4
ram:0003dbee	1a62	add_s r2,r2,r0
ram:0003dbf0	5961	add_s r1,r1,r2
ram:0003dbf2	3025821fffff4cff	ld r2,[r13, 0xffffff4c]
ram:0003dbfa	20a4	st_s r1,[r12,0x0]
ram:0003dbfc	00d8	mov_s r0,0x0
ram:0003dbfe	1f0adf00	bbit1 r2,0x3,0x0003dc1a
ram:0003dc02	1d0e5210	brlt r14,0x1,0x0003dc1c
ram:0003dc06	3025821fffff58ff	ld r2,[r13, 0xffffff58]
ram:0003dc0e	e7e2	cmp_s r2,0x67
ram:0003dc10	cc232180	cmp.eq r3,0x0
ram:0003dc14	cc252180	cmp.eq r5,0x0
ram:0003dc18	02f2	beq_s 0x0003dc1c
ram:0003dc1a	01d8	mov_s r0,0x1
ram:0003dc1c	00258c1fffff78ff	add r12,r13,0xffffff78
ram:0003dc24	00a4	st_s r0,[r12,0x0]
ram:0003dc26	08e8	breq_s r0,0,0x0003dc34
ram:0003dc28	cf74ffff50ff	mov_s r12,0xffffff50
ram:0003dc2e	01e1	add_s r1,r1,0x1
ram:0003dc30	9d65	add_s r13,r13,r12
ram:0003dc32	20a5	st_s r1,[r13,0x0]
ram:0003dc34	fd03cff5	b 0x00029830
