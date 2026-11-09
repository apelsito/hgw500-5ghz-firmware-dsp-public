/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003c60c */

void FUN_ram_0003c60c(void)

{
  int iVar1;
  int iVar2;
  
  FUN_ram_0003ed10(&DAT_ram_000b80fc,0xffffffff,0x80);
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    (&DAT_ram_000b8184)[iVar1 * 10] = 0xffff;
    iVar1 = iVar2;
  } while (iVar2 < 0x14);
  return;
}


