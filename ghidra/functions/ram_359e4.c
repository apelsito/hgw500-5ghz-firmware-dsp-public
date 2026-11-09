/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000359e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000359e4(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                     undefined1 *param_6)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  short sVar12;
  bool bVar13;
  short sVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined2 uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  undefined2 *puVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  bool bVar35;
  longlong lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  int iStack_50;
  uint local_48;
  short local_40 [2];
  int aiStack_3c [2];
  
  bVar13 = false;
  uVar33 = 0;
  *param_6 = 1;
  FUN_ram_0003ec60(&DAT_ram_000b405c,param_4,0x40);
  FUN_ram_0003ec60(&DAT_ram_000b409c,param_5,0x40);
  local_48 = 0;
  do {
    uVar29 = (uint)((int)uVar33 >> 1) >> 0x1e;
    iVar30 = (uVar29 + uVar33 & 3) - uVar29;
    iVar32 = (uVar33 & 0xfffffffc) + iVar30;
    if (iVar30 == (int)uVar33 >> 2) {
      (&DAT_ram_000b41fc)[iVar32 * 2] = 0x4000;
    }
    else {
      (&DAT_ram_000b41fc)[iVar32 * 2] = 0;
    }
    uVar33 = uVar33 + 1;
    (&DAT_ram_000b4200)[iVar32 * 2] = 0;
  } while ((int)uVar33 < 0x10);
  iStack_50 = 0;
  while( true ) {
    uVar33 = 0;
    do {
      uVar29 = (uint)((int)uVar33 >> 1) >> 0x1e;
      iVar32 = (uVar29 + uVar33 & 3) - uVar29;
      uVar29 = uVar33 & 0xfffffffc;
      iVar30 = uVar29 + iVar32;
      if (iVar32 == (int)uVar33 >> 2) {
        iVar32 = ((int)uVar33 >> 2) + uVar29;
        uVar23 = (&DAT_ram_000b405e)[iVar32 * 2];
        *(undefined2 *)((int)&DAT_ram_000b41dc + uVar29) = (&DAT_ram_000b405c)[iVar32 * 2];
        *(undefined2 *)((int)&DAT_ram_000b41de + uVar29) = uVar23;
        uVar23 = (&DAT_ram_000b409e)[iVar32 * 2];
        *(undefined2 *)((int)&DAT_ram_000b41ec + uVar29) = (&DAT_ram_000b409c)[iVar32 * 2];
        *(undefined2 *)((int)&DAT_ram_000b41ee + uVar29) = uVar23;
        (&DAT_ram_000b40dc)[iVar30 * 2] = 0;
        (&DAT_ram_000b40de)[iVar30 * 2] = 0;
        (&DAT_ram_000b411c)[iVar30 * 2] = 0;
        (&DAT_ram_000b411e)[iVar30 * 2] = 0;
      }
      else {
        (&DAT_ram_000b40dc)[iVar30 * 2] = (&DAT_ram_000b405c)[iVar30 * 2];
        (&DAT_ram_000b40de)[iVar30 * 2] = (&DAT_ram_000b405e)[iVar30 * 2];
        (&DAT_ram_000b411c)[iVar30 * 2] = (&DAT_ram_000b409c)[iVar30 * 2];
        (&DAT_ram_000b411e)[iVar30 * 2] = (&DAT_ram_000b409e)[iVar30 * 2];
      }
      uVar33 = uVar33 + 1;
    } while ((int)uVar33 < 0x10);
    uVar33 = 0;
    do {
      uVar29 = (uint)((int)uVar33 >> 1) >> 0x1e;
      iVar30 = (uVar29 + uVar33 & 3) - uVar29;
      if ((int)uVar33 >> 2 < iVar30) {
        uVar25 = uVar33 & 0xfffffffc;
        iVar32 = uVar25 + iVar30;
        iVar34 = ((int)uVar33 >> 2) + iVar30 * 4;
        uVar29 = (int)(short)(&DAT_ram_000b40dc)[iVar32 * 2] +
                 (int)(short)(&DAT_ram_000b40dc)[iVar34 * 2];
        uVar1 = (&DAT_ram_000b41dc)[iVar30 * 2];
        uVar24 = (uint)(short)uVar1;
        uVar26 = (int)(short)(&DAT_ram_000b40de)[iVar34 * 2] -
                 (int)(short)(&DAT_ram_000b40de)[iVar32 * 2];
        uVar6 = (ulonglong)uVar24 * (ulonglong)(uVar29 & 0xffff);
        uVar7 = (longlong)(int)uVar24 * (longlong)(int)(uVar29 & 0xffff0000);
        uVar8 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
          uVar8 = 0x7fffffffffffffff;
        }
        uVar6 = (ulonglong)uVar24 * (ulonglong)(uVar26 & 0xffff);
        uVar7 = (longlong)(int)uVar24 * (longlong)(int)(uVar26 & 0xffff0000);
        uVar9 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar9) < 0) {
          uVar9 = 0x7fffffffffffffff;
        }
        uVar28 = (int)(short)(&DAT_ram_000b411e)[iVar34 * 2] -
                 (int)(short)(&DAT_ram_000b411e)[iVar32 * 2];
        uVar2 = (&DAT_ram_000b41ec)[iVar30 * 2];
        uVar15 = (uint)(short)uVar2;
        uVar27 = (int)(short)(&DAT_ram_000b411c)[iVar32 * 2] +
                 (int)(short)(&DAT_ram_000b411c)[iVar34 * 2];
        uVar6 = (ulonglong)uVar15 * (ulonglong)(uVar27 & 0xffff);
        uVar7 = (longlong)(int)uVar15 * (longlong)(int)(uVar27 & 0xffff0000);
        uVar10 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar10) < 0) {
          uVar10 = 0x7fffffffffffffff;
        }
        DAT_ram_000b42bc = ((int)uVar8 + 1 >> 1) + ((int)uVar10 + 1 >> 1);
        uVar6 = (ulonglong)uVar15 * (ulonglong)(uVar28 & 0xffff);
        uVar7 = (longlong)(int)uVar15 * (longlong)(int)(uVar28 & 0xffff0000);
        uVar8 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
          uVar8 = 0x7fffffffffffffff;
        }
        DAT_ram_000b42c0 = ((int)uVar9 + 1 >> 1) + ((int)uVar8 + 1 >> 1);
        uVar20 = (uint)(short)*(ushort *)((int)&DAT_ram_000b41dc + uVar25);
        uVar6 = (ulonglong)uVar20 * (ulonglong)(uVar29 & 0xffff);
        uVar7 = (longlong)(int)uVar20 * (longlong)(int)(uVar29 & 0xffff0000);
        uVar8 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
          uVar8 = 0x7fffffffffffffff;
        }
        uVar6 = (ulonglong)uVar20 * (ulonglong)(uVar26 & 0xffff);
        uVar7 = (longlong)(int)uVar20 * (longlong)(int)(uVar26 & 0xffff0000);
        uVar9 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar9) < 0) {
          uVar9 = 0x7fffffffffffffff;
        }
        uVar29 = (uint)(short)*(ushort *)((int)&DAT_ram_000b41ec + uVar25);
        uVar6 = (ulonglong)uVar29 * (ulonglong)(uVar27 & 0xffff);
        uVar7 = (longlong)(int)uVar29 * (longlong)(int)(uVar27 & 0xffff0000);
        uVar10 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar10) < 0) {
          uVar10 = 0x7fffffffffffffff;
        }
        uVar6 = (ulonglong)uVar29 * (ulonglong)(uVar28 & 0xffff);
        uVar7 = (longlong)(int)uVar29 * (longlong)(int)(uVar28 & 0xffff0000);
        uVar11 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar11) < 0) {
          uVar11 = 0x7fffffffffffffff;
        }
        DAT_ram_000b42c4 = ((int)uVar8 + 1 >> 1) + ((int)uVar10 + 1 >> 1);
        uVar6 = (ulonglong)uVar24 * (ulonglong)uVar1;
        uVar7 = (longlong)(int)uVar24 * (longlong)(int)(uVar24 & 0xffff0000);
        uVar8 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
          uVar8 = 0x7fffffffffffffff;
        }
        DAT_ram_000b42c8 = ((int)uVar9 + 1 >> 1) + ((int)uVar11 + 1 >> 1);
        uVar6 = (ulonglong)uVar15 * (ulonglong)uVar2;
        uVar7 = (longlong)(int)uVar15 * (longlong)(int)(uVar15 & 0xffff0000);
        uVar9 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar9) < 0) {
          uVar9 = 0x7fffffffffffffff;
        }
        DAT_ram_000b3ecc = (int)uVar8 + (int)uVar9;
        uVar6 = (ulonglong)uVar20 * (ulonglong)uVar1;
        uVar7 = (longlong)(int)uVar20 * (longlong)(int)(uVar24 & 0xffff0000);
        uVar8 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
          uVar8 = 0x7fffffffffffffff;
        }
        uVar6 = (ulonglong)uVar29 * (ulonglong)uVar2;
        uVar7 = (longlong)(int)uVar29 * (longlong)(int)(uVar15 & 0xffff0000);
        uVar9 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar9) < 0) {
          uVar9 = 0x7fffffffffffffff;
        }
        DAT_ram_000b3ed0 = (int)uVar8 + (int)uVar9;
        uVar6 = (ulonglong)uVar20 * (ulonglong)*(ushort *)((int)&DAT_ram_000b41dc + uVar25);
        uVar7 = (longlong)(int)uVar20 * (longlong)(int)(uVar20 & 0xffff0000);
        uVar8 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
          uVar8 = 0x7fffffffffffffff;
        }
        uVar6 = (ulonglong)uVar29 * (ulonglong)*(ushort *)((int)&DAT_ram_000b41ec + uVar25);
        uVar7 = (longlong)(int)uVar29 * (longlong)(int)(uVar29 & 0xffff0000);
        uVar9 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar9) < 0) {
          uVar9 = 0x7fffffffffffffff;
        }
        DAT_ram_000b3ed8 = (int)uVar8 + (int)uVar9;
        iVar30 = AUX_XMACLW_H;
        iVar22 = AUX_XMACLW_H;
        DAT_ram_00055984 = iVar30 - iVar22;
        DAT_ram_000b3ed4 = DAT_ram_000b3ed0;
        FUN_ram_000358a8(DAT_ram_00055984,0x16,aiStack_3c,local_40);
        DAT_ram_00055988 = aiStack_3c[0];
        DAT_ram_0005598c = aiStack_3c[0] >> 0x1f;
        iVar30 = AUX_XMACLW_H;
        uVar29 = AUX_XMACLW_L;
        lVar36 = FUN_ram_0004065c(iVar30,iVar30 >> 0x1f,0x10);
        lVar36 = lVar36 + (ulonglong)(uVar29 >> 0x10);
        iVar30 = (int)lVar36;
        DAT_ram_00055990 = -iVar30;
        DAT_ram_00055994 = -(uint)(iVar30 != 0) - (int)((ulonglong)lVar36 >> 0x20);
        iVar30 = AUX_XMACLW_H;
        uVar29 = AUX_XMACLW_L;
        lVar36 = FUN_ram_0004065c(iVar30,iVar30 >> 0x1f,0x10);
        lVar36 = lVar36 + (ulonglong)(uVar29 >> 0x10);
        DAT_ram_00055998 = (uint)lVar36;
        DAT_ram_0005599c = (int)((ulonglong)lVar36 >> 0x20);
        iVar30 = AUX_XMACLW_H;
        uVar29 = AUX_XMACLW_L;
        lVar36 = FUN_ram_0004065c(iVar30,iVar30 >> 0x1f,0x10);
        lVar36 = lVar36 + (ulonglong)(uVar29 >> 0x10);
        DAT_ram_000559a0 = (uint)lVar36;
        DAT_ram_000559a4 = (int)((ulonglong)lVar36 >> 0x20);
        iVar30 = AUX_XMACLW_H;
        uVar29 = AUX_XMACLW_L;
        lVar36 = FUN_ram_0004065c(iVar30,iVar30 >> 0x1f,0x10);
        iVar21 = DAT_ram_0005598c;
        iVar18 = DAT_ram_00055988;
        lVar36 = lVar36 + (ulonglong)(uVar29 >> 0x10);
        iVar30 = (int)lVar36;
        DAT_ram_000559a8 = -iVar30;
        DAT_ram_000559ac = -(uint)(iVar30 != 0) - (int)((ulonglong)lVar36 >> 0x20);
        iVar30 = DAT_ram_000559a8 + DAT_ram_00055998;
        bVar35 = CARRY4(DAT_ram_000559a8,DAT_ram_00055998);
        iVar22 = DAT_ram_0005599c + DAT_ram_000559ac;
        uVar37 = FUN_ram_000405f8(DAT_ram_00055988,DAT_ram_0005598c,
                                  DAT_ram_00055990 + DAT_ram_000559a0,
                                  DAT_ram_00055994 + DAT_ram_000559a4 +
                                  (uint)CARRY4(DAT_ram_00055990,DAT_ram_000559a0));
        uVar38 = FUN_ram_000405f8(iVar18,iVar21,iVar30,iVar22 + (uint)bVar35);
        iVar30 = (int)(short)(local_40[0] + 0x16);
        if (iVar30 < 1) {
          uVar37 = FUN_ram_0004065c((int)uVar37,(int)((ulonglong)uVar37 >> 0x20),iVar30);
          uVar16 = (undefined4)uVar37;
          uVar17 = FUN_ram_0004065c(uVar16,(int)((ulonglong)uVar37 >> 0x20),iVar30);
        }
        else {
          uVar16 = FUN_ram_00029888();
          uVar17 = FUN_ram_00029888((int)uVar38,(int)((ulonglong)uVar38 >> 0x20),iVar30);
        }
        (&DAT_ram_000b415c)[iVar32 * 2] = uVar16;
        (&DAT_ram_000b4160)[iVar32 * 2] = uVar17;
        iVar30 = AUX_XMACLW_H;
        uVar29 = AUX_XMACLW_L;
        lVar36 = FUN_ram_0004065c(iVar30,iVar30 >> 0x1f,0x10);
        lVar36 = lVar36 + (ulonglong)(uVar29 >> 0x10);
        DAT_ram_00055990 = (uint)lVar36;
        DAT_ram_00055994 = (int)((ulonglong)lVar36 >> 0x20);
        iVar30 = AUX_XMACLW_H;
        uVar29 = AUX_XMACLW_L;
        lVar36 = FUN_ram_0004065c(iVar30,iVar30 >> 0x1f,0x10);
        lVar36 = lVar36 + (ulonglong)(uVar29 >> 0x10);
        DAT_ram_00055998 = (uint)lVar36;
        DAT_ram_0005599c = (int)((ulonglong)lVar36 >> 0x20);
        iVar30 = AUX_XMACLW_H;
        uVar29 = AUX_XMACLW_L;
        lVar36 = FUN_ram_0004065c(iVar30,iVar30 >> 0x1f,0x10);
        lVar36 = lVar36 + (ulonglong)(uVar29 >> 0x10);
        iVar30 = (int)lVar36;
        DAT_ram_000559a0 = -iVar30;
        DAT_ram_000559a4 = -(uint)(iVar30 != 0) - (int)((ulonglong)lVar36 >> 0x20);
        iVar30 = AUX_XMACLW_H;
        uVar29 = AUX_XMACLW_L;
        lVar36 = FUN_ram_0004065c(iVar30,iVar30 >> 0x1f,0x10);
        iVar18 = DAT_ram_0005598c;
        iVar22 = DAT_ram_00055988;
        lVar36 = lVar36 + (ulonglong)(uVar29 >> 0x10);
        iVar30 = (int)lVar36;
        DAT_ram_000559a8 = -iVar30;
        DAT_ram_000559ac = -(uint)(iVar30 != 0) - (int)((ulonglong)lVar36 >> 0x20);
        iVar30 = DAT_ram_000559a8 + DAT_ram_00055998;
        bVar35 = CARRY4(DAT_ram_000559a8,DAT_ram_00055998);
        iVar32 = DAT_ram_0005599c + DAT_ram_000559ac;
        uVar37 = FUN_ram_000405f8(DAT_ram_00055988,DAT_ram_0005598c,
                                  DAT_ram_00055990 + DAT_ram_000559a0,
                                  DAT_ram_000559a4 + DAT_ram_00055994 +
                                  (uint)CARRY4(DAT_ram_00055990,DAT_ram_000559a0));
        uVar38 = FUN_ram_000405f8(iVar22,iVar18,iVar30,iVar32 + (uint)bVar35);
        iVar30 = (int)(short)(local_40[0] + 0x16);
        if (iVar30 < 1) {
          uVar37 = FUN_ram_0004065c((int)uVar37,(int)((ulonglong)uVar37 >> 0x20),iVar30);
          uVar16 = (undefined4)uVar37;
          uVar17 = FUN_ram_0004065c(uVar16,(int)((ulonglong)uVar37 >> 0x20),iVar30);
        }
        else {
          uVar16 = FUN_ram_00029888();
          uVar17 = FUN_ram_00029888((int)uVar38,(int)((ulonglong)uVar38 >> 0x20),iVar30);
        }
        (&DAT_ram_000b415c)[iVar34 * 2] = uVar16;
        (&DAT_ram_000b4160)[iVar34 * 2] = uVar17;
      }
      uVar33 = uVar33 + 1;
    } while ((int)uVar33 < 0x10);
    uVar33 = 0;
    uVar29 = 0;
    do {
      uVar24 = (uint)((int)uVar29 >> 1) >> 0x1e;
      iVar30 = (uVar24 + uVar29 & 3) - uVar24;
      iVar32 = (int)uVar29 >> 2;
      if (iVar30 == 0) {
        *(undefined4 *)((int)&DAT_ram_000b43cc + (uVar29 & 0xfffffffc)) = 0;
      }
      if (iVar30 != iVar32) {
        iVar22 = iVar32 * 4 + iVar30;
        iVar34 = (&DAT_ram_000b415c)[iVar22 * 2];
        if (iVar34 < 0) {
          iVar34 = -iVar34;
        }
        iVar22 = (&DAT_ram_000b4160)[iVar22 * 2];
        if (iVar22 < 0) {
          iVar22 = -iVar22;
        }
        (&DAT_ram_000b43cc)[iVar32] = (&DAT_ram_000b43cc)[iVar32] + iVar34 + iVar22;
      }
      if ((iVar30 == 3) && ((int)uVar33 < (int)(&DAT_ram_000b43cc)[iVar32])) {
        uVar33 = (&DAT_ram_000b43cc)[iVar32];
      }
      uVar29 = uVar29 + 1;
    } while ((int)uVar29 < 0x10);
    uVar29 = uVar33;
    if ((int)uVar33 < 0) {
      uVar29 = ~uVar33;
    }
    uVar29 = 0xf - (LZCOUNT(uVar29) + -1);
    if ((int)uVar33 < 0x10001) {
      uVar29 = local_48;
    }
    if ((uVar29 == 0) && ((int)uVar33 < 0x40)) {
      bVar13 = true;
    }
    uVar33 = local_48;
    if (0 < (int)uVar29) {
      uVar33 = 1 << (uVar29 - 1 & 0x1f);
    }
    uVar24 = 0;
    do {
      iVar32 = (int)uVar24 >> 2;
      uVar25 = (uint)((int)uVar24 >> 1) >> 0x1e;
      iVar30 = (uVar25 + uVar24 & 3) - uVar25;
      if (iVar32 < iVar30) {
        iVar34 = (uVar24 & 0xfffffffc) + iVar30;
        (&DAT_ram_000b415c)[iVar34 * 2] =
             (int)((&DAT_ram_000b415c)[iVar34 * 2] + uVar33) >> (uVar29 & 0x1f);
        iVar32 = iVar32 + iVar30 * 4;
        (&DAT_ram_000b4160)[iVar34 * 2] =
             (int)((&DAT_ram_000b4160)[iVar34 * 2] + uVar33) >> (uVar29 & 0x1f);
        (&DAT_ram_000b415c)[iVar32 * 2] =
             (int)((&DAT_ram_000b415c)[iVar32 * 2] + uVar33) >> (uVar29 & 0x1f);
        (&DAT_ram_000b4160)[iVar32 * 2] =
             (int)((&DAT_ram_000b4160)[iVar32 * 2] + uVar33) >> (uVar29 & 0x1f);
      }
      else if (iVar32 <= iVar30) {
        iVar30 = (uVar24 & 0xfffffffc) + iVar30;
        (&DAT_ram_000b415c)[iVar30 * 2] = 0x10000;
        (&DAT_ram_000b4160)[iVar30 * 2] = 0;
      }
      uVar24 = uVar24 + 1;
    } while ((int)uVar24 < 0x10);
    uVar33 = 0;
    uVar29 = 0;
    do {
      uVar24 = (uint)((int)uVar29 >> 1) >> 0x1e;
      iVar30 = (uVar24 + uVar29 & 3) - uVar24;
      uVar24 = 0;
      uVar25 = 0;
      iVar32 = 0;
      do {
        iVar34 = (uVar29 & 0xfffffffc) + iVar32;
        uVar26 = (&DAT_ram_000b41fc)[iVar34 * 2];
        iVar22 = iVar30 * 4 + iVar32;
        uVar15 = (&DAT_ram_000b415c)[iVar22 * 2];
        iVar32 = iVar32 + 1;
        uVar6 = (ulonglong)uVar15 * (ulonglong)(uVar26 & 0xffff);
        uVar7 = (longlong)(int)uVar15 * (longlong)(int)(uVar26 & 0xffff0000);
        uVar8 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
          uVar8 = 0x7fffffffffffffff;
        }
        uVar27 = (&DAT_ram_000b4200)[iVar34 * 2];
        uVar28 = (&DAT_ram_000b4160)[iVar22 * 2];
        uVar6 = (ulonglong)uVar28 * (ulonglong)(uVar27 & 0xffff);
        uVar7 = (longlong)(int)uVar28 * (longlong)(int)(uVar27 & 0xffff0000);
        uVar9 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar9) < 0) {
          uVar9 = 0x7fffffffffffffff;
        }
        uVar6 = (ulonglong)uVar27 * (ulonglong)(uVar15 & 0xffff);
        uVar7 = (longlong)(int)uVar27 * (longlong)(int)(uVar15 & 0xffff0000);
        uVar10 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar10) < 0) {
          uVar10 = 0x7fffffffffffffff;
        }
        uVar6 = (ulonglong)uVar28 * (ulonglong)(uVar26 & 0xffff);
        uVar7 = (longlong)(int)uVar28 * (longlong)(int)(uVar26 & 0xffff0000);
        uVar11 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar11) < 0) {
          uVar11 = 0x7fffffffffffffff;
        }
        uVar24 = uVar24 + ((int)uVar8 >> 3) + ((int)uVar9 >> 3);
        uVar25 = (uVar25 + ((int)uVar10 >> 3)) - ((int)uVar11 >> 3);
      } while (iVar32 < 4);
      uVar26 = uVar24;
      if ((int)uVar24 < 0) {
        uVar26 = -uVar24;
      }
      if (((int)uVar33 < (int)uVar26) && (uVar33 = uVar24, (int)uVar24 < 0)) {
        uVar33 = -uVar24;
      }
      uVar26 = uVar25;
      if ((int)uVar25 < 0) {
        uVar26 = -uVar25;
      }
      if (((int)uVar33 < (int)uVar26) && (uVar33 = uVar25, (int)uVar25 < 0)) {
        uVar33 = -uVar25;
      }
      iVar30 = iVar30 + (uVar29 & 0xfffffffc);
      uVar29 = uVar29 + 1;
      (&DAT_ram_000b42cc)[iVar30 * 2] = uVar24;
      (&DAT_ram_000b42d0)[iVar30 * 2] = uVar25;
    } while ((int)uVar29 < 0x10);
    if ((int)uVar33 < 0) {
      uVar33 = ~uVar33;
    }
    uVar29 = (uint)(short)(0x10 - ((short)LZCOUNT(uVar33) + -1));
    uVar33 = local_48;
    if (0 < (int)uVar29) {
      uVar33 = 1 << (uVar29 - 1 & 0x1f);
    }
    uVar24 = 0;
    do {
      uVar25 = (uint)((int)uVar24 >> 1) >> 0x1e;
      iVar30 = (uVar24 & 0xfffffffc) + ((uVar25 + uVar24 & 3) - uVar25);
      uVar24 = uVar24 + 1;
      (&DAT_ram_000b41fc)[iVar30 * 2] =
           (int)((&DAT_ram_000b42cc)[iVar30 * 2] + uVar33) >> (uVar29 & 0x1f);
      (&DAT_ram_000b4200)[iVar30 * 2] =
           (int)((&DAT_ram_000b42d0)[iVar30 * 2] + uVar33) >> (uVar29 & 0x1f);
    } while ((int)uVar24 < 0x10);
    uVar33 = 0;
    do {
      uVar29 = (uint)((int)uVar33 >> 1) >> 0x1e;
      iVar32 = (uVar29 + uVar33 & 3) - uVar29;
      iVar30 = 0;
      iVar34 = 0;
      iVar22 = 0;
      do {
        iVar18 = (uVar33 & 0xfffffffc) + iVar22;
        iVar21 = iVar32 * 4 + iVar22;
        uVar29 = (&DAT_ram_000b415c)[iVar21 * 2];
        uVar24 = (uint)(short)(&DAT_ram_000b405c)[iVar18 * 2];
        uVar6 = (ulonglong)uVar24 * (ulonglong)(uVar29 & 0xffff);
        uVar7 = (longlong)(int)uVar24 * (longlong)(int)(uVar29 & 0xffff0000);
        uVar8 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
          uVar8 = 0x7fffffffffffffff;
        }
        uVar26 = (uint)(short)(&DAT_ram_000b405e)[iVar18 * 2];
        uVar25 = (&DAT_ram_000b4160)[iVar21 * 2];
        iVar22 = iVar22 + 1;
        uVar6 = (ulonglong)uVar26 * (ulonglong)(uVar25 & 0xffff);
        uVar7 = (longlong)(int)uVar26 * (longlong)(int)(uVar25 & 0xffff0000);
        uVar9 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar9) < 0) {
          uVar9 = 0x7fffffffffffffff;
        }
        uVar6 = (ulonglong)uVar26 * (ulonglong)(uVar29 & 0xffff);
        uVar7 = (longlong)(int)uVar26 * (longlong)(int)(uVar29 & 0xffff0000);
        uVar10 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar10) < 0) {
          uVar10 = 0x7fffffffffffffff;
        }
        uVar6 = (ulonglong)uVar24 * (ulonglong)(uVar25 & 0xffff);
        iVar30 = iVar30 + ((int)uVar8 >> 3) + ((int)uVar9 >> 3);
        uVar7 = (longlong)(int)uVar24 * (longlong)(int)(uVar25 & 0xffff0000);
        uVar8 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
          uVar8 = 0x7fffffffffffffff;
        }
        iVar34 = (iVar34 + ((int)uVar10 >> 3)) - ((int)uVar8 >> 3);
      } while (iVar22 < 4);
      iVar32 = iVar32 + (uVar33 & 0xfffffffc);
      uVar33 = uVar33 + 1;
      (&DAT_ram_000b42cc)[iVar32 * 2] = iVar30;
      (&DAT_ram_000b42d0)[iVar32 * 2] = iVar34;
    } while ((int)uVar33 < 0x10);
    uVar33 = 0;
    do {
      uVar29 = (uint)((int)uVar33 >> 1) >> 0x1e;
      iVar30 = 0;
      iVar32 = 0;
      iVar34 = 0;
      do {
        iVar22 = AUX_XMACLW_H;
        iVar18 = AUX_XMACLW_H;
        iVar30 = (iVar30 + iVar22) - iVar18;
        iVar22 = AUX_XMACLW_H;
        iVar34 = iVar34 + 1;
        iVar18 = AUX_XMACLW_H;
        iVar32 = iVar32 + iVar22 + iVar18;
      } while (iVar34 < 4);
      iVar34 = ((uVar29 + uVar33 & 3) - uVar29) + (uVar33 & 0xfffffffc);
      uVar33 = uVar33 + 1;
      (&DAT_ram_000b443c)[iVar34 * 2] = iVar30;
      (&DAT_ram_000b4440)[iVar34 * 2] = iVar32;
    } while ((int)uVar33 < 0x10);
    uVar33 = 0;
    do {
      uVar29 = (uint)((int)uVar33 >> 1) >> 0x1e;
      iVar32 = (uVar29 + uVar33 & 3) - uVar29;
      iVar30 = 0;
      iVar34 = 0;
      iVar22 = 0;
      do {
        iVar18 = (uVar33 & 0xfffffffc) + iVar22;
        iVar21 = iVar32 * 4 + iVar22;
        uVar29 = (&DAT_ram_000b415c)[iVar21 * 2];
        uVar24 = (uint)(short)(&DAT_ram_000b409c)[iVar18 * 2];
        uVar6 = (ulonglong)uVar24 * (ulonglong)(uVar29 & 0xffff);
        uVar7 = (longlong)(int)uVar24 * (longlong)(int)(uVar29 & 0xffff0000);
        uVar8 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
          uVar8 = 0x7fffffffffffffff;
        }
        uVar26 = (&DAT_ram_000b4160)[iVar21 * 2];
        uVar25 = (uint)(short)(&DAT_ram_000b409e)[iVar18 * 2];
        iVar22 = iVar22 + 1;
        uVar6 = (ulonglong)uVar25 * (ulonglong)(uVar26 & 0xffff);
        uVar7 = (longlong)(int)uVar25 * (longlong)(int)(uVar26 & 0xffff0000);
        uVar9 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar9) < 0) {
          uVar9 = 0x7fffffffffffffff;
        }
        uVar6 = (ulonglong)uVar25 * (ulonglong)(uVar29 & 0xffff);
        uVar7 = (longlong)(int)uVar25 * (longlong)(int)(uVar29 & 0xffff0000);
        uVar10 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar10) < 0) {
          uVar10 = 0x7fffffffffffffff;
        }
        uVar6 = (ulonglong)uVar24 * (ulonglong)(uVar26 & 0xffff);
        iVar30 = iVar30 + ((int)uVar8 >> 3) + ((int)uVar9 >> 3);
        uVar7 = (longlong)(int)uVar24 * (longlong)(int)(uVar26 & 0xffff0000);
        uVar8 = uVar6 + uVar7;
        if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
          uVar8 = 0x7fffffffffffffff;
        }
        iVar34 = (iVar34 + ((int)uVar10 >> 3)) - ((int)uVar8 >> 3);
      } while (iVar22 < 4);
      iVar32 = iVar32 + (uVar33 & 0xfffffffc);
      uVar33 = uVar33 + 1;
      (&DAT_ram_000b42cc)[iVar32 * 2] = iVar30;
      (&DAT_ram_000b42d0)[iVar32 * 2] = iVar34;
    } while ((int)uVar33 < 0x10);
    uVar33 = 0;
    do {
      uVar29 = (uint)((int)uVar33 >> 1) >> 0x1e;
      iVar30 = 0;
      iVar32 = 0;
      iVar34 = 0;
      do {
        iVar22 = AUX_XMACLW_H;
        iVar18 = AUX_XMACLW_H;
        iVar30 = (iVar30 + iVar22) - iVar18;
        iVar22 = AUX_XMACLW_H;
        iVar34 = iVar34 + 1;
        iVar18 = AUX_XMACLW_H;
        iVar32 = iVar32 + iVar22 + iVar18;
      } while (iVar34 < 4);
      iVar34 = ((uVar29 + uVar33 & 3) - uVar29) + (uVar33 & 0xfffffffc);
      uVar33 = uVar33 + 1;
      (&DAT_ram_000b434c)[iVar34 * 2] = iVar30;
      (&DAT_ram_000b4350)[iVar34 * 2] = iVar32;
    } while ((int)uVar33 < 0x10);
    sVar14 = 0x1f;
    uVar33 = 0;
    do {
      uVar29 = (uint)((int)uVar33 >> 1) >> 0x1e;
      iVar30 = (uVar33 & 0xfffffffc) + ((uVar29 + uVar33 & 3) - uVar29);
      uVar29 = (&DAT_ram_000b443c)[iVar30 * 2];
      if ((int)uVar29 < 0) {
        uVar29 = ~uVar29;
      }
      sVar12 = (short)LZCOUNT(uVar29) + -1;
      if (sVar12 < sVar14) {
        sVar14 = sVar12;
      }
      uVar29 = (&DAT_ram_000b4440)[iVar30 * 2];
      if ((int)uVar29 < 0) {
        uVar29 = ~uVar29;
      }
      sVar12 = (short)LZCOUNT(uVar29) + -1;
      if (sVar12 < sVar14) {
        sVar14 = sVar12;
      }
      uVar29 = (&DAT_ram_000b434c)[iVar30 * 2];
      if ((int)uVar29 < 0) {
        uVar29 = ~uVar29;
      }
      sVar12 = (short)LZCOUNT(uVar29) + -1;
      if (sVar12 < sVar14) {
        sVar14 = sVar12;
      }
      uVar29 = (&DAT_ram_000b4350)[iVar30 * 2];
      if ((int)uVar29 < 0) {
        uVar29 = ~uVar29;
      }
      sVar12 = (short)LZCOUNT(uVar29) + -1;
      if (sVar12 < sVar14) {
        sVar14 = sVar12;
      }
      uVar33 = uVar33 + 1;
    } while ((int)uVar33 < 0x10);
    uVar29 = (uint)(short)(0x10 - sVar14);
    uVar33 = local_48;
    if (0 < (int)uVar29) {
      uVar33 = 1 << (uVar29 - 1 & 0x1f);
    }
    uVar24 = 0;
    do {
      uVar25 = (uint)((int)uVar24 >> 1) >> 0x1e;
      iVar30 = (uVar24 & 0xfffffffc) + ((uVar25 + uVar24 & 3) - uVar25);
      iVar22 = (&DAT_ram_000b4440)[iVar30 * 2];
      iVar34 = (&DAT_ram_000b434c)[iVar30 * 2];
      iVar32 = (&DAT_ram_000b4350)[iVar30 * 2];
      if ((int)uVar29 < 1) {
        uVar25 = -uVar29;
        (&DAT_ram_000b405c)[iVar30 * 2] =
             (short)((&DAT_ram_000b443c)[iVar30 * 2] << (uVar25 & 0x1f));
        (&DAT_ram_000b405e)[iVar30 * 2] = (short)(iVar22 << (uVar25 & 0x1f));
        (&DAT_ram_000b409c)[iVar30 * 2] = (short)(iVar34 << (uVar25 & 0x1f));
        uVar23 = (undefined2)(iVar32 << (uVar25 & 0x1f));
      }
      else {
        (&DAT_ram_000b405c)[iVar30 * 2] =
             (short)((int)((&DAT_ram_000b443c)[iVar30 * 2] + uVar33) >> (uVar29 & 0x1f));
        (&DAT_ram_000b405e)[iVar30 * 2] = (short)((int)(iVar22 + uVar33) >> (uVar29 & 0x1f));
        (&DAT_ram_000b409c)[iVar30 * 2] = (short)((int)(iVar34 + uVar33) >> (uVar29 & 0x1f));
        uVar23 = (undefined2)((int)(iVar32 + uVar33) >> (uVar29 & 0x1f));
      }
      uVar24 = uVar24 + 1;
      (&DAT_ram_000b409e)[iVar30 * 2] = uVar23;
    } while ((int)uVar24 < 0x10);
    if (bVar13) break;
    if (iStack_50 == 0xe) {
      *param_6 = 1;
    }
    iStack_50 = iStack_50 + 1;
    if (0xe < iStack_50) {
LAB_ram_00036788:
      iVar32 = 0;
      iVar30 = 0;
      uVar33 = 0;
      do {
        uVar29 = (uint)((int)uVar33 >> 1) >> 0x1e;
        iVar18 = (uVar29 + uVar33 & 3) - uVar29;
        iVar22 = (uVar33 & 0xfffffffc) + iVar18;
        iVar34 = (int)(short)(&DAT_ram_000b405c)[iVar22 * 2];
        if (iVar18 == (int)uVar33 >> 2) {
          *(undefined2 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + ((int)uVar33 >> 2) * 2 + 0x10c0) =
               (&DAT_ram_000b405c)[iVar22 * 2];
        }
        else {
          iVar22 = (int)(short)(&DAT_ram_000b405e)[iVar22 * 2];
          if (iVar34 < 0) {
            iVar34 = -iVar34;
          }
          if (iVar34 < iVar32) {
            iVar34 = iVar32;
          }
          if (iVar22 < 0) {
            iVar22 = -iVar22;
          }
          if (iVar22 < (short)iVar34) {
            iVar22 = (int)(short)iVar34;
          }
          iVar32 = (int)(short)iVar22;
        }
        uVar33 = uVar33 + 1;
      } while ((int)uVar33 < 0x10);
      uVar33 = 0;
      do {
        uVar29 = (uint)((int)uVar33 >> 1) >> 0x1e;
        iVar22 = (uVar29 + uVar33 & 3) - uVar29;
        iVar18 = (uVar33 & 0xfffffffc) + iVar22;
        iVar34 = (int)(short)(&DAT_ram_000b409c)[iVar18 * 2];
        if (iVar22 == (int)uVar33 >> 2) {
          *(undefined2 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + ((int)uVar33 >> 2) * 2 + 0x10c8) =
               (&DAT_ram_000b409c)[iVar18 * 2];
        }
        else {
          if (iVar34 < 0) {
            iVar34 = -iVar34;
          }
          if (iVar34 < iVar30) {
            iVar34 = iVar30;
          }
          iVar30 = (int)(short)(&DAT_ram_000b409e)[iVar18 * 2];
          if (iVar30 < 0) {
            iVar30 = -iVar30;
          }
          if (iVar30 < (short)iVar34) {
            iVar30 = (int)(short)iVar34;
          }
          iVar30 = (int)(short)iVar30;
        }
        uVar33 = uVar33 + 1;
      } while ((int)uVar33 < 0x10);
      *(short *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x10d0) = (short)iVar32;
      *(short *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x10d2) = (short)iVar30;
      do {
        uVar33 = (uint)((int)local_48 >> 1) >> 0x1e;
        iVar30 = (uVar33 + local_48 & 3) - uVar33;
        uVar33 = local_48 & 0xfffffffc;
        if ((int)local_48 >> 2 == iVar30) {
          uVar3 = *(undefined1 *)((int)&DAT_ram_000b41dc + uVar33 + 1);
          puVar19 = (undefined1 *)(param_2 + uVar33);
          uVar4 = *(undefined1 *)((int)&DAT_ram_000b41de + uVar33);
          uVar5 = *(undefined1 *)((int)&DAT_ram_000b41de + uVar33 + 1);
          *puVar19 = *(undefined1 *)((int)&DAT_ram_000b41dc + uVar33);
          puVar19[1] = uVar3;
          puVar19[2] = uVar4;
          puVar19[3] = uVar5;
          uVar3 = *(undefined1 *)((int)&DAT_ram_000b41ec + uVar33 + 1);
          uVar4 = *(undefined1 *)((int)&DAT_ram_000b41ee + uVar33);
          puVar19 = (undefined1 *)(param_3 + uVar33);
          uVar5 = *(undefined1 *)((int)&DAT_ram_000b41ee + uVar33 + 1);
          *puVar19 = *(undefined1 *)((int)&DAT_ram_000b41ec + uVar33);
          puVar19[1] = uVar3;
          puVar19[2] = uVar4;
          puVar19[3] = uVar5;
        }
        iVar30 = iVar30 + uVar33;
        local_48 = local_48 + 1;
        puVar31 = (undefined2 *)(iVar30 * 4 + param_1);
        uVar16 = (&DAT_ram_000b4200)[iVar30 * 2];
        *puVar31 = (short)(&DAT_ram_000b41fc)[iVar30 * 2];
        puVar31[1] = (short)uVar16;
      } while ((int)local_48 < 0x10);
      return;
    }
  }
  *param_6 = 1;
  goto LAB_ram_00036788;
}


