/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000279f0 */

uint FUN_ram_000279f0(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_ram_000273c4();
  if (iVar1 < 0x42) {
    uVar2 = *(uint *)(&DAT_ram_000b07a0 + (uint)(byte)(&DAT_ram_000b241c)[iVar1] * 0x70) & 2;
  }
  return uVar2;
}


