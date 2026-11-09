/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00025ea4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00025ea4(undefined1 *param_1)

{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
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


