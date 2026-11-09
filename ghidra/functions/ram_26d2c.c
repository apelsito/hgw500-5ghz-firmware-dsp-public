/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00026d2c */

void FUN_ram_00026d2c(int param_1)

{
  (&DAT_ram_000622dd)[param_1 * 0x18] = 1;
  return;
}


