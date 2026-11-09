/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002a7f8 */

void FUN_ram_0002a7f8(short *param_1,int *param_2,int param_3,int param_4)

{
  short sVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint local_14;
  uint local_c;
  
  psVar12 = param_1 + 8;
  iVar9 = *param_2;
  local_14 = iVar9 >> 0x10;
  iVar10 = (int)(short)iVar9;
  iVar6 = param_2[1];
  local_c = iVar6 >> 0x10;
  iVar7 = (int)(short)iVar6;
  if ((param_3 != 0) && (param_4 != 0)) {
    local_14 = (short)((uint)iVar9 >> 0x10) * 0x5a82 >> 0xf;
    local_c = (short)((uint)iVar6 >> 0x10) * 0x5a82 >> 0xf;
  }
  iVar6 = 0;
  do {
    uVar3 = (ulonglong)(uint)(int)*param_1 * (ulonglong)(local_14 & 0xffff);
    uVar4 = (longlong)(int)*param_1 * (longlong)(int)((int)(short)local_14 & 0xffff0000);
    uVar5 = uVar3 + uVar4;
    if (-1 < (longlong)(uVar3 ^ uVar4) && (longlong)(uVar3 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    iVar9 = (int)uVar5;
    uVar3 = (ulonglong)(uint)(int)param_1[1] * (ulonglong)(local_14 & 0xffff);
    uVar4 = (longlong)(int)param_1[1] * (longlong)(int)((int)(short)local_14 & 0xffff0000);
    uVar5 = uVar3 + uVar4;
    if (-1 < (longlong)(uVar3 ^ uVar4) && (longlong)(uVar3 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    iVar13 = (int)uVar5;
    uVar3 = (ulonglong)(uint)(int)*psVar12 * (ulonglong)(local_c & 0xffff);
    uVar4 = (longlong)(int)*psVar12 * (longlong)(int)((int)(short)local_c & 0xffff0000);
    uVar5 = uVar3 + uVar4;
    if (-1 < (longlong)(uVar3 ^ uVar4) && (longlong)(uVar3 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    iVar15 = (int)uVar5;
    uVar3 = (ulonglong)(uint)(int)psVar12[1] * (ulonglong)(local_c & 0xffff);
    uVar4 = (longlong)(int)psVar12[1] * (longlong)(int)((int)(short)local_c & 0xffff0000);
    uVar5 = uVar3 + uVar4;
    if (-1 < (longlong)(uVar3 ^ uVar4) && (longlong)(uVar3 ^ uVar5) < 0) {
      uVar5 = 0x7fffffffffffffff;
    }
    iVar8 = (int)uVar5;
    if ((param_3 == 0) || (param_4 == 0)) {
      iVar11 = iVar10 + 1;
      if (iVar11 < 0x20) {
        if (iVar11 < -0x1f) {
          lVar2 = (longlong)(iVar9 >> 0x1f);
        }
        else if (iVar11 < 0) {
          lVar2 = (longlong)(iVar9 >> -iVar11);
        }
        else {
          lVar2 = (longlong)iVar9 << iVar11;
        }
      }
      else {
        lVar2 = (longlong)iVar9 << 0x1f;
      }
      sVar1 = (short)((ulonglong)lVar2 >> 0x10);
      if (0x7fffffff < lVar2) {
        sVar1 = 0x7fff;
      }
      if (lVar2 < -0x80000000) {
        sVar1 = -0x8000;
      }
      *param_1 = sVar1;
      iVar9 = iVar10 + 1;
      if (iVar9 < 0x20) {
        if (iVar9 < -0x1f) {
          lVar2 = (longlong)(iVar13 >> 0x1f);
        }
        else if (iVar9 < 0) {
          lVar2 = (longlong)(iVar13 >> -iVar9);
        }
        else {
          lVar2 = (longlong)iVar13 << iVar9;
        }
      }
      else {
        lVar2 = (longlong)iVar13 << 0x1f;
      }
      sVar1 = (short)((ulonglong)lVar2 >> 0x10);
      if (0x7fffffff < lVar2) {
        sVar1 = 0x7fff;
      }
      if (lVar2 < -0x80000000) {
        sVar1 = -0x8000;
      }
      param_1[1] = sVar1;
      if (param_3 != 0) {
        iVar9 = iVar7 + 1;
        if (iVar9 < 0x20) {
          if (iVar9 < -0x1f) {
            lVar2 = (longlong)(iVar15 >> 0x1f);
          }
          else if (iVar9 < 0) {
            lVar2 = (longlong)(iVar15 >> -iVar9);
          }
          else {
            lVar2 = (longlong)iVar15 << iVar9;
          }
        }
        else {
          lVar2 = (longlong)iVar15 << 0x1f;
        }
        sVar1 = (short)((ulonglong)lVar2 >> 0x10);
        if (0x7fffffff < lVar2) {
          sVar1 = 0x7fff;
        }
        if (lVar2 < -0x80000000) {
          sVar1 = -0x8000;
        }
        *psVar12 = sVar1;
        iVar9 = iVar7 + 1;
        if (iVar9 < 0x20) {
          if (iVar9 < -0x1f) {
            lVar2 = (longlong)(iVar8 >> 0x1f);
          }
          else if (iVar9 < 0) {
            lVar2 = (longlong)(iVar8 >> -iVar9);
          }
          else {
            lVar2 = (longlong)iVar8 << iVar9;
          }
        }
        else {
          lVar2 = (longlong)iVar8 << 0x1f;
        }
        sVar1 = (short)((ulonglong)lVar2 >> 0x10);
        if (0x7fffffff < lVar2) {
          sVar1 = 0x7fff;
        }
        if (lVar2 < -0x80000000) {
          sVar1 = -0x8000;
        }
        psVar12[1] = sVar1;
      }
    }
    else if (iVar7 < iVar10) {
      iVar11 = (iVar15 >> (iVar10 - iVar7 & 0x1fU)) + iVar9;
      iVar14 = iVar10 + 1;
      if (iVar14 < 0x20) {
        if (iVar14 < -0x1f) {
          lVar2 = (longlong)(iVar11 >> 0x1f);
        }
        else if (iVar14 < 0) {
          lVar2 = (longlong)(iVar11 >> -iVar14);
        }
        else {
          lVar2 = (longlong)iVar11 << iVar14;
        }
      }
      else {
        lVar2 = (longlong)iVar11 << 0x1f;
      }
      sVar1 = (short)((ulonglong)lVar2 >> 0x10);
      if (0x7fffffff < lVar2) {
        sVar1 = 0x7fff;
      }
      if (lVar2 < -0x80000000) {
        sVar1 = -0x8000;
      }
      *param_1 = sVar1;
      iVar11 = (iVar8 >> (iVar10 - iVar7 & 0x1fU)) + iVar13;
      iVar14 = iVar10 + 1;
      if (iVar14 < 0x20) {
        if (iVar14 < -0x1f) {
          lVar2 = (longlong)(iVar11 >> 0x1f);
        }
        else if (iVar14 < 0) {
          lVar2 = (longlong)(iVar11 >> -iVar14);
        }
        else {
          lVar2 = (longlong)iVar11 << iVar14;
        }
      }
      else {
        lVar2 = (longlong)iVar11 << 0x1f;
      }
      sVar1 = (short)((ulonglong)lVar2 >> 0x10);
      if (0x7fffffff < lVar2) {
        sVar1 = 0x7fff;
      }
      if (lVar2 < -0x80000000) {
        sVar1 = -0x8000;
      }
      param_1[1] = sVar1;
      iVar11 = iVar10 + 1;
      iVar9 = iVar9 - (iVar15 >> (iVar10 - iVar7 & 0x1fU));
      if (iVar11 < 0x20) {
        if (iVar11 < -0x1f) {
          lVar2 = (longlong)(iVar9 >> 0x1f);
        }
        else if (iVar11 < 0) {
          lVar2 = (longlong)(iVar9 >> -iVar11);
        }
        else {
          lVar2 = (longlong)iVar9 << iVar11;
        }
      }
      else {
        lVar2 = (longlong)iVar9 << 0x1f;
      }
      sVar1 = (short)((ulonglong)lVar2 >> 0x10);
      if (0x7fffffff < lVar2) {
        sVar1 = 0x7fff;
      }
      if (lVar2 < -0x80000000) {
        sVar1 = -0x8000;
      }
      *psVar12 = sVar1;
      iVar13 = iVar13 - (iVar8 >> (iVar10 - iVar7 & 0x1fU));
      iVar9 = iVar10 + 1;
      if (iVar9 < 0x20) {
        if (iVar9 < -0x1f) {
          lVar2 = (longlong)(iVar13 >> 0x1f);
        }
        else if (iVar9 < 0) {
          lVar2 = (longlong)(iVar13 >> -iVar9);
        }
        else {
          lVar2 = (longlong)iVar13 << iVar9;
        }
      }
      else {
        lVar2 = (longlong)iVar13 << 0x1f;
      }
      sVar1 = (short)((ulonglong)lVar2 >> 0x10);
      if (0x7fffffff < lVar2) {
        sVar1 = 0x7fff;
      }
      if (lVar2 < -0x80000000) {
        sVar1 = -0x8000;
      }
      psVar12[1] = sVar1;
    }
    else {
      iVar11 = (iVar9 >> (iVar7 - iVar10 & 0x1fU)) + iVar15;
      iVar14 = iVar7 + 1;
      if (iVar14 < 0x20) {
        if (iVar14 < -0x1f) {
          lVar2 = (longlong)(iVar11 >> 0x1f);
        }
        else if (iVar14 < 0) {
          lVar2 = (longlong)(iVar11 >> -iVar14);
        }
        else {
          lVar2 = (longlong)iVar11 << iVar14;
        }
      }
      else {
        lVar2 = (longlong)iVar11 << 0x1f;
      }
      sVar1 = (short)((ulonglong)lVar2 >> 0x10);
      if (0x7fffffff < lVar2) {
        sVar1 = 0x7fff;
      }
      if (lVar2 < -0x80000000) {
        sVar1 = -0x8000;
      }
      *param_1 = sVar1;
      iVar11 = (iVar13 >> (iVar7 - iVar10 & 0x1fU)) + iVar8;
      iVar14 = iVar7 + 1;
      if (iVar14 < 0x20) {
        if (iVar14 < -0x1f) {
          lVar2 = (longlong)(iVar11 >> 0x1f);
        }
        else if (iVar14 < 0) {
          lVar2 = (longlong)(iVar11 >> -iVar14);
        }
        else {
          lVar2 = (longlong)iVar11 << iVar14;
        }
      }
      else {
        lVar2 = (longlong)iVar11 << 0x1f;
      }
      sVar1 = (short)((ulonglong)lVar2 >> 0x10);
      if (0x7fffffff < lVar2) {
        sVar1 = 0x7fff;
      }
      if (lVar2 < -0x80000000) {
        sVar1 = -0x8000;
      }
      param_1[1] = sVar1;
      iVar15 = (iVar9 >> (iVar7 - iVar10 & 0x1fU)) - iVar15;
      iVar9 = iVar7 + 1;
      if (iVar9 < 0x20) {
        if (iVar9 < -0x1f) {
          lVar2 = (longlong)(iVar15 >> 0x1f);
        }
        else if (iVar9 < 0) {
          lVar2 = (longlong)(iVar15 >> -iVar9);
        }
        else {
          lVar2 = (longlong)iVar15 << iVar9;
        }
      }
      else {
        lVar2 = (longlong)iVar15 << 0x1f;
      }
      sVar1 = (short)((ulonglong)lVar2 >> 0x10);
      if (0x7fffffff < lVar2) {
        sVar1 = 0x7fff;
      }
      if (lVar2 < -0x80000000) {
        sVar1 = -0x8000;
      }
      *psVar12 = sVar1;
      iVar8 = (iVar13 >> (iVar7 - iVar10 & 0x1fU)) - iVar8;
      iVar9 = iVar7 + 1;
      if (iVar9 < 0x20) {
        if (iVar9 < -0x1f) {
          lVar2 = (longlong)(iVar8 >> 0x1f);
        }
        else if (iVar9 < 0) {
          lVar2 = (longlong)(iVar8 >> -iVar9);
        }
        else {
          lVar2 = (longlong)iVar8 << iVar9;
        }
      }
      else {
        lVar2 = (longlong)iVar8 << 0x1f;
      }
      sVar1 = (short)((ulonglong)lVar2 >> 0x10);
      if (0x7fffffff < lVar2) {
        sVar1 = 0x7fff;
      }
      if (lVar2 < -0x80000000) {
        sVar1 = -0x8000;
      }
      psVar12[1] = sVar1;
    }
    iVar6 = iVar6 + 1;
    param_1 = param_1 + 2;
    psVar12 = psVar12 + 2;
  } while (iVar6 < 4);
  return;
}


