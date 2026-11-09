/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002aa98 */

int FUN_ram_0002aa98(short param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ushort uVar11;
  int iVar12;
  
  uVar5 = param_4;
  if ((int)param_4 < 0) {
    uVar5 = ~param_4;
  }
  uVar9 = (int)(short)(param_4 << (LZCOUNT(uVar5) - 0x11U & 0x1f)) - 0x4000;
  iVar12 = (int)uVar9 >> 2;
  iVar8 = iVar12 * 2;
  uVar7 = *(ushort *)(&DAT_ram_dcf81800 + iVar8);
  uVar11 = *(ushort *)(&DAT_ram_dcf81802 + iVar8);
  if (0xffe < iVar12) {
    uVar11 = uVar7;
  }
  uVar9 = uVar9 & 3;
  if (uVar9 != 0) {
    if (uVar9 == 1) {
      uVar7 = ((short)uVar7 >> 2) + ((short)uVar7 >> 1) + ((short)uVar11 >> 2);
    }
    else if (uVar9 == 2) {
      uVar7 = ((short)uVar11 >> 1) + ((short)uVar7 >> 1);
    }
    else if (uVar9 == 3) {
      uVar7 = ((short)uVar7 >> 2) + ((short)uVar11 >> 1) + ((short)uVar11 >> 2);
    }
    else {
      uVar7 = 0;
    }
  }
  uVar2 = (ulonglong)(uint)(int)param_1 * (ulonglong)uVar7;
  uVar3 = (longlong)(int)param_1 * (longlong)(int)((int)(short)uVar7 & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar9 = (uint)uVar4;
  uVar6 = uVar9;
  if ((int)uVar9 < 0) {
    uVar6 = ~uVar9;
  }
  iVar8 = LZCOUNT(uVar6) + -0x11;
  if (iVar8 < 0x20) {
    if (iVar8 < -0x1f) {
      lVar1 = (longlong)((int)uVar9 >> 0x1f);
    }
    else if (iVar8 < 0) {
      lVar1 = (longlong)((int)uVar9 >> -iVar8);
    }
    else {
      lVar1 = (longlong)(int)uVar9 << iVar8;
    }
  }
  else {
    lVar1 = (longlong)(int)uVar9 << 0x1f;
  }
  iVar8 = (int)lVar1;
  if (0x7fffffff < lVar1) {
    iVar8 = 0x7fffffff;
  }
  if (lVar1 < -0x80000000) {
    iVar8 = -0x80000000;
  }
  iVar12 = 0;
  iVar10 = DAT_ram_0005ac54;
  while (iVar10 < iVar8) {
    iVar12 = iVar12 + 1;
    iVar10 = (&DAT_ram_0005ac54)[iVar12];
  }
  iVar8 = iVar12 + ((((param_3 & 0xf) + ((int)param_3 >> 4 & 0xfU) + (LZCOUNT(uVar5) - 0x11U) +
                     param_2) - (LZCOUNT(uVar6) + -1)) + -6) * 0xc + param_6 * 4 + param_5 * -4 +
          -0x52;
  if (iVar8 < -0x80) {
    iVar8 = -0x80;
  }
  if (0x7f < iVar8) {
    iVar8 = 0x7f;
  }
  return iVar8;
}


