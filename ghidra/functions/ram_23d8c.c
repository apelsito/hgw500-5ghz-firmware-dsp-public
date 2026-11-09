/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00023d8c */

bool FUN_ram_00023d8c(uint param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  uVar1 = (ulonglong)param_3 * (ulonglong)(param_2 & 0xffff);
  uVar2 = (longlong)(int)param_3 * (longlong)(int)(param_2 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  uVar4 = ((int)uVar3 << 3) >> 2;
  if (uVar4 != 0) {
    iVar5 = *(int *)(param_1 & 0xfffffffc);
    while ((iVar5 == 0 && (uVar6 = uVar6 + 1, uVar6 < uVar4))) {
      iVar5 = ((int *)(param_1 & 0xfffffffc))[uVar6];
    }
  }
  return uVar4 <= uVar6;
}


