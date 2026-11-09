/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000303a8 */

undefined4
FUN_ram_000303a8(int param_1,short *param_2,uint param_3,uint param_4,int param_5,int param_6,
                int param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  int iVar16;
  short *psVar17;
  int iVar18;
  short sVar19;
  ushort uVar20;
  undefined4 local_40;
  undefined4 local_3c;
  short local_38;
  undefined4 local_34;
  undefined4 local_30;
  short local_2c;
  
  local_40 = DAT_ram_00054cfc;
  local_3c = DAT_ram_00054d00;
  local_38 = DAT_ram_00054d04;
  local_34 = DAT_ram_00054d08;
  local_30 = DAT_ram_00054d0c;
  local_2c = DAT_ram_00054d10;
  if (param_5 - 1U < 4) {
    iVar16 = (param_3 & 7) * 8;
    psVar17 = (short *)(&DAT_ram_0005ac9c + iVar16);
    switch(param_5) {
    case 1:
      iVar14 = 0;
      iVar9 = (param_3 & 0xf) * 4;
      do {
        iVar18 = *(int *)(param_1 + iVar14 * 4);
        uVar12 = 0;
        if (param_7 == -1) {
          if (0 < param_6) {
            do {
              uVar1 = (ulonglong)uVar12 * (ulonglong)(param_4 & 0xffff);
              uVar2 = (longlong)(int)uVar12 * (longlong)(int)(param_4 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              uVar11 = *(uint *)(iVar18 + (int)uVar3 * 4);
              iVar13 = uVar12 * 2;
              uVar12 = uVar12 + 1;
              *(ushort *)((int)&local_40 + iVar13) = -(((ushort)(uVar11 >> 0x14) ^ 0x800) - 0x800);
              *(ushort *)((int)&local_34 + iVar13) =
                   -(((ushort)(uVar11 >> 4) & 0xfff ^ 0x800) - 0x800);
            } while ((int)uVar12 < param_6);
          }
        }
        else if (0 < param_6) {
          do {
            uVar1 = (ulonglong)uVar12 * (ulonglong)(param_4 & 0xffff);
            uVar2 = (longlong)(int)uVar12 * (longlong)(int)(param_4 & 0xffff0000);
            uVar3 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
              uVar3 = 0x7fffffffffffffff;
            }
            uVar11 = *(uint *)(iVar18 + (int)uVar3 * 4);
            iVar13 = uVar12 * 2;
            uVar12 = uVar12 + 1;
            *(ushort *)((int)&local_40 + iVar13) = ((ushort)(uVar11 >> 0x14) ^ 0x800) - 0x800;
            *(ushort *)((int)&local_34 + iVar13) = ((ushort)(uVar11 >> 4) & 0xfff ^ 0x800) - 0x800;
          } while ((int)uVar12 < param_6);
        }
        *param_2 = (short)local_40 << 2;
        param_2[1] = (short)local_34 * -4;
        sVar19 = (short)local_3c + local_40._2_2_ + local_3c._2_2_ + local_38;
        sVar15 = (short)local_30 + local_34._2_2_ + local_30._2_2_ + local_2c;
        param_2[2] = sVar19 + (short)local_3c * -2;
        param_2[3] = (short)local_30 * 2 - sVar15;
        uVar7 = sVar19 + local_3c._2_2_ * -2;
        uVar8 = sVar15 + local_30._2_2_ * -2;
        uVar12 = (uint)*psVar17;
        uVar1 = (ulonglong)uVar12 * (ulonglong)uVar7;
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar7 & 0xffff0000);
        uVar3 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
          uVar3 = 0x7fffffffffffffff;
        }
        uVar11 = (uint)*(short *)(&DAT_ram_0005ac9e + iVar16);
        uVar20 = sVar19 + local_38 * -2;
        uVar1 = (ulonglong)uVar11 * (ulonglong)uVar8;
        uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uVar8 & 0xffff0000);
        uVar4 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
          uVar4 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar12 * (ulonglong)uVar8;
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar8 & 0xffff0000);
        uVar5 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
          uVar5 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar11 * (ulonglong)uVar7;
        uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uVar7 & 0xffff0000);
        uVar6 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
          uVar6 = 0x7fffffffffffffff;
        }
        param_2[5] = (short)(-((int)uVar5 + (int)uVar6) >> 0xf);
        param_2[4] = (short)((int)uVar3 - (int)uVar4 >> 0xf);
        uVar8 = sVar15 + local_2c * -2;
        uVar12 = (uint)*(short *)(&DAT_ram_0005ac9c + iVar9);
        uVar1 = (ulonglong)uVar12 * (ulonglong)uVar20;
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar20 & 0xffff0000);
        uVar3 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
          uVar3 = 0x7fffffffffffffff;
        }
        uVar11 = (uint)*(short *)(&DAT_ram_0005ac9e + iVar9);
        iVar14 = iVar14 + 1;
        uVar1 = (ulonglong)uVar11 * (ulonglong)uVar8;
        uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uVar8 & 0xffff0000);
        uVar4 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
          uVar4 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar12 * (ulonglong)uVar8;
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar8 & 0xffff0000);
        uVar5 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
          uVar5 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar11 * (ulonglong)uVar20;
        uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uVar20 & 0xffff0000);
        uVar6 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
          uVar6 = 0x7fffffffffffffff;
        }
        param_2[6] = (short)((int)uVar3 - (int)uVar4 >> 0xf);
        param_2[7] = (short)(-((int)uVar5 + (int)uVar6) >> 0xf);
        param_2 = param_2 + 8;
      } while (iVar14 < 4);
      break;
    case 2:
      iVar9 = 0;
      do {
        iVar14 = *(int *)(param_1 + iVar9 * 4);
        uVar12 = 0;
        if (param_7 == -1) {
          if (0 < param_6) {
            do {
              uVar1 = (ulonglong)uVar12 * (ulonglong)(param_4 & 0xffff);
              uVar2 = (longlong)(int)uVar12 * (longlong)(int)(param_4 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              uVar11 = *(uint *)(iVar14 + (int)uVar3 * 4);
              iVar18 = uVar12 * 2;
              uVar12 = uVar12 + 1;
              *(ushort *)((int)&local_40 + iVar18) = -(((ushort)(uVar11 >> 0x14) ^ 0x800) - 0x800);
              *(ushort *)((int)&local_34 + iVar18) =
                   -(((ushort)(uVar11 >> 4) & 0xfff ^ 0x800) - 0x800);
            } while ((int)uVar12 < param_6);
          }
        }
        else if (0 < param_6) {
          do {
            uVar1 = (ulonglong)uVar12 * (ulonglong)(param_4 & 0xffff);
            uVar2 = (longlong)(int)uVar12 * (longlong)(int)(param_4 & 0xffff0000);
            uVar3 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
              uVar3 = 0x7fffffffffffffff;
            }
            uVar11 = *(uint *)(iVar14 + (int)uVar3 * 4);
            iVar18 = uVar12 * 2;
            uVar12 = uVar12 + 1;
            *(ushort *)((int)&local_40 + iVar18) = ((ushort)(uVar11 >> 0x14) ^ 0x800) - 0x800;
            *(ushort *)((int)&local_34 + iVar18) = ((ushort)(uVar11 >> 4) & 0xfff ^ 0x800) - 0x800;
          } while ((int)uVar12 < param_6);
        }
        iVar9 = iVar9 + 1;
        *param_2 = (short)local_40 - local_40._2_2_;
        uVar7 = local_40._2_2_ + (short)local_40;
        param_2[1] = local_34._2_2_ - (short)local_34;
        uVar8 = local_34._2_2_ + (short)local_34;
        uVar12 = (uint)*psVar17;
        uVar1 = (ulonglong)uVar12 * (ulonglong)uVar7;
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar7 & 0xffff0000);
        uVar3 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
          uVar3 = 0x7fffffffffffffff;
        }
        uVar11 = (uint)*(short *)(&DAT_ram_0005ac9e + iVar16);
        uVar1 = (ulonglong)uVar11 * (ulonglong)uVar8;
        uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uVar8 & 0xffff0000);
        uVar4 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
          uVar4 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar12 * (ulonglong)uVar8;
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar8 & 0xffff0000);
        uVar5 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
          uVar5 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar11 * (ulonglong)uVar7;
        uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uVar7 & 0xffff0000);
        uVar6 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
          uVar6 = 0x7fffffffffffffff;
        }
        param_2[2] = (short)((int)uVar3 - (int)uVar4 >> 0xf);
        param_2[3] = (short)(-((int)uVar5 + (int)uVar6) >> 0xf);
        param_2[4] = (short)local_3c - local_3c._2_2_;
        uVar8 = (short)local_3c + local_3c._2_2_;
        uVar1 = (ulonglong)uVar12 * (ulonglong)uVar8;
        uVar7 = local_30._2_2_ + (short)local_30;
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar8 & 0xffff0000);
        uVar3 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
          uVar3 = 0x7fffffffffffffff;
        }
        param_2[5] = local_30._2_2_ - (short)local_30;
        uVar1 = (ulonglong)uVar11 * (ulonglong)uVar7;
        uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uVar7 & 0xffff0000);
        uVar4 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
          uVar4 = 0x7fffffffffffffff;
        }
        param_2[6] = (short)((int)uVar3 - (int)uVar4 >> 0xf);
        uVar1 = (ulonglong)uVar12 * (ulonglong)uVar7;
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar7 & 0xffff0000);
        uVar3 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
          uVar3 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar11 * (ulonglong)uVar8;
        uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uVar8 & 0xffff0000);
        uVar4 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
          uVar4 = 0x7fffffffffffffff;
        }
        param_2[7] = (short)(-((int)uVar3 + (int)uVar4) >> 0xf);
        param_2 = param_2 + 8;
      } while (iVar9 < 4);
      break;
    case 3:
      iVar14 = 0;
      iVar9 = (param_3 & 0xf) * 4;
      do {
        iVar18 = *(int *)(param_1 + iVar14 * 4);
        uVar12 = 0;
        if (param_7 == -1) {
          if (0 < param_6) {
            do {
              uVar1 = (ulonglong)uVar12 * (ulonglong)(param_4 & 0xffff);
              uVar2 = (longlong)(int)uVar12 * (longlong)(int)(param_4 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              uVar11 = *(uint *)(iVar18 + (int)uVar3 * 4);
              iVar13 = uVar12 * 2;
              uVar12 = uVar12 + 1;
              *(ushort *)((int)&local_40 + iVar13) = -(((ushort)(uVar11 >> 0x14) ^ 0x800) - 0x800);
              *(ushort *)((int)&local_34 + iVar13) =
                   -(((ushort)(uVar11 >> 4) & 0xfff ^ 0x800) - 0x800);
            } while ((int)uVar12 < param_6);
          }
        }
        else if (0 < param_6) {
          do {
            uVar1 = (ulonglong)uVar12 * (ulonglong)(param_4 & 0xffff);
            uVar2 = (longlong)(int)uVar12 * (longlong)(int)(param_4 & 0xffff0000);
            uVar3 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
              uVar3 = 0x7fffffffffffffff;
            }
            uVar11 = *(uint *)(iVar18 + (int)uVar3 * 4);
            iVar13 = uVar12 * 2;
            uVar12 = uVar12 + 1;
            *(ushort *)((int)&local_40 + iVar13) = ((ushort)(uVar11 >> 0x14) ^ 0x800) - 0x800;
            *(ushort *)((int)&local_34 + iVar13) = ((ushort)(uVar11 >> 4) & 0xfff ^ 0x800) - 0x800;
          } while ((int)uVar12 < param_6);
        }
        sVar19 = local_40._2_2_ + (short)local_40 + (short)local_3c + local_3c._2_2_;
        sVar15 = local_34._2_2_ + (short)local_34 + (short)local_30 + local_30._2_2_;
        *param_2 = sVar19 + local_40._2_2_ * -2;
        param_2[1] = local_34._2_2_ * 2 - sVar15;
        uVar7 = sVar19 + (short)local_3c * -2;
        uVar8 = sVar15 + (short)local_30 * -2;
        uVar12 = (uint)*psVar17;
        uVar1 = (ulonglong)uVar12 * (ulonglong)uVar7;
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar7 & 0xffff0000);
        uVar3 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
          uVar3 = 0x7fffffffffffffff;
        }
        uVar11 = (uint)*(short *)(&DAT_ram_0005ac9e + iVar16);
        uVar1 = (ulonglong)uVar11 * (ulonglong)uVar8;
        uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uVar8 & 0xffff0000);
        uVar4 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
          uVar4 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar12 * (ulonglong)uVar8;
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar8 & 0xffff0000);
        uVar5 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
          uVar5 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar11 * (ulonglong)uVar7;
        uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uVar7 & 0xffff0000);
        uVar6 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
          uVar6 = 0x7fffffffffffffff;
        }
        param_2[3] = (short)(-((int)uVar5 + (int)uVar6) >> 0xf);
        param_2[2] = (short)((int)uVar3 - (int)uVar4 >> 0xf);
        uVar7 = sVar19 + local_3c._2_2_ * -2;
        uVar8 = sVar15 + local_30._2_2_ * -2;
        uVar12 = (uint)*(short *)(&DAT_ram_0005ac9c + iVar9);
        uVar1 = (ulonglong)uVar12 * (ulonglong)uVar7;
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar7 & 0xffff0000);
        uVar3 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
          uVar3 = 0x7fffffffffffffff;
        }
        uVar11 = (uint)*(short *)(&DAT_ram_0005ac9e + iVar9);
        iVar14 = iVar14 + 1;
        uVar1 = (ulonglong)uVar11 * (ulonglong)uVar8;
        uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uVar8 & 0xffff0000);
        uVar4 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
          uVar4 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar12 * (ulonglong)uVar8;
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar8 & 0xffff0000);
        uVar5 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
          uVar5 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar11 * (ulonglong)uVar7;
        uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uVar7 & 0xffff0000);
        uVar6 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
          uVar6 = 0x7fffffffffffffff;
        }
        param_2[4] = (short)((int)uVar3 - (int)uVar4 >> 0xf);
        param_2[5] = (short)(-((int)uVar5 + (int)uVar6) >> 0xf);
        param_2[6] = local_38 << 2;
        param_2[7] = local_2c * -4;
        param_2 = param_2 + 8;
      } while (iVar14 < 4);
      break;
    case 4:
      iVar18 = 0;
      iVar14 = (param_3 & 0xf) * 4;
      iVar9 = (param_3 * 3 & 0xf) * 4;
      do {
        iVar13 = *(int *)(param_1 + iVar18 * 4);
        uVar12 = 0;
        if (param_7 == -1) {
          if (0 < param_6) {
            do {
              uVar1 = (ulonglong)uVar12 * (ulonglong)(param_4 & 0xffff);
              uVar2 = (longlong)(int)uVar12 * (longlong)(int)(param_4 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              uVar11 = *(uint *)(iVar13 + (int)uVar3 * 4);
              iVar10 = uVar12 * 2;
              uVar12 = uVar12 + 1;
              *(ushort *)((int)&local_40 + iVar10) = -(((ushort)(uVar11 >> 0x14) ^ 0x800) - 0x800);
              *(ushort *)((int)&local_34 + iVar10) =
                   -(((ushort)(uVar11 >> 4) & 0xfff ^ 0x800) - 0x800);
            } while ((int)uVar12 < param_6);
          }
        }
        else if (0 < param_6) {
          do {
            uVar1 = (ulonglong)uVar12 * (ulonglong)(param_4 & 0xffff);
            uVar2 = (longlong)(int)uVar12 * (longlong)(int)(param_4 & 0xffff0000);
            uVar3 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
              uVar3 = 0x7fffffffffffffff;
            }
            uVar11 = *(uint *)(iVar13 + (int)uVar3 * 4);
            iVar10 = uVar12 * 2;
            uVar12 = uVar12 + 1;
            *(ushort *)((int)&local_40 + iVar10) = ((ushort)(uVar11 >> 0x14) ^ 0x800) - 0x800;
            *(ushort *)((int)&local_34 + iVar10) = ((ushort)(uVar11 >> 4) & 0xfff ^ 0x800) - 0x800;
          } while ((int)uVar12 < param_6);
        }
        sVar19 = local_40._2_2_ + (short)local_40 + (short)local_3c + local_3c._2_2_;
        sVar15 = local_34._2_2_ + (short)local_34 + (short)local_30 + local_30._2_2_;
        *param_2 = sVar19 + local_40._2_2_ * -2;
        param_2[1] = local_34._2_2_ * 2 - sVar15;
        uVar7 = sVar19 + (short)local_3c * -2;
        uVar8 = sVar15 + (short)local_30 * -2;
        uVar12 = (uint)*psVar17;
        uVar1 = (ulonglong)uVar12 * (ulonglong)uVar7;
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar7 & 0xffff0000);
        uVar3 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
          uVar3 = 0x7fffffffffffffff;
        }
        uVar11 = (uint)*(short *)(&DAT_ram_0005ac9e + iVar16);
        uVar1 = (ulonglong)uVar11 * (ulonglong)uVar8;
        uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uVar8 & 0xffff0000);
        uVar4 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
          uVar4 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar12 * (ulonglong)uVar8;
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar8 & 0xffff0000);
        uVar5 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
          uVar5 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar11 * (ulonglong)uVar7;
        uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uVar7 & 0xffff0000);
        uVar6 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
          uVar6 = 0x7fffffffffffffff;
        }
        param_2[3] = (short)(-((int)uVar5 + (int)uVar6) >> 0xf);
        param_2[2] = (short)((int)uVar3 - (int)uVar4 >> 0xf);
        uVar7 = sVar19 + local_3c._2_2_ * -2;
        uVar8 = sVar15 + local_30._2_2_ * -2;
        uVar12 = (uint)*(short *)(&DAT_ram_0005ac9c + iVar14);
        uVar1 = (ulonglong)uVar12 * (ulonglong)uVar7;
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar7 & 0xffff0000);
        uVar3 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
          uVar3 = 0x7fffffffffffffff;
        }
        uVar11 = (uint)*(short *)(&DAT_ram_0005ac9e + iVar14);
        uVar20 = sVar19 + (short)local_40 * -2;
        uVar1 = (ulonglong)uVar11 * (ulonglong)uVar8;
        uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uVar8 & 0xffff0000);
        uVar4 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
          uVar4 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar12 * (ulonglong)uVar8;
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar8 & 0xffff0000);
        uVar5 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
          uVar5 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar11 * (ulonglong)uVar7;
        uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uVar7 & 0xffff0000);
        uVar6 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
          uVar6 = 0x7fffffffffffffff;
        }
        param_2[5] = (short)(-((int)uVar5 + (int)uVar6) >> 0xf);
        param_2[4] = (short)((int)uVar3 - (int)uVar4 >> 0xf);
        uVar8 = sVar15 + (short)local_34 * -2;
        uVar12 = (uint)*(short *)(&DAT_ram_0005ac9c + iVar9);
        uVar1 = (ulonglong)uVar12 * (ulonglong)uVar20;
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar20 & 0xffff0000);
        uVar3 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
          uVar3 = 0x7fffffffffffffff;
        }
        uVar11 = (uint)*(short *)(&DAT_ram_0005ac9e + iVar9);
        iVar18 = iVar18 + 1;
        uVar1 = (ulonglong)uVar11 * (ulonglong)uVar8;
        uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uVar8 & 0xffff0000);
        uVar4 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
          uVar4 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar12 * (ulonglong)uVar8;
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)((int)(short)uVar8 & 0xffff0000);
        uVar5 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
          uVar5 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar11 * (ulonglong)uVar20;
        uVar2 = (longlong)(int)uVar11 * (longlong)(int)((int)(short)uVar20 & 0xffff0000);
        uVar6 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
          uVar6 = 0x7fffffffffffffff;
        }
        param_2[6] = (short)((int)uVar3 - (int)uVar4 >> 0xf);
        param_2[7] = (short)(-((int)uVar5 + (int)uVar6) >> 0xf);
        param_2 = param_2 + 8;
      } while (iVar18 < 4);
    }
  }
  return 0;
}


