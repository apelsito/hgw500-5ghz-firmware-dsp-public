/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003f0ac */

void FUN_ram_0003f0ac(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_ram_000297d0();
  iVar3 = 1;
  iVar2 = 9;
  uVar4 = *(undefined8 *)PTR_DAT_ram_0005be00_ram_0003f0e8;
  do {
    if (uVar1 == 0) break;
    if ((uVar1 & 1) != 0) {
      uVar4 = FUN_ram_0003ff6c(*(undefined4 *)(PTR_DAT_ram_0005be00_ram_0003f0e8 + iVar3 * 8),
                               *(undefined4 *)
                                ((int)(PTR_DAT_ram_0005be00_ram_0003f0e8 + iVar3 * 8) + 4));
    }
    iVar2 = iVar2 + -1;
    uVar1 = (int)uVar1 >> 1;
    iVar3 = iVar3 + 1;
  } while (iVar2 != 0);
  FUN_ram_00029838((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  return;
}


