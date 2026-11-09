/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003ff6c */

undefined8 FUN_ram_0003ff6c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  
  uVar3 = param_4 << 1;
  bVar17 = (int)param_4 < 0;
  uVar7 = param_2 << 1;
  if (uVar3 == 0 && param_3 == 0) {
    uVar3 = uVar7;
    if ((int)param_2 < 0) {
      bVar17 = !bVar17;
    }
  }
  else {
    if ((int)param_2 < 0) {
      bVar17 = !bVar17;
    }
    if (uVar7 != 0 || param_1 != 0) {
      uVar7 = (param_2 & 0x7fffffff) >> 0x14;
      if (uVar7 == 0) {
        uVar3 = (param_2 & 0xfffff) << 1 | (uint)((int)param_1 < 0);
        uVar7 = 1;
        while( true ) {
          param_1 = param_1 << 1;
          uVar7 = uVar7 - 1;
          if ((uVar3 & 0x100000) != 0) break;
          uVar3 = uVar3 << 1 | (uint)((int)param_1 < 0);
        }
      }
      else {
        uVar3 = param_2 & 0xfffff | 0x100000;
      }
      uVar9 = (param_4 & 0x7fffffff) >> 0x14;
      if (uVar9 == 0) {
        uVar11 = (param_4 & 0xfffff) << 1 | (uint)((int)param_3 < 0);
        uVar9 = 1;
        while( true ) {
          param_3 = param_3 << 1;
          uVar9 = uVar9 - 1;
          if ((uVar11 & 0x100000) != 0) break;
          uVar11 = uVar11 << 1 | (uint)((int)param_3 < 0);
        }
      }
      else {
        uVar11 = param_4 & 0xfffff | 0x100000;
      }
      if (uVar7 == 0x7ff) {
        bVar18 = uVar3 == 0x100000;
        bVar16 = param_1 == 0;
        uVar7 = (uint)bVar17 << 0x1f;
        if (!bVar18 || !bVar16) {
          uVar7 = uVar7 | 0x7ff80000;
        }
        param_1 = param_1 * (bVar18 && bVar16);
        if (!bVar18 || !bVar16) goto LAB_ram_00040126;
        if (uVar9 != 0x7ff) {
          uVar7 = (uint)bVar17 << 0x1f | 0x7ff00000;
          param_1 = 0;
          goto LAB_ram_00040126;
        }
      }
      else if (uVar9 != 0x7ff) {
        iVar8 = uVar7 + uVar9 + -0x3ff;
        uVar10 = 0;
        iVar4 = 0;
        iVar15 = 0x35;
        LP_START = 0x40052;
        LP_END = 0x4007e;
        uVar2 = 0;
        uVar5 = 0;
        uVar12 = 0;
        uVar13 = 0;
        do {
          uVar1 = uVar2;
          uVar6 = uVar5;
          uVar14 = uVar13;
          if ((param_3 & 1) != 0) {
            uVar6 = uVar5 + param_1;
            uVar14 = uVar13 + uVar3 + (uint)CARRY4(uVar5,param_1);
            bVar18 = (ulonglong)uVar13 + (ulonglong)uVar3 + (ulonglong)CARRY4(uVar5,param_1) >> 0x20
                     != 0;
            uVar1 = uVar2 + uVar12 + (uint)bVar18;
            iVar4 = iVar4 + uVar10 +
                    (uint)((ulonglong)uVar2 + (ulonglong)uVar12 + (ulonglong)bVar18 >> 0x20 != 0);
          }
          bVar18 = (int)param_1 < 0;
          uVar10 = uVar10 << 1 | (uint)((int)uVar12 < 0);
          iVar15 = iVar15 + -1;
          uVar2 = uVar1;
          param_3 = param_3 >> 1 | (uint)((uVar11 & 1) != 0) << 0x1f;
          uVar5 = uVar6;
          uVar11 = uVar11 >> 1;
          uVar12 = uVar12 << 1 | (uint)((int)uVar3 < 0);
          param_1 = param_1 << 1;
          uVar3 = uVar3 << 1 | (uint)bVar18;
          uVar13 = uVar14;
        } while (iVar15 != 0);
        uVar11 = iVar4 << 0xc | uVar1 >> 0x14;
        param_1 = uVar1 << 0xc | uVar14 >> 0x14;
        uVar3 = uVar14 << 0xc;
        if (uVar6 != 0) {
          uVar3 = uVar3 | 2;
        }
        if (iVar8 < 1) {
LAB_ram_000400ea:
          uVar7 = uVar11;
          if ((uVar11 & 0x200000) != 0) {
            iVar8 = iVar8 + 1;
            uVar7 = uVar11 >> 1;
            param_1 = param_1 >> 1 | (uint)((uVar11 & 1) != 0) << 0x1f;
          }
        }
        else {
          uVar2 = param_1;
          if ((iVar4 << 0xc & 0x200000U) != 0) {
            iVar8 = uVar7 + uVar9 + -0x3fe;
            uVar11 = uVar11 >> 1;
            uVar2 = param_1 >> 1 | (uint)((uVar1 >> 0x14 & 1) != 0) << 0x1f;
            uVar3 = uVar3 >> 1 | (uint)((uVar14 >> 0x14 & 1) != 0) << 0x1f;
          }
          param_1 = uVar2;
          uVar7 = uVar11;
          if (((int)uVar3 < 0) && (((uVar3 & 0x7fffffff) != 0 || ((uVar2 & 1) != 0)))) {
            param_1 = uVar2 + 1;
            uVar11 = uVar11 + (0xfffffffe < uVar2);
            goto LAB_ram_000400ea;
          }
        }
        if (iVar8 < 0x7ff) {
          if (iVar8 < 1) {
            if (iVar8 < -0x35) {
              iVar8 = 0;
              uVar7 = 0;
              param_1 = 0;
            }
            else {
              iVar8 = -iVar8;
              uVar9 = iVar8 - 1;
              if (iVar8 < 1) {
                uVar11 = param_1 << 1;
                uVar7 = uVar7 << 1 | (uint)((int)param_1 < 0);
              }
              else {
                uVar11 = param_1;
                if (uVar9 != 0) {
                  if ((int)uVar9 < 0x20) {
                    if (uVar3 == 0) {
                      if ((int)uVar9 < 0x20) {
                        uVar3 = -1 << (uVar9 & 0x1f);
                      }
                      else {
                        uVar3 = 0;
                      }
                      uVar3 = param_1 & (uVar3 ^ 0xffffffff);
                    }
                    uVar11 = uVar7 << (0x20 - uVar9 & 0x1f);
                    if (0x20 - uVar9 == 0 || 0x20 < (int)uVar9) {
                      uVar11 = uVar7 >> (iVar8 + 0x1fU & 0x1f);
                      uVar7 = 0;
                    }
                    else {
                      uVar7 = uVar7 >> (uVar9 & 0x1f);
                      uVar11 = param_1 >> (uVar9 & 0x1f) | uVar11;
                    }
                  }
                  else {
                    uVar3 = uVar3 | param_1;
                    if (uVar3 == 0) {
                      uVar3 = uVar7 & (-1 << (iVar8 - 0x21U & 0x1f) ^ 0xffffffffU);
                    }
                    uVar11 = uVar7 >> (iVar8 - 0x21U & 0x1f);
                    uVar7 = 0;
                  }
                }
              }
              uVar9 = uVar11;
              if (((uVar11 & 2) != 0) && ((uVar11 & 5) != 0 || uVar3 != 0)) {
                uVar9 = uVar11 + 2;
                uVar7 = uVar7 + (0xfffffffd < uVar11);
              }
              uVar3 = uVar7 >> 1;
              uVar11 = uVar7 & 1;
              uVar7 = uVar7 >> 2;
              param_1 = (uVar9 >> 1 | (uint)(uVar11 != 0) << 0x1f) >> 1 |
                        (uint)((uVar3 & 1) != 0) << 0x1f;
              iVar8 = 0;
            }
          }
        }
        else {
          iVar8 = 0x7ff;
          uVar7 = 0;
          param_1 = 0;
        }
        uVar7 = uVar7 & 0xffefffff | iVar8 << 0x14 | (uint)bVar17 << 0x1f;
        goto LAB_ram_00040126;
      }
      if (uVar11 == 0x100000 && param_3 == 0) {
        uVar7 = (uint)bVar17 << 0x1f | 0x7ff00000;
      }
      else {
        uVar7 = (uint)bVar17 << 0x1f | 0x7ff80000;
      }
      param_1 = 0;
      goto LAB_ram_00040126;
    }
  }
  if (uVar3 < 0xffe00000) {
    param_1 = 0;
    uVar7 = 0;
    if (bVar17) {
      uVar7 = 0x80000000;
    }
  }
  else {
    uVar7 = 0x7ff80000;
    param_1 = 0;
  }
LAB_ram_00040126:
  return CONCAT44(uVar7,param_1);
}


