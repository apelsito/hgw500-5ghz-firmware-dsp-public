/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00020a44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00020a44(byte *param_1)

{
  *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1094) = *param_1 - 0x30;
  FUN_ram_000228ac(param_1 + 1);
  FUN_ram_000208bc();
  FUN_ram_00020980();
  FUN_ram_000201e4(0x20a70);
  return;
}


