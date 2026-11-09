/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00030e4c */

undefined4 FUN_ram_00030e4c(int param_1,undefined2 *param_2,int param_3)

{
  short sVar1;
  undefined1 extraout_r3;
  short *psVar2;
  short *extraout_r3_00;
  int extraout_r3_01;
  short *extraout_r3_02;
  short *extraout_r3_03;
  short *extraout_r3_04;
  int extraout_r3_05;
  undefined2 *extraout_r4;
  int extraout_r4_00;
  undefined2 *extraout_r4_01;
  undefined2 *extraout_r4_02;
  undefined2 *puVar3;
  int extraout_r4_03;
  undefined2 *extraout_r4_04;
  int extraout_r5;
  int extraout_r5_00;
  int extraout_r5_01;
  int extraout_r5_02;
  int extraout_r5_03;
  int extraout_r5_04;
  int extraout_r5_05;
  int extraout_r5_06;
  int extraout_r5_07;
  int extraout_r5_08;
  int extraout_r5_09;
  int extraout_r5_10;
  int extraout_r5_11;
  int extraout_r5_12;
  int iVar4;
  int extraout_r6;
  int iVar5;
  int extraout_r6_00;
  int extraout_r6_01;
  int extraout_r6_02;
  int extraout_r8;
  int extraout_r8_00;
  int extraout_r8_01;
  int extraout_r8_02;
  int extraout_r8_03;
  int extraout_r8_04;
  int extraout_r8_05;
  int extraout_r8_06;
  int extraout_r8_07;
  int extraout_r8_08;
  int extraout_r8_09;
  int extraout_r8_10;
  char extraout_N;
  char extraout_N_00;
  char extraout_N_01;
  char extraout_V;
  char extraout_V_00;
  char extraout_V_01;
  
  psVar2 = param_2 + 8;
  iVar4 = 0;
  if (param_3 < 2) {
    do {
      iVar4 = iVar4 * 4;
      **(undefined1 **)(param_1 + iVar4) = (char)((ushort)*param_2 >> 8);
      *(char *)(*(int *)(param_1 + iVar4) + 1) = (char)((ushort)param_2[1] >> 8);
      FUN_ram_000408c4(*(undefined4 *)(param_1 + iVar4),0);
      FUN_ram_000408ac(*(int *)(extraout_r5_06 + extraout_r8_05) + 4);
      FUN_ram_000408f4(*(int *)(extraout_r5_07 + extraout_r8_06) + 4);
      param_2 = extraout_r4_02;
      param_1 = extraout_r5_08;
      iVar4 = extraout_r6_01;
    } while (extraout_N_00 != extraout_V_00);
    iVar5 = 2;
    puVar3 = extraout_r4_02;
    iVar4 = extraout_r5_08;
    do {
      FUN_ram_000408b8(*(int *)(iVar4 + iVar5 * 4) + 4,(int)(char)((ushort)*puVar3 >> 8));
      FUN_ram_000408dc(*(int *)(extraout_r5_09 + extraout_r8_07) + 4,
                       (int)(char)((ushort)*(undefined2 *)(extraout_r4_03 + 2) >> 8));
      FUN_ram_000408e8(*(int *)(extraout_r5_10 + extraout_r8_08) + 4,0);
      FUN_ram_000408d0(*(undefined4 *)(extraout_r5_11 + extraout_r8_09));
      *(undefined1 *)(*(int *)(extraout_r5_12 + extraout_r8_10) + 3) = extraout_r3;
      puVar3 = extraout_r4_04;
      iVar4 = extraout_r5_12;
      iVar5 = extraout_r6_02;
    } while (extraout_N_01 != extraout_V_01);
  }
  else {
    do {
      sVar1 = *psVar2;
      iVar4 = iVar4 * 4;
      **(undefined1 **)(param_1 + iVar4) = (char)((ushort)*param_2 >> 8);
      *(char *)(*(int *)(param_1 + iVar4) + 1) = (char)((ushort)param_2[1] >> 8);
      FUN_ram_000408c4(*(undefined4 *)(param_1 + iVar4),(((int)sVar1 >> 8) << 0x1c) >> 0x1c);
      FUN_ram_000408ac(*(int *)(extraout_r5 + extraout_r8) + 4,
                       (((int)*extraout_r3_00 >> 0xc) << 0x1c) >> 0x1c);
      FUN_ram_000408f4(*(int *)(extraout_r5_00 + extraout_r8_00) + 4,
                       (int)(char)((ushort)*(short *)(extraout_r3_01 + 2) >> 8),
                       (int)*(short *)(extraout_r3_01 + 2) >> 8,extraout_r3_01 + 4);
      psVar2 = extraout_r3_02;
      param_2 = extraout_r4;
      param_1 = extraout_r5_01;
      iVar4 = extraout_r6;
    } while (extraout_r6 < 2);
    iVar5 = 2;
    puVar3 = extraout_r4;
    iVar4 = extraout_r5_01;
    do {
      FUN_ram_000408b8(*(int *)(iVar4 + iVar5 * 4) + 4,(int)(char)((ushort)*puVar3 >> 8));
      FUN_ram_000408dc(*(int *)(extraout_r5_02 + extraout_r8_01) + 4,
                       (int)(char)((ushort)*(undefined2 *)(extraout_r4_00 + 2) >> 8));
      FUN_ram_000408e8(*(int *)(extraout_r5_03 + extraout_r8_02) + 4,
                       (((int)*extraout_r3_03 >> 8) << 0x1c) >> 0x1c);
      FUN_ram_000408d0(*(undefined4 *)(extraout_r5_04 + extraout_r8_03),
                       (((int)*extraout_r3_04 >> 0xc) << 0x1c) >> 0x1c);
      *(char *)(*(int *)(extraout_r5_05 + extraout_r8_04) + 3) =
           (char)((ushort)*(undefined2 *)(extraout_r3_05 + 2) >> 8);
      puVar3 = extraout_r4_01;
      iVar4 = extraout_r5_05;
      iVar5 = extraout_r6_00;
    } while (extraout_N != extraout_V);
  }
  return 0;
}


