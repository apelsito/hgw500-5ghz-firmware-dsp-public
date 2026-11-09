/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00028478 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00028478(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  iVar4 = *(int *)(_DAT_ram_e00000bc + 0x54) + 0xff0;
  while( true ) {
    iVar3 = uVar2 * 8;
    iVar1 = iVar4 + iVar3;
    if (((*(short *)(iVar4 + iVar3 + -0x15c) == *(short *)(param_1 + 0x28)) &&
        (*(short *)(iVar1 + -0x15a) == *(short *)(param_2 + 0x28))) ||
       ((*(short *)(iVar1 + -0x15c) == *(short *)(param_2 + 0x28) &&
        (*(short *)(iVar1 + -0x15a) == *(short *)(param_1 + 0x28))))) break;
    uVar2 = uVar2 + 1 & 0xff;
    if (2 < uVar2) {
      return 0;
    }
  }
  *(undefined4 *)(param_3 + 0x54) =
       *(undefined4 *)(iVar3 + *(int *)(_DAT_ram_e00000bc + 0x54) + 0xe98);
  return 1;
}


