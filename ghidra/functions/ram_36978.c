/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00036978 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00036978(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_88 [12];
  int iStack_7c;
  undefined1 auStack_50 [12];
  int iStack_44;
  
  uVar2 = 0;
  iVar3 = 1;
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  FUN_ram_0003ec60(auStack_88,param_1 + 4,0x38);
  FUN_ram_0003ec60(auStack_50,param_2 + 4,0x38);
  if (iStack_44 + iStack_7c + 2U < 5) {
    iVar3 = 2;
  }
  iVar1 = *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1190);
  if (iVar1 == 0) {
    if (iVar3 == 1) goto LAB_ram_000369f4;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 0;
    }
LAB_ram_000369f4:
    iVar3 = FUN_ram_000332dc(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_ram_000332dc(param_2);
    if (iVar3 == 0) {
      return 0;
    }
    uVar2 = FUN_ram_00033b08(param_1,param_2,param_3);
    return uVar2;
  }
  iVar3 = FUN_ram_00037368(param_1);
  if ((iVar3 != 0) && (iVar3 = FUN_ram_00037368(param_2), iVar3 != 0)) {
    uVar2 = FUN_ram_000379b8(param_1,param_2,param_3);
  }
  return uVar2;
}


