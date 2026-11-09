/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00027e1c */

uint FUN_ram_00027e1c(int param_1)

{
  return *(uint *)(&DAT_ram_000b07a0 + (uint)(byte)(&DAT_ram_000b241c)[param_1] * 0x70) & 1;
}


