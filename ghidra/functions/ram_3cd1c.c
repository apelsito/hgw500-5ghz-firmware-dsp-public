/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003cd1c */

/* WARNING: Removing unreachable block (ram,0x0003cd3a) */

longlong FUN_ram_0003cd1c(void)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = COUNT0;
  lVar2 = FUN_ram_0004065c(DAT_ram_0005c100,0,0x20);
  return lVar2 + (ulonglong)uVar1;
}


