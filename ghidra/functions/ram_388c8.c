/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000388c8 */

void FUN_ram_000388c8(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                     undefined4 param_6,int param_7,int param_8,int param_9,int param_10,
                     int param_11)

{
  char *pcVar1;
  undefined2 uVar2;
  ushort uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  short sVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  char cVar22;
  int iVar23;
  int iVar24;
  undefined2 auStack_278 [256];
  undefined2 auStack_78 [34];
  
  FUN_ram_0004070c(param_11,0x40);
  iVar15 = 0;
  do {
    iVar8 = iVar15 * 2;
    iVar15 = (int)(char)((char)iVar15 + '\x01');
    *(undefined2 *)(iVar8 + -0x2307c5b8) = 0x1f;
  } while (iVar15 < 4);
  iVar15 = 0;
  if (-1 < param_7) {
    do {
      sVar7 = *(short *)(iVar15 * 2 + -0x2307c5b8);
      iVar8 = 0;
      do {
        iVar12 = iVar8 * 0x20 + param_1;
        uVar18 = *(uint *)(iVar12 + iVar15 * 8);
        uVar13 = *(uint *)(iVar12 + iVar15 * 8 + 4);
        if ((int)uVar18 < 0) {
          uVar18 = ~uVar18;
        }
        iVar12 = LZCOUNT(uVar18) + -1;
        if ((int)sVar7 < LZCOUNT(uVar18) + -1) {
          iVar12 = (int)sVar7;
        }
        if ((int)uVar13 < 0) {
          uVar13 = ~uVar13;
        }
        iVar19 = LZCOUNT(uVar13) + -1;
        if ((int)(short)iVar12 < LZCOUNT(uVar13) + -1) {
          iVar19 = (int)(short)iVar12;
        }
        iVar8 = (int)(char)((char)iVar8 + '\x01');
        sVar7 = (short)iVar19;
        *(short *)(iVar15 * 2 + -0x2307c5b8) = sVar7;
      } while (iVar8 < 4);
      iVar15 = (int)(char)((char)iVar15 + '\x01');
    } while (iVar15 <= param_7);
  }
  iVar15 = 0;
  if (-1 < param_8) {
    do {
      iVar8 = (iVar15 + param_7) * 2;
      sVar7 = *(short *)(iVar8 + -0x2307c5b6);
      iVar12 = 0;
      do {
        iVar19 = iVar12 * 0x20 + param_2;
        uVar18 = *(uint *)(iVar19 + iVar15 * 8);
        iVar12 = (int)(char)((char)iVar12 + '\x01');
        if ((int)uVar18 < 0) {
          uVar18 = ~uVar18;
        }
        iVar23 = (int)sVar7;
        if (LZCOUNT(uVar18) + -1 < (int)sVar7) {
          iVar23 = LZCOUNT(uVar18) + -1;
        }
        uVar18 = *(uint *)(iVar19 + iVar15 * 8 + 4);
        if ((int)uVar18 < 0) {
          uVar18 = ~uVar18;
        }
        iVar19 = LZCOUNT(uVar18) + -1;
        if ((int)(short)iVar23 < LZCOUNT(uVar18) + -1) {
          iVar19 = (int)(short)iVar23;
        }
        sVar7 = (short)iVar19;
        *(short *)(iVar8 + -0x2307c5b6) = sVar7;
      } while (iVar12 < 4);
      iVar15 = (int)(char)((char)iVar15 + '\x01');
    } while (iVar15 <= param_8);
  }
  iVar19 = param_7 + 1;
  iVar23 = (int)(char)iVar19;
  cVar22 = (char)(param_8 + 1);
  iVar12 = (int)cVar22;
  iVar24 = (int)(char)(cVar22 + (char)iVar19);
  iVar8 = 0;
  iVar15 = iVar23;
  if (0 < iVar23) {
    do {
      iVar20 = iVar8 * 8;
      DAT_ram_000559ba = 0x10 - *(short *)(iVar8 * 2 + -0x2307c5b8);
      uVar18 = (uint)DAT_ram_000559ba;
      if ((int)uVar18 < 1) {
        iVar14 = 0;
        do {
          iVar21 = iVar14 * 0x20 + param_1;
          iVar16 = *(int *)(iVar21 + iVar20 + 4);
          puVar9 = (undefined2 *)(iVar14 * 0x10 + param_11 + iVar8 * 4);
          *puVar9 = (short)(*(int *)(iVar21 + iVar20) << (-uVar18 & 0x1f));
          iVar14 = (int)(char)((char)iVar14 + '\x01');
          puVar9[1] = (short)(iVar16 << (-uVar18 & 0x1f));
        } while (iVar14 < 4);
      }
      else {
        DAT_ram_000559b8 = (short)(1 << (uVar18 - 1 & 0x1f));
        iVar14 = (int)DAT_ram_000559b8;
        iVar21 = 0;
        do {
          iVar16 = iVar21 * 0x20 + param_1;
          iVar17 = *(int *)(iVar16 + iVar20 + 4);
          puVar9 = (undefined2 *)(iVar21 * 0x10 + param_11 + iVar8 * 4);
          iVar21 = (int)(char)((char)iVar21 + '\x01');
          *puVar9 = (short)(*(int *)(iVar16 + iVar20) + iVar14 >> (uVar18 & 0x1f));
          puVar9[1] = (short)(iVar17 + iVar14 >> (uVar18 & 0x1f));
        } while (iVar21 < 4);
      }
      iVar8 = (int)(char)((char)iVar8 + '\x01');
    } while (iVar8 < iVar23);
  }
  for (; iVar15 < iVar24; iVar15 = (int)(char)((char)iVar15 + '\x01')) {
    DAT_ram_000559ba = 0x10 - *(short *)(iVar15 * 2 + -0x2307c5b8);
    uVar18 = (uint)DAT_ram_000559ba;
    iVar8 = (iVar15 - iVar23) * 8;
    if ((int)uVar18 < 1) {
      iVar20 = 0;
      do {
        iVar14 = iVar20 * 0x20 + param_2;
        puVar9 = (undefined2 *)(iVar20 * 0x10 + param_11 + iVar15 * 4);
        *puVar9 = (short)(*(int *)(iVar14 + iVar8) << (-uVar18 & 0x1f));
        iVar20 = (int)(char)((char)iVar20 + '\x01');
        puVar9[1] = (short)(*(int *)(iVar14 + iVar8 + 4) << (-uVar18 & 0x1f));
      } while (iVar20 < 4);
    }
    else {
      DAT_ram_000559b8 = (short)(1 << (uVar18 - 1 & 0x1f));
      iVar20 = (int)DAT_ram_000559b8;
      iVar14 = 0;
      do {
        iVar21 = iVar14 * 0x20 + param_2;
        iVar16 = *(int *)(iVar21 + iVar8 + 4);
        puVar9 = (undefined2 *)(iVar14 * 0x10 + param_11 + iVar15 * 4);
        iVar14 = (int)(char)((char)iVar14 + '\x01');
        *puVar9 = (short)(*(int *)(iVar21 + iVar8) + iVar20 >> (uVar18 & 0x1f));
        puVar9[1] = (short)(iVar16 + iVar20 >> (uVar18 & 0x1f));
      } while (iVar14 < 4);
    }
  }
  FUN_ram_000347fc(param_11,auStack_78);
  FUN_ram_0004070c(0xdcf83a70,0x10);
  FUN_ram_0004070c(0xdcf83a50,0x20);
  FUN_ram_0004070c(0xdcf83a80,0x20);
  DAT_ram_000559ba = 5;
  DAT_ram_000559b8 = 0x10;
  iVar15 = 0;
  do {
    iVar8 = 0;
    if (0 < iVar23) {
      iVar20 = iVar15 * 0x10 + param_11;
      do {
        iVar21 = iVar8 * 4;
        iVar14 = (iVar15 * 4 + iVar8) * 4;
        uVar18 = (uint)*(short *)(param_3 + iVar14);
        uVar3 = *(ushort *)(iVar20 + iVar21);
        uVar4 = (ulonglong)uVar18 * (ulonglong)uVar3;
        uVar5 = (longlong)(int)uVar18 * (longlong)(int)((int)(short)uVar3 & 0xffff0000);
        uVar6 = uVar4 + uVar5;
        if (-1 < (longlong)(uVar4 ^ uVar5) && (longlong)(uVar4 ^ uVar6) < 0) {
          uVar6 = 0x7fffffffffffffff;
        }
        iVar16 = ((int)uVar6 + 0x10 >> 5) + *(int *)(iVar21 + -0x2307c590);
        *(int *)(iVar21 + -0x2307c590) = iVar16;
        uVar18 = (uint)*(short *)(iVar14 + param_3 + 2);
        uVar3 = *(ushort *)(iVar21 + iVar20 + 2);
        iVar8 = (int)(char)((char)iVar8 + '\x01');
        uVar4 = (ulonglong)uVar18 * (ulonglong)uVar3;
        uVar5 = (longlong)(int)uVar18 * (longlong)(int)((int)(short)uVar3 & 0xffff0000);
        uVar6 = uVar4 + uVar5;
        if (-1 < (longlong)(uVar4 ^ uVar5) && (longlong)(uVar4 ^ uVar6) < 0) {
          uVar6 = 0x7fffffffffffffff;
        }
        *(int *)(iVar21 + -0x2307c590) = iVar16 + ((int)uVar6 + 0x10 >> 5);
      } while (iVar8 < iVar23);
    }
    iVar8 = 0;
    if (0 < iVar12) {
      iVar20 = iVar15 * 0x10 + param_11;
      do {
        iVar21 = (iVar8 + iVar23) * 4;
        iVar14 = (iVar15 * 4 + iVar8) * 4;
        uVar18 = (uint)*(short *)(param_4 + iVar14);
        uVar3 = *(ushort *)(iVar20 + iVar21);
        uVar4 = (ulonglong)uVar18 * (ulonglong)uVar3;
        uVar5 = (longlong)(int)uVar18 * (longlong)(int)((int)(short)uVar3 & 0xffff0000);
        uVar6 = uVar4 + uVar5;
        if (-1 < (longlong)(uVar4 ^ uVar5) && (longlong)(uVar4 ^ uVar6) < 0) {
          uVar6 = 0x7fffffffffffffff;
        }
        iVar16 = ((int)uVar6 + 0x10 >> 5) + *(int *)(iVar21 + -0x2307c590);
        *(int *)(iVar21 + -0x2307c590) = iVar16;
        uVar18 = (uint)*(short *)(iVar14 + param_4 + 2);
        uVar3 = *(ushort *)(iVar21 + iVar20 + 2);
        iVar8 = (int)(char)((char)iVar8 + '\x01');
        uVar4 = (ulonglong)uVar18 * (ulonglong)uVar3;
        uVar5 = (longlong)(int)uVar18 * (longlong)(int)((int)(short)uVar3 & 0xffff0000);
        uVar6 = uVar4 + uVar5;
        if (-1 < (longlong)(uVar4 ^ uVar5) && (longlong)(uVar4 ^ uVar6) < 0) {
          uVar6 = 0x7fffffffffffffff;
        }
        *(int *)(iVar21 + -0x2307c590) = ((int)uVar6 + 0x10 >> 5) + iVar16;
      } while (iVar8 < iVar12);
    }
    iVar15 = (int)(char)((char)iVar15 + '\x01');
  } while (iVar15 < 4);
  iVar15 = 0;
  if (0 < iVar24) {
    do {
      iVar8 = iVar15 * 4;
      uVar18 = *(uint *)(iVar8 + -0x2307c590);
      iVar15 = (int)(char)((char)iVar15 + '\x01');
      uVar4 = (ulonglong)uVar18 * (ulonglong)(uVar18 & 0xffff);
      uVar5 = (longlong)(int)uVar18 * (longlong)(int)(uVar18 & 0xffff0000);
      uVar6 = uVar4 + uVar5;
      if (-1 < (longlong)(uVar4 ^ uVar5) && (longlong)(uVar4 ^ uVar6) < 0) {
        uVar6 = 0x7fffffffffffffff;
      }
      *(int *)(iVar8 + -0x2307c590) = (int)uVar6;
    } while (iVar15 < iVar24);
  }
  iVar15 = 0;
  if (0 < iVar23) {
    do {
      iVar24 = iVar15 * 4;
      iVar8 = AUX_XMACLW_H;
      uVar18 = AUX_XMACLW_L;
      iVar15 = (int)(char)((char)iVar15 + '\x01');
      *(uint *)(iVar24 + -0x2307c5b0) = iVar8 * 0x10 + (uVar18 >> 0x1c);
    } while (iVar15 < iVar23);
  }
  iVar15 = 0;
  if (0 < iVar12) {
    do {
      iVar24 = iVar15 * 4;
      iVar8 = AUX_XMACLW_H;
      uVar18 = AUX_XMACLW_L;
      iVar15 = (int)(char)((char)iVar15 + '\x01');
      *(uint *)(iVar24 + -0x2307c5a0) = iVar8 * 0x10 + (uVar18 >> 0x1c);
    } while (iVar15 < iVar12);
  }
  FUN_ram_00034958(param_5,param_6,0xdcf83a50,0xdcf83a60,iVar23,iVar12);
  FUN_ram_000383d0(0xdcf83a40,0xdcf83a50,iVar23);
  FUN_ram_000383d0(0xdcf83a44,0xdcf83a60,iVar12);
  iVar15 = 0;
  if (-1 < param_7) {
    do {
      uVar10 = FUN_ram_0003bb34((*(int *)(*(char *)(iVar15 + -0x2307c5c0) * 4 + -0x2307c5b0) >> 4) +
                                1,10);
      iVar8 = iVar15 * 4;
      iVar15 = (int)(char)((char)iVar15 + '\x01');
      *(undefined4 *)(iVar8 + -0x2307c580) = uVar10;
    } while (iVar15 <= param_7);
  }
  iVar15 = 0;
  if (-1 < param_8) {
    do {
      uVar10 = FUN_ram_0003bb34((*(int *)(*(char *)(iVar15 + -0x2307c5bc) * 4 + -0x2307c5a0) >> 4) +
                                1,10);
      iVar8 = iVar15 * 4;
      iVar15 = (int)(char)((char)iVar15 + '\x01');
      *(undefined4 *)(iVar8 + -0x2307c570) = uVar10;
    } while (iVar15 <= param_8);
  }
  iVar15 = 0;
  do {
    iVar8 = 0;
    if (-1 < param_7) {
      do {
        pcVar1 = (char *)(iVar8 + -0x2307c5c0);
        iVar12 = iVar8 * 4 + param_9 * 0x40 + iVar15 * 0x10;
        uVar2 = auStack_78[iVar15 * 8 + *pcVar1 * 2 + 1];
        iVar8 = (int)(char)((char)iVar8 + '\x01');
        *(undefined2 *)(&DAT_ram_000b607c + iVar12) = auStack_78[iVar15 * 8 + *pcVar1 * 2];
        *(undefined2 *)(&DAT_ram_000b607e + iVar12) = uVar2;
      } while (iVar8 <= param_7);
    }
    iVar8 = 0;
    if (-1 < param_8) {
      do {
        iVar23 = *(char *)(iVar8 + -0x2307c5bc) + iVar19;
        iVar12 = (iVar19 + iVar8) * 4 + param_9 * 0x40 + iVar15 * 0x10;
        uVar2 = auStack_78[iVar15 * 8 + iVar23 * 2 + 1];
        iVar8 = (int)(char)((char)iVar8 + '\x01');
        *(undefined2 *)(&DAT_ram_000b607c + iVar12) = auStack_78[iVar15 * 8 + iVar23 * 2];
        *(undefined2 *)(&DAT_ram_000b607e + iVar12) = uVar2;
      } while (iVar8 <= param_8);
    }
    iVar15 = (int)(char)((char)iVar15 + '\x01');
  } while (iVar15 < 4);
  iVar15 = 0;
  do {
    iVar12 = (int)*(char *)(&DAT_ram_00054d7c + iVar15);
    iVar8 = (int)*(char *)(&DAT_ram_00054d94 + iVar15);
    if ((iVar12 <= iVar19) && (iVar8 <= param_8 + 1)) {
      iVar24 = 0;
      piVar11 = (int *)(iVar15 * 4 + param_10);
      *piVar11 = 0;
      iVar23 = 0;
      if (0 < iVar12) {
        do {
          iVar20 = iVar24 * 4;
          iVar24 = (int)(char)((char)iVar24 + '\x01');
          iVar23 = *(int *)(iVar20 + -0x2307c580) + iVar23;
          *piVar11 = iVar23;
        } while (iVar24 < iVar12);
      }
      iVar12 = 0;
      if (0 < iVar8) {
        do {
          iVar24 = iVar12 * 4;
          iVar12 = (int)(char)((char)iVar12 + '\x01');
          iVar23 = *(int *)(iVar24 + -0x2307c570) + iVar23;
          *piVar11 = iVar23;
        } while (iVar12 < iVar8);
      }
    }
    iVar15 = (int)(char)((char)iVar15 + '\x01');
  } while (iVar15 < 6);
  FUN_ram_00038444((int)(short)param_9,param_5,param_6,param_3,param_4,param_11);
  return;
}


