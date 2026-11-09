/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00036a4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_00036a4c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_88 [12];
  int iStack_7c;
  undefined1 auStack_50 [12];
  int iStack_44;
  
  iVar2 = 0;
  iVar3 = 1;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_ram_00036afc;
  FUN_ram_0003ec60(auStack_88,param_1 + 4,0x38);
  FUN_ram_0003ec60(auStack_50,param_2 + 4,0x38);
  if (iStack_44 + iStack_7c + 2U < 5) {
    iVar3 = 2;
  }
  iVar1 = *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1194);
  if (iVar1 == 0) {
    if (iVar3 == 1) goto LAB_ram_00036ac8;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) goto LAB_ram_00036afc;
LAB_ram_00036ac8:
    iVar3 = FUN_ram_000332dc(param_1);
    if ((iVar3 != 0) && (iVar3 = FUN_ram_000332dc(param_2), iVar3 != 0)) {
      iVar2 = FUN_ram_00033cd4(param_1,param_2,param_3);
    }
    goto LAB_ram_00036afc;
  }
  iVar3 = FUN_ram_00037368(param_1);
  if ((iVar3 != 0) && (iVar3 = FUN_ram_00037368(param_2), iVar3 != 0)) {
    iVar2 = FUN_ram_00038194(param_1,param_2,param_3);
  }
LAB_ram_00036afc:
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 0x6854) = 1;
    *(short *)(iVar2 + 2) = (short)*(undefined4 *)(param_1 + 0x24);
    *(undefined1 *)(param_2 + 0x6854) = 1;
  }
  return iVar2;
}


