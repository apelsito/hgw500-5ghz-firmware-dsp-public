/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003f0ec */

void FUN_ram_0003f0ec(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_ram_000297d4();
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  iVar1 = FUN_ram_0003ed5c(iVar2,0,DAT_ram_0003f114);
  FUN_ram_0003ec60((int)uVar3,iVar2,(iVar1 - iVar2) + 1);
  FUN_ram_00029840((int)uVar3);
  return;
}


