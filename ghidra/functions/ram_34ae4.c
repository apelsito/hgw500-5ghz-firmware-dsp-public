/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00034ae4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00034ae4(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                     int param_6,int param_7,int param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ushort *puVar5;
  int iVar6;
  short sVar7;
  undefined2 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ushort *puVar18;
  int *piVar19;
  longlong lVar20;
  short local_1ac [4];
  short local_1a4 [4];
  short local_19c;
  short local_19a;
  undefined1 auStack_198 [64];
  undefined4 local_158;
  undefined4 local_154;
  int local_150 [4];
  int local_140 [4];
  int local_130 [4];
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_f8 [4];
  int local_e8 [4];
  ushort uStack_d8;
  ushort uStack_d6;
  ushort uStack_d4;
  ushort uStack_d2;
  ushort uStack_d0;
  ushort uStack_ce;
  ushort uStack_cc;
  ushort uStack_ca;
  ushort uStack_c8;
  ushort uStack_c6;
  ushort uStack_c4;
  ushort uStack_c2;
  ushort uStack_c0;
  ushort uStack_be;
  ushort uStack_bc;
  ushort uStack_ba;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  local_150[0] = DAT_ram_00054f74;
  local_150[1] = DAT_ram_00054f78;
  local_150[2] = DAT_ram_00054f7c;
  local_150[3] = DAT_ram_00054f80;
  iVar15 = 0;
  local_140[0] = DAT_ram_00054f84;
  local_140[1] = DAT_ram_00054f88;
  local_140[2] = DAT_ram_00054f8c;
  local_140[3] = DAT_ram_00054f90;
  local_130[0] = DAT_ram_00054f94;
  local_130[1] = DAT_ram_00054f98;
  local_130[2] = DAT_ram_00054f9c;
  local_130[3] = DAT_ram_00054fa0;
  FUN_ram_000347fc(param_1,auStack_198);
  do {
    iVar17 = 0;
    puVar18 = (ushort *)(param_1 + iVar15 * 4);
    piVar19 = local_140 + iVar15;
    piVar13 = local_130 + iVar15;
    do {
      puVar5 = (ushort *)((iVar17 * 4 + iVar15) * 4 + param_1);
      uStack_d8 = *puVar5;
      uStack_d6 = puVar5[1];
      uStack_d4 = *puVar18;
      uStack_d2 = puVar18[1];
      uVar11 = (uint)(short)uStack_d4;
      uVar1 = (ulonglong)uVar11 * (ulonglong)uStack_d8;
      uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uStack_d8 & 0xffff0000);
      uVar3 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
        uVar3 = 0x7fffffffffffffff;
      }
      uVar9 = (uint)(short)uStack_d2;
      uVar10 = (uint)(short)uStack_d6;
      uVar1 = (ulonglong)uVar9 * (ulonglong)uStack_d6;
      uVar2 = (longlong)(int)uVar9 * (longlong)(int)(uVar10 & 0xffff0000);
      uVar4 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
        uVar4 = 0x7fffffffffffffff;
      }
      local_120 = (int)uVar3 + (int)uVar4;
      uVar1 = (ulonglong)uVar10 * (ulonglong)uStack_d4;
      uVar2 = (longlong)(int)uVar10 * (longlong)(int)(uVar11 & 0xffff0000);
      uVar3 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
        uVar3 = 0x7fffffffffffffff;
      }
      uVar1 = (ulonglong)uVar9 * (ulonglong)uStack_d8;
      uVar2 = (longlong)(int)uVar9 * (longlong)(int)((int)(short)uStack_d8 & 0xffff0000);
      uVar4 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
        uVar4 = 0x7fffffffffffffff;
      }
      local_11c = (int)uVar3 - (int)uVar4;
      uStack_d0 = *puVar5;
      uStack_ce = puVar5[1];
      uStack_cc = puVar18[8];
      uStack_ca = puVar18[9];
      uVar11 = (uint)(short)uStack_cc;
      uVar1 = (ulonglong)uVar11 * (ulonglong)uStack_d0;
      uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uStack_d0 & 0xffff0000);
      uVar3 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
        uVar3 = 0x7fffffffffffffff;
      }
      uVar9 = (uint)(short)uStack_ca;
      uVar10 = (uint)(short)uStack_ce;
      uVar1 = (ulonglong)uVar9 * (ulonglong)uStack_ce;
      uVar2 = (longlong)(int)uVar9 * (longlong)(int)(uVar10 & 0xffff0000);
      uVar4 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
        uVar4 = 0x7fffffffffffffff;
      }
      local_118 = (int)uVar3 + (int)uVar4;
      uVar1 = (ulonglong)uVar10 * (ulonglong)uStack_cc;
      uVar2 = (longlong)(int)uVar10 * (longlong)(int)(uVar11 & 0xffff0000);
      uVar3 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
        uVar3 = 0x7fffffffffffffff;
      }
      uVar1 = (ulonglong)uVar9 * (ulonglong)uStack_d0;
      uVar2 = (longlong)(int)uVar9 * (longlong)(int)((int)(short)uStack_d0 & 0xffff0000);
      uVar4 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
        uVar4 = 0x7fffffffffffffff;
      }
      local_114 = (int)uVar3 - (int)uVar4;
      uStack_c8 = *puVar5;
      uStack_c6 = puVar5[1];
      uStack_c4 = puVar18[0x10];
      uStack_c2 = puVar18[0x11];
      uVar11 = (uint)(short)uStack_c4;
      uVar1 = (ulonglong)uVar11 * (ulonglong)uStack_c8;
      uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uStack_c8 & 0xffff0000);
      uVar3 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
        uVar3 = 0x7fffffffffffffff;
      }
      uVar9 = (uint)(short)uStack_c2;
      uVar10 = (uint)(short)uStack_c6;
      uVar1 = (ulonglong)uVar9 * (ulonglong)uStack_c6;
      uVar2 = (longlong)(int)uVar9 * (longlong)(int)(uVar10 & 0xffff0000);
      uVar4 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
        uVar4 = 0x7fffffffffffffff;
      }
      local_110 = (int)uVar3 + (int)uVar4;
      uVar1 = (ulonglong)uVar10 * (ulonglong)uStack_c4;
      uVar2 = (longlong)(int)uVar10 * (longlong)(int)(uVar11 & 0xffff0000);
      uVar3 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
        uVar3 = 0x7fffffffffffffff;
      }
      uVar1 = (ulonglong)uVar9 * (ulonglong)uStack_c8;
      uVar2 = (longlong)(int)uVar9 * (longlong)(int)((int)(short)uStack_c8 & 0xffff0000);
      uVar4 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
        uVar4 = 0x7fffffffffffffff;
      }
      local_10c = (int)uVar3 - (int)uVar4;
      uStack_c0 = *puVar5;
      uStack_be = puVar5[1];
      uStack_bc = puVar18[0x18];
      uStack_ba = puVar18[0x19];
      uVar11 = (uint)(short)uStack_bc;
      uVar1 = (ulonglong)uVar11 * (ulonglong)uStack_c0;
      uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uStack_c0 & 0xffff0000);
      uVar3 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
        uVar3 = 0x7fffffffffffffff;
      }
      uVar10 = (uint)(short)uStack_ba;
      uVar9 = (uint)(short)uStack_be;
      uVar1 = (ulonglong)uVar10 * (ulonglong)uStack_be;
      uVar2 = (longlong)(int)uVar10 * (longlong)(int)(uVar9 & 0xffff0000);
      uVar4 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
        uVar4 = 0x7fffffffffffffff;
      }
      local_108 = (int)uVar3 + (int)uVar4;
      uVar1 = (ulonglong)uVar9 * (ulonglong)uStack_bc;
      uVar2 = (longlong)(int)uVar9 * (longlong)(int)(uVar11 & 0xffff0000);
      uVar3 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
        uVar3 = 0x7fffffffffffffff;
      }
      uVar1 = (ulonglong)uVar10 * (ulonglong)uStack_c0;
      uVar2 = (longlong)(int)uVar10 * (longlong)(int)((int)(short)uStack_c0 & 0xffff0000);
      uVar4 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
        uVar4 = 0x7fffffffffffffff;
      }
      local_104 = (int)uVar3 - (int)uVar4;
      iVar14 = iVar17 * 8;
      iVar12 = param_2 + iVar14;
      iVar6 = AUX_XMACLW_H;
      uVar11 = AUX_XMACLW_L;
      lVar20 = FUN_ram_0004065c(iVar6,iVar6 >> 0x1f,0x20);
      iVar6 = FUN_ram_00029888((int)(lVar20 + (ulonglong)uVar11),
                               (int)(lVar20 + (ulonglong)uVar11 >> 0x20),0x12);
      *piVar19 = iVar6 + *piVar19;
      iVar6 = AUX_XMACLW_H;
      uVar11 = AUX_XMACLW_L;
      lVar20 = FUN_ram_0004065c(iVar6,iVar6 >> 0x1f,0x20);
      iVar6 = FUN_ram_00029888((int)(lVar20 + (ulonglong)uVar11),
                               (int)(lVar20 + (ulonglong)uVar11 >> 0x20),0x12);
      *piVar19 = *piVar19 - iVar6;
      local_a8 = local_118;
      local_a4 = local_114;
      local_a0 = *(undefined4 *)(iVar12 + 0x20);
      local_9c = *(undefined4 *)(iVar12 + 0x24);
      iVar6 = AUX_XMACLW_H;
      uVar11 = AUX_XMACLW_L;
      lVar20 = FUN_ram_0004065c(iVar6,iVar6 >> 0x1f,0x20);
      iVar6 = FUN_ram_00029888((int)(lVar20 + (ulonglong)uVar11),
                               (int)(lVar20 + (ulonglong)uVar11 >> 0x20),0x12);
      *piVar19 = iVar6 + *piVar19;
      iVar6 = AUX_XMACLW_H;
      uVar11 = AUX_XMACLW_L;
      lVar20 = FUN_ram_0004065c(iVar6,iVar6 >> 0x1f,0x20);
      iVar6 = FUN_ram_00029888((int)(lVar20 + (ulonglong)uVar11),
                               (int)(lVar20 + (ulonglong)uVar11 >> 0x20),0x12);
      *piVar19 = *piVar19 - iVar6;
      local_98 = local_110;
      local_94 = local_10c;
      local_90 = *(undefined4 *)(iVar12 + 0x40);
      local_8c = *(undefined4 *)(iVar12 + 0x44);
      iVar6 = AUX_XMACLW_H;
      uVar11 = AUX_XMACLW_L;
      lVar20 = FUN_ram_0004065c(iVar6,iVar6 >> 0x1f,0x20);
      iVar6 = FUN_ram_00029888((int)(lVar20 + (ulonglong)uVar11),
                               (int)(lVar20 + (ulonglong)uVar11 >> 0x20),0x12);
      *piVar19 = iVar6 + *piVar19;
      iVar6 = AUX_XMACLW_H;
      uVar11 = AUX_XMACLW_L;
      lVar20 = FUN_ram_0004065c(iVar6,iVar6 >> 0x1f,0x20);
      iVar6 = FUN_ram_00029888((int)(lVar20 + (ulonglong)uVar11),
                               (int)(lVar20 + (ulonglong)uVar11 >> 0x20),0x12);
      *piVar19 = *piVar19 - iVar6;
      local_88 = local_108;
      local_84 = local_104;
      local_7c = *(undefined4 *)(iVar12 + 100);
      local_80 = *(undefined4 *)(iVar12 + 0x60);
      iVar6 = AUX_XMACLW_H;
      uVar11 = AUX_XMACLW_L;
      lVar20 = FUN_ram_0004065c(iVar6,iVar6 >> 0x1f,0x20);
      iVar6 = FUN_ram_00029888((int)(lVar20 + (ulonglong)uVar11),
                               (int)(lVar20 + (ulonglong)uVar11 >> 0x20),0x12);
      *piVar19 = iVar6 + *piVar19;
      iVar6 = AUX_XMACLW_H;
      uVar11 = AUX_XMACLW_L;
      lVar20 = FUN_ram_0004065c(iVar6,iVar6 >> 0x1f,0x20);
      iVar6 = FUN_ram_00029888((int)(lVar20 + (ulonglong)uVar11),
                               (int)(lVar20 + (ulonglong)uVar11 >> 0x20),0x12);
      *piVar19 = *piVar19 - iVar6;
      local_74 = local_11c;
      local_78 = local_120;
      local_70 = *(undefined4 *)(param_3 + iVar14);
      local_6c = *(undefined4 *)(param_3 + iVar14 + 4);
      iVar14 = iVar14 + param_3;
      iVar6 = AUX_XMACLW_H;
      uVar11 = AUX_XMACLW_L;
      lVar20 = FUN_ram_0004065c(iVar6,iVar6 >> 0x1f,0x20);
      iVar6 = FUN_ram_00029888((int)(lVar20 + (ulonglong)uVar11),
                               (int)(lVar20 + (ulonglong)uVar11 >> 0x20),0x12);
      *piVar13 = iVar6 + *piVar13;
      iVar6 = AUX_XMACLW_H;
      uVar11 = AUX_XMACLW_L;
      lVar20 = FUN_ram_0004065c(iVar6,iVar6 >> 0x1f,0x20);
      iVar6 = FUN_ram_00029888((int)(lVar20 + (ulonglong)uVar11),
                               (int)(lVar20 + (ulonglong)uVar11 >> 0x20),0x12);
      *piVar13 = *piVar13 - iVar6;
      local_68 = local_118;
      local_64 = local_114;
      local_5c = *(undefined4 *)(iVar14 + 0x24);
      local_60 = *(undefined4 *)(iVar14 + 0x20);
      iVar6 = AUX_XMACLW_H;
      uVar11 = AUX_XMACLW_L;
      lVar20 = FUN_ram_0004065c(iVar6,iVar6 >> 0x1f,0x20);
      iVar6 = FUN_ram_00029888((int)(lVar20 + (ulonglong)uVar11),
                               (int)(lVar20 + (ulonglong)uVar11 >> 0x20),0x12);
      *piVar13 = iVar6 + *piVar13;
      iVar6 = AUX_XMACLW_H;
      uVar11 = AUX_XMACLW_L;
      lVar20 = FUN_ram_0004065c(iVar6,iVar6 >> 0x1f,0x20);
      iVar6 = FUN_ram_00029888((int)(lVar20 + (ulonglong)uVar11),
                               (int)(lVar20 + (ulonglong)uVar11 >> 0x20),0x12);
      *piVar13 = *piVar13 - iVar6;
      local_58 = local_110;
      local_54 = local_10c;
      local_4c = *(undefined4 *)(iVar14 + 0x44);
      local_50 = *(undefined4 *)(iVar14 + 0x40);
      iVar6 = AUX_XMACLW_H;
      uVar11 = AUX_XMACLW_L;
      lVar20 = FUN_ram_0004065c(iVar6,iVar6 >> 0x1f,0x20);
      iVar6 = FUN_ram_00029888((int)(lVar20 + (ulonglong)uVar11),
                               (int)(lVar20 + (ulonglong)uVar11 >> 0x20),0x12);
      *piVar13 = iVar6 + *piVar13;
      iVar6 = AUX_XMACLW_H;
      uVar11 = AUX_XMACLW_L;
      lVar20 = FUN_ram_0004065c(iVar6,iVar6 >> 0x1f,0x20);
      iVar6 = FUN_ram_00029888((int)(lVar20 + (ulonglong)uVar11),
                               (int)(lVar20 + (ulonglong)uVar11 >> 0x20),0x12);
      *piVar13 = *piVar13 - iVar6;
      local_48 = local_108;
      local_44 = local_104;
      local_40 = *(undefined4 *)(iVar14 + 0x60);
      local_3c = *(undefined4 *)(iVar14 + 100);
      iVar6 = AUX_XMACLW_H;
      uVar11 = AUX_XMACLW_L;
      lVar20 = FUN_ram_0004065c(iVar6,iVar6 >> 0x1f,0x20);
      iVar6 = FUN_ram_00029888((int)(lVar20 + (ulonglong)uVar11),
                               (int)(lVar20 + (ulonglong)uVar11 >> 0x20),0x12);
      *piVar13 = iVar6 + *piVar13;
      iVar6 = AUX_XMACLW_H;
      uVar11 = AUX_XMACLW_L;
      lVar20 = FUN_ram_0004065c(iVar6,iVar6 >> 0x1f,0x20);
      iVar6 = FUN_ram_00029888((int)(lVar20 + (ulonglong)uVar11),
                               (int)(lVar20 + (ulonglong)uVar11 >> 0x20),0x12);
      *piVar13 = *piVar13 - iVar6;
      iVar17 = iVar17 + 1;
    } while (iVar17 < 4);
    iVar15 = iVar15 + 1;
  } while (iVar15 < 4);
  FUN_ram_00034958(param_4,param_5,local_140,local_130,4,4);
  iVar6 = 0;
  iVar15 = 0;
  iVar17 = 0;
  do {
    piVar13 = local_140 + iVar6;
    piVar19 = local_130 + iVar6;
    iVar6 = iVar6 + 1;
    iVar15 = iVar15 + (*piVar13 + 1 >> 2);
    iVar17 = iVar17 + (*piVar19 + 1 >> 2);
  } while (iVar6 < 4);
  FUN_ram_000358a8(iVar15,2,&local_158,&local_19c);
  FUN_ram_000358a8(iVar17,2,&local_154,&local_19a);
  iVar15 = 0;
  do {
    uVar9 = (int)local_19c - 6;
    iVar17 = AUX_XMACLW_H;
    uVar11 = AUX_XMACLW_L;
    if ((int)uVar9 < 0x20) {
      if ((int)uVar9 < 1) {
        sVar7 = (short)(uVar11 << (-uVar9 & 0x1f));
      }
      else {
        sVar7 = (short)(uVar11 >> (uVar9 & 0x1f)) + (short)(iVar17 << (0x20 - uVar9 & 0x1f));
      }
      local_1ac[iVar15] = sVar7;
    }
    else {
      local_1ac[iVar15] = (short)(iVar17 >> ((int)local_19c - 0x26U & 0x1f));
    }
    uVar9 = (int)local_19a - 6;
    iVar17 = AUX_XMACLW_H;
    uVar11 = AUX_XMACLW_L;
    if ((int)uVar9 < 0x20) {
      if ((int)uVar9 < 1) {
        sVar7 = (short)(uVar11 << (-uVar9 & 0x1f));
      }
      else {
        sVar7 = (short)(uVar11 >> (uVar9 & 0x1f)) + (short)(iVar17 << (0x20 - uVar9 & 0x1f));
      }
      local_1a4[iVar15] = sVar7;
    }
    else {
      local_1a4[iVar15] = (short)(iVar17 >> ((int)local_19a - 0x26U & 0x1f));
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 < 4);
  FUN_ram_0003ec60(&DAT_ram_000b427c,param_1,0x40);
  iVar15 = 0;
  do {
    iVar12 = (&DAT_ram_00054d7c)[iVar15];
    iVar17 = (&DAT_ram_00054d94)[iVar15];
    FUN_ram_00034654(local_150,local_1ac,iVar12,iVar17);
    iVar6 = 0;
    do {
      uVar11 = (uint)(iVar6 >> 1) >> 0x1e;
      uVar9 = uVar11 + iVar6;
      iVar16 = (uVar9 & 3) - uVar11;
      iVar14 = ((int)uVar9 >> 2) * 4;
      FUN_ram_0003ed78((iVar14 + iVar16) * 4 + param_1,
                       &DAT_ram_000b427c + (local_150[iVar16] + iVar14) * 4,4);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x10);
    if ((*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0x10) != 0) {
      iVar6 = 0;
      do {
        FUN_ram_0004070c(iVar6 * 0x10 + param_1,iVar12 << 2);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 4);
    }
    if ((*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0x20) != 0) {
      iVar6 = 0;
      do {
        FUN_ram_0004070c((iVar6 * 4 + iVar12) * 4 + param_1,iVar17 << 2);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 4);
    }
    iVar6 = 0;
    if (0 < iVar12) {
      do {
        iVar14 = iVar6 + 1;
        local_f8[iVar6] = local_140[local_150[iVar6]];
        iVar6 = iVar14;
      } while (iVar14 < iVar12);
    }
    iVar6 = 0;
    if (0 < iVar17) {
      do {
        iVar14 = iVar6 + 1;
        local_e8[iVar6] = local_130[local_150[iVar12 + iVar6]];
        iVar6 = iVar14;
      } while (iVar14 < iVar17);
    }
    iVar6 = 0;
    piVar13 = (int *)(iVar15 * 4 + param_8);
    *piVar13 = 0;
    if (0 < iVar12) {
      do {
        iVar14 = FUN_ram_0003bb34((local_f8[iVar6] >> 4) + 1,10);
        iVar6 = iVar6 + 1;
        *piVar13 = iVar14 + *piVar13;
      } while (iVar6 < iVar12);
    }
    iVar6 = 0;
    if (0 < iVar17) {
      do {
        iVar12 = FUN_ram_0003bb34((local_e8[iVar6] >> 4) + 1,10);
        iVar6 = iVar6 + 1;
        *piVar13 = iVar12 + *piVar13;
      } while (iVar6 < iVar17);
    }
    if (*(char *)(param_7 + param_6) == '\0') {
      iVar17 = 0;
      do {
        iVar6 = 0;
        do {
          puVar8 = (undefined2 *)((iVar17 * 4 + iVar6) * 4 + param_1);
          iVar6 = iVar6 + 1;
          *puVar8 = 0;
          puVar8[1] = 0;
        } while (iVar6 < 4);
        iVar17 = iVar17 + 1;
      } while (iVar17 < 4);
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 < 6);
  return;
}


