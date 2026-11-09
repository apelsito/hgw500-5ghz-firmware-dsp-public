/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00040344 */

undefined8 FUN_ram_00040344(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int in_lp_count;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  char in_is_in_loop;
  undefined1 auStack_4 [4];
  
  if ((0xb83a0 < (int)auStack_4) && ((int)auStack_4 < 0xbaba1)) {
    return CONCAT44(param_2,param_1);
  }
  brk();
  bVar12 = (int)param_2 < 0;
  uVar2 = (param_2 ^ param_4) >> 1;
  uVar4 = param_1;
  if (bVar12) {
    uVar4 = -param_1;
    param_2 = -(uint)(param_1 != 0) - param_2;
  }
  uVar6 = param_3;
  if ((param_4 & 0x80000000) != 0) {
    uVar6 = -param_3;
    param_4 = -(uint)(param_3 != 0) - param_4;
  }
  if (uVar6 == 0 && param_4 == 0) {
    uVar8 = 0xffffffff;
    uVar5 = 0x7fffffff;
  }
  else {
    if (param_2 == 0) {
      iVar11 = 0x20;
      if (uVar4 == 0) {
        uVar8 = 0;
        uVar5 = uVar4;
        goto LAB_ram_00040408;
      }
      uVar3 = 0;
      if (-1 < (int)uVar4) {
        for (uVar4 = uVar4 << 1; iVar11 = iVar11 + -1, -1 < (int)uVar4; uVar4 = uVar4 * 2) {
        }
      }
    }
    else {
      iVar11 = 0x40;
      uVar3 = uVar4;
      uVar4 = param_2;
      while (-1 < (int)uVar4) {
        iVar11 = iVar11 + -1;
        uVar4 = uVar4 << 1 | (uint)((int)uVar3 < 0);
        uVar3 = uVar3 << 1;
      }
    }
    uVar7 = 0;
    uVar9 = 0;
    if (param_4 == 0) {
      LP_START = 0x403f0;
      LP_END = 0x40408;
      in_is_in_loop = '\x01';
      uVar5 = uVar4;
      do {
        uVar4 = uVar3 * 2;
        uVar9 = uVar5 * 2 + (uint)CARRY4(uVar3,uVar3);
        bVar13 = (ulonglong)uVar5 + (ulonglong)uVar5 + (ulonglong)CARRY4(uVar3,uVar3) >> 0x20 != 0;
        uVar8 = uVar7 * 2 + (uint)bVar13;
        bVar14 = (ulonglong)uVar7 + (ulonglong)uVar7 + (ulonglong)bVar13 >> 0x20 == 0;
        bVar13 = uVar8 == 0;
        if (bVar14) {
          bVar13 = uVar6 == uVar8;
        }
        if ((!bVar14 || uVar6 < uVar8) || bVar13) {
          uVar4 = uVar4 + 1;
        }
        uVar5 = uVar9;
        in_lp_count = iVar11;
        if ((!bVar14 || uVar6 < uVar8) || bVar13) {
          uVar8 = uVar8 - uVar6;
        }
LAB_ram_00040408:
      } while ((in_is_in_loop != '\0') &&
              (iVar11 = in_lp_count + -1, uVar3 = uVar4, uVar7 = uVar8, iVar11 != 0));
      uVar8 = uVar4;
      if (uVar2 == 0 && !bVar12) goto LAB_ram_0004046a;
    }
    else {
      LP_START = 0x40430;
      LP_END = 0x40456;
      do {
        uVar8 = uVar3 * 2;
        uVar5 = uVar4 * 2 + (uint)CARRY4(uVar3,uVar3);
        bVar13 = (ulonglong)uVar4 + (ulonglong)uVar4 + (ulonglong)CARRY4(uVar3,uVar3) >> 0x20 != 0;
        uVar4 = uVar7 * 2 + (uint)bVar13;
        uVar10 = uVar9 * 2 +
                 (uint)((ulonglong)uVar7 + (ulonglong)uVar7 + (ulonglong)bVar13 >> 0x20 != 0);
        uVar3 = uVar4 - uVar6;
        uVar1 = (uVar10 - param_4) - (uint)(uVar4 < uVar6);
        bVar13 = false;
        uVar7 = uVar3;
        uVar9 = uVar1;
        if (((ulonglong)uVar10 - (ulonglong)param_4) - (ulonglong)(uVar4 < uVar6) >> 0x20 != 0) {
          uVar7 = uVar3 + uVar6;
          uVar9 = uVar1 + param_4 + (uint)CARRY4(uVar3,uVar6);
          bVar13 = (ulonglong)uVar1 + (ulonglong)param_4 + (ulonglong)CARRY4(uVar3,uVar6) >> 0x20 !=
                   0;
        }
        if (!bVar13) {
          uVar8 = uVar8 + 1;
        }
        iVar11 = iVar11 + -1;
        uVar3 = uVar8;
        uVar4 = uVar5;
      } while (iVar11 != 0);
      uVar4 = uVar8;
      if (uVar2 == 0 && !bVar12) goto LAB_ram_0004046a;
    }
    uVar8 = uVar4;
    if ((int)(uVar2 << 1) < 0) {
      uVar8 = -uVar4;
      uVar5 = -(uint)(uVar4 != 0) - uVar5;
    }
  }
LAB_ram_0004046a:
  return CONCAT44(uVar5,uVar8);
}


