/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003b814 */

void FUN_ram_0003b814(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                     undefined4 param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_40;
  int iStack_3c;
  uint uStack_30;
  uint local_2c;
  
  uStack_30 = param_2;
  local_2c = param_3;
  if (param_5 != 0) {
    iVar7 = 1 << (param_5 - 1 & 0x1f);
    uStack_30 = (int)(param_2 + iVar7) >> (param_5 & 0x1f);
    local_2c = (int)(iVar7 + param_3) >> (param_5 & 0x1f);
  }
  uVar8 = uStack_30;
  if ((int)uStack_30 < 0) {
    uVar8 = -uStack_30;
  }
  uVar4 = local_2c;
  if ((int)local_2c < 0) {
    uVar4 = -local_2c;
  }
  uVar5 = uStack_30;
  if ((int)uVar8 < (int)uVar4) {
    uVar5 = local_2c;
    local_2c = -uStack_30;
  }
  uVar5 = FUN_ram_0003b948(uVar5,param_4,0,0);
  uVar1 = (ulonglong)uVar5 * (ulonglong)(local_2c & 0xffff);
  uVar2 = (longlong)(int)uVar5 * (longlong)(int)(local_2c & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  iVar7 = 1 << (param_4 - 1 & 0x1f);
  uVar9 = iVar7 + (int)uVar3 >> (param_4 & 0x1f);
  uVar1 = (ulonglong)uVar9 * (ulonglong)(uVar9 & 0xffff);
  uVar2 = (longlong)(int)uVar9 * (longlong)(int)(uVar9 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  uVar6 = FUN_ram_0003b948((1 << ((param_4 & 0xf) << 1)) + (int)uVar3 + iVar7 >> (param_4 & 0x1f),
                           param_4,0,param_6);
  uVar1 = (ulonglong)-uVar9 * (ulonglong)(uVar6 & 0xffff);
  uVar2 = (longlong)(int)-uVar9 * (longlong)(int)(uVar6 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  uVar9 = (int)uVar3 + iVar7 >> (param_4 & 0x1f);
  uVar1 = (ulonglong)uVar6 * (ulonglong)(uVar5 & 0xffff);
  uVar2 = (longlong)(int)uVar6 * (longlong)(int)(uVar5 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  local_40 = (int)uVar3 + iVar7 >> (param_4 & 0x1f);
  uVar1 = (ulonglong)uVar9 * (ulonglong)(uVar5 & 0xffff);
  uVar2 = (longlong)(int)uVar9 * (longlong)(int)(uVar5 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  iVar7 = iVar7 + (int)uVar3 >> (param_4 & 0x1f);
  iStack_3c = iVar7;
  if ((int)uVar8 < (int)uVar4) {
    iStack_3c = -local_40;
    local_40 = iVar7;
  }
  *param_1 = local_40;
  param_1[1] = iStack_3c;
  return;
}


