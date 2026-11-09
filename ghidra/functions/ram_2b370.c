/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002b370 */

void FUN_ram_0002b370(int param_1,int param_2,undefined2 *param_3,uint *param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  short sVar12;
  short sVar13;
  int iVar14;
  short sVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  short sVar29;
  int iVar30;
  int iVar31;
  short sVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  ushort local_54;
  short local_52;
  ushort local_50;
  short local_4e;
  short local_2c;
  
  iVar30 = 0;
  iVar31 = 1;
  iVar33 = 0;
  uVar16 = DAT_ram_00054a50;
  uVar19 = DAT_ram_00054a54;
  uVar27 = DAT_ram_00054a4c;
  uVar28 = DAT_ram_00054a48;
  do {
    iVar17 = iVar30 * 4;
    uVar2 = *(ushort *)(param_1 + iVar17);
    uVar26 = (uint)(short)uVar2;
    iVar30 = iVar30 + 2;
    uVar6 = (ulonglong)uVar26 * (ulonglong)uVar2;
    uVar7 = (longlong)(int)uVar26 * (longlong)(int)(uVar26 & 0xffff0000);
    uVar8 = uVar6 + uVar7;
    if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
      uVar8 = 0x7fffffffffffffff;
    }
    uVar1 = *(ushort *)(iVar17 + param_1 + 2);
    uVar24 = (uint)(short)uVar1;
    uVar6 = (ulonglong)uVar24 * (ulonglong)uVar1;
    uVar7 = (longlong)(int)uVar24 * (longlong)(int)(uVar24 & 0xffff0000);
    uVar9 = uVar6 + uVar7;
    if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar9) < 0) {
      uVar9 = 0x7fffffffffffffff;
    }
    uVar3 = *(ushort *)(param_1 + iVar31 * 4);
    uVar22 = (uint)(short)uVar3;
    uVar28 = uVar28 + (int)uVar8 + (int)uVar9;
    uVar6 = (ulonglong)uVar22 * (ulonglong)uVar3;
    uVar7 = (longlong)(int)uVar22 * (longlong)(int)(uVar22 & 0xffff0000);
    uVar8 = uVar6 + uVar7;
    if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
      uVar8 = 0x7fffffffffffffff;
    }
    uVar3 = *(ushort *)(iVar31 * 4 + param_1 + 2);
    uVar18 = (uint)(short)uVar3;
    iVar33 = iVar33 + 1;
    uVar6 = (ulonglong)uVar18 * (ulonglong)uVar3;
    uVar7 = (longlong)(int)uVar18 * (longlong)(int)(uVar18 & 0xffff0000);
    uVar9 = uVar6 + uVar7;
    if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar9) < 0) {
      uVar9 = 0x7fffffffffffffff;
    }
    uVar27 = uVar27 + (int)uVar8 + (int)uVar9;
    uVar6 = (ulonglong)uVar22 * (ulonglong)uVar2;
    uVar7 = (longlong)(int)uVar22 * (longlong)(int)(uVar26 & 0xffff0000);
    uVar8 = uVar6 + uVar7;
    if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
      uVar8 = 0x7fffffffffffffff;
    }
    uVar6 = (ulonglong)uVar18 * (ulonglong)uVar1;
    uVar7 = (longlong)(int)uVar18 * (longlong)(int)(uVar24 & 0xffff0000);
    uVar9 = uVar6 + uVar7;
    if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar9) < 0) {
      uVar9 = 0x7fffffffffffffff;
    }
    uVar16 = uVar16 + (int)uVar8 + (int)uVar9;
    uVar6 = (ulonglong)uVar18 * (ulonglong)uVar2;
    uVar7 = (longlong)(int)uVar18 * (longlong)(int)(uVar26 & 0xffff0000);
    uVar8 = uVar6 + uVar7;
    if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
      uVar8 = 0x7fffffffffffffff;
    }
    uVar6 = (ulonglong)uVar22 * (ulonglong)uVar1;
    uVar7 = (longlong)(int)uVar22 * (longlong)(int)(uVar24 & 0xffff0000);
    uVar9 = uVar6 + uVar7;
    if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar9) < 0) {
      uVar9 = 0x7fffffffffffffff;
    }
    uVar19 = (uVar19 + (int)uVar8) - (int)uVar9;
    iVar31 = iVar31 + 2;
  } while (iVar33 < 4);
  uVar24 = uVar27 + uVar28;
  uVar26 = uVar24;
  if ((int)uVar24 < 0) {
    uVar26 = ~uVar24;
  }
  iVar31 = LZCOUNT(uVar26) + -1;
  iVar30 = 0x10 - iVar31;
  if (iVar30 < 0x20) {
    if (iVar30 < -0x1f) {
      lVar5 = (longlong)(int)uVar24 << 0x1f;
    }
    else if (iVar30 < 0) {
      lVar5 = (longlong)(int)uVar24 << -iVar30;
    }
    else {
      lVar5 = (longlong)((int)uVar24 >> iVar30);
    }
  }
  else {
    lVar5 = (longlong)((int)uVar24 >> 0x1f);
  }
  uVar26 = (uint)lVar5;
  if (0x7fffffff < lVar5) {
    uVar26 = 0x7fffffff;
  }
  if (lVar5 < -0x80000000) {
    uVar26 = 0;
  }
  uVar24 = uVar28;
  if ((int)uVar28 < 0) {
    uVar24 = ~uVar28;
  }
  iVar30 = LZCOUNT(uVar24) + -1;
  uVar24 = uVar27;
  if ((int)uVar27 < 0) {
    uVar24 = ~uVar27;
  }
  iVar17 = LZCOUNT(uVar24) + -1;
  iVar33 = 0x10 - iVar30;
  if (iVar33 < 0x20) {
    if (iVar33 < -0x1f) {
      lVar5 = (longlong)(int)uVar28 << 0x1f;
    }
    else if (iVar33 < 0) {
      lVar5 = (longlong)(int)uVar28 << -iVar33;
    }
    else {
      lVar5 = (longlong)((int)uVar28 >> iVar33);
    }
  }
  else {
    lVar5 = (longlong)((int)uVar28 >> 0x1f);
  }
  uVar28 = (uint)lVar5;
  if (0x7fffffff < lVar5) {
    uVar28 = 0x7fffffff;
  }
  if (lVar5 < -0x80000000) {
    uVar28 = 0;
  }
  iVar33 = 0x10 - iVar17;
  if (iVar33 < 0x20) {
    if (iVar33 < -0x1f) {
      lVar5 = (longlong)(int)uVar27 << 0x1f;
    }
    else if (iVar33 < 0) {
      lVar5 = (longlong)(int)uVar27 << -iVar33;
    }
    else {
      lVar5 = (longlong)((int)uVar27 >> iVar33);
    }
  }
  else {
    lVar5 = (longlong)((int)uVar27 >> 0x1f);
  }
  sVar32 = (short)lVar5;
  if (0x7fffffff < lVar5) {
    sVar32 = -1;
  }
  if (lVar5 < -0x80000000) {
    sVar32 = 0;
  }
  uVar27 = uVar16;
  if ((int)uVar16 < 0) {
    uVar27 = ~uVar16;
  }
  iVar33 = LZCOUNT(uVar27) + -1;
  uVar27 = uVar19;
  if ((int)uVar19 < 0) {
    uVar27 = ~uVar19;
  }
  iVar25 = LZCOUNT(uVar27) + -1;
  iVar14 = 0x10 - iVar33;
  if (iVar14 < 0x20) {
    if (iVar14 < -0x1f) {
      lVar5 = (longlong)(int)uVar16 << 0x1f;
    }
    else if (iVar14 < 0) {
      lVar5 = (longlong)(int)uVar16 << -iVar14;
    }
    else {
      lVar5 = (longlong)((int)uVar16 >> iVar14);
    }
  }
  else {
    lVar5 = (longlong)((int)uVar16 >> 0x1f);
  }
  uVar16 = (uint)lVar5;
  if (0x7fffffff < lVar5) {
    uVar16 = 0x7fffffff;
  }
  if (lVar5 < -0x80000000) {
    uVar16 = 0;
  }
  iVar14 = 0x10 - iVar25;
  if (iVar14 < 0x20) {
    if (iVar14 < -0x1f) {
      lVar5 = (longlong)(int)uVar19 << 0x1f;
    }
    else if (iVar14 < 0) {
      lVar5 = (longlong)(int)uVar19 << -iVar14;
    }
    else {
      lVar5 = (longlong)((int)uVar19 >> iVar14);
    }
  }
  else {
    lVar5 = (longlong)((int)uVar19 >> 0x1f);
  }
  uVar19 = (uint)lVar5;
  if (0x7fffffff < lVar5) {
    uVar19 = 0x7fffffff;
  }
  if (lVar5 < -0x80000000) {
    uVar19 = 0;
  }
  uVar18 = (uint)(short)uVar26;
  sVar15 = (short)uVar28;
  uVar27 = (uint)sVar15;
  uVar34 = (uint)sVar32;
  uVar24 = (uint)(short)uVar16;
  uVar22 = (uint)(short)uVar19;
  uVar6 = (ulonglong)uVar18 * (ulonglong)(uVar26 & 0xffff);
  uVar7 = (longlong)(int)uVar18 * (longlong)(int)(uVar18 & 0xffff0000);
  uVar8 = uVar6 + uVar7;
  if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
    uVar8 = 0x7fffffffffffffff;
  }
  uVar6 = (ulonglong)uVar34 * (ulonglong)(uVar28 & 0xffff);
  uVar7 = (longlong)(int)uVar34 * (longlong)(int)(uVar27 & 0xffff0000);
  uVar9 = uVar6 + uVar7;
  if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar9) < 0) {
    uVar9 = 0x7fffffffffffffff;
  }
  uVar6 = (ulonglong)uVar24 * (ulonglong)(uVar16 & 0xffff);
  uVar7 = (longlong)(int)uVar24 * (longlong)(int)(uVar24 & 0xffff0000);
  uVar10 = uVar6 + uVar7;
  if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar10) < 0) {
    uVar10 = 0x7fffffffffffffff;
  }
  uVar6 = (ulonglong)uVar22 * (ulonglong)(uVar19 & 0xffff);
  uVar7 = (longlong)(int)uVar22 * (longlong)(int)(uVar22 & 0xffff0000);
  uVar11 = uVar6 + uVar7;
  if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar11) < 0) {
    uVar11 = 0x7fffffffffffffff;
  }
  iVar23 = iVar33 * -2 + 0x13;
  iVar14 = iVar25 * -2 + 0x13;
  if (iVar14 < iVar23) {
    iVar35 = (int)uVar10 + ((int)uVar11 >> (iVar23 - iVar14 & 0x1fU));
    iVar14 = iVar23;
  }
  else {
    iVar35 = ((int)uVar10 >> (iVar14 - iVar23 & 0x1fU)) + (int)uVar11;
  }
  iVar23 = (0x13 - iVar30) - iVar17;
  if (iVar14 < iVar23) {
    iVar20 = (-iVar35 >> (iVar23 - iVar14 & 0x1fU)) + (int)uVar9;
  }
  else {
    iVar20 = -iVar35 + ((int)uVar9 >> (iVar14 - iVar23 & 0x1fU));
    iVar23 = iVar14;
  }
  iVar21 = iVar31 * -2 + 0x13;
  iVar23 = iVar23 + 2;
  if (iVar23 < iVar21) {
    uVar28 = (-iVar20 >> (iVar21 - iVar23 & 0x1fU)) + (int)uVar8;
    iVar23 = iVar21;
  }
  else {
    uVar28 = -iVar20 + ((int)uVar8 >> (iVar23 - iVar21 & 0x1fU));
  }
  if ((int)uVar28 < 1) {
    sVar29 = 9 - (short)iVar17;
    iVar31 = (int)sVar29;
    sVar32 = 9 - (short)iVar30;
    iVar30 = (int)sVar32;
    if (iVar30 < iVar31) {
      iVar17 = uVar34 + ((int)uVar27 >> (iVar31 - iVar30 & 0x1fU));
      local_52 = sVar29;
    }
    else {
      iVar17 = ((int)uVar34 >> (iVar30 - iVar31 & 0x1fU)) + uVar27;
      local_52 = sVar32;
    }
    if ((0x7fff < iVar17) || (iVar17 < -0x8000)) {
      iVar17 = iVar17 >> 1;
      local_52 = local_52 + 1;
    }
    local_54 = (ushort)iVar17;
    local_52 = local_52 + -1;
    if (iVar30 < iVar31) {
      iVar30 = uVar34 + ((int)-sVar15 >> (iVar31 - iVar30 & 0x1fU));
      sVar32 = sVar29;
    }
    else {
      iVar30 = ((int)uVar34 >> (iVar30 - iVar31 & 0x1fU)) + (int)-sVar15;
    }
    if ((0x7fff < iVar30) || (iVar30 < -0x8000)) {
      iVar30 = iVar30 >> 1;
      sVar32 = sVar32 + 1;
    }
    uVar27 = (uint)(short)iVar30;
    if ((int)uVar27 < 1) {
      uVar27 = 0;
    }
    local_2c = (short)uVar27;
    sVar32 = sVar32 + -1;
    local_50 = local_54;
    local_4e = local_52;
  }
  else {
    uVar27 = uVar28;
    if ((int)uVar28 < 0) {
      uVar27 = ~uVar28;
    }
    iVar17 = LZCOUNT(uVar27) + -1;
    local_4e = (short)(iVar23 - iVar17 >> 1);
    if ((iVar23 - iVar17 & 1U) == 0) {
      iVar17 = 0x10 - iVar17;
      if (iVar17 < 0x20) {
        if (iVar17 < -0x1f) {
          lVar5 = (longlong)(int)uVar28 << 0x1f;
        }
        else if (iVar17 < 0) {
          lVar5 = (longlong)(int)uVar28 << -iVar17;
        }
        else {
          lVar5 = (longlong)((int)uVar28 >> iVar17);
        }
      }
      else {
        lVar5 = (longlong)((int)uVar28 >> 0x1f);
      }
      sVar32 = (short)lVar5;
      if (0x7fffffff < lVar5) {
        sVar32 = -1;
      }
      if (lVar5 < -0x80000000) {
        sVar32 = 0;
      }
    }
    else {
      iVar17 = 0x11 - iVar17;
      if (iVar17 < 0x20) {
        if (iVar17 < -0x1f) {
          lVar5 = (longlong)(int)uVar28 << 0x1f;
        }
        else if (iVar17 < 0) {
          lVar5 = (longlong)(int)uVar28 << -iVar17;
        }
        else {
          lVar5 = (longlong)((int)uVar28 >> iVar17);
        }
      }
      else {
        lVar5 = (longlong)((int)uVar28 >> 0x1f);
      }
      sVar32 = (short)lVar5;
      if (0x7fffffff < lVar5) {
        sVar32 = -1;
      }
      if (lVar5 < -0x80000000) {
        sVar32 = 0;
      }
      local_4e = local_4e + 1;
    }
    iVar20 = (int)((int)sVar32 - 0x2000U) >> 2;
    iVar17 = iVar20 * 2;
    iVar23 = (int)*(short *)(&DAT_ram_dcfa1000 + iVar17);
    iVar17 = (int)*(short *)(&DAT_ram_dcfa1002 + iVar17);
    if (0x17fe < iVar20) {
      iVar17 = iVar23;
    }
    uVar27 = (int)sVar32 - 0x2000U & 3;
    if (uVar27 != 0) {
      sVar32 = (short)(iVar17 >> 2);
      sVar29 = (short)(iVar23 >> 2);
      sVar12 = (short)(iVar23 >> 1);
      if (uVar27 == 1) {
        sVar32 = sVar29 + sVar12 + sVar32;
      }
      else {
        sVar13 = (short)(iVar17 >> 1);
        if (uVar27 == 2) {
          sVar32 = sVar13 + sVar12;
        }
        else {
          if (uVar27 != 3) {
            iVar23 = 0;
            goto LAB_ram_0002b67e;
          }
          sVar32 = sVar13 + sVar29 + sVar32;
        }
      }
      iVar23 = (int)sVar32;
    }
LAB_ram_0002b67e:
    sVar29 = 9 - (short)iVar31;
    iVar17 = (int)sVar29;
    iVar31 = (int)local_4e;
    if (iVar31 < iVar17) {
      iVar20 = uVar18 + (iVar23 >> (iVar17 - iVar31 & 0x1fU));
      local_52 = sVar29;
    }
    else {
      iVar20 = ((int)uVar18 >> (iVar31 - iVar17 & 0x1fU)) + iVar23;
      local_52 = local_4e;
    }
    if ((0x7fff < iVar20) || (iVar20 < -0x8000)) {
      iVar20 = iVar20 >> 1;
      local_52 = local_52 + 1;
    }
    local_54 = (ushort)iVar20;
    sVar32 = 9 - (short)iVar30;
    iVar20 = (int)sVar32;
    local_52 = local_52 + -1;
    iVar30 = (int)local_52;
    if (iVar20 < iVar30) {
      iVar30 = ((int)-sVar15 >> (iVar30 - iVar20 & 0x1fU)) + (int)(short)local_54;
      sVar32 = local_52;
    }
    else {
      iVar30 = (int)-sVar15 + ((int)(short)local_54 >> (iVar20 - iVar30 & 0x1fU));
    }
    if ((0x7fff < iVar30) || (iVar30 < -0x8000)) {
      iVar30 = iVar30 >> 1;
      sVar32 = sVar32 + 1;
    }
    local_2c = (short)iVar30;
    if (iVar31 < iVar17) {
      iVar30 = uVar18 + ((int)(short)-(short)iVar23 >> (iVar17 - iVar31 & 0x1fU));
      local_4e = sVar29;
    }
    else {
      iVar30 = ((int)uVar18 >> (iVar31 - iVar17 & 0x1fU)) + (int)(short)-(short)iVar23;
    }
    if ((0x7fff < iVar30) || (iVar30 < -0x8000)) {
      iVar30 = iVar30 >> 1;
      local_4e = local_4e + 1;
    }
    local_50 = (ushort)iVar30;
    uVar27 = (uint)local_2c;
    local_4e = local_4e + -1;
  }
  uVar6 = (ulonglong)uVar27 * (ulonglong)(uVar27 & 0xffff);
  uVar7 = (longlong)(int)uVar27 * (longlong)(int)(uVar27 & 0xffff0000);
  uVar8 = uVar6 + uVar7;
  if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
    uVar8 = 0x7fffffffffffffff;
  }
  iVar30 = sVar32 * 2 + 1;
  if (iVar14 < iVar30) {
    uVar27 = (int)uVar8 + (iVar35 >> (iVar30 - iVar14 & 0x1fU));
    iVar14 = iVar30;
  }
  else {
    uVar27 = ((int)uVar8 >> (iVar14 - iVar30 & 0x1fU)) + iVar35;
  }
  uVar28 = uVar27;
  if ((int)uVar27 < 0) {
    uVar28 = ~uVar27;
  }
  iVar31 = LZCOUNT(uVar28) + -1;
  iVar30 = iVar14 - iVar31 >> 1;
  if ((iVar14 - iVar31 & 1U) == 0) {
    iVar31 = 0x10 - iVar31;
    if (iVar31 < 0x20) {
      if (iVar31 < -0x1f) {
        lVar5 = (longlong)(int)uVar27 << 0x1f;
      }
      else if (iVar31 < 0) {
        lVar5 = (longlong)(int)uVar27 << -iVar31;
      }
      else {
        lVar5 = (longlong)((int)uVar27 >> iVar31);
      }
    }
    else {
      lVar5 = (longlong)((int)uVar27 >> 0x1f);
    }
    sVar15 = (short)lVar5;
    if (0x7fffffff < lVar5) {
      sVar15 = -1;
    }
    if (lVar5 < -0x80000000) {
      sVar15 = 0;
    }
  }
  else {
    iVar31 = 0x11 - iVar31;
    if (iVar31 < 0x20) {
      if (iVar31 < -0x1f) {
        lVar5 = (longlong)(int)uVar27 << 0x1f;
      }
      else if (iVar31 < 0) {
        lVar5 = (longlong)(int)uVar27 << -iVar31;
      }
      else {
        lVar5 = (longlong)((int)uVar27 >> iVar31);
      }
    }
    else {
      lVar5 = (longlong)((int)uVar27 >> 0x1f);
    }
    sVar15 = (short)lVar5;
    if (0x7fffffff < lVar5) {
      sVar15 = -1;
    }
    if (lVar5 < -0x80000000) {
      sVar15 = 0;
    }
    iVar30 = iVar30 + 1;
  }
  iVar14 = (int)((int)sVar15 - 0x2000U) >> 2;
  iVar31 = iVar14 * 2;
  iVar17 = (int)*(short *)(&DAT_ram_dcfa1000 + iVar31);
  iVar31 = (int)*(short *)(&DAT_ram_dcfa1002 + iVar31);
  if (0x17fe < iVar14) {
    iVar31 = iVar17;
  }
  uVar27 = (int)sVar15 - 0x2000U & 3;
  if (uVar27 != 0) {
    sVar15 = (short)(iVar31 >> 2);
    sVar29 = (short)(iVar17 >> 2);
    sVar12 = (short)(iVar17 >> 1);
    if (uVar27 == 1) {
      sVar15 = sVar15 + sVar29 + sVar12;
    }
    else {
      sVar13 = (short)(iVar31 >> 1);
      if (uVar27 == 2) {
        sVar15 = sVar12 + sVar13;
      }
      else {
        if (uVar27 != 3) {
          iVar17 = 0;
          goto LAB_ram_0002b982;
        }
        sVar15 = sVar13 + sVar29 + sVar15;
      }
    }
    iVar17 = (int)sVar15;
  }
LAB_ram_0002b982:
  iVar14 = (int)(iVar17 - 0x4000U) >> 2;
  iVar31 = iVar14 * 2;
  uVar28 = (uint)*(short *)(&DAT_ram_dcf81800 + iVar31);
  uVar27 = (int)*(short *)(&DAT_ram_dcf81802 + iVar31);
  if (0xffe < iVar14) {
    uVar27 = uVar28;
  }
  uVar26 = iVar17 - 0x4000U & 3;
  if (uVar26 != 0) {
    sVar15 = (short)((int)uVar27 >> 2);
    sVar29 = (short)((int)uVar28 >> 2);
    sVar12 = (short)((int)uVar28 >> 1);
    if (uVar26 == 1) {
      uVar28 = (uint)(short)(sVar15 + sVar29 + sVar12);
    }
    else {
      sVar13 = (short)((int)uVar27 >> 1);
      if (uVar26 == 2) {
        uVar28 = (uint)(short)(sVar13 + sVar12);
      }
      else if (uVar26 == 3) {
        uVar28 = (uint)(short)(sVar13 + sVar29 + sVar15);
      }
      else {
        uVar28 = 0;
      }
    }
  }
  uVar6 = (ulonglong)uVar28 * (ulonglong)(uVar16 & 0xffff);
  uVar7 = (longlong)(int)uVar28 * (longlong)(int)(uVar24 & 0xffff0000);
  uVar8 = uVar6 + uVar7;
  if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
    uVar8 = 0x7fffffffffffffff;
  }
  iVar31 = (int)uVar8;
  iVar33 = iVar33 + iVar30 + 5;
  if (iVar33 < 0x20) {
    if (iVar33 < -0x1f) {
      lVar5 = (longlong)iVar31 << 0x1f;
    }
    else if (iVar33 < 0) {
      lVar5 = (longlong)iVar31 << -iVar33;
    }
    else {
      lVar5 = (longlong)(iVar31 >> iVar33);
    }
  }
  else {
    lVar5 = (longlong)(iVar31 >> 0x1f);
  }
  uVar4 = (undefined2)lVar5;
  if (0x7fffffff < lVar5) {
    uVar4 = 0xffff;
  }
  if (lVar5 < -0x80000000) {
    uVar4 = 0;
  }
  uVar6 = (ulonglong)uVar28 * (ulonglong)(uVar19 & 0xffff);
  uVar7 = (longlong)(int)uVar28 * (longlong)(int)(uVar22 & 0xffff0000);
  uVar8 = uVar6 + uVar7;
  if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
    uVar8 = 0x7fffffffffffffff;
  }
  iVar31 = (int)uVar8;
  iVar25 = iVar30 + 5 + iVar25;
  if (iVar25 < 0x20) {
    if (iVar25 < -0x1f) {
      lVar5 = (longlong)iVar31 << 0x1f;
    }
    else if (iVar25 < 0) {
      lVar5 = (longlong)iVar31 << -iVar25;
    }
    else {
      lVar5 = (longlong)(iVar31 >> iVar25);
    }
  }
  else {
    lVar5 = (longlong)(iVar31 >> 0x1f);
  }
  sVar15 = (short)lVar5;
  if (0x7fffffff < lVar5) {
    sVar15 = -1;
  }
  if (lVar5 < -0x80000000) {
    sVar15 = 0;
  }
  uVar6 = (ulonglong)(uint)(int)local_2c * (ulonglong)(uVar28 & 0xffff);
  uVar7 = (longlong)(int)local_2c * (longlong)(int)(uVar28 & 0xffff0000);
  uVar8 = uVar6 + uVar7;
  if (-1 < (longlong)(uVar6 ^ uVar7) && (longlong)(uVar6 ^ uVar8) < 0) {
    uVar8 = 0x7fffffffffffffff;
  }
  iVar31 = (int)uVar8;
  *param_3 = uVar4;
  param_3[1] = sVar15;
  iVar30 = (iVar30 + 0xe) - (int)sVar32;
  if (iVar30 < 0x20) {
    if (iVar30 < -0x1f) {
      lVar5 = (longlong)iVar31 << 0x1f;
    }
    else if (iVar30 < 0) {
      lVar5 = (longlong)iVar31 << -iVar30;
    }
    else {
      lVar5 = (longlong)(iVar31 >> iVar30);
    }
  }
  else {
    lVar5 = (longlong)(iVar31 >> 0x1f);
  }
  sVar32 = (short)lVar5;
  if (0x7fffffff < lVar5) {
    sVar32 = -1;
  }
  if (lVar5 < -0x80000000) {
    sVar32 = 0;
  }
  param_3[2] = sVar32;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = -sVar32;
  param_3[9] = 0;
  param_3[10] = uVar4;
  param_3[0xb] = -sVar15;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  if (param_2 != 0) {
    iVar30 = (int)(short)local_54;
    if ((short)local_54 < 0) {
      local_54 = ~local_54;
    }
    uVar19 = (uint)(short)((short)LZCOUNT(local_54) + -1);
    uVar16 = (int)(short)(iVar30 << (uVar19 & 0x1f)) - 0x4000;
    iVar31 = (int)uVar16 >> 2;
    iVar30 = iVar31 * 2;
    iVar33 = (int)*(short *)(&DAT_ram_dcf81800 + iVar30);
    iVar30 = (int)*(short *)(&DAT_ram_dcf81802 + iVar30);
    if (0xffe < iVar31) {
      iVar30 = iVar33;
    }
    uVar16 = uVar16 & 3;
    if (uVar16 != 0) {
      sVar32 = (short)(iVar30 >> 2);
      sVar15 = (short)(iVar33 >> 2);
      sVar29 = (short)(iVar33 >> 1);
      if (uVar16 == 1) {
        iVar33 = (int)(short)(sVar15 + sVar29 + sVar32);
      }
      else {
        sVar12 = (short)(iVar30 >> 1);
        if (uVar16 == 2) {
          iVar33 = (int)(short)(sVar12 + sVar29);
        }
        else if (uVar16 == 3) {
          iVar33 = (int)(short)(sVar32 + sVar12 + sVar15);
        }
        else {
          iVar33 = 0;
        }
      }
    }
    *param_4 = (uVar19 - (int)local_52) + 1 & 0xffff | iVar33 << 0x10;
    iVar30 = (int)(short)local_50;
    if ((short)local_50 < 0) {
      local_50 = ~local_50;
    }
    uVar19 = (uint)(short)((short)LZCOUNT(local_50) + -1);
    uVar16 = (int)(short)(iVar30 << (uVar19 & 0x1f)) - 0x4000;
    iVar31 = (int)uVar16 >> 2;
    iVar30 = iVar31 * 2;
    iVar33 = (int)*(short *)(&DAT_ram_dcf81800 + iVar30);
    iVar30 = (int)*(short *)(&DAT_ram_dcf81802 + iVar30);
    if (0xffe < iVar31) {
      iVar30 = iVar33;
    }
    uVar16 = uVar16 & 3;
    if (uVar16 != 0) {
      sVar32 = (short)(iVar30 >> 2);
      sVar15 = (short)(iVar33 >> 1);
      sVar29 = (short)(iVar33 >> 2);
      if (uVar16 == 1) {
        iVar33 = (int)(short)(sVar15 + sVar29 + sVar32);
      }
      else {
        sVar12 = (short)(iVar30 >> 1);
        if (uVar16 == 2) {
          iVar33 = (int)(short)(sVar12 + sVar15);
        }
        else if (uVar16 == 3) {
          iVar33 = (int)(short)(sVar32 + sVar12 + sVar29);
        }
        else {
          iVar33 = 0;
        }
      }
    }
    param_4[1] = iVar33 << 0x10 | (uVar19 - (int)local_4e) + 1 & 0xffff;
  }
  return;
}


