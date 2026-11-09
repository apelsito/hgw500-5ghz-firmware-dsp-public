/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00025994 */

/* WARNING: Removing unreachable block (ram,0x00025ad6) */
/* WARNING: Removing unreachable block (ram,0x00025a7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00025994(int param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if (((3 < *(uint *)(param_2 + 0x10)) || (uVar6 = *(uint *)(param_2 + 0xc), 3 < uVar6)) ||
     (uVar8 = *(uint *)(&DAT_ram_0005abb0 + uVar6 * 4 + *(uint *)(param_2 + 0x10) * 0x10),
     (int)uVar8 < 0)) {
    return 0;
  }
  iVar5 = *(int *)(param_2 + 0x14) * 4 + *(int *)(param_2 + 8) * 0xc;
  uVar9 = *(uint *)(&DAT_ram_0005abf0 + iVar5);
  if ((*(int *)(param_2 + 0x18) == 1) && ((*(uint *)(param_2 + 0x20) & 0x20) == 0)) {
    if (*(int *)(param_2 + 0x1c) == 0) {
      uVar4 = 6;
    }
    else {
      uVar4 = 8;
    }
    uVar1 = (ulonglong)uVar4 * (ulonglong)(uVar8 & 0xffff);
    uVar2 = (longlong)(int)uVar4 * (longlong)(int)(uVar8 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar1 = (uVar3 & 0xffffffff) * (ulonglong)(uVar9 & 0xffff);
    uVar2 = (longlong)(int)uVar3 * (longlong)(int)(uVar9 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    iVar5 = *(int *)(&DAT_ram_0005ac14 + iVar5) * 4 + (int)uVar3;
  }
  else {
    if ((*(int *)(param_2 + 0x18) != 0) || ((*(uint *)(param_2 + 0x20) & 0x20) == 0)) {
      iVar7 = ((uint)*(ushort *)(param_1 + 0x60) % 10) * 4;
      iVar5 = *(int *)(_DAT_ram_e00000bc + 0x54) + 0xff8;
      *(int *)(iVar7 + iVar5 + -0xa8) = *(int *)(iVar5 + iVar7 + -0xa8) + 1;
      return 0;
    }
    if (*(int *)(param_2 + 0x1c) == 0) {
      uVar4 = 3;
    }
    else {
      uVar4 = 5;
    }
    uVar1 = (ulonglong)uVar4 * (ulonglong)(uVar8 & 0xffff);
    uVar2 = (longlong)(int)uVar4 * (longlong)(int)(uVar8 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar1 = (uVar3 & 0xffffffff) * (ulonglong)(uVar9 & 0xffff);
    uVar2 = (longlong)(int)uVar3 * (longlong)(int)(uVar9 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    iVar5 = (int)uVar3;
  }
  uVar9 = (uint)(iVar5 >> 2) >> 0x1d;
  uVar8 = iVar5 + uVar9;
  uVar6 = uVar6 + 0x1e + ((int)uVar8 >> 3) + (uint)((uVar8 & 7) != uVar9);
  if (*(uint *)(param_1 + 0x18) < uVar6) {
    iVar5 = ((uint)*(ushort *)(param_1 + 0x60) % 10) * 4;
    iVar7 = *(int *)(_DAT_ram_e00000bc + 0x54) + 0xff8;
    *(int *)(iVar5 + iVar7 + 0x20) = *(int *)(iVar7 + iVar5 + 0x20) + 1;
    return 0;
  }
  FUN_ram_0002587c(param_1,uVar6);
  return 1;
}


