/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003e90c */

int FUN_ram_0003e90c(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  if ((((uint)param_2 | (uint)param_1) & 3) != 0) {
    while( true ) {
      uVar3 = (uint)(byte)*param_1;
      uVar4 = (uint)(byte)*param_2;
      if (uVar3 != uVar4) break;
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = (uint *)((int)param_2 + 1);
      if (uVar3 == 0) {
        return 0;
      }
    }
    goto LAB_ram_0003ea44;
  }
  uVar4 = *param_2;
  uVar3 = *param_1;
  while (bVar7 = (uVar3 + 0xfefefeff & ~uVar3 & 0x80808080) == 0, puVar1 = param_1, puVar2 = param_2
        , uVar3 == uVar4) {
    if (!bVar7) {
      return 0;
    }
    puVar1 = param_1 + 1;
    uVar3 = *puVar1;
    puVar2 = param_2 + 1;
    uVar4 = *puVar2;
    bVar7 = (uVar3 + 0xfefefeff & ~uVar3 & 0x80808080) == 0;
    if (uVar3 != uVar4) break;
    if (!bVar7) {
      return 0;
    }
    puVar1 = param_1 + 2;
    uVar3 = *puVar1;
    puVar2 = param_2 + 2;
    uVar4 = *puVar2;
    bVar7 = (uVar3 + 0xfefefeff & ~uVar3 & 0x80808080) == 0;
    if (uVar3 != uVar4) break;
    if (!bVar7) {
      return 0;
    }
    puVar1 = param_1 + 3;
    uVar3 = *puVar1;
    puVar2 = param_2 + 3;
    uVar4 = *puVar2;
    bVar7 = (uVar3 + 0xfefefeff & ~uVar3 & 0x80808080) == 0;
    if (uVar3 != uVar4) break;
    if (!bVar7) {
      return 0;
    }
    puVar1 = param_1 + 4;
    uVar3 = *puVar1;
    puVar2 = param_2 + 4;
    uVar4 = *puVar2;
    bVar7 = (uVar3 + 0xfefefeff & ~uVar3 & 0x80808080) == 0;
    if (uVar3 != uVar4) break;
    if (!bVar7) {
      return 0;
    }
    param_1 = param_1 + 5;
    param_2 = param_2 + 5;
    uVar4 = *param_2;
    uVar3 = *param_1;
  }
  uVar5 = uVar3 & 0xff;
  uVar6 = uVar4 & 0xff;
  if (bVar7) {
    if (uVar5 == uVar6) {
      uVar5 = uVar3 & 0xffff;
      uVar6 = uVar4 & 0xffff;
      if (uVar5 == uVar6) {
        if (uVar3 * 0x100 != uVar4 * 0x100) {
          return uVar3 * 0x100 + uVar4 * -0x100;
        }
        return uVar3 - uVar4;
      }
    }
  }
  else {
    uVar3 = (uint)*(byte *)((int)puVar1 + 1);
    uVar4 = (uint)*(byte *)((int)puVar2 + 1);
    if (uVar5 == uVar6) {
      if (uVar5 != 0) {
        if (uVar3 != uVar4) {
LAB_ram_0003ea44:
          return uVar3 - uVar4;
        }
        if (uVar4 != 0) {
          uVar3 = (uint)*(byte *)((int)puVar1 + 2);
          uVar4 = (uint)*(byte *)((int)puVar2 + 2);
          uVar5 = (uint)*(byte *)((int)puVar1 + 3);
          uVar6 = (uint)*(byte *)((int)puVar2 + 3);
          if (uVar3 != uVar4) goto LAB_ram_0003ea44;
          if (uVar3 != 0) goto LAB_ram_0003ea24;
        }
      }
      return 0;
    }
  }
LAB_ram_0003ea24:
  return uVar5 - uVar6;
}


