/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000402c0 */

uint FUN_ram_000402c0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = 0xb;
  uVar2 = 0xffffffff;
  if ((int)param_2 < 0) {
    uVar4 = 10;
    uVar2 = 0x80000000;
  }
  uVar3 = (param_2 & 0x7fffffff) >> 0x14;
  param_2 = param_2 & 0x1fffff;
  if (uVar3 != 0x7ff) {
    iVar1 = -uVar3;
    uVar3 = iVar1 + 0x413;
    if (-1 < (int)uVar3) {
      uVar4 = (param_2 | 0x100000) >> (uVar3 & 0x1f);
      if (0x1f < (int)uVar3) {
        uVar4 = 0;
      }
      if ((uVar2 & 1) == 0) {
        uVar4 = -uVar4;
      }
      return uVar4;
    }
    uVar3 = -uVar3;
    bVar5 = uVar3 == uVar4;
    if ((int)uVar3 <= (int)uVar4) {
      bVar5 = (uVar2 & 1) == 0;
      uVar2 = param_1 >> (iVar1 + 0x433U & 0x1f) | (param_2 | 0x100000) << (uVar3 & 0x1f);
    }
    if (bVar5) {
      uVar2 = -uVar2;
    }
    return uVar2;
  }
  bVar5 = param_2 == 0 && param_1 == 0;
  if (param_2 != 0 || param_1 != 0) {
    bVar5 = (uVar2 & 1) == 0;
  }
  if (!bVar5) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}


