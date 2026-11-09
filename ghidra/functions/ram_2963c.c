/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002963c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0002963c(void)

{
  uint uVar1;
  
  _DAT_ram_e0000028 = 0xffffffff;
  _DAT_ram_e0000188 = 0xffffffff;
  AUX_IRQ_LEV = 0x120408;
  uVar1 = AUX_IRQ_LEV;
  AUX_IRQ_LEV = uVar1 | 0x80000;
  uVar1 = STATUS32;
  STATUS32 = uVar1 | 4;
  return;
}


