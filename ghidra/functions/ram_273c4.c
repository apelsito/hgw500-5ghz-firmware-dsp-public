/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000273c4 */

uint FUN_ram_000273c4(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (DAT_ram_00055968 != 0) {
    do {
      uVar2 = (uint)(byte)(&DAT_ram_000b241c)[uVar1];
      if ((param_1 == (ushort)(&DAT_ram_000b073c)[uVar2 * 0x38]) &&
         (param_2 == (ushort)(&DAT_ram_000b073e)[uVar2 * 0x38])) {
        return uVar1;
      }
      if ((param_2 == (ushort)(&DAT_ram_000b073c)[uVar2 * 0x38]) &&
         (param_1 == (ushort)(&DAT_ram_000b073e)[uVar2 * 0x38])) {
        return uVar1;
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < DAT_ram_00055968);
  }
  return 0x42;
}


