/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00025f18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00025f18(int param_1)

{
  if ((-1 < param_1) && (param_1 < 3)) {
    (&DAT_ram_00062220)[param_1 * 0x28] = 0;
    *(undefined4 *)(&DAT_ram_00062244 + param_1 * 0x28) = 0;
    *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1078) =
         *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1078) + -1;
    if (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1078) < 0) {
      *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x107c) =
           *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x107c) + 1;
      *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1078) = 0;
    }
  }
  return;
}


