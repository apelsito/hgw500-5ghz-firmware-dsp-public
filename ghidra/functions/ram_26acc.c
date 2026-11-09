/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00026acc */

int * FUN_ram_00026acc(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = (uint)(byte)(&DAT_ram_000622e4)[iVar2 + param_1 * 0x18];
    if (uVar1 < 0xc) {
      if (((&DAT_ram_0006231c)[uVar1 * 0x1a16] != 0) &&
         (param_2 == *(ushort *)(&DAT_ram_00062344 + uVar1 * 0x6858))) {
        return &DAT_ram_0006231c + uVar1 * 0x1a16;
      }
    }
    iVar2 = iVar2 + 1;
    if (0xb < iVar2) {
      return (int *)0x0;
    }
  } while( true );
}


