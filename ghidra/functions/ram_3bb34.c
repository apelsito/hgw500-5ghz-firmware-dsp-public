/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003bb34 */

int FUN_ram_0003bb34(uint param_1,uint param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint auStack_18 [6];
  
  auStack_18[1] = DAT_ram_00054fbc;
  auStack_18[2] = DAT_ram_00054fc0;
  auStack_18[3] = DAT_ram_00054fc4;
  auStack_18[4] = DAT_ram_00054fc8;
  auStack_18[5] = DAT_ram_00054fcc;
  uVar5 = param_1;
  if ((int)param_1 < 0) {
    uVar5 = ~param_1;
  }
  uVar6 = -(LZCOUNT(uVar5) + -1) + 0x1e;
  iVar7 = 1 << (uVar6 & 0x1f);
  iVar12 = param_1 - iVar7;
  iVar7 = iVar7 * 2 - param_1;
  uVar8 = uVar6 - param_2;
  if ((int)uVar8 < 0) {
    uVar8 = 0;
  }
  uVar11 = uVar6 - uVar8;
  if ((int)param_2 < (int)(uVar6 - uVar8)) {
    uVar11 = param_2;
  }
  iVar9 = 1 << (uVar11 & 0x1f);
  if (iVar12 < iVar7) {
    iVar9 = ((int)param_1 >> (uVar8 & 0x1f)) - iVar9;
  }
  else {
    iVar9 = ((int)param_1 >> (uVar8 + 1 & 0x1f)) - iVar9;
  }
  uVar8 = iVar9 << (param_2 - uVar11 & 0x1f);
  iVar9 = uVar8 << 8;
  iVar10 = 1;
  uVar11 = -uVar8;
  do {
    uVar2 = (ulonglong)uVar11 * (ulonglong)(uVar8 & 0xffff);
    uVar3 = (longlong)(int)uVar11 * (longlong)(int)(uVar8 & 0xffff0000);
    uVar4 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    puVar1 = auStack_18 + iVar10;
    uVar8 = (int)uVar4 >> (param_2 & 0x1f);
    iVar10 = iVar10 + 1;
    uVar2 = (ulonglong)*puVar1 * (ulonglong)(uVar8 & 0xffff);
    uVar3 = (longlong)(int)*puVar1 * (longlong)(int)(uVar8 & 0xffff0000);
    uVar4 = uVar2 + uVar3;
    if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    iVar9 = iVar9 + (int)uVar4;
  } while (iVar10 < 6);
  if (iVar7 <= iVar12) {
    uVar6 = -(LZCOUNT(uVar5) + -1) + 0x1f;
  }
  return (iVar9 * 0x171 >> 0x10) + (uVar6 << (param_2 & 0x1f));
}


