/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002294c */

int FUN_ram_0002294c(uint param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_1 < 0x10001) && ((param_1 & 3) == 0)) {
    uVar1 = (ulonglong)param_3 * (ulonglong)(param_2 & 0xffff);
    uVar2 = uVar1 + (ulonglong)param_3 * (ulonglong)(param_2 & 0xffff0000);
    if (uVar2 < uVar1) {
      uVar2 = 0xffffffffffffffff;
    }
    iVar3 = (int)uVar2 * 8;
    if (0xf500 < param_1 + iVar3) {
      iVar3 = 0;
    }
  }
  return iVar3;
}


