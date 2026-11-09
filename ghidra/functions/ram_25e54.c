/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00025e54 */

undefined1 * FUN_ram_00025e54(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((((&DAT_ram_00062220)[iVar1 * 0x28] == '\0' ||
          (param_1 != (ushort)(&DAT_ram_00062224)[iVar1 * 0x14])) ||
         (param_2 != (ushort)(&DAT_ram_00062226)[iVar1 * 0x14]))) {
    iVar1 = iVar1 + 1;
    if (2 < iVar1) {
      return (undefined1 *)0x0;
    }
  }
  return &DAT_ram_00062220 + iVar1 * 0x28;
}


