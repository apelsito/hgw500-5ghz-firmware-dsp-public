/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00040900 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00040900(int param_1)

{
  if (param_1 == 0) {
    _DAT_ram_e0000060 = _DAT_ram_e0000060 & 0xff7fffff;
  }
  else {
    _DAT_ram_e0000060 = _DAT_ram_e0000060 | 0x800000;
  }
  return;
}


