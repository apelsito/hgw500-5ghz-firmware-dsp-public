/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00023dc8 */

void FUN_ram_00023dc8(uint param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  puVar1 = (undefined4 *)(param_1 & 0xfffffffc);
  if (param_3 == 1) {
    uVar5 = 2;
    puVar6 = &DAT_ram_00054970;
  }
  else if (param_3 == 2) {
    uVar5 = 4;
    puVar6 = &DAT_ram_00054980;
  }
  else if (param_3 == 3) {
    uVar5 = 6;
    puVar6 = &DAT_ram_000549a0;
  }
  else {
    uVar5 = 8;
    puVar6 = &DAT_ram_000549d0;
  }
  uVar7 = 0;
  if (param_2 != 0) {
    do {
      puVar2 = puVar1;
      uVar3 = 0;
      if (uVar5 != 0) {
        do {
          uVar4 = uVar3 + 1;
          puVar1 = puVar2 + 1;
          *puVar2 = puVar6[uVar3];
          puVar2 = puVar1;
          uVar3 = uVar4;
        } while (uVar4 < uVar5);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_2);
  }
  return;
}


