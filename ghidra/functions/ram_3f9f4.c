/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003f9f4 */

ulonglong FUN_ram_0003f9f4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  
  uVar6 = param_2 * 2;
  uVar5 = uVar6 - 0x200000;
  uVar7 = param_4 * 2;
  uVar8 = uVar7 - 0x200000;
  if (uVar5 < 0xffa00000 && uVar8 < 0xffa00000) {
    uVar6 = (uVar5 & 0xffe00000) - (uVar8 & 0xffe00000) >> 1 |
            (uint)((uVar5 & 0xffe00000) < (uVar8 & 0xffe00000)) << 0x1f;
    uVar7 = uVar6 + 0x3fe00000;
    if (-1 < (int)(uVar6 + 0x3fc00000) && -1 < (int)(uVar6 + 0x40000000)) {
      if ((int)(param_2 ^ param_4) < 0) {
        uVar7 = uVar7 | 0x80000000;
      }
      uVar5 = param_2 & 0x1fffff | 0x100000;
      uVar6 = param_4 & 0x1fffff | 0x100000;
      bVar12 = uVar5 < uVar6;
      if (uVar5 == uVar6) {
        bVar12 = param_1 < param_3;
      }
      uVar8 = param_1;
      if (bVar12) {
        uVar7 = uVar7 - 0x100000;
        uVar8 = param_1 * 2;
        uVar5 = uVar5 * 2 + (uint)CARRY4(param_1,param_1);
      }
      uVar9 = 0x16;
      uVar2 = 0;
      LP_START = 0x3fa72;
      LP_END = 0x3fa92;
      do {
        bVar12 = uVar5 < uVar6;
        if (uVar5 == uVar6) {
          bVar12 = uVar8 < param_3;
        }
        uVar10 = uVar8;
        if (!bVar12) {
          uVar2 = uVar2 | 1 << (uVar9 & 0x1f);
          uVar10 = uVar8 - param_3;
          uVar5 = (uVar5 - uVar6) - (uint)(uVar8 < param_3);
        }
        uVar8 = uVar10 * 2;
        uVar5 = uVar5 * 2 + (uint)CARRY4(uVar10,uVar10);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      uVar10 = 0x20;
      uVar9 = 0;
      bVar12 = false;
      if (uVar5 == 0 && uVar8 == 0) goto LAB_ram_0003fac0;
      LP_START = 0x3faa0;
      LP_END = 0x3fac0;
      bVar12 = true;
      do {
        bVar13 = uVar5 < uVar6;
        if (uVar5 == uVar6) {
          bVar13 = uVar8 < param_3;
        }
        uVar4 = uVar8;
        if (!bVar13) {
          uVar9 = uVar9 | 1 << (uVar10 & 0x1f);
          uVar4 = uVar8 - param_3;
          uVar5 = (uVar5 - uVar6) - (uint)(uVar8 < param_3);
        }
        uVar8 = uVar4 * 2;
        uVar5 = uVar5 * 2 + (uint)CARRY4(uVar4,uVar4);
LAB_ram_0003fac0:
      } while ((bVar12) && (uVar10 = uVar10 - 1, uVar10 != 0));
      uVar6 = uVar9 >> 1;
      uVar9 = (uVar6 | uVar9 << 0x1f) >> 1 | (uint)((uVar2 >> 1 & 1) != 0) << 0x1f;
      iVar3 = (uVar2 >> 2) + uVar7;
      if ((uVar6 & 1) == 0) {
        return CONCAT44(iVar3,uVar9);
      }
      if (((uVar6 & 2) == 0 && uVar5 == 0) && uVar8 == 0) {
        return CONCAT44(iVar3,uVar9);
      }
      return CONCAT44(iVar3 + (uint)(0xfffffffe < uVar9),uVar9 + 1);
    }
  }
  else {
    if (uVar8 == 0xffe00000 && param_3 == 0) {
      uVar6 = (uint)((int)param_2 < 0) << 0x1f;
      uVar7 = uVar6 | 0x7ff00000;
      if ((param_2 & 0x7fffffff) == 0 && param_1 == 0) {
        uVar7 = uVar6 | 0x7ff80000;
      }
      return (ulonglong)uVar7 << 0x20;
    }
    if (0xffdfffff < uVar7 && (uVar7 != 0xffe00000 || param_3 != 0)) {
      return CONCAT44(param_4,param_3);
    }
    if (uVar5 == 0xffe00000 && param_1 == 0) {
      return (ulonglong)param_1;
    }
    if (0xffdfffff < uVar6 || 0xffdfffff < uVar7) {
      if (0xffdfffff < uVar6 && (uVar6 != 0xffe00000 || param_1 != 0)) {
        return CONCAT44(param_2,param_1);
      }
      if (uVar7 < 0xffe00000 || uVar7 == 0xffe00000 && param_3 == 0) {
        if (((uVar7 == 0xffe00000 && param_3 == 0) && uVar6 == 0xffe00000) && param_1 == 0) {
          param_2 = param_2 | 0x80000;
        }
        if (((uVar7 == 0xffe00000 && param_3 == 0) && uVar6 == 0xffe00000) && param_1 == 0) {
          return CONCAT44(param_2,param_1);
        }
        bVar12 = uVar6 == 0xffe00000 && param_1 == 0;
        return CONCAT44(param_2 * bVar12,param_1 * bVar12);
      }
      return CONCAT44(param_4,param_3);
    }
  }
  uVar6 = param_4 << 1;
  bVar12 = (int)param_4 < 0;
  uVar7 = param_2 << 1;
  if (uVar6 == 0 && param_3 == 0) {
    if ((int)param_2 < 0) {
      bVar12 = !bVar12;
    }
    if ((uVar7 != 0 || param_1 != 0) && (uVar6 = 0x7ff00000, uVar7 < 0xffe00001)) {
      if (bVar12) {
        uVar6 = 0xfff00000;
      }
      return (ulonglong)uVar6 << 0x20;
    }
  }
  else {
    if ((int)param_2 < 0) {
      bVar12 = !bVar12;
    }
    if (uVar7 == 0 && param_1 == 0) {
      if ((uVar6 < 0xffe00001) &&
         ((uVar7 = 0, uVar6 < 0xffe00000 || (uVar6 == 0xffe00000 && param_3 == 0)))) {
        if (bVar12) {
          uVar7 = 0x80000000;
        }
        return (ulonglong)uVar7 << 0x20;
      }
    }
    else {
      uVar6 = (param_2 & 0x7fffffff) >> 0x14;
      if (uVar6 == 0) {
        uVar7 = (param_2 & 0xfffff) << 1 | (uint)((int)param_1 < 0);
        uVar6 = 1;
        while( true ) {
          param_1 = param_1 << 1;
          uVar6 = uVar6 - 1;
          if ((uVar7 & 0x100000) != 0) break;
          uVar7 = uVar7 << 1 | (uint)((int)param_1 < 0);
        }
      }
      else {
        uVar7 = param_2 & 0xfffff | 0x100000;
      }
      uVar5 = (param_4 & 0x7fffffff) >> 0x14;
      if (uVar5 == 0) {
        uVar8 = (param_4 & 0xfffff) << 1 | (uint)((int)param_3 < 0);
        uVar5 = 1;
        while( true ) {
          param_3 = param_3 << 1;
          uVar5 = uVar5 - 1;
          if ((uVar8 & 0x100000) != 0) break;
          uVar8 = uVar8 << 1 | (uint)((int)param_3 < 0);
        }
      }
      else {
        uVar8 = param_4 & 0xfffff | 0x100000;
      }
      if (uVar6 == 0x7ff) {
        if ((uVar7 == 0x100000) && (uVar5 != 0x7ff)) {
          return (ulonglong)((uint)bVar12 << 0x1f | 0x7ff00000) << 0x20;
        }
      }
      else {
        if (uVar5 != 0x7ff) {
          iVar3 = (uVar6 - uVar5) + 0x3ff;
          iVar11 = 0x37;
          uVar2 = 0;
          uVar9 = 0;
          LP_START = 0x3fc68;
          LP_END = 0x3fc90;
          do {
            uVar10 = uVar9 << 1;
            uVar4 = uVar2 << 1;
            uVar2 = uVar4 | (int)uVar9 < 0;
            bVar13 = uVar7 < uVar8;
            if (uVar7 == uVar8) {
              bVar13 = param_1 < param_3;
            }
            uVar1 = param_1;
            uVar9 = uVar10;
            if (!bVar13) {
              uVar9 = uVar10 | 1;
              uVar1 = param_1 - param_3;
              uVar7 = (uVar7 - uVar8) - (uint)(param_1 < param_3);
            }
            param_1 = uVar1 << 1;
            uVar7 = uVar7 << 1 | (uint)((int)uVar1 < 0);
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          uVar7 = uVar7 | param_1;
          uVar8 = uVar9;
          if ((uVar4 & 0x400000) == 0) {
            iVar3 = (uVar6 - uVar5) + 0x3fe;
            uVar8 = uVar9 << 1;
            uVar2 = uVar2 << 1 | (uint)((int)uVar9 < 0);
          }
          if (iVar3 < 1) {
            if ((uVar8 & 1) != 0) {
              uVar7 = uVar7 | 1;
            }
            uVar5 = uVar2 >> 2;
            bVar13 = (uVar2 >> 1 & 1) != 0;
            uVar2 = (uVar8 >> 1 | (uint)((uVar2 & 1) != 0) << 0x1f) >> 1;
            uVar6 = uVar2 | (uint)bVar13 << 0x1f;
            if ((uVar8 >> 1 & 1) != 0) {
              uVar7 = uVar7 | 1;
            }
            if (iVar3 < -0x35) {
              iVar3 = 0;
              uVar6 = 0;
              uVar7 = 0;
            }
            else {
              iVar3 = -iVar3;
              uVar8 = iVar3 - 1;
              if (iVar3 < 1) {
                uVar6 = uVar2 << 1;
                uVar5 = uVar5 << 1 | (uint)bVar13;
              }
              else if (uVar8 != 0) {
                if ((int)uVar8 < 0x20) {
                  if (uVar7 == 0) {
                    if ((int)uVar8 < 0x20) {
                      uVar7 = -1 << (uVar8 & 0x1f);
                    }
                    else {
                      uVar7 = 0;
                    }
                    uVar7 = uVar6 & (uVar7 ^ 0xffffffff);
                  }
                  uVar2 = uVar5 << (0x20 - uVar8 & 0x1f);
                  if (0x20 - uVar8 == 0 || 0x20 < (int)uVar8) {
                    uVar6 = uVar5 >> (iVar3 + 0x1fU & 0x1f);
                    uVar5 = 0;
                  }
                  else {
                    uVar5 = uVar5 >> (uVar8 & 0x1f);
                    uVar6 = uVar6 >> (uVar8 & 0x1f) | uVar2;
                  }
                }
                else {
                  uVar7 = uVar7 | uVar6;
                  if (uVar7 == 0) {
                    uVar7 = uVar5 & (-1 << (iVar3 - 0x21U & 0x1f) ^ 0xffffffffU);
                  }
                  uVar6 = uVar5 >> (iVar3 - 0x21U & 0x1f);
                  uVar5 = 0;
                }
              }
              uVar8 = uVar6;
              if (((uVar6 & 2) != 0) && ((uVar6 & 5) != 0 || uVar7 != 0)) {
                uVar8 = uVar6 + 2;
                uVar5 = uVar5 + (0xfffffffd < uVar6);
              }
              uVar6 = uVar5 >> 2;
              uVar7 = (uVar8 >> 1 | (uint)((uVar5 & 1) != 0) << 0x1f) >> 1 |
                      (uint)((uVar5 >> 1 & 1) != 0) << 0x1f;
              iVar3 = 0;
            }
          }
          else {
            uVar5 = uVar8;
            if (((uVar8 & 2) != 0) && (uVar7 != 0 || (uVar8 & 5) != 0)) {
              uVar5 = uVar8 + 2;
              uVar6 = uVar2 + (0xfffffffd < uVar8);
              uVar2 = uVar6;
              if ((uVar6 & 0x800000) != 0) {
                iVar3 = iVar3 + 1;
                uVar2 = uVar6 >> 1;
                uVar5 = uVar5 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
              }
            }
            uVar6 = uVar2 >> 2;
            uVar7 = (uVar5 >> 1 | (uint)((uVar2 & 1) != 0) << 0x1f) >> 1 |
                    (uint)((uVar2 >> 1 & 1) != 0) << 0x1f;
            if (0x7fe < iVar3) {
              iVar3 = 0x7ff;
              uVar6 = 0;
              uVar7 = 0;
            }
          }
          return CONCAT44(uVar6 & 0xffefffff | iVar3 << 0x14 | (uint)bVar12 << 0x1f,uVar7);
        }
        if (uVar8 == 0x100000 && param_3 == 0) {
          return 0;
        }
      }
    }
  }
  return 0x7ff8000000000000;
}


