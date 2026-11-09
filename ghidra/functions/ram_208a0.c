/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000208a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_000208a0(void)

{
  return _DAT_ram_000b83a0 != -0x54321055;
}


