/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002af30 */

undefined4 FUN_ram_0002af30(int param_1,int param_2,uint *param_3,int *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  short local_34;
  short local_30;
  
  local_44 = 0;
  iVar11 = 0;
  local_40 = 0;
  iVar13 = 0;
  iVar18 = -100;
  local_3c = -100;
  iVar15 = -100;
  local_38 = -100;
  iVar17 = 0;
  if (0 < param_2) {
    do {
      iVar18 = *(int *)(param_1 + iVar17 * 0x10);
      iVar11 = iVar18 >> 0x10;
      iVar15 = (int)(short)iVar18;
      iVar18 = *(int *)(iVar17 * 0x10 + param_1 + 4);
      iVar13 = iVar18 >> 0x10;
      iVar18 = (int)(short)iVar18;
      if (iVar15 < local_3c) {
        iVar11 = local_44 + (iVar11 >> (local_3c - iVar15 & 0x1fU));
        iVar15 = local_3c;
      }
      else {
        iVar11 = (local_44 >> (iVar15 - local_3c & 0x1fU)) + iVar11;
      }
      if (iVar18 < local_38) {
        iVar13 = (iVar13 >> (local_38 - iVar18 & 0x1fU)) + local_40;
        iVar18 = local_38;
      }
      else {
        iVar13 = iVar13 + (local_40 >> (iVar18 - local_38 & 0x1fU));
      }
      iVar17 = iVar17 + 1;
      local_44 = iVar11;
      local_40 = iVar13;
      local_3c = iVar15;
      local_38 = iVar18;
    } while (iVar17 < param_2);
  }
  if (iVar18 < iVar15) {
    uVar12 = iVar11 + (iVar13 >> (iVar15 - iVar18 & 0x1fU));
    iVar18 = iVar15;
  }
  else {
    uVar12 = (iVar11 >> (iVar18 - iVar15 & 0x1fU)) + iVar13;
  }
  uVar14 = uVar12;
  if ((int)uVar12 < 0) {
    uVar14 = ~uVar12;
  }
  uVar14 = 0x10 - (LZCOUNT(uVar14) + -1);
  uVar12 = (int)(short)((int)uVar12 >> (uVar14 & 0x1f)) - 0x4000;
  iVar13 = (int)uVar12 >> 2;
  iVar15 = iVar13 * 2;
  iVar11 = (int)*(short *)(&DAT_ram_dcf81800 + iVar15);
  iVar15 = (int)*(short *)(&DAT_ram_dcf81802 + iVar15);
  if (0xffe < iVar13) {
    iVar15 = iVar11;
  }
  uVar12 = uVar12 & 3;
  if (uVar12 != 0) {
    sVar8 = (short)(iVar15 >> 2);
    sVar5 = (short)(iVar11 >> 2);
    sVar6 = (short)(iVar11 >> 1);
    if (uVar12 == 1) {
      iVar11 = (int)(short)(sVar5 + sVar6 + sVar8);
    }
    else {
      sVar7 = (short)(iVar15 >> 1);
      if (uVar12 == 2) {
        iVar11 = (int)(short)(sVar7 + sVar6);
      }
      else if (uVar12 == 3) {
        iVar11 = (int)(short)(sVar8 + sVar7 + sVar5);
      }
      else {
        iVar11 = 0;
      }
    }
  }
  iVar18 = -uVar14 - iVar18;
  uVar12 = iVar11 - (iVar11 >> 3);
  if (param_2 < 0x41) {
    iVar18 = iVar18 + 8;
  }
  else {
    uVar12 = (iVar11 >> 6) + uVar12;
    iVar18 = iVar18 + 9;
  }
  *param_3 = uVar12;
  *param_4 = iVar18;
  iVar15 = 0;
  if (0 < param_2) {
    do {
      uVar9 = *(undefined4 *)(param_1 + iVar15 * 0x10);
      puVar16 = (uint *)(iVar15 * 0x10 + param_1);
      local_34 = (short)((uint)uVar9 >> 0x10);
      uVar1 = (ulonglong)(uint)(int)local_34 * (ulonglong)(uVar12 & 0xffff);
      uVar2 = (longlong)(int)local_34 * (longlong)(int)((int)(short)uVar12 & 0xffff0000);
      uVar3 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
        uVar3 = 0x7fffffffffffffff;
      }
      uVar14 = (uint)uVar3;
      uVar4 = uVar14;
      if ((int)uVar14 < 0) {
        uVar4 = ~uVar14;
      }
      uVar10 = ((short)uVar9 + iVar18 + 2) - (LZCOUNT(uVar4) + -1);
      iVar11 = (int)uVar14 >> (0x10U - (LZCOUNT(uVar4) + -1) & 0x1f);
      if ((uVar10 & 1) != 0) {
        iVar11 = iVar11 >> 1;
        uVar10 = uVar10 + 1;
      }
      uVar14 = (int)(short)iVar11 - 0x2000;
      iVar17 = (int)uVar14 >> 2;
      iVar11 = iVar17 * 2;
      iVar13 = (int)*(short *)(&DAT_ram_dcfa1000 + iVar11);
      iVar11 = (int)*(short *)(&DAT_ram_dcfa1002 + iVar11);
      if (0x17fe < iVar17) {
        iVar11 = iVar13;
      }
      uVar14 = uVar14 & 3;
      if (uVar14 != 0) {
        sVar8 = (short)(iVar11 >> 2);
        sVar5 = (short)(iVar13 >> 2);
        sVar6 = (short)(iVar13 >> 1);
        if (uVar14 == 1) {
          sVar8 = sVar5 + sVar6 + sVar8;
        }
        else {
          sVar7 = (short)(iVar11 >> 1);
          if (uVar14 == 2) {
            sVar8 = sVar7 + sVar6;
          }
          else {
            if (uVar14 != 3) {
              iVar13 = 0;
              goto LAB_ram_0002b272;
            }
            sVar8 = sVar7 + sVar5 + sVar8;
          }
        }
        iVar13 = (int)sVar8;
      }
LAB_ram_0002b272:
      *puVar16 = (int)uVar10 >> 1 & 0xffffU | iVar13 << 0x10;
      local_30 = (short)(puVar16[1] >> 0x10);
      uVar1 = (ulonglong)(uint)(int)local_30 * (ulonglong)(uVar12 & 0xffff);
      uVar2 = (longlong)(int)local_30 * (longlong)(int)((int)(short)uVar12 & 0xffff0000);
      uVar3 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
        uVar3 = 0x7fffffffffffffff;
      }
      uVar14 = (uint)uVar3;
      uVar4 = uVar14;
      if ((int)uVar14 < 0) {
        uVar4 = ~uVar14;
      }
      uVar10 = ((short)puVar16[1] + iVar18 + 2) - (LZCOUNT(uVar4) + -1);
      iVar11 = (int)uVar14 >> (0x10U - (LZCOUNT(uVar4) + -1) & 0x1f);
      if ((uVar10 & 1) != 0) {
        iVar11 = iVar11 >> 1;
        uVar10 = uVar10 + 1;
      }
      uVar14 = (int)(short)iVar11 - 0x2000;
      iVar17 = (int)uVar14 >> 2;
      iVar11 = iVar17 * 2;
      iVar13 = (int)*(short *)(&DAT_ram_dcfa1000 + iVar11);
      iVar11 = (int)*(short *)(&DAT_ram_dcfa1002 + iVar11);
      if (0x17fe < iVar17) {
        iVar11 = iVar13;
      }
      uVar14 = uVar14 & 3;
      if (uVar14 != 0) {
        sVar8 = (short)(iVar11 >> 2);
        sVar5 = (short)(iVar13 >> 2);
        sVar6 = (short)(iVar13 >> 1);
        if (uVar14 == 1) {
          sVar8 = sVar5 + sVar6 + sVar8;
        }
        else {
          sVar7 = (short)(iVar11 >> 1);
          if (uVar14 == 2) {
            sVar8 = sVar7 + sVar6;
          }
          else {
            if (uVar14 != 3) {
              iVar13 = 0;
              goto LAB_ram_0002b332;
            }
            sVar8 = sVar7 + sVar5 + sVar8;
          }
        }
        iVar13 = (int)sVar8;
      }
LAB_ram_0002b332:
      iVar15 = iVar15 + 1;
      puVar16[1] = iVar13 << 0x10 | (int)uVar10 >> 1 & 0xffffU;
    } while (iVar15 < param_2);
  }
  return 1;
}


