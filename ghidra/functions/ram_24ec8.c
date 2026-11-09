/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00024ec8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_00024ec8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = 0;
  uVar6 = 0;
  iVar1 = FUN_ram_000273ac();
  if (0 < iVar1) {
    do {
      uVar5 = uVar6 & 0xff;
      iVar1 = FUN_ram_000278ac(uVar5);
      if ((iVar1 != 0) && (iVar2 = FUN_ram_00027e1c(uVar5), iVar2 == 0)) {
        uVar3 = FUN_ram_00027970(uVar5);
        *(undefined4 *)(iVar1 + 8) = uVar3;
        uVar5 = 1 - uVar4;
        if (1 < uVar4) {
          uVar5 = 0;
        }
        FUN_ram_000248b4(iVar1,uVar5 & 0xff);
        uVar4 = uVar4 + 1;
      }
      uVar6 = uVar6 + 1;
      iVar1 = FUN_ram_000273ac();
    } while ((int)uVar6 < iVar1);
  }
  if (uVar4 != 0) {
    FUN_ram_00022b58(*(undefined4 *)(_DAT_ram_e00000bc + 0x54),0x18);
    *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1040) =
         *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1040) + uVar4;
  }
  return uVar4;
}


