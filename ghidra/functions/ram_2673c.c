/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002673c */

void FUN_ram_0002673c(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((&DAT_ram_000622dd)[param_1 * 0x18] == '\0') {
    uVar1 = 0;
    do {
      if (uVar1 < 0xc) {
        if ((byte)(&DAT_ram_000622e4)[uVar1 + param_1 * 0x18] < 0xc) {
          if ((&DAT_ram_0006231c)[(uint)(byte)(&DAT_ram_000622e4)[uVar1 + param_1 * 0x18] * 0x1a16]
              != 0) {
            FUN_ram_00026b24(param_1);
          }
        }
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < 0xc);
  }
  uVar2 = FUN_ram_0003cd1c();
  *(undefined8 *)(&DAT_ram_0006230c + param_1 * 2) = uVar2;
  return;
}


