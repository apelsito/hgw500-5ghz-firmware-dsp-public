/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000251ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000251ec(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_ram_000273ac();
  if (0 < iVar1) {
    do {
      iVar1 = FUN_ram_000278ac(uVar3);
      if ((iVar1 != 0) && (iVar2 = FUN_ram_00027e1c(uVar3), iVar2 == 0)) {
        FUN_ram_00025ea4(iVar1);
        FUN_ram_00027828(uVar3,0);
      }
      uVar3 = uVar3 + 1 & 0xff;
      iVar1 = FUN_ram_000273ac();
    } while ((int)uVar3 < iVar1);
  }
  FUN_ram_00024f6c();
  if ((*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 4) == 0) {
    FUN_ram_0002792c();
  }
  if (param_1 != 0) {
    FUN_ram_00026d3c(0);
    DAT_ram_00055950 = 0;
  }
  FUN_ram_0002673c(0);
  return;
}


