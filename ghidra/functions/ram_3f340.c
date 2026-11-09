/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003f340 */

longlong FUN_ram_0003f340(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  
  bVar15 = param_2 * 2 < param_4 * 2;
  if (param_2 * 2 == param_4 * 2) {
    bVar15 = param_1 < param_3;
  }
  uVar3 = param_1;
  uVar9 = param_2 ^ 0x80000000;
  if (bVar15) {
    uVar3 = param_3;
    uVar9 = param_4;
    param_3 = param_1;
    param_4 = param_2 ^ 0x80000000;
  }
  if (uVar9 * 2 - 0x200000 < 0xff800000 && param_4 * 2 - 0x200000 < 0xff800000) {
    uVar7 = uVar9 >> 0x14;
    uVar10 = uVar7 - (param_4 >> 0x14);
    uVar11 = uVar10 & 0x7ff;
    uVar1 = uVar3 * 0x800;
    uVar5 = param_3 << 0xb;
    uVar6 = param_4 << 0xb | param_3 >> 0x15 | 0x80000000;
    uVar8 = uVar5 >> (uVar10 & 0x1f);
    if (uVar11 < 0x21 && 0x20 - uVar11 != 0) {
      if (uVar11 != 0) {
        uVar8 = uVar8 | uVar6 << (0x20 - uVar11 & 0x1f);
      }
      uVar13 = uVar6 >> (uVar10 & 0x1f);
    }
    else {
      uVar8 = uVar6 >> (uVar10 & 0x1f);
      if (0x3f < uVar11) {
        uVar8 = 0;
      }
      uVar13 = 0;
    }
    uVar12 = -((int)(uVar9 ^ param_4) >> 0x1f);
    uVar3 = uVar9 << 0xb | uVar3 >> 0x15 | 0x80000000;
    if (uVar12 == 0) {
      uVar9 = uVar8 + uVar1;
      uVar12 = uVar13 + uVar3 + (uint)CARRY4(uVar8,uVar1);
      if ((ulonglong)uVar13 + (ulonglong)uVar3 + (ulonglong)CARRY4(uVar8,uVar1) >> 0x20 == 0) {
        uVar7 = uVar7 - 1;
        uVar3 = uVar12;
      }
      else {
        uVar3 = uVar12 >> 1 | 0x80000000;
        uVar9 = uVar9 >> 1 | (uint)((uVar12 & 1) != 0) << 0x1f;
      }
      uVar1 = uVar9 >> 0xb | uVar3 << 0x15;
      iVar4 = (uVar3 >> 0xb) + uVar7 * 0x100000;
      if ((uVar9 >> 10 & 1) != 0) {
        uVar3 = uVar5;
        if (uVar11 < 0x20) {
          uVar3 = 0;
          uVar6 = uVar5;
        }
        bVar15 = (uVar6 & (1 << (uVar10 & 0x1f) + 1) - 1U) == 0;
        bVar14 = bVar15 && uVar3 == 0;
        if (bVar15 && uVar3 == 0) {
          bVar14 = (uVar9 & 0x3ff) == 0;
        }
        uVar3 = (uint)(!bVar14 || (uVar9 >> 0xb & 1) != 0);
        return CONCAT44(iVar4 + (uint)CARRY4(uVar1,uVar3),uVar1 + uVar3);
      }
      return CONCAT44(iVar4,uVar1);
    }
    uVar9 = uVar1 - uVar8;
    uVar3 = (uVar3 - uVar13) - (uint)(uVar1 < uVar8);
    uVar1 = 0;
    if (-1 < (int)uVar3) {
      uVar8 = uVar3;
      if (uVar3 == 0 && uVar9 == 0) {
        return 0;
      }
      do {
        uVar13 = uVar9;
        uVar9 = uVar13 * 2;
        uVar8 = uVar8 * 2 + (uint)CARRY4(uVar13,uVar13);
        uVar1 = uVar1 + 1;
      } while (-1 < (int)uVar8);
      uVar2 = (uVar7 & 0x7ff) - uVar1;
      bVar15 = (uVar7 & 0x7ff) < uVar1;
      uVar3 = uVar8;
      if (uVar2 == 0) {
        uVar2 = 1;
        uVar3 = uVar8 >> 1;
        bVar15 = (uVar8 & 1) != 0;
        uVar9 = uVar13 & 0x7fffffff | (uint)bVar15 << 0x1f;
      }
      if (bVar15) {
        uVar2 = 1 - uVar2;
        uVar9 = uVar9 >> (uVar2 & 0x1f);
        if (uVar2 < 0x21 && 0x20 - uVar2 != 0) {
          if (uVar2 != 0) {
            uVar9 = uVar9 | uVar3 << (0x20 - uVar2 & 0x1f);
          }
          uVar3 = uVar3 >> (uVar2 & 0x1f);
        }
        else {
          uVar9 = uVar3 >> (uVar2 & 0x1f);
          if (0x3f < uVar2) {
            uVar9 = 0;
          }
          uVar3 = 0;
        }
        uVar7 = (uVar7 & 0x800) + 1;
      }
      else {
        uVar7 = uVar7 & 0x800 | uVar2;
      }
    }
    uVar1 = uVar9 >> 0xb | uVar3 << 0x15;
    iVar4 = (uVar3 >> 0xb) + (uVar7 - 1) * 0x100000;
    if ((uVar9 >> 10 & 1) != 0) {
      uVar3 = uVar5;
      if (uVar11 < 0x20) {
        uVar3 = 0;
        uVar6 = uVar5;
      }
      if ((uVar6 & (1 << (uVar10 & 0x1f) + 1) - 1U) != 0 || uVar3 != 0) {
        uVar12 = 0;
      }
      uVar12 = uVar12 & uVar1;
      if (uVar12 != 0 || (uVar9 & 0x3ff) != 0) {
        uVar12 = 1;
      }
      return CONCAT44(iVar4 + (uint)CARRY4(uVar1,uVar12),uVar1 + uVar12);
    }
    return CONCAT44(iVar4,uVar1);
  }
  uVar7 = uVar9 << 1;
  if ((uVar7 == 0) && (uVar3 == 0)) {
    if ((param_4 == 0x80000000) && (param_3 == 0)) {
      param_4 = uVar9;
    }
    return CONCAT44(param_4,param_3);
  }
  uVar6 = param_4 << 1;
  if ((uVar6 == 0) && (param_3 == 0)) {
    return CONCAT44(uVar9,uVar3);
  }
  bVar15 = uVar6 < uVar7;
  if (uVar6 == uVar7) {
    bVar15 = param_3 < uVar3;
  }
  uVar1 = uVar3;
  uVar5 = uVar9;
  uVar8 = param_4;
  uVar10 = (uint)((int)uVar9 < 0);
  uVar11 = (uint)((int)param_4 < 0);
  if (!bVar15 && (uVar6 != uVar7 || param_3 != uVar3)) {
    uVar1 = param_3;
    uVar5 = param_4;
    param_3 = uVar3;
    uVar8 = uVar9;
    uVar10 = (uint)((int)param_4 < 0);
    uVar11 = (uint)((int)uVar9 < 0);
  }
  uVar3 = (uVar5 & 0x7fffffff) >> 0x14;
  if (uVar3 == 0) {
    uVar9 = (uVar5 & 0xfffff) << 1 | (uint)((int)uVar1 < 0);
    uVar3 = 1;
    while( true ) {
      uVar1 = uVar1 << 1;
      uVar3 = uVar3 - 1;
      if ((uVar9 & 0x100000) != 0) break;
      uVar9 = uVar9 << 1 | (uint)((int)uVar1 < 0);
    }
  }
  else {
    uVar9 = uVar5 & 0xfffff | 0x100000;
  }
  uVar7 = (uVar8 & 0x7fffffff) >> 0x14;
  if (uVar7 == 0) {
    uVar6 = (uVar8 & 0xfffff) << 1 | (uint)((int)param_3 < 0);
    uVar7 = 1;
    while( true ) {
      param_3 = param_3 << 1;
      uVar7 = uVar7 - 1;
      if ((uVar6 & 0x100000) != 0) break;
      uVar6 = uVar6 << 1 | (uint)((int)param_3 < 0);
    }
  }
  else {
    uVar6 = uVar8 & 0xfffff | 0x100000;
  }
  if (uVar3 == 0x7ff) {
    uVar3 = uVar10 << 0x1f;
    if (uVar9 == 0x100000 && uVar1 == 0) {
      if (uVar7 != 0x7ff) {
LAB_ram_0003f9d4:
        return (ulonglong)(uVar3 | 0x7ff00000) << 0x20;
      }
      if (uVar6 == 0x100000 && param_3 == 0) {
        if (uVar10 == uVar11) goto LAB_ram_0003f9d4;
      }
      else {
        uVar3 = uVar11 << 0x1f;
      }
    }
    return (ulonglong)(uVar3 | 0x7ff80000) << 0x20;
  }
  iVar4 = uVar3 - uVar7;
  if (uVar7 == 0x7ff) {
    return CONCAT44(uVar8,param_3);
  }
  uVar7 = 0;
  if (0x36 < iVar4) goto LAB_ram_0003f766;
  uVar5 = iVar4 - 2;
  uVar8 = param_3;
  if (uVar5 != 0) {
    if (iVar4 < 2) {
      uVar6 = uVar6 << 1 | (uint)((int)param_3 < 0);
      uVar8 = param_3 << 1;
      if (uVar5 != 0xffffffff) {
        uVar8 = param_3 << 2;
        uVar6 = uVar6 << 1 | (uint)((int)(param_3 << 1) < 0);
      }
    }
    else {
      uVar13 = iVar4 - 0x22;
      if ((int)uVar5 < 0x20) {
        uVar7 = param_3 << (0x20 - uVar13 & 0x1f);
        uVar8 = uVar6 << (0x20 - uVar13 & 0x1f);
        if (0x20 - uVar13 == 0 || 0x20 < (int)uVar13) {
          uVar8 = uVar6 >> (uVar5 & 0x1f);
          uVar6 = 0;
        }
        else {
          uVar6 = uVar6 >> (uVar13 & 0x1f);
          uVar8 = param_3 >> (uVar13 & 0x1f) | uVar8;
        }
      }
      else {
        if (param_3 == 0) {
          param_3 = uVar6 << (0x20 - uVar13 & 0x1f);
        }
        uVar8 = uVar6 >> (uVar13 & 0x1f);
        uVar6 = 0;
        uVar7 = param_3;
      }
    }
  }
  uVar5 = uVar1 * 4;
  uVar9 = (uVar9 << 1 | (uint)((int)uVar1 < 0)) << 1 | (uint)((int)(uVar1 << 1) < 0);
  if (uVar10 == uVar11) {
    uVar1 = uVar5 + uVar8;
    uVar5 = uVar9 + uVar6 + (uint)CARRY4(uVar5,uVar8);
    uVar6 = uVar1;
    uVar9 = uVar5;
    if ((uVar5 & 0x800000) != 0) {
      uVar3 = uVar3 + 1;
      uVar9 = uVar5 >> 1;
      uVar6 = uVar1 >> 1 | (uint)((uVar5 & 1) != 0) << 0x1f;
      if ((uVar1 & 1) != 0) {
        uVar7 = uVar7 | 1;
      }
    }
    uVar1 = uVar6;
    uVar5 = uVar9;
    if (((uVar6 & 2) != 0) && (uVar7 != 0 || (uVar6 & 5) != 0)) {
      uVar1 = uVar6 + 2;
      if (0xfffffffd < uVar6) {
        uVar9 = uVar9 + 1;
      }
      uVar5 = uVar9;
      if ((uVar9 & 0x800000) != 0) {
        uVar5 = uVar9 >> 1;
        uVar1 = uVar1 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
        uVar3 = uVar3 + 1;
      }
    }
    uVar9 = uVar5 >> 2;
    uVar1 = (uVar1 >> 1 | (uint)((uVar5 & 1) != 0) << 0x1f) >> 1 |
            (uint)((uVar5 >> 1 & 1) != 0) << 0x1f;
LAB_ram_0003f74e:
    if (0 < (int)uVar3) {
      if (0x7fe < (int)uVar3) {
        uVar3 = 0x7ff;
        uVar9 = 0;
        uVar1 = 0;
      }
      goto LAB_ram_0003f766;
    }
  }
  else {
    uVar1 = uVar5 - uVar8;
    uVar6 = (uVar9 - uVar6) - (uint)(uVar5 < uVar8);
    uVar9 = uVar1;
    if ((uVar6 & 0x400000) == 0) {
      uVar9 = uVar1 * 2;
      uVar5 = uVar6 * 2;
      uVar6 = uVar5 | (int)uVar1 < 0;
      uVar3 = uVar3 - 1;
      uVar1 = uVar9;
      if ((uVar5 & 0x400000) != 0) goto LAB_ram_0003f8e8;
    }
    else {
LAB_ram_0003f8e8:
      uVar1 = uVar9;
      if (((uVar9 & 2) != 0) && (((uVar9 & 1) != 0 || ((uVar7 == 0 && ((uVar9 & 4) != 0)))))) {
        uVar1 = uVar9 + 2;
        uVar9 = uVar6 + (0xfffffffd < uVar9);
        uVar6 = uVar9;
        if ((uVar9 & 0x800000) != 0) {
          uVar3 = uVar3 + 1;
          uVar6 = uVar9 >> 1;
          uVar1 = uVar1 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
        }
      }
    }
    uVar9 = uVar6 >> 2;
    uVar1 = (uVar1 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f) >> 1 |
            (uint)((uVar6 >> 1 & 1) != 0) << 0x1f;
    if (0xfffff < uVar9) goto LAB_ram_0003f74e;
    uVar6 = uVar1;
    if (uVar9 == 0 && uVar1 == 0) {
      uVar3 = 0;
      uVar9 = 0;
      uVar1 = 0;
      goto LAB_ram_0003f766;
    }
    do {
      uVar1 = uVar6 << 1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar6 < 0);
      uVar3 = uVar3 - 1;
      uVar6 = uVar1;
    } while ((int)uVar9 < 0x100000);
    if (0 < (int)uVar3) goto LAB_ram_0003f766;
  }
  iVar4 = -uVar3;
  uVar3 = iVar4 - 1;
  if (iVar4 < 1) {
    uVar6 = uVar1 << 1;
    uVar9 = uVar9 << 1 | (uint)((int)uVar1 < 0);
  }
  else {
    uVar6 = uVar1;
    if (uVar3 != 0) {
      if ((int)uVar3 < 0x20) {
        if (uVar7 == 0) {
          if ((int)uVar3 < 0x20) {
            uVar7 = -1 << (uVar3 & 0x1f);
          }
          else {
            uVar7 = 0;
          }
          uVar7 = uVar1 & (uVar7 ^ 0xffffffff);
        }
        uVar6 = uVar9 << (0x20 - uVar3 & 0x1f);
        if (0x20 - uVar3 == 0 || 0x20 < (int)uVar3) {
          uVar6 = uVar9 >> (iVar4 + 0x1fU & 0x1f);
          uVar9 = 0;
        }
        else {
          uVar9 = uVar9 >> (uVar3 & 0x1f);
          uVar6 = uVar1 >> (uVar3 & 0x1f) | uVar6;
        }
      }
      else {
        uVar7 = uVar7 | uVar1;
        if (uVar7 == 0) {
          uVar7 = uVar9 & (-1 << (iVar4 - 0x21U & 0x1f) ^ 0xffffffffU);
        }
        uVar6 = uVar9 >> (iVar4 - 0x21U & 0x1f);
        uVar9 = 0;
      }
    }
  }
  uVar3 = uVar6;
  if (((uVar6 & 2) != 0) && ((uVar6 & 5) != 0 || uVar7 != 0)) {
    uVar3 = uVar6 + 2;
    uVar9 = uVar9 + (0xfffffffd < uVar6);
  }
  uVar7 = uVar9 >> 1;
  uVar6 = uVar9 & 1;
  uVar9 = uVar9 >> 2;
  uVar1 = (uVar3 >> 1 | (uint)(uVar6 != 0) << 0x1f) >> 1 | (uint)((uVar7 & 1) != 0) << 0x1f;
  uVar3 = 0;
LAB_ram_0003f766:
  return CONCAT44(uVar9 & 0xffefffff | uVar3 << 0x14 | uVar10 << 0x1f,uVar1);
}


