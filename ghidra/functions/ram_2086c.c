/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002086c */

undefined4 FUN_ram_0002086c(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_00029784();
  uVar1 = FUN_ram_0003d5e4(&DAT_ram_0005c120,0x100,uVar1,&stack0x00000004);
  FUN_ram_000228ac(&DAT_ram_0005c120);
  return uVar1;
}


