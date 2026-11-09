/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003d2b0 */

uint FUN_ram_0003d2b0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_94 [104];
  uint auStack_2c [5];
  
  iVar1 = FUN_ram_0003cd7c(auStack_94);
  uVar7 = 0;
  if (((iVar1 == 0) && (0x2406ffff < *(uint *)(param_1 + 0x14))) &&
     (uVar5 = (uint)(*(int *)(param_1 + 0x14) != 0x24070000), uVar5 < 0x10)) {
    uVar2 = FUN_ram_0003ce60(auStack_94,param_1 + 8,6);
    uVar3 = FUN_ram_0003ce60(auStack_94,param_1 + 0xe,6);
    uVar4 = FUN_ram_0003ce60(auStack_94,param_1 + 0x18,4);
    uVar5 = FUN_ram_0003ce60(auStack_94,&DAT_ram_0005bde0 + uVar5 * 0x10,0x10);
    uVar5 = uVar2 | uVar3 | uVar4 | uVar5;
    if (0x24070000 < *(uint *)(param_1 + 0x14)) {
      uVar2 = FUN_ram_0003ce60(auStack_94,param_1 + 0x14,4);
      uVar5 = uVar5 | uVar2;
    }
    iVar1 = FUN_ram_0003cdbc(auStack_94,auStack_2c);
    if (iVar1 == 0 && uVar5 == 0) {
      iVar1 = 0;
      do {
        iVar6 = iVar1 + 1;
        uVar7 = uVar7 ^ auStack_2c[iVar1];
        iVar1 = iVar6;
      } while (iVar6 < 5);
      return uVar7;
    }
  }
  return 0;
}


