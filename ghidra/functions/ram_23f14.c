/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00023f14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_00023f14(void)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = DAT_ram_0005c000;
  FUN_ram_00040900(1);
  uVar5 = 0;
  iVar2 = extraout_r1;
  if (iVar1 == DAT_ram_0005c000) {
    while ((_DAT_ram_e6000324 & 6) == 0) {
      iVar4 = 0;
      do {
        iVar3 = iVar4 * 0x10;
        iVar4 = iVar4 + 1;
        uVar5 = uVar5 | *(uint *)(iVar3 + -0x1afaf000) & 0xf;
      } while (iVar4 < 4);
      if (uVar5 == 0) {
        return DAT_ram_0005c000;
      }
      FUN_ram_00020c84(1,iVar2,iVar3,0);
      iVar2 = DAT_ram_0005c000;
      if (iVar1 != DAT_ram_0005c000) {
        return DAT_ram_0005c000;
      }
    }
  }
  return DAT_ram_0005c000;
}


