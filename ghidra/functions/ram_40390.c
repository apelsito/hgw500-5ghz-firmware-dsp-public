/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00040390 */

/* WARNING: Removing unreachable block (ram,0x0004045e) */
/* WARNING: Removing unreachable block (ram,0x0004040e) */
/* WARNING: Removing unreachable block (ram,0x00040410) */
/* WARNING: Removing unreachable block (ram,0x00040418) */
/* WARNING: Removing unreachable block (ram,0x00040420) */

undefined8 FUN_ram_00040390(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int in_r10;
  int iVar8;
  int in_lp_count;
  bool bVar9;
  bool bVar10;
  char in_is_in_loop;
  
  if (param_3 == 0 && param_4 == 0) {
    param_1 = in_r10 - 1;
    uVar4 = param_1 >> 1;
  }
  else {
    if (param_2 == 0) {
      iVar8 = 0x20;
      if (param_1 == 0) {
        uVar6 = 0;
        uVar4 = param_1;
        goto LAB_ram_00040408;
      }
      uVar2 = 0;
      if (-1 < (int)param_1) {
        for (param_1 = param_1 << 1; iVar8 = iVar8 + -1, -1 < (int)param_1; param_1 = param_1 * 2) {
        }
      }
    }
    else {
      iVar8 = 0x40;
      uVar2 = param_1;
      while (param_1 = param_2, -1 < (int)param_1) {
        iVar8 = iVar8 + -1;
        param_2 = param_1 << 1 | (uint)((int)uVar2 < 0);
        uVar2 = uVar2 << 1;
      }
    }
    uVar5 = 0;
    uVar6 = 0;
    if (param_4 == 0) {
      LP_START = 0x403f0;
      LP_END = 0x40408;
      in_is_in_loop = '\x01';
      uVar4 = param_1;
      do {
        param_1 = uVar2 * 2;
        uVar3 = uVar4 * 2 + (uint)CARRY4(uVar2,uVar2);
        bVar9 = (ulonglong)uVar4 + (ulonglong)uVar4 + (ulonglong)CARRY4(uVar2,uVar2) >> 0x20 != 0;
        uVar6 = uVar5 * 2 + (uint)bVar9;
        bVar10 = (ulonglong)uVar5 + (ulonglong)uVar5 + (ulonglong)bVar9 >> 0x20 == 0;
        bVar9 = uVar6 == 0;
        if (bVar10) {
          bVar9 = param_3 == uVar6;
        }
        if ((!bVar10 || param_3 < uVar6) || bVar9) {
          param_1 = param_1 + 1;
        }
        uVar4 = uVar3;
        in_lp_count = iVar8;
        if ((!bVar10 || param_3 < uVar6) || bVar9) {
          uVar6 = uVar6 - param_3;
        }
LAB_ram_00040408:
      } while ((in_is_in_loop != '\0') &&
              (iVar8 = in_lp_count + -1, uVar2 = param_1, uVar5 = uVar6, iVar8 != 0));
    }
    else {
      LP_START = 0x40430;
      LP_END = 0x40456;
      uVar3 = param_1;
      do {
        param_1 = uVar2 * 2;
        uVar4 = uVar3 * 2 + (uint)CARRY4(uVar2,uVar2);
        bVar9 = (ulonglong)uVar3 + (ulonglong)uVar3 + (ulonglong)CARRY4(uVar2,uVar2) >> 0x20 != 0;
        uVar2 = uVar5 * 2 + (uint)bVar9;
        uVar7 = uVar6 * 2 +
                (uint)((ulonglong)uVar5 + (ulonglong)uVar5 + (ulonglong)bVar9 >> 0x20 != 0);
        uVar3 = uVar2 - param_3;
        uVar1 = (uVar7 - param_4) - (uint)(uVar2 < param_3);
        bVar9 = false;
        uVar5 = uVar3;
        uVar6 = uVar1;
        if (((ulonglong)uVar7 - (ulonglong)param_4) - (ulonglong)(uVar2 < param_3) >> 0x20 != 0) {
          uVar5 = uVar3 + param_3;
          uVar6 = uVar1 + param_4 + (uint)CARRY4(uVar3,param_3);
          bVar9 = (ulonglong)uVar1 + (ulonglong)param_4 + (ulonglong)CARRY4(uVar3,param_3) >> 0x20
                  != 0;
        }
        if (!bVar9) {
          param_1 = param_1 + 1;
        }
        iVar8 = iVar8 + -1;
        uVar2 = param_1;
        uVar3 = uVar4;
      } while (iVar8 != 0);
    }
  }
  return CONCAT44(uVar4,param_1);
}


