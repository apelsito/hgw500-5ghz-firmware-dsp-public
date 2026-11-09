/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002dc34 */

void FUN_ram_0002dc34(undefined1 *param_1,short *param_2,int param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  short sVar19;
  int iVar20;
  int iVar21;
  short sVar22;
  int iVar23;
  short sVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int local_94;
  int iStack_90;
  int local_8c;
  
  sVar9 = 0;
  sVar22 = 0;
  local_94 = 0;
  iStack_90 = 0;
  local_8c = 0;
  iVar29 = 0;
  iVar26 = 0;
  iVar27 = 0;
  iVar31 = 0;
  iVar28 = 0;
  iVar30 = 0;
  sVar15 = 0;
  sVar24 = 0;
  if (param_3 == 3) {
    sVar19 = 0;
    if (param_4 != 0) {
      if (param_4 != 1) {
        if ((param_4 != 2) && (param_4 != 3)) goto LAB_ram_0002dcea;
        sVar15 = param_2[10];
        iVar30 = (int)param_2[0xb];
      }
      sVar9 = param_2[6];
      iVar28 = (int)param_2[8];
      iVar31 = (int)param_2[9];
      sVar19 = param_2[7];
    }
    sVar24 = sVar15;
    sVar22 = sVar19;
    local_8c = (int)*param_2;
    iVar27 = (int)param_2[3];
    iStack_90 = (int)param_2[1];
    iVar26 = (int)param_2[4];
    local_94 = (int)param_2[2];
    iVar29 = (int)param_2[5];
  }
  else if (param_3 == 2) {
    if (param_4 != 0) {
      if ((param_4 != 1) && (param_4 != 2)) goto LAB_ram_0002dcea;
      sVar9 = param_2[4];
      iVar28 = (int)param_2[5];
    }
    local_8c = (int)*param_2;
    iVar27 = (int)param_2[2];
    iStack_90 = (int)param_2[1];
    iVar26 = (int)param_2[3];
  }
  else {
    local_8c = (int)*param_2;
    iVar27 = (int)param_2[1];
  }
LAB_ram_0002dcea:
  sVar15 = (short)local_8c + sVar22;
  iVar16 = (int)sVar15;
  iVar17 = (int)(short)(sVar15 + sVar24);
  sVar15 = (short)local_8c + sVar9;
  iVar33 = (int)sVar15;
  sVar9 = sVar9 + (short)iStack_90;
  iVar10 = (int)sVar9;
  sVar19 = sVar22 + (short)iStack_90;
  iVar20 = (int)sVar19;
  iVar11 = (int)(short)(sVar19 + sVar24);
  iVar18 = (int)(short)(sVar9 + sVar24);
  sVar22 = sVar22 + (short)local_94;
  iVar23 = (int)sVar22;
  iVar25 = (int)(short)(sVar24 + sVar22);
  uVar12 = FUN_ram_0002c4a8(local_8c);
  uVar13 = FUN_ram_0002c4a8(iVar27);
  uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
  uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  uVar13 = (int)uVar3 >> 0xf;
  uVar12 = FUN_ram_0002c4a8(iVar26);
  uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
  uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  uVar13 = (int)uVar3 >> 0xf;
  uVar12 = FUN_ram_0002c4a8(iVar29);
  uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
  uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  *param_1 = (char)((uint)(((int)uVar3 + 0x4000 >> 0xf) + 0x80) >> 8);
  uVar12 = FUN_ram_0002c514(local_8c);
  uVar13 = FUN_ram_0002c4a8(iVar27);
  uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
  uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  uVar13 = (int)uVar3 >> 0xf;
  uVar12 = FUN_ram_0002c4a8(iVar26);
  uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
  uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  uVar13 = (int)uVar3 >> 0xf;
  uVar12 = FUN_ram_0002c4a8(iVar29);
  uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
  uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  iVar21 = (int)uVar3 + 0x4000;
  iVar14 = iVar21 >> 0xf;
  iVar32 = (int)(short)(sVar15 + sVar24);
  if (iVar14 < 0x7f80) {
    uVar8 = (undefined1)((uint)(iVar14 + 0x80) >> 8);
  }
  else {
    uVar8 = (undefined1)(iVar21 >> 0x17);
  }
  param_1[1] = uVar8;
  if (param_4 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    iVar14 = FUN_ram_0002c4a8(iVar33);
    uVar12 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(-iVar14 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(-iVar14 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    iVar14 = FUN_ram_0002c4a8(iVar16);
    uVar12 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(-iVar14 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(-iVar14 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    iVar14 = FUN_ram_0002c4a8(local_8c);
    uVar12 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(-iVar14 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(-iVar14 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar29);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    iVar21 = (int)uVar6 + (int)uVar3 + (int)uVar7 + 0x4000;
    iVar14 = iVar21 >> 0xf;
    if (iVar14 < 0x7f80) {
      uVar8 = (undefined1)((uint)(iVar14 + 0x80) >> 8);
    }
    else {
      uVar8 = (undefined1)(iVar21 >> 0x17);
    }
    param_1[2] = uVar8;
    iVar14 = FUN_ram_0002c514(iVar33);
    uVar12 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)(uint)-iVar14 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar14 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    iVar14 = FUN_ram_0002c514(iVar16);
    uVar12 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)(uint)-iVar14 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar14 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    iVar14 = FUN_ram_0002c514(local_8c);
    uVar12 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)(uint)-iVar14 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar14 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar29);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    iVar21 = (int)uVar6 + (int)uVar3 + (int)uVar7 + 0x4000;
    iVar14 = iVar21 >> 0xf;
    if (iVar14 < 0x7f80) {
      uVar8 = (undefined1)((uint)(iVar14 + 0x80) >> 8);
    }
    else {
      uVar8 = (undefined1)(iVar21 >> 0x17);
    }
    param_1[3] = uVar8;
  }
  if (param_4 < 2) {
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    uVar12 = FUN_ram_0002c4a8(iVar32);
    uVar13 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    iVar14 = FUN_ram_0002c4a8(iVar17);
    uVar12 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)(uint)-iVar14 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar14 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar12 = FUN_ram_0002c4a8(iVar33);
    uVar13 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar12 = FUN_ram_0002c4a8(iVar16);
    uVar13 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    iVar14 = FUN_ram_0002c4a8(local_8c);
    uVar12 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)(uint)-iVar14 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar14 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar29);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    iVar21 = (int)uVar7 + (int)uVar3 + (int)uVar6 + (int)uVar4 + (int)uVar5 + 0x4000;
    iVar14 = iVar21 >> 0xf;
    if (iVar14 < 0x7f80) {
      uVar8 = (undefined1)((uint)(iVar14 + 0x80) >> 8);
    }
    else {
      uVar8 = (undefined1)(iVar21 >> 0x17);
    }
    param_1[4] = uVar8;
    uVar12 = FUN_ram_0002c514(iVar32);
    uVar13 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    iVar14 = FUN_ram_0002c514(iVar17);
    uVar12 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)(uint)-iVar14 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar14 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar12 = FUN_ram_0002c514(iVar33);
    uVar13 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar12 = FUN_ram_0002c514(iVar16);
    uVar13 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    iVar14 = FUN_ram_0002c514(local_8c);
    uVar12 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)(uint)-iVar14 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar14 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar29);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    iVar21 = (int)uVar7 + (int)uVar3 + (int)uVar6 + (int)uVar4 + (int)uVar5 + 0x4000;
    iVar14 = iVar21 >> 0xf;
    if (iVar14 < 0x7f80) {
      uVar8 = (undefined1)((uint)(iVar14 + 0x80) >> 8);
    }
    else {
      uVar8 = (undefined1)(iVar21 >> 0x17);
    }
    param_1[5] = uVar8;
  }
  if (param_4 < 3) {
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else {
    iVar14 = FUN_ram_0002c4a8(iVar32);
    uVar12 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(-iVar14 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(-iVar14 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar12 = FUN_ram_0002c4a8(iVar17);
    uVar13 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar12 = FUN_ram_0002c4a8(iVar33);
    uVar13 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar12 = FUN_ram_0002c4a8(iVar16);
    uVar13 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    iVar14 = FUN_ram_0002c4a8(local_8c);
    uVar12 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(-iVar14 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(-iVar14 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar29);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    iVar21 = (int)uVar7 + (int)uVar3 + (int)uVar6 + (int)uVar4 + (int)uVar5 + 0x4000;
    iVar14 = iVar21 >> 0xf;
    if (iVar14 < 0x7f80) {
      uVar8 = (undefined1)((uint)(iVar14 + 0x80) >> 8);
    }
    else {
      uVar8 = (undefined1)(iVar21 >> 0x17);
    }
    param_1[6] = uVar8;
    iVar14 = FUN_ram_0002c514(iVar32);
    uVar12 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)(uint)-iVar14 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar14 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar12 = FUN_ram_0002c514(iVar17);
    uVar13 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar12 = FUN_ram_0002c514(iVar33);
    uVar13 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar12 = FUN_ram_0002c514(iVar16);
    uVar13 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    iVar16 = FUN_ram_0002c514(local_8c);
    uVar12 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)(uint)-iVar16 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar16 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar29);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    iVar17 = (int)uVar3 + (int)uVar6 + (int)uVar7 + (int)uVar4 + (int)uVar5 + 0x4000;
    iVar16 = iVar17 >> 0xf;
    if (iVar16 < 0x7f80) {
      uVar8 = (undefined1)((uint)(iVar16 + 0x80) >> 8);
    }
    else {
      uVar8 = (undefined1)(iVar17 >> 0x17);
    }
    param_1[7] = uVar8;
  }
  uVar12 = FUN_ram_0002c4a8(iStack_90);
  uVar13 = FUN_ram_0002c514(iVar27);
  uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
  uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  uVar13 = (int)uVar3 >> 0xf;
  uVar12 = FUN_ram_0002c4a8(iVar26);
  uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
  uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  uVar13 = (int)uVar3 >> 0xf;
  uVar12 = FUN_ram_0002c4a8(iVar29);
  uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
  uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  iVar17 = (int)uVar3 + 0x4000;
  iVar16 = iVar17 >> 0xf;
  if (iVar16 < 0x7f80) {
    uVar8 = (undefined1)((uint)(iVar16 + 0x80) >> 8);
  }
  else {
    uVar8 = (undefined1)(iVar17 >> 0x17);
  }
  param_1[8] = uVar8;
  uVar12 = FUN_ram_0002c514(iStack_90);
  uVar13 = FUN_ram_0002c514(iVar27);
  uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
  uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  uVar13 = (int)uVar3 >> 0xf;
  uVar12 = FUN_ram_0002c4a8(iVar26);
  uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
  uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  uVar13 = (int)uVar3 >> 0xf;
  uVar12 = FUN_ram_0002c4a8(iVar29);
  uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
  uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  iVar17 = (int)uVar3 + 0x4000;
  iVar16 = iVar17 >> 0xf;
  if (iVar16 < 0x7f80) {
    uVar8 = (undefined1)((uint)(iVar16 + 0x80) >> 8);
  }
  else {
    uVar8 = (undefined1)(iVar17 >> 0x17);
  }
  param_1[9] = uVar8;
  if (param_4 == 0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  else {
    uVar12 = FUN_ram_0002c4a8(iVar10);
    uVar13 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    iVar16 = FUN_ram_0002c4a8(iVar20);
    uVar12 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(-iVar16 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(-iVar16 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    iVar16 = FUN_ram_0002c4a8(iStack_90);
    uVar12 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(-iVar16 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(-iVar16 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar29);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    iVar17 = (int)uVar6 + (int)uVar3 + (int)uVar7 + 0x4000;
    iVar16 = iVar17 >> 0xf;
    if (iVar16 < 0x7f80) {
      uVar8 = (undefined1)((uint)(iVar16 + 0x80) >> 8);
    }
    else {
      uVar8 = (undefined1)(iVar17 >> 0x17);
    }
    param_1[10] = uVar8;
    uVar12 = FUN_ram_0002c514(iVar10);
    uVar13 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    iVar16 = FUN_ram_0002c514(iVar20);
    uVar12 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)(uint)-iVar16 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar16 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    iVar16 = FUN_ram_0002c514(iStack_90);
    uVar12 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)(uint)-iVar16 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar16 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar29);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    iVar17 = (int)uVar6 + (int)uVar3 + (int)uVar7 + 0x4000;
    iVar16 = iVar17 >> 0xf;
    if (iVar16 < 0x7f80) {
      uVar8 = (undefined1)((uint)(iVar16 + 0x80) >> 8);
    }
    else {
      uVar8 = (undefined1)(iVar17 >> 0x17);
    }
    param_1[0xb] = uVar8;
  }
  if (param_4 < 2) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  else {
    iVar16 = FUN_ram_0002c4a8(iVar18);
    uVar12 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)(uint)-iVar16 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar16 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    iVar16 = FUN_ram_0002c4a8(iVar11);
    uVar12 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)(uint)-iVar16 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar16 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    iVar16 = FUN_ram_0002c4a8(iVar10);
    uVar12 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)(uint)-iVar16 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar16 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar12 = FUN_ram_0002c4a8(iVar20);
    uVar13 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    iVar16 = FUN_ram_0002c4a8(iStack_90);
    uVar12 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)(uint)-iVar16 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar16 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar29);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    iVar17 = (int)uVar3 + (int)uVar6 + (int)uVar7 + (int)uVar4 + (int)uVar5 + 0x4000;
    iVar16 = iVar17 >> 0xf;
    if (iVar16 < 0x7f80) {
      uVar8 = (undefined1)((uint)(iVar16 + 0x80) >> 8);
    }
    else {
      uVar8 = (undefined1)(iVar17 >> 0x17);
    }
    param_1[0xc] = uVar8;
    iVar16 = FUN_ram_0002c514(iVar18);
    uVar12 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)(uint)-iVar16 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar16 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    iVar16 = FUN_ram_0002c514(iVar11);
    uVar12 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)(uint)-iVar16 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar16 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    iVar16 = FUN_ram_0002c514(iVar10);
    uVar12 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)(uint)-iVar16 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar16 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar12 = FUN_ram_0002c514(iVar20);
    uVar13 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    iVar16 = FUN_ram_0002c514(iStack_90);
    uVar12 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)(uint)-iVar16 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar16 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar29);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    iVar17 = (int)uVar3 + (int)uVar6 + (int)uVar7 + (int)uVar4 + (int)uVar5 + 0x4000;
    iVar16 = iVar17 >> 0xf;
    if (iVar16 < 0x7f80) {
      uVar8 = (undefined1)((uint)(iVar16 + 0x80) >> 8);
    }
    else {
      uVar8 = (undefined1)(iVar17 >> 0x17);
    }
    param_1[0xd] = uVar8;
  }
  if (param_4 < 3) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else {
    uVar12 = FUN_ram_0002c4a8(iVar18);
    uVar13 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar12 = FUN_ram_0002c4a8(iVar11);
    uVar13 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    iVar16 = FUN_ram_0002c4a8(iVar10);
    uVar12 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(-iVar16 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(-iVar16 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar12 = FUN_ram_0002c4a8(iVar20);
    uVar13 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    iVar16 = FUN_ram_0002c4a8(iStack_90);
    uVar12 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(-iVar16 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(-iVar16 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar29);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    iVar17 = (int)uVar3 + (int)uVar6 + (int)uVar7 + (int)uVar4 + (int)uVar5 + 0x4000;
    iVar16 = iVar17 >> 0xf;
    if (iVar16 < 0x7f80) {
      uVar8 = (undefined1)((uint)(iVar16 + 0x80) >> 8);
    }
    else {
      uVar8 = (undefined1)(iVar17 >> 0x17);
    }
    param_1[0xe] = uVar8;
    uVar12 = FUN_ram_0002c514(iVar18);
    uVar13 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar12 = FUN_ram_0002c514(iVar11);
    uVar13 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    iVar10 = FUN_ram_0002c514(iVar10);
    uVar12 = FUN_ram_0002c4a8(iVar27);
    uVar1 = (ulonglong)(uint)-iVar10 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar10 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar12 = FUN_ram_0002c514(iVar20);
    uVar13 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar4 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    iVar10 = FUN_ram_0002c514(iStack_90);
    uVar12 = FUN_ram_0002c514(iVar27);
    uVar1 = (ulonglong)(uint)-iVar10 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar10 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar29);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar5 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar5 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    iVar10 = (int)uVar3 + (int)uVar6 + (int)uVar7 + (int)uVar4 + (int)uVar5 + 0x4000;
    iVar27 = iVar10 >> 0xf;
    if (iVar27 < 0x7f80) {
      uVar8 = (undefined1)((uint)(iVar27 + 0x80) >> 8);
    }
    else {
      uVar8 = (undefined1)(iVar10 >> 0x17);
    }
    param_1[0xf] = uVar8;
  }
  uVar12 = FUN_ram_0002c4a8(local_94);
  uVar13 = FUN_ram_0002c514(iVar26);
  uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
  uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  uVar13 = (int)uVar3 >> 0xf;
  uVar12 = FUN_ram_0002c4a8(iVar29);
  uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
  uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  iVar10 = (int)uVar3 + 0x4000;
  iVar27 = iVar10 >> 0xf;
  if (iVar27 < 0x7f80) {
    uVar8 = (undefined1)((uint)(iVar27 + 0x80) >> 8);
  }
  else {
    uVar8 = (undefined1)(iVar10 >> 0x17);
  }
  param_1[0x10] = uVar8;
  uVar12 = FUN_ram_0002c514(local_94);
  uVar13 = FUN_ram_0002c514(iVar26);
  uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
  uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  uVar13 = (int)uVar3 >> 0xf;
  uVar12 = FUN_ram_0002c4a8(iVar29);
  uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
  uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  iVar10 = (int)uVar3 + 0x4000;
  iVar27 = iVar10 >> 0xf;
  if (iVar27 < 0x7f80) {
    uVar8 = (undefined1)((uint)(iVar27 + 0x80) >> 8);
  }
  else {
    uVar8 = (undefined1)(iVar10 >> 0x17);
  }
  param_1[0x11] = uVar8;
  if (param_4 == 0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  else {
    uVar12 = FUN_ram_0002c4a8(iVar23);
    uVar13 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    iVar27 = FUN_ram_0002c4a8(local_94);
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)(uint)-iVar27 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar27 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar29);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    iVar10 = (int)uVar3 + (int)uVar6 + 0x4000;
    iVar27 = iVar10 >> 0xf;
    if (iVar27 < 0x7f80) {
      uVar8 = (undefined1)((uint)(iVar27 + 0x80) >> 8);
    }
    else {
      uVar8 = (undefined1)(iVar10 >> 0x17);
    }
    param_1[0x12] = uVar8;
    uVar12 = FUN_ram_0002c514(iVar23);
    uVar13 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    iVar27 = FUN_ram_0002c514(local_94);
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)(uint)-iVar27 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar27 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar29);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    iVar10 = (int)uVar3 + (int)uVar6 + 0x4000;
    iVar27 = iVar10 >> 0xf;
    if (iVar27 < 0x7f80) {
      uVar8 = (undefined1)((uint)(iVar27 + 0x80) >> 8);
    }
    else {
      uVar8 = (undefined1)(iVar10 >> 0x17);
    }
    param_1[0x13] = uVar8;
  }
  if (param_4 < 2) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  else {
    uVar12 = FUN_ram_0002c4a8(iVar25);
    uVar13 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    iVar27 = FUN_ram_0002c4a8(iVar23);
    uVar12 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)(uint)-iVar27 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar27 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    iVar27 = FUN_ram_0002c4a8(local_94);
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)(uint)-iVar27 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar27 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar29);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    iVar10 = (int)uVar6 + (int)uVar3 + (int)uVar7 + 0x4000;
    iVar27 = iVar10 >> 0xf;
    if (iVar27 < 0x7f80) {
      uVar8 = (undefined1)((uint)(iVar27 + 0x80) >> 8);
    }
    else {
      uVar8 = (undefined1)(iVar10 >> 0x17);
    }
    param_1[0x14] = uVar8;
    uVar12 = FUN_ram_0002c514(iVar25);
    uVar13 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    iVar27 = FUN_ram_0002c514(iVar23);
    uVar12 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)(uint)-iVar27 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar27 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    iVar27 = FUN_ram_0002c514(local_94);
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)(uint)-iVar27 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar27 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar29);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    iVar10 = (int)uVar6 + (int)uVar3 + (int)uVar7 + 0x4000;
    iVar27 = iVar10 >> 0xf;
    if (iVar27 < 0x7f80) {
      uVar8 = (undefined1)((uint)(iVar27 + 0x80) >> 8);
    }
    else {
      uVar8 = (undefined1)(iVar10 >> 0x17);
    }
    param_1[0x15] = uVar8;
  }
  if (param_4 < 3) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  else {
    iVar27 = FUN_ram_0002c4a8(iVar25);
    uVar12 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)(uint)-iVar27 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar27 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    iVar27 = FUN_ram_0002c4a8(iVar23);
    uVar12 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)(uint)-iVar27 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar27 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    iVar27 = FUN_ram_0002c4a8(local_94);
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(-iVar27 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(-iVar27 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar29);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    iVar10 = (int)uVar6 + (int)uVar3 + (int)uVar7 + 0x4000;
    iVar27 = iVar10 >> 0xf;
    if (iVar27 < 0x7f80) {
      uVar8 = (undefined1)((uint)(iVar27 + 0x80) >> 8);
    }
    else {
      uVar8 = (undefined1)(iVar10 >> 0x17);
    }
    param_1[0x16] = uVar8;
    iVar27 = FUN_ram_0002c514(iVar25);
    uVar12 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)(uint)-iVar27 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar27 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    iVar27 = FUN_ram_0002c514(iVar23);
    uVar12 = FUN_ram_0002c4a8(iVar26);
    uVar1 = (ulonglong)(uint)-iVar27 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)-iVar27 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar28);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar6 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar6 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
      uVar6 = 0x7fffffffffffffff;
    }
    iVar27 = FUN_ram_0002c514(local_94);
    uVar12 = FUN_ram_0002c514(iVar26);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(-iVar27 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(-iVar27 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar29);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar7 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar7 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar7) < 0) {
      uVar7 = 0x7fffffffffffffff;
    }
    iVar26 = (int)uVar3 + (int)uVar6 + (int)uVar7 + 0x4000;
    iVar27 = iVar26 >> 0xf;
    if (iVar27 < 0x7f80) {
      uVar8 = (undefined1)((uint)(iVar27 + 0x80) >> 8);
    }
    else {
      uVar8 = (undefined1)(iVar26 >> 0x17);
    }
    param_1[0x17] = uVar8;
  }
  if (iVar27 < 0x7f80) {
    iVar27 = FUN_ram_0002c514(iVar29);
    iVar27 = iVar27 + 0x80;
  }
  param_1[0x18] = (char)((uint)iVar27 >> 8);
  param_1[0x19] = 0;
  if (param_4 == 0) {
    param_1[0x1a] = 0;
  }
  else {
    uVar12 = FUN_ram_0002c4a8(iVar29);
    uVar13 = FUN_ram_0002c514(iVar31);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    iVar27 = (int)uVar3 + 0x4000;
    iVar26 = iVar27 >> 0xf;
    if (iVar26 < 0x7f80) {
      uVar8 = (undefined1)((uint)(iVar26 + 0x80) >> 8);
    }
    else {
      uVar8 = (undefined1)(iVar27 >> 0x17);
    }
    param_1[0x1a] = uVar8;
  }
  param_1[0x1b] = 0;
  if (param_4 < 2) {
    param_1[0x1c] = 0;
  }
  else {
    uVar12 = FUN_ram_0002c4a8(iVar29);
    uVar13 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c514(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    iVar27 = (int)uVar3 + 0x4000;
    iVar26 = iVar27 >> 0xf;
    if (iVar26 < 0x7f80) {
      uVar8 = (undefined1)((uint)(iVar26 + 0x80) >> 8);
    }
    else {
      uVar8 = (undefined1)(iVar27 >> 0x17);
    }
    param_1[0x1c] = uVar8;
  }
  param_1[0x1d] = 0;
  if (param_4 < 3) {
    param_1[0x1e] = 0;
  }
  else {
    uVar12 = FUN_ram_0002c4a8(iVar29);
    uVar13 = FUN_ram_0002c4a8(iVar31);
    uVar1 = (ulonglong)uVar13 * (ulonglong)(uVar12 & 0xffff);
    uVar2 = (longlong)(int)uVar13 * (longlong)(int)(uVar12 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar13 = (int)uVar3 >> 0xf;
    uVar12 = FUN_ram_0002c4a8(iVar30);
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar13 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar13 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    iVar27 = (int)uVar3 + 0x4000;
    iVar26 = iVar27 >> 0xf;
    if (iVar26 < 0x7f80) {
      uVar8 = (undefined1)((uint)(iVar26 + 0x80) >> 8);
    }
    else {
      uVar8 = (undefined1)(iVar27 >> 0x17);
    }
    param_1[0x1e] = uVar8;
  }
  param_1[0x1f] = 0;
  return;
}


