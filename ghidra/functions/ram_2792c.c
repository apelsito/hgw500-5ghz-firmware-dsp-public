/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002792c */

void FUN_ram_0002792c(void)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)DAT_ram_00055968;
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      pbVar1 = &DAT_ram_000b241c + uVar2;
      uVar2 = uVar2 + 1 & 0xff;
      *(uint *)(&DAT_ram_000b07a0 + (uint)*pbVar1 * 0x70) =
           *(uint *)(&DAT_ram_000b07a0 + (uint)*pbVar1 * 0x70) & 0xfffffffd;
    } while (uVar2 < uVar3);
  }
  return;
}


