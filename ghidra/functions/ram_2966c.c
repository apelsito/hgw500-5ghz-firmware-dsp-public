/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002966c */

void FUN_ram_0002966c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (param_2 == 0) {
    FUN_ram_00020a44(0x34);
    return;
  }
  if (0xf < param_1) {
    iVar3 = 0x20;
    if ((param_1 != 0) && (-1 < (int)param_1)) {
      for (param_1 = param_1 << 1; iVar3 = iVar3 + -1, -1 < (int)param_1; param_1 = param_1 * 2) {
      }
    }
    goto LAB_ram_000296e4;
  }
  iVar3 = 4;
  if (param_1 < 8) {
    iVar3 = 3;
    if (3 < param_1) goto LAB_ram_000296d8;
    iVar3 = 2;
    if (1 < param_1) goto LAB_ram_000296dc;
    iVar3 = 1;
  }
  else {
    param_1 = param_1 >> 1 | param_1 << 0x1f;
LAB_ram_000296d8:
    param_1 = param_1 >> 1 | param_1 << 0x1f;
LAB_ram_000296dc:
    param_1 = param_1 >> 1 | param_1 << 0x1f;
  }
  param_1 = param_1 >> 1 | param_1 << 0x1f;
LAB_ram_000296e4:
  LP_START = 0x296e8;
  LP_END = 0x296fc;
  do {
    uVar1 = param_1 * 2;
    uVar2 = uVar2 * 2 + (uint)CARRY4(param_1,param_1);
    param_1 = uVar1;
    if (param_2 <= uVar2) {
      param_1 = uVar1 + 1;
      uVar2 = uVar2 - param_2;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


