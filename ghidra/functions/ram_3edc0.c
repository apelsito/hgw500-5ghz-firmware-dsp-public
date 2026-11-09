/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003edc0 */

void FUN_ram_0003edc0(void)

{
  int iVar1;
  int iVar2;
  int extraout_r2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_ram_000297d4();
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  iVar1 = (int)uVar4;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  iVar3 = iVar2 + -1;
  if (iVar1 < iVar2) {
    iVar3 = iVar1;
  }
  FUN_ram_0003ed10(extraout_r2,0x30,iVar3);
  *(undefined1 *)(extraout_r2 + iVar3) = 0;
  FUN_ram_00029840();
  return;
}


