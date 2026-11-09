/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003f1c8 */

int FUN_ram_0003f1c8(int param_1)

{
  return (*(uint *)(param_1 + 4) >> 0x14 & 0x7ff) - 0x3fe;
}


