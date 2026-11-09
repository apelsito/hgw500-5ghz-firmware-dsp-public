/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003e840 */

void FUN_ram_0003e840(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0x20;
  uVar3 = 0;
  uVar4 = *(uint *)PTR_DAT_ram_000559d0_ram_0003e8b4 & 0xffff;
  uVar1 = *(uint *)PTR_DAT_ram_000559d0_ram_0003e8b4 >> 0x10;
  LP_START = 0x3e856;
  LP_END = 0x3e860;
  uVar2 = DAT_ram_0003e8b8;
  do {
    if ((uVar2 & 1) != 0) {
      uVar3 = uVar3 + uVar1;
    }
    uVar1 = uVar1 << 1;
    iVar5 = iVar5 + -1;
    uVar2 = uVar2 >> 1;
  } while (iVar5 != 0);
  iVar6 = 0x20;
  iVar5 = 0;
  LP_START = 0x3e872;
  LP_END = 0x3e87c;
  uVar2 = DAT_ram_0003e8b8;
  do {
    if ((uVar2 & 1) != 0) {
      iVar5 = iVar5 + uVar4;
    }
    uVar4 = uVar4 << 1;
    iVar6 = iVar6 + -1;
    uVar2 = uVar2 >> 1;
  } while (iVar6 != 0);
  uVar2 = iVar5 + (uVar3 & 0x7fff) * 0x10000;
  if (DAT_ram_0003e8bc < uVar2) {
    uVar2 = (uVar2 & 0x7fffffff) + 1;
  }
  uVar2 = uVar2 + (uVar3 >> 0xf);
  if (DAT_ram_0003e8bc < uVar2) {
    uVar2 = (uVar2 & 0x7fffffff) + 1;
  }
  *(uint *)PTR_DAT_ram_000559d0_ram_0003e8b4 = uVar2;
  return;
}


