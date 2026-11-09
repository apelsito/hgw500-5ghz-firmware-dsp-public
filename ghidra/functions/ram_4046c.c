/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0004046c */

/* WARNING: Removing unreachable block (ram,0x00040584) */
/* WARNING: Removing unreachable block (ram,0x00040580) */
/* WARNING: Removing unreachable block (ram,0x0004058c) */
/* WARNING: Removing unreachable block (ram,0x00040594) */

undefined8 FUN_ram_0004046c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  if (param_4 == 0 && param_3 == 0) {
    uVar1 = 0xffffffff;
    uVar9 = 0x7fffffff;
  }
  else {
    bVar10 = (int)param_4 < 0;
    uVar9 = 0;
    if (!bVar10) {
      uVar1 = param_4;
      if (param_4 == 0) {
        uVar9 = 0x20;
        bVar10 = (int)param_3 < 0;
        uVar1 = param_3;
      }
      if ((int)uVar1 < 0) {
        uVar1 = ~uVar1;
      }
      if (!bVar10) {
        uVar9 = uVar9 + LZCOUNT(uVar1);
      }
    }
    iVar7 = 0;
    bVar10 = (int)param_2 < 0;
    if (param_2 == 0) {
      iVar7 = 0x20;
    }
    if (!bVar10) {
      uVar1 = param_2;
      if (param_2 == 0) {
        bVar10 = (int)param_1 < 0;
        uVar1 = param_1;
      }
      if ((int)uVar1 < 0) {
        uVar1 = ~uVar1;
      }
      if (!bVar10) {
        iVar7 = iVar7 + LZCOUNT(uVar1);
      }
    }
    iVar7 = uVar9 - iVar7;
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    uVar8 = iVar7 + 1;
    bVar10 = uVar8 == 0x20;
    uVar3 = 0;
    uVar4 = param_2;
    uVar1 = uVar8;
    if (-1 < iVar7 + -0x1f) {
      uVar4 = 0;
      uVar1 = iVar7 - 0x1f;
      bVar10 = uVar1 == 0;
      uVar3 = param_1;
      param_1 = param_2;
    }
    uVar2 = 0;
    uVar5 = uVar4;
    if (!bVar10) {
      uVar9 = 0x20 - uVar1;
      if (uVar9 == 0) {
        uVar5 = 0;
        uVar2 = uVar3;
        uVar3 = param_1;
        param_1 = uVar4;
      }
      else {
        uVar5 = uVar4 >> (uVar1 & 0x1f);
        uVar2 = uVar3 << (uVar9 & 0x1f);
        uVar3 = (uVar3 >> (uVar1 & 0x1f)) + (param_1 << (uVar9 & 0x1f));
        param_1 = (param_1 >> (uVar1 & 0x1f)) + (uVar4 << (uVar9 & 0x1f));
      }
    }
    if (0x20 < (int)uVar9) {
      LP_START = 0x405b2;
      LP_END = 0x405c8;
      do {
        uVar1 = uVar2 * 2;
        uVar9 = uVar3 * 2 + (uint)CARRY4(uVar2,uVar2);
        param_1 = param_1 * 2 +
                  (uint)((ulonglong)uVar3 + (ulonglong)uVar3 + (ulonglong)CARRY4(uVar2,uVar2) >>
                         0x20 != 0);
        if (param_3 <= param_1) {
          param_1 = param_1 - param_3;
          uVar1 = uVar1 | 1;
        }
        uVar8 = uVar8 - 1;
        uVar2 = uVar1;
        uVar3 = uVar9;
      } while (uVar8 != 0);
      bVar10 = false;
      uVar8 = 0;
      goto LAB_ram_00040574;
    }
    LP_START = 0x4054c;
    LP_END = 0x40574;
    bVar10 = true;
    do {
      uVar1 = uVar2 * 2;
      uVar9 = uVar3 * 2 + (uint)CARRY4(uVar2,uVar2);
      bVar11 = (ulonglong)uVar3 + (ulonglong)uVar3 + (ulonglong)CARRY4(uVar2,uVar2) >> 0x20 != 0;
      uVar3 = param_1 * 2 + (uint)bVar11;
      uVar6 = uVar5 * 2 +
              (uint)((ulonglong)param_1 + (ulonglong)param_1 + (ulonglong)bVar11 >> 0x20 != 0);
      uVar4 = uVar3 - param_3;
      uVar2 = (uVar6 - param_4) - (uint)(uVar3 < param_3);
      bVar11 = false;
      param_1 = uVar4;
      uVar5 = uVar2;
      if (((ulonglong)uVar6 - (ulonglong)param_4) - (ulonglong)(uVar3 < param_3) >> 0x20 != 0) {
        param_1 = uVar4 + param_3;
        uVar5 = uVar2 + param_4 + (uint)CARRY4(uVar4,param_3);
        bVar11 = (ulonglong)uVar2 + (ulonglong)param_4 + (ulonglong)CARRY4(uVar4,param_3) >> 0x20 !=
                 0;
      }
      if (!bVar11) {
        uVar1 = uVar1 + 1;
      }
LAB_ram_00040574:
    } while ((bVar10) && (uVar8 = uVar8 - 1, uVar2 = uVar1, uVar3 = uVar9, uVar8 != 0));
  }
  return CONCAT44(uVar9,uVar1);
}


