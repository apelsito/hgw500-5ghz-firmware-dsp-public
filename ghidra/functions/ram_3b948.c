/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003b948 */

int FUN_ram_0003b948(uint param_1,int param_2,uint param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  uVar9 = param_1;
  if ((int)param_1 < 0) {
    uVar9 = -param_1;
  }
  if (param_3 != 0) {
    uVar9 = (int)(uVar9 + (1 << (param_3 - 1 & 0x1f))) >> (param_3 & 0x1f);
  }
  uVar8 = uVar9;
  if ((int)uVar9 < 0) {
    uVar8 = ~uVar9;
  }
  iVar12 = 0x1f - (LZCOUNT(uVar8) + -1);
  iVar7 = iVar12;
  if (iVar12 < param_2) {
    iVar7 = param_2;
  }
  iVar5 = param_2 * 2 + iVar7;
  uVar8 = iVar5 - 0x1e;
  if ((int)uVar8 < 1) {
    uVar8 = 1;
  }
  uVar11 = param_2 * 5 - 0x1e;
  uVar6 = iVar5 - iVar12;
  iVar5 = 8;
  iVar12 = (1 << (uVar6 - 1 & 0x1f)) + (1 << (uVar6 & 0x1f));
  do {
    uVar6 = (1 << (uVar8 - 1 & 0x1f)) + iVar12 >> (uVar8 & 0x1f);
    uVar1 = (ulonglong)uVar6 * (ulonglong)(uVar9 & 0xffff);
    uVar2 = (longlong)(int)uVar6 * (longlong)(int)(uVar9 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar10 = (1 << (iVar7 + param_2 & 0x1fU)) - ((int)uVar3 >> (param_2 - uVar8 & 0x1f));
    uVar6 = (1 << (param_2 * 5 - 0x1fU & 0x1f)) + iVar12 >> (uVar11 & 0x1f);
    uVar1 = (ulonglong)uVar6 * (ulonglong)(uVar10 & 0xffff);
    uVar2 = (longlong)(int)uVar6 * (longlong)(int)(uVar10 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    iVar4 = ((int)uVar3 >> ((iVar7 + param_2) - uVar11 & 0x1f)) + iVar12;
    iVar12 = iVar4 - iVar12;
    if (iVar12 < 0) {
      iVar12 = -iVar12;
    }
    iVar5 = iVar5 + -1;
  } while ((0x20 < iVar12) && (iVar12 = iVar4, iVar5 != 0));
  uVar9 = iVar7 - param_4;
  if (uVar9 != 0) {
    iVar4 = (1 << (uVar9 - 1 & 0x1f)) + iVar4 >> (uVar9 & 0x1f);
  }
  iVar7 = 1 << ((param_4 + param_2 * 2) - 1U & 0x1f);
  if ((int)param_1 < 0) {
    if (iVar4 < iVar7) {
      iVar7 = iVar4;
    }
    iVar12 = -iVar7;
  }
  else {
    iVar12 = iVar7 + -1;
    if (iVar4 < iVar7 + -1) {
      iVar12 = iVar4;
    }
  }
  return iVar12;
}


