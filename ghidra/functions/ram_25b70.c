/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00025b70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00025b70(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = DAT_ram_0005594c;
  uVar4 = 0;
  *DAT_ram_0005594c = 0x10;
  puVar2[1] = 0;
  FUN_ram_0003ed10(puVar2 + 2,0x33,0x10);
  DAT_ram_0005594c = (undefined4 *)0x0;
  do {
    iVar1 = uVar4 * 0x28;
    FUN_ram_0004070c(&DAT_ram_00062220 + iVar1,0x28);
    uVar3 = uVar4 + 1;
    uVar4 = uVar3 & 0xff;
    (&DAT_ram_00062221)[iVar1] = (char)uVar3;
  } while (uVar4 < 3);
  FUN_ram_0004070c(&DAT_ram_000622dc,0x30);
  *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x11a0) = 5;
  FUN_ram_0002738c();
  return;
}


