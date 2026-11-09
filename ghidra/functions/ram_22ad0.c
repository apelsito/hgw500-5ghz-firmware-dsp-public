/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00022ad0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00022ad0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  while (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1048) =
              *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1048) + 1, *(int *)(param_1 + 4) != -1
        ) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
    } while (iVar1 < 1000);
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  _DAT_ram_e0000044 = 0x10001;
  return 0x10001;
}


