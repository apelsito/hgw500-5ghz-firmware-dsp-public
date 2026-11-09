/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00026c9c */

void FUN_ram_00026c9c(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((&DAT_ram_000622dd)[param_1 * 0x18] == '\0') {
    uVar2 = 0;
    do {
      uVar1 = (uint)(byte)(&DAT_ram_000622e4)[uVar2 + param_1 * 0x18];
      if (uVar1 < 0xc) {
        if (((&DAT_ram_0006231c)[uVar1 * 0x1a16] != 0) &&
           (param_2 == *(ushort *)(&DAT_ram_00062344 + uVar1 * 0x6858))) {
          FUN_ram_00026b24(param_1,uVar2 & 0xff);
        }
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0xc);
  }
  return;
}


