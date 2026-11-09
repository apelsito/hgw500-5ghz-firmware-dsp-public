/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000358a8 */

/* WARNING: Removing unreachable block (ram,0x00035950) */
/* WARNING: Removing unreachable block (ram,0x00035954) */

void FUN_ram_000358a8(uint param_1,short param_2,undefined4 *param_3,short *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  if ((int)param_1 < 0) {
    uVar9 = 0xffffffff;
    param_1 = -param_1;
  }
  else {
    uVar9 = 1;
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  uVar11 = param_1;
  if ((int)param_1 < 0) {
    uVar11 = ~param_1;
  }
  sVar7 = 0x10 - ((short)LZCOUNT(uVar11) + -1);
  uVar11 = (uint)sVar7;
  if ((int)uVar11 < 1) {
    iVar10 = 0;
  }
  else {
    iVar10 = (int)(short)(1 << (uVar11 - 1 & 0x1f));
  }
  param_2 = param_2 - sVar7;
  if ((int)uVar11 < 1) {
    sVar7 = (short)(param_1 << (-uVar11 & 0x1f));
  }
  else {
    sVar7 = (short)((int)(param_1 + iVar10) >> (uVar11 & 0x1f));
  }
  iVar13 = (int)((int)sVar7 - 0x4000U) >> 2;
  iVar10 = iVar13 * 2;
  uVar12 = (uint)*(short *)(&DAT_ram_dcf81800 + iVar10);
  uVar11 = (int)*(short *)(&DAT_ram_dcf81802 + iVar10);
  if (0xffe < iVar13) {
    uVar11 = uVar12;
  }
  uVar8 = (int)sVar7 - 0x4000U & 3;
  if (uVar8 == 0) {
    uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar9 & 0xffff);
    uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar9 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    *param_3 = (int)uVar3;
    *param_4 = 0x1d - param_2;
    return;
  }
  sVar7 = (short)((int)uVar11 >> 2);
  sVar4 = (short)((int)uVar12 >> 1);
  sVar5 = (short)((int)uVar12 >> 2);
  if (uVar8 == 1) {
    uVar11 = (uint)(short)(sVar4 + sVar5 + sVar7);
    uVar1 = (ulonglong)uVar11 * (ulonglong)(uVar9 & 0xffff);
    uVar2 = (longlong)(int)uVar11 * (longlong)(int)(uVar9 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    *param_3 = (int)uVar3;
    *param_4 = 0x1d - param_2;
    return;
  }
  sVar6 = (short)((int)uVar11 >> 1);
  if (uVar8 != 2) {
    if (uVar8 != 3) {
      *param_3 = 0;
      *param_4 = 0x1d - param_2;
      return;
    }
    uVar11 = (uint)(short)(sVar6 + sVar5 + sVar7);
    uVar1 = (ulonglong)uVar11 * (ulonglong)(uVar9 & 0xffff);
    uVar2 = (longlong)(int)uVar11 * (longlong)(int)(uVar9 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    *param_3 = (int)uVar3;
    *param_4 = 0x1d - param_2;
    return;
  }
  uVar11 = (uint)(short)(sVar4 + sVar6);
  uVar1 = (ulonglong)uVar11 * (ulonglong)(uVar9 & 0xffff);
  uVar2 = (longlong)(int)uVar11 * (longlong)(int)(uVar9 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  *param_3 = (int)uVar3;
  *param_4 = 0x1d - param_2;
  return;
}


