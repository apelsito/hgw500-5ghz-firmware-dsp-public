/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003ec60 */

/* WARNING: Instruction at (ram,0x0003ecb4) overlaps instruction at (ram,0x0003ecb0)
    */

void FUN_ram_0003ec60(uint param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  if (param_3 == 0) {
    return;
  }
  if (((param_1 | param_2) & 3) != 0) {
    puVar3 = (undefined1 *)(param_2 - 1);
    puVar5 = (undefined1 *)(param_1 - 1);
    LP_START = 0x3ed04;
    LP_END = 0x3ed0c;
    do {
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
      *puVar5 = *puVar3;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    return;
  }
  uVar9 = param_3 >> 4;
  puVar1 = (undefined4 *)(param_2 - 4);
  puVar4 = (undefined4 *)(param_1 - 4);
  bVar10 = false;
  if (uVar9 == 0) goto LAB_ram_0003eca8;
  LP_START = 0x3ec88;
  LP_END = 0x3eca8;
  bVar10 = true;
  do {
    puVar2 = puVar1 + 1;
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar1 = puVar1 + 4;
    uVar8 = *puVar1;
    puVar4[1] = *puVar2;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;
    puVar4 = puVar4 + 4;
    *puVar4 = uVar8;
LAB_ram_0003eca8:
  } while ((bVar10) && (uVar9 = uVar9 - 1, uVar9 != 0));
  bVar10 = (param_3 & 4) == 0;
  if ((param_3 >> 3 & 1) == 0) {
    bVar11 = (param_3 & 3) == 0;
    if (bVar10) goto LAB_ram_0003ecb8;
  }
  else {
    puVar2 = puVar1 + 1;
    puVar1 = puVar1 + 2;
    uVar6 = *puVar1;
    puVar4[1] = *puVar2;
    puVar4 = puVar4 + 2;
    *puVar4 = uVar6;
    if (bVar10) {
      bVar11 = (param_3 & 3) == 0;
      goto LAB_ram_0003ecb8;
    }
    bVar11 = (param_3 & 3) == 0;
  }
  puVar1 = puVar1 + 1;
  puVar4 = puVar4 + 1;
  *puVar4 = *puVar1;
LAB_ram_0003ecb8:
  param_3 = param_3 & 3;
  puVar3 = (undefined1 *)((int)puVar1 + 3);
  if (bVar11) {
    return;
  }
  puVar5 = (undefined1 *)((int)puVar4 + 3);
  LP_START = 0x3ecc8;
  LP_END = 0x3ecd0;
  do {
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = *puVar3;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return;
}


