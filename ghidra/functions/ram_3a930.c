/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003a930 */

undefined4
FUN_ram_0003a930(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  int iVar23;
  undefined4 uVar24;
  uint uVar25;
  int *piVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint uStack_100;
  uint uStack_fc;
  int local_e8;
  int local_e4;
  int local_e0;
  int iStack_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int iStack_bc;
  int local_b8;
  int local_b4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  iVar29 = param_5;
  if (0 < param_5) {
    iVar29 = 0;
  }
  iVar28 = 0;
  if (0 < param_3) {
    do {
      iVar27 = 0;
      if (0 < param_3) {
        iVar23 = iVar28 * 0x20;
        uVar7 = param_5 - iVar29;
        do {
          iVar17 = iVar27 * 8;
          if (iVar28 == iVar27) {
            piVar26 = (int *)(iVar28 * 8 + param_1 + iVar23);
            *piVar26 = 1 << (iVar29 + param_4 & 0x1f);
            piVar26[1] = 0;
          }
          else {
            puVar10 = (undefined4 *)(param_1 + iVar23 + iVar17);
            *puVar10 = 0;
            puVar10[1] = 0;
          }
          local_e8 = *(int *)(param_2 + iVar23 + iVar17);
          local_e4 = *(int *)(iVar17 + param_2 + iVar23 + 4);
          if (uVar7 != 0) {
            iVar18 = 1 << (uVar7 - 1 & 0x1f);
            local_e8 = local_e8 + iVar18 >> (uVar7 & 0x1f);
            local_e4 = local_e4 + iVar18 >> (uVar7 & 0x1f);
          }
          iVar27 = iVar27 + 1;
          *(int *)(iVar17 + iVar23 + -0x2307c240) = local_e8;
          *(int *)(iVar17 + iVar23 + -0x2307c23c) = local_e4;
        } while (iVar27 < param_3);
      }
      iVar28 = iVar28 + 1;
    } while (iVar28 < param_3);
  }
  iVar27 = 0;
  iVar28 = param_3 + -1;
  if (0 < iVar28) {
    do {
      iVar17 = iVar28 - iVar27;
      iVar18 = iVar17 * 8;
      iVar23 = iVar17 * 0x28;
      uVar19 = *(uint *)(iVar23 + -0x2307c240);
      uVar11 = *(uint *)(iVar23 + -0x2307c23c);
      uVar7 = uVar19;
      if ((int)uVar19 < 0) {
        uVar7 = -uVar19;
      }
      uVar8 = uVar11;
      if ((int)uVar11 < 0) {
        uVar8 = -uVar11;
      }
      if ((int)uVar8 < (int)uVar7) {
        iVar13 = uVar7 + ((int)uVar8 >> 2) + ((int)uVar8 >> 3);
      }
      else {
        iVar13 = ((int)uVar7 >> 3) + ((int)uVar7 >> 2) + uVar8;
      }
      if (iVar13 < 0x21) {
        if (iVar28 == iVar27) {
          return 0;
        }
        bVar5 = true;
        iVar13 = iVar17 + -1;
        do {
          iVar14 = iVar13 * 8 + iVar17 * 0x20;
          iVar15 = *(int *)(iVar14 + -0x2307c240);
          iVar14 = *(int *)(iVar14 + -0x2307c23c);
          if (iVar15 < 0) {
            iVar15 = -iVar15;
          }
          if (iVar14 < 0) {
            iVar14 = -iVar14;
          }
          if (iVar14 < iVar15) {
            iVar15 = iVar15 + (iVar14 >> 2) + (iVar14 >> 3);
          }
          else {
            iVar15 = (iVar15 >> 3) + (iVar15 >> 2) + iVar14;
          }
          if (iVar15 < 0x21) {
            iVar13 = iVar13 + -1;
            if (iVar13 == -1) {
              return 0;
            }
          }
          else {
            bVar5 = false;
          }
        } while (bVar5);
        iVar15 = 1;
        if (1 < param_3) {
          iVar13 = iVar13 * 8;
          do {
            iVar12 = iVar15 * 0x20;
            iVar9 = iVar12 + iVar18;
            iVar14 = iVar12 + iVar13;
            uVar21 = *(undefined4 *)(iVar9 + -0x2307c240);
            uVar20 = *(undefined4 *)(iVar9 + -0x2307c23c);
            uVar24 = *(undefined4 *)(iVar14 + -0x2307c23c);
            *(undefined4 *)(iVar9 + -0x2307c240) = *(undefined4 *)(iVar14 + -0x2307c240);
            iVar16 = iVar15 * 8;
            *(undefined4 *)(iVar9 + -0x2307c23c) = uVar24;
            *(undefined4 *)(iVar14 + -0x2307c240) = uVar21;
            *(undefined4 *)(iVar16 + -0x2307c260) = uVar21;
            *(undefined4 *)(iVar14 + -0x2307c23c) = uVar20;
            iVar12 = iVar12 + param_1;
            *(undefined4 *)(iVar16 + -0x2307c25c) = uVar20;
            uVar24 = *(undefined4 *)(iVar12 + iVar18);
            uVar20 = *(undefined4 *)(iVar12 + iVar18 + 4);
            *(undefined4 *)(iVar16 + -0x2307c260) = uVar24;
            iVar15 = iVar15 + 1;
            *(undefined4 *)(iVar16 + -0x2307c25c) = uVar20;
            uVar21 = *(undefined4 *)(iVar12 + iVar13 + 4);
            *(undefined4 *)(iVar12 + iVar18) = *(undefined4 *)(iVar12 + iVar13);
            ((undefined4 *)(iVar12 + iVar18))[1] = uVar21;
            *(undefined4 *)(iVar12 + iVar13) = uVar24;
            ((undefined4 *)(iVar12 + iVar13))[1] = uVar20;
          } while (iVar15 < param_3);
          uVar19 = *(uint *)(iVar23 + -0x2307c240);
          uVar11 = *(uint *)(iVar23 + -0x2307c23c);
        }
      }
      iVar23 = 0;
      if (0 < iVar17) {
        do {
          iVar15 = iVar23 * 8;
          iVar13 = iVar17 * 0x20 + iVar15;
          uVar7 = *(uint *)(iVar13 + -0x2307c240);
          uVar8 = *(uint *)(iVar13 + -0x2307c23c);
          iVar13 = 0;
          if (0 < param_3) {
            do {
              iVar9 = iVar13 * 0x20;
              iVar14 = iVar9 + iVar15;
              uVar22 = *(uint *)(iVar14 + -0x2307c240);
              uVar25 = *(uint *)(iVar14 + -0x2307c23c);
              uVar6 = iVar29 + param_4;
              uVar1 = (ulonglong)uVar19 * (ulonglong)(uVar22 & 0xffff);
              uVar2 = (longlong)(int)uVar19 * (longlong)(int)(uVar22 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar11 * (ulonglong)(uVar25 & 0xffff);
              uVar2 = (longlong)(int)uVar11 * (longlong)(int)(uVar25 & 0xffff0000);
              uVar4 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
                uVar4 = 0x7fffffffffffffff;
              }
              local_b8 = (int)uVar3 - (int)uVar4;
              if (0 < (int)uVar6) {
                local_b8 = (1 << (uVar6 - 1 & 0x1f)) + local_b8 >> (uVar6 & 0x1f);
              }
              uVar1 = (ulonglong)uVar11 * (ulonglong)(uVar22 & 0xffff);
              uVar2 = (longlong)(int)uVar11 * (longlong)(int)(uVar22 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar25 * (ulonglong)(uVar19 & 0xffff);
              uVar2 = (longlong)(int)uVar25 * (longlong)(int)(uVar19 & 0xffff0000);
              uVar4 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
                uVar4 = 0x7fffffffffffffff;
              }
              local_b4 = (int)uVar3 + (int)uVar4;
              if (0 < (int)uVar6) {
                local_b4 = (1 << (uVar6 - 1 & 0x1f)) + local_b4 >> (uVar6 & 0x1f);
              }
              local_d0 = local_b8;
              local_cc = local_b4;
              uVar22 = *(uint *)(iVar9 + iVar18 + -0x2307c240);
              uVar25 = *(uint *)(iVar9 + iVar18 + -0x2307c23c);
              uVar6 = iVar29 + param_4;
              uVar1 = (ulonglong)uVar7 * (ulonglong)(uVar22 & 0xffff);
              uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar22 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar8 * (ulonglong)(uVar25 & 0xffff);
              uVar2 = (longlong)(int)uVar8 * (longlong)(int)(uVar25 & 0xffff0000);
              uVar4 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
                uVar4 = 0x7fffffffffffffff;
              }
              local_98 = (int)uVar3 - (int)uVar4;
              if (0 < (int)uVar6) {
                local_98 = local_98 + (1 << (uVar6 - 1 & 0x1f)) >> (uVar6 & 0x1f);
              }
              uVar1 = (ulonglong)uVar8 * (ulonglong)(uVar22 & 0xffff);
              uVar2 = (longlong)(int)uVar8 * (longlong)(int)(uVar22 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar25 * (ulonglong)(uVar7 & 0xffff);
              uVar2 = (longlong)(int)uVar25 * (longlong)(int)(uVar7 & 0xffff0000);
              uVar4 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
                uVar4 = 0x7fffffffffffffff;
              }
              local_94 = (int)uVar3 + (int)uVar4;
              if (0 < (int)uVar6) {
                local_94 = (1 << (uVar6 - 1 & 0x1f)) + local_94 >> (uVar6 & 0x1f);
              }
              *(int *)(iVar14 + -0x2307c240) = local_b8 - local_98;
              *(int *)(iVar14 + -0x2307c23c) = local_b4 - local_94;
              iVar9 = iVar9 + param_1;
              uVar22 = *(uint *)(iVar9 + iVar15);
              uVar6 = *(uint *)(iVar9 + iVar15 + 4);
              uVar25 = iVar29 + param_4;
              uVar1 = (ulonglong)uVar19 * (ulonglong)(uVar22 & 0xffff);
              uVar2 = (longlong)(int)uVar19 * (longlong)(int)(uVar22 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar11 * (ulonglong)(uVar6 & 0xffff);
              uVar2 = (longlong)(int)uVar11 * (longlong)(int)(uVar6 & 0xffff0000);
              uVar4 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
                uVar4 = 0x7fffffffffffffff;
              }
              local_60 = (int)uVar3 - (int)uVar4;
              if (0 < (int)uVar25) {
                local_60 = local_60 + (1 << (uVar25 - 1 & 0x1f)) >> (uVar25 & 0x1f);
              }
              uVar1 = (ulonglong)uVar11 * (ulonglong)(uVar22 & 0xffff);
              uVar2 = (longlong)(int)uVar11 * (longlong)(int)(uVar22 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar6 * (ulonglong)(uVar19 & 0xffff);
              uVar2 = (longlong)(int)uVar6 * (longlong)(int)(uVar19 & 0xffff0000);
              uVar4 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
                uVar4 = 0x7fffffffffffffff;
              }
              local_5c = (int)uVar3 + (int)uVar4;
              if (0 < (int)uVar25) {
                local_5c = (1 << (uVar25 - 1 & 0x1f)) + local_5c >> (uVar25 & 0x1f);
              }
              local_78 = local_60;
              local_74 = local_5c;
              uVar25 = *(uint *)(iVar9 + iVar18);
              uVar6 = *(uint *)(iVar9 + iVar18 + 4);
              uVar22 = iVar29 + param_4;
              uVar1 = (ulonglong)uVar7 * (ulonglong)(uVar25 & 0xffff);
              uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar25 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar8 * (ulonglong)(uVar6 & 0xffff);
              uVar2 = (longlong)(int)uVar8 * (longlong)(int)(uVar6 & 0xffff0000);
              uVar4 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
                uVar4 = 0x7fffffffffffffff;
              }
              local_40 = (int)uVar3 - (int)uVar4;
              if (0 < (int)uVar22) {
                local_40 = (1 << (uVar22 - 1 & 0x1f)) + local_40 >> (uVar22 & 0x1f);
              }
              uVar1 = (ulonglong)uVar8 * (ulonglong)(uVar25 & 0xffff);
              uVar2 = (longlong)(int)uVar8 * (longlong)(int)(uVar25 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar6 * (ulonglong)(uVar7 & 0xffff);
              uVar2 = (longlong)(int)uVar6 * (longlong)(int)(uVar7 & 0xffff0000);
              uVar4 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
                uVar4 = 0x7fffffffffffffff;
              }
              local_3c = (int)uVar3 + (int)uVar4;
              if (0 < (int)uVar22) {
                local_3c = (1 << (uVar22 - 1 & 0x1f)) + local_3c >> (uVar22 & 0x1f);
              }
              iVar13 = iVar13 + 1;
              *(int *)(iVar9 + iVar15) = local_60 - local_40;
              ((int *)(iVar9 + iVar15))[1] = local_5c - local_3c;
            } while (iVar13 < param_3);
          }
          iVar23 = iVar23 + 1;
        } while (iVar23 < iVar17);
      }
      iVar27 = iVar27 + 1;
    } while (iVar27 < iVar28);
  }
  iVar27 = 0;
  if (0 < param_3) {
    do {
      iVar18 = iVar27 * 8;
      iVar23 = *(int *)(iVar27 * 0x28 + -0x2307c240);
      iVar17 = *(int *)(iVar27 * 0x28 + -0x2307c23c);
      if (iVar23 < 0) {
        iVar23 = -iVar23;
      }
      if (iVar17 < 0) {
        iVar17 = -iVar17;
      }
      if (iVar17 < iVar23) {
        uVar7 = (iVar17 >> 2) + iVar23 + (iVar17 >> 3);
      }
      else {
        uVar7 = (iVar23 >> 3) + (iVar23 >> 2) + iVar17;
      }
      if ((int)uVar7 < 0) {
        uVar7 = ~uVar7;
      }
      uVar7 = ((0x1f - (LZCOUNT(uVar7) + -1)) - param_4) - iVar29;
      iVar23 = 0;
      if (0 < param_3) {
        do {
          iVar13 = iVar23 * 0x20 + iVar18;
          iVar15 = iVar23 * 0x20 + param_1;
          iVar17 = *(int *)(iVar15 + iVar18);
          piVar26 = (int *)(iVar15 + iVar18);
          if ((int)uVar7 < 0) {
            uVar11 = -uVar7;
            *(int *)(iVar13 + -0x2307c240) = *(int *)(iVar13 + -0x2307c240) << (uVar11 & 0x1f);
            *(int *)(iVar13 + -0x2307c23c) = *(int *)(iVar13 + -0x2307c23c) << (uVar11 & 0x1f);
            *piVar26 = iVar17 << (uVar11 & 0x1f);
            iVar17 = piVar26[1] << (uVar11 & 0x1f);
          }
          else {
            *(int *)(iVar13 + -0x2307c240) = *(int *)(iVar13 + -0x2307c240) >> (uVar7 & 0x1f);
            *(int *)(iVar13 + -0x2307c23c) = *(int *)(iVar13 + -0x2307c23c) >> (uVar7 & 0x1f);
            *piVar26 = iVar17 >> (uVar7 & 0x1f);
            iVar17 = piVar26[1] >> (uVar7 & 0x1f);
          }
          iVar23 = iVar23 + 1;
          piVar26[1] = iVar17;
        } while (iVar23 < param_3);
      }
      iVar27 = iVar27 + 1;
    } while (iVar27 < param_3);
  }
  iVar27 = 0;
  if (0 < iVar28) {
    do {
      iVar17 = iVar27 * 8;
      uVar11 = *(uint *)(iVar27 * 0x28 + -0x2307c240);
      uVar7 = *(uint *)(iVar27 * 0x28 + -0x2307c23c);
      iVar23 = iVar27;
      while (iVar23 = iVar23 + 1, iVar23 < param_3) {
        iVar13 = iVar23 * 8;
        iVar18 = iVar13 + iVar27 * 0x20;
        uVar19 = *(uint *)(iVar18 + -0x2307c240);
        uVar8 = *(uint *)(iVar18 + -0x2307c23c);
        iVar18 = 0;
        if (0 < param_3) {
          do {
            iVar14 = iVar18 * 0x20;
            iVar15 = iVar14 + iVar13;
            uVar25 = *(uint *)(iVar15 + -0x2307c240);
            uVar6 = *(uint *)(iVar15 + -0x2307c23c);
            uVar22 = iVar29 + param_4;
            uVar1 = (ulonglong)uVar11 * (ulonglong)(uVar25 & 0xffff);
            uVar2 = (longlong)(int)uVar11 * (longlong)(int)(uVar25 & 0xffff0000);
            uVar3 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
              uVar3 = 0x7fffffffffffffff;
            }
            uVar1 = (ulonglong)uVar7 * (ulonglong)(uVar6 & 0xffff);
            uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar6 & 0xffff0000);
            uVar4 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
              uVar4 = 0x7fffffffffffffff;
            }
            local_c0 = (int)uVar3 - (int)uVar4;
            if (0 < (int)uVar22) {
              local_c0 = (1 << (uVar22 - 1 & 0x1f)) + local_c0 >> (uVar22 & 0x1f);
            }
            uVar1 = (ulonglong)uVar7 * (ulonglong)(uVar25 & 0xffff);
            uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar25 & 0xffff0000);
            uVar3 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
              uVar3 = 0x7fffffffffffffff;
            }
            uVar1 = (ulonglong)uVar6 * (ulonglong)(uVar11 & 0xffff);
            uVar2 = (longlong)(int)uVar6 * (longlong)(int)(uVar11 & 0xffff0000);
            uVar4 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
              uVar4 = 0x7fffffffffffffff;
            }
            iStack_bc = (int)uVar3 + (int)uVar4;
            if (0 < (int)uVar22) {
              iStack_bc = (1 << (uVar22 - 1 & 0x1f)) + iStack_bc >> (uVar22 & 0x1f);
            }
            uVar22 = *(uint *)(iVar14 + iVar17 + -0x2307c240);
            uVar6 = *(uint *)(iVar14 + iVar17 + -0x2307c23c);
            uVar25 = iVar29 + param_4;
            uVar1 = (ulonglong)uVar19 * (ulonglong)(uVar22 & 0xffff);
            uVar2 = (longlong)(int)uVar19 * (longlong)(int)(uVar22 & 0xffff0000);
            uVar3 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
              uVar3 = 0x7fffffffffffffff;
            }
            uVar1 = (ulonglong)uVar8 * (ulonglong)(uVar6 & 0xffff);
            uVar2 = (longlong)(int)uVar8 * (longlong)(int)(uVar6 & 0xffff0000);
            uVar4 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
              uVar4 = 0x7fffffffffffffff;
            }
            local_a0 = (int)uVar3 - (int)uVar4;
            if (0 < (int)uVar25) {
              local_a0 = (1 << (uVar25 - 1 & 0x1f)) + local_a0 >> (uVar25 & 0x1f);
            }
            uVar1 = (ulonglong)uVar8 * (ulonglong)(uVar22 & 0xffff);
            uVar2 = (longlong)(int)uVar8 * (longlong)(int)(uVar22 & 0xffff0000);
            uVar3 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
              uVar3 = 0x7fffffffffffffff;
            }
            uVar1 = (ulonglong)uVar6 * (ulonglong)(uVar19 & 0xffff);
            uVar2 = (longlong)(int)uVar6 * (longlong)(int)(uVar19 & 0xffff0000);
            uVar4 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
              uVar4 = 0x7fffffffffffffff;
            }
            local_9c = (int)uVar3 + (int)uVar4;
            if (0 < (int)uVar25) {
              local_9c = (1 << (uVar25 - 1 & 0x1f)) + local_9c >> (uVar25 & 0x1f);
            }
            *(int *)(iVar15 + -0x2307c240) = local_c0 - local_a0;
            *(int *)(iVar15 + -0x2307c23c) = iStack_bc - local_9c;
            iVar14 = iVar14 + param_1;
            uVar6 = *(uint *)(iVar14 + iVar13);
            uVar22 = *(uint *)(iVar14 + iVar13 + 4);
            uVar25 = iVar29 + param_4;
            uVar1 = (ulonglong)uVar11 * (ulonglong)(uVar6 & 0xffff);
            uVar2 = (longlong)(int)uVar11 * (longlong)(int)(uVar6 & 0xffff0000);
            uVar3 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
              uVar3 = 0x7fffffffffffffff;
            }
            uVar1 = (ulonglong)uVar7 * (ulonglong)(uVar22 & 0xffff);
            uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar22 & 0xffff0000);
            uVar4 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
              uVar4 = 0x7fffffffffffffff;
            }
            local_68 = (int)uVar3 - (int)uVar4;
            if (0 < (int)uVar25) {
              local_68 = (1 << (uVar25 - 1 & 0x1f)) + local_68 >> (uVar25 & 0x1f);
            }
            uVar1 = (ulonglong)uVar7 * (ulonglong)(uVar6 & 0xffff);
            uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar6 & 0xffff0000);
            uVar3 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
              uVar3 = 0x7fffffffffffffff;
            }
            uVar1 = (ulonglong)uVar22 * (ulonglong)(uVar11 & 0xffff);
            uVar2 = (longlong)(int)uVar22 * (longlong)(int)(uVar11 & 0xffff0000);
            uVar4 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
              uVar4 = 0x7fffffffffffffff;
            }
            local_64 = (int)uVar3 + (int)uVar4;
            if (0 < (int)uVar25) {
              local_64 = (1 << (uVar25 - 1 & 0x1f)) + local_64 >> (uVar25 & 0x1f);
            }
            uVar6 = *(uint *)(iVar14 + iVar17);
            uVar25 = *(uint *)(iVar14 + iVar17 + 4);
            uVar22 = iVar29 + param_4;
            uVar1 = (ulonglong)uVar19 * (ulonglong)(uVar6 & 0xffff);
            uVar2 = (longlong)(int)uVar19 * (longlong)(int)(uVar6 & 0xffff0000);
            uVar3 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
              uVar3 = 0x7fffffffffffffff;
            }
            uVar1 = (ulonglong)uVar8 * (ulonglong)(uVar25 & 0xffff);
            uVar2 = (longlong)(int)uVar8 * (longlong)(int)(uVar25 & 0xffff0000);
            uVar4 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
              uVar4 = 0x7fffffffffffffff;
            }
            local_48 = (int)uVar3 - (int)uVar4;
            if (0 < (int)uVar22) {
              local_48 = local_48 + (1 << (uVar22 - 1 & 0x1f)) >> (uVar22 & 0x1f);
            }
            uVar1 = (ulonglong)uVar8 * (ulonglong)(uVar6 & 0xffff);
            uVar2 = (longlong)(int)uVar8 * (longlong)(int)(uVar6 & 0xffff0000);
            uVar3 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
              uVar3 = 0x7fffffffffffffff;
            }
            uVar1 = (ulonglong)uVar25 * (ulonglong)(uVar19 & 0xffff);
            uVar2 = (longlong)(int)uVar25 * (longlong)(int)(uVar19 & 0xffff0000);
            uVar4 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
              uVar4 = 0x7fffffffffffffff;
            }
            local_44 = (int)uVar3 + (int)uVar4;
            if (0 < (int)uVar22) {
              local_44 = (1 << (uVar22 - 1 & 0x1f)) + local_44 >> (uVar22 & 0x1f);
            }
            iVar18 = iVar18 + 1;
            *(int *)(iVar14 + iVar13) = local_68 - local_48;
            ((int *)(iVar14 + iVar13))[1] = local_64 - local_44;
            local_d8 = local_c0;
            local_d4 = iStack_bc;
            local_80 = local_68;
            local_7c = local_64;
          } while (iVar18 < param_3);
        }
      }
      iVar27 = iVar27 + 1;
    } while (iVar27 < iVar28);
  }
  iVar28 = 0;
  if (0 < param_3) {
    do {
      iVar27 = iVar28 * 8;
      uStack_fc = *(uint *)(iVar28 * 0x28 + -0x2307c23c);
      uStack_100 = *(uint *)(iVar28 * 0x28 + -0x2307c240);
      iVar23 = 0;
      FUN_ram_0003b814(&uStack_100,uStack_100,uStack_fc,param_4,iVar29,0);
      if (0 < param_3) {
        do {
          iVar17 = iVar23 * 0x20 + iVar27;
          uVar7 = *(uint *)(iVar17 + -0x2307c240);
          uVar11 = *(uint *)(iVar17 + -0x2307c23c);
          uVar1 = (ulonglong)uStack_100 * (ulonglong)(uVar7 & 0xffff);
          uVar2 = (longlong)(int)uStack_100 * (longlong)(int)(uVar7 & 0xffff0000);
          uVar3 = uVar1 + uVar2;
          if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
            uVar3 = 0x7fffffffffffffff;
          }
          uVar1 = (ulonglong)uStack_fc * (ulonglong)(uVar11 & 0xffff);
          uVar2 = (longlong)(int)uStack_fc * (longlong)(int)(uVar11 & 0xffff0000);
          uVar4 = uVar1 + uVar2;
          if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
            uVar4 = 0x7fffffffffffffff;
          }
          local_e0 = (int)uVar3 - (int)uVar4;
          if (0 < (int)param_4) {
            local_e0 = (1 << (param_4 - 1 & 0x1f)) + local_e0 >> (param_4 & 0x1f);
          }
          uVar1 = (ulonglong)uStack_fc * (ulonglong)(uVar7 & 0xffff);
          uVar2 = (longlong)(int)uStack_fc * (longlong)(int)(uVar7 & 0xffff0000);
          uVar3 = uVar1 + uVar2;
          if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
            uVar3 = 0x7fffffffffffffff;
          }
          uVar1 = (ulonglong)uVar11 * (ulonglong)(uStack_100 & 0xffff);
          uVar2 = (longlong)(int)uVar11 * (longlong)(int)(uStack_100 & 0xffff0000);
          uVar4 = uVar1 + uVar2;
          if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
            uVar4 = 0x7fffffffffffffff;
          }
          iStack_dc = (int)uVar3 + (int)uVar4;
          if (0 < (int)param_4) {
            iStack_dc = (1 << (param_4 - 1 & 0x1f)) + iStack_dc >> (param_4 & 0x1f);
          }
          *(int *)(iVar17 + -0x2307c240) = local_e0;
          *(int *)(iVar17 + -0x2307c23c) = iStack_dc;
          iVar17 = iVar23 * 0x20 + param_1;
          uVar7 = *(uint *)(iVar17 + iVar27);
          uVar11 = *(uint *)(iVar17 + iVar27 + 4);
          uVar1 = (ulonglong)uStack_100 * (ulonglong)(uVar7 & 0xffff);
          uVar2 = (longlong)(int)uStack_100 * (longlong)(int)(uVar7 & 0xffff0000);
          uVar3 = uVar1 + uVar2;
          if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
            uVar3 = 0x7fffffffffffffff;
          }
          uVar1 = (ulonglong)uStack_fc * (ulonglong)(uVar11 & 0xffff);
          uVar2 = (longlong)(int)uStack_fc * (longlong)(int)(uVar11 & 0xffff0000);
          uVar4 = uVar1 + uVar2;
          if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
            uVar4 = 0x7fffffffffffffff;
          }
          local_c8 = (int)uVar3 - (int)uVar4;
          if (0 < (int)param_4) {
            local_c8 = (1 << (param_4 - 1 & 0x1f)) + local_c8 >> (param_4 & 0x1f);
          }
          uVar1 = (ulonglong)uStack_fc * (ulonglong)(uVar7 & 0xffff);
          uVar2 = (longlong)(int)uStack_fc * (longlong)(int)(uVar7 & 0xffff0000);
          uVar3 = uVar1 + uVar2;
          if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
            uVar3 = 0x7fffffffffffffff;
          }
          uVar1 = (ulonglong)uVar11 * (ulonglong)(uStack_100 & 0xffff);
          uVar2 = (longlong)(int)uVar11 * (longlong)(int)(uStack_100 & 0xffff0000);
          uVar4 = uVar1 + uVar2;
          if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
            uVar4 = 0x7fffffffffffffff;
          }
          local_c4 = (int)uVar3 + (int)uVar4;
          if (0 < (int)param_4) {
            local_c4 = (1 << (param_4 - 1 & 0x1f)) + local_c4 >> (param_4 & 0x1f);
          }
          iVar23 = iVar23 + 1;
          *(int *)(iVar17 + iVar27) = local_c8;
          ((int *)(iVar17 + iVar27))[1] = local_c4;
        } while (iVar23 < param_3);
      }
      iVar28 = iVar28 + 1;
    } while (iVar28 < param_3);
  }
  if (param_6 < iVar29) {
    uVar7 = iVar29 - param_6;
    iVar29 = 0;
    if (0 < param_3) {
      do {
        iVar28 = 0;
        if (0 < param_3) {
          iVar27 = iVar29 * 0x20 + param_1;
          do {
            iVar23 = iVar28 * 8;
            local_e8 = *(int *)(iVar27 + iVar23);
            local_e4 = *(int *)(iVar27 + iVar23 + 4);
            if (uVar7 != 0) {
              iVar17 = 1 << (uVar7 - 1 & 0x1f);
              local_e8 = local_e8 + iVar17 >> (uVar7 & 0x1f);
              local_e4 = local_e4 + iVar17 >> (uVar7 & 0x1f);
            }
            iVar28 = iVar28 + 1;
            *(int *)(iVar23 + iVar27) = local_e8;
            ((int *)(iVar23 + iVar27))[1] = local_e4;
          } while (iVar28 < param_3);
        }
        iVar29 = iVar29 + 1;
      } while (iVar29 < param_3);
    }
  }
  else if (iVar29 < param_6) {
    iVar28 = 0;
    if (0 < param_3) {
      do {
        iVar27 = 0;
        if (0 < param_3) {
          iVar23 = iVar28 * 0x20 + param_1;
          do {
            iVar18 = iVar27 * 8;
            iVar17 = *(int *)(iVar23 + iVar18 + 4);
            iVar27 = iVar27 + 1;
            *(int *)(iVar18 + iVar23) = *(int *)(iVar23 + iVar18) << (param_6 - iVar29 & 0x1fU);
            ((int *)(iVar18 + iVar23))[1] = iVar17 << (param_6 - iVar29 & 0x1fU);
          } while (iVar27 < param_3);
        }
        iVar28 = iVar28 + 1;
      } while (iVar28 < param_3);
    }
  }
  iVar29 = 0;
  if (0 < param_3) {
    do {
      iVar28 = 0;
      if (0 < param_3) {
        do {
          if (iVar29 == iVar28) {
            iVar27 = iVar29 * 0x28;
            *(int *)(iVar27 + -0x2307c0c0) = 1 << (param_6 + param_4 & 0x1f);
          }
          else {
            iVar27 = iVar28 * 8 + iVar29 * 0x20;
            *(undefined4 *)(iVar27 + -0x2307c0c0) = 0;
          }
          iVar28 = iVar28 + 1;
          *(undefined4 *)(iVar27 + -0x2307c0bc) = 0;
        } while (iVar28 < param_3);
      }
      iVar29 = iVar29 + 1;
    } while (iVar29 < param_3);
  }
  iVar29 = 0;
  if (0 < param_3) {
    do {
      iVar28 = 0;
      if (0 < param_3) {
        do {
          iVar18 = 0;
          iVar23 = iVar28 * 8;
          iVar27 = 0;
          iVar17 = 0;
          if (0 < param_3) {
            iVar13 = param_2 + iVar29 * 0x20;
            uVar7 = param_5 + param_4;
            do {
              uVar8 = *(uint *)(iVar13 + iVar18 * 8);
              uVar11 = *(uint *)(iVar18 * 8 + iVar13 + 4);
              iVar15 = iVar18 * 0x20 + param_1;
              uVar19 = *(uint *)(iVar15 + iVar23);
              uVar6 = *(uint *)(iVar15 + iVar23 + 4);
              uVar1 = (ulonglong)uVar19 * (ulonglong)(uVar8 & 0xffff);
              uVar2 = (longlong)(int)uVar19 * (longlong)(int)(uVar8 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar6 * (ulonglong)(uVar11 & 0xffff);
              uVar2 = (longlong)(int)uVar6 * (longlong)(int)(uVar11 & 0xffff0000);
              uVar4 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
                uVar4 = 0x7fffffffffffffff;
              }
              local_d8 = (int)uVar3 - (int)uVar4;
              if (0 < (int)uVar7) {
                local_d8 = (1 << (uVar7 - 1 & 0x1f)) + local_d8 >> (uVar7 & 0x1f);
              }
              uVar1 = (ulonglong)uVar6 * (ulonglong)(uVar8 & 0xffff);
              uVar2 = (longlong)(int)uVar6 * (longlong)(int)(uVar8 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar11 * (ulonglong)(uVar19 & 0xffff);
              uVar2 = (longlong)(int)uVar11 * (longlong)(int)(uVar19 & 0xffff0000);
              uVar4 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
                uVar4 = 0x7fffffffffffffff;
              }
              local_d4 = (int)uVar3 + (int)uVar4;
              if (0 < (int)uVar7) {
                local_d4 = (1 << (uVar7 - 1 & 0x1f)) + local_d4 >> (uVar7 & 0x1f);
              }
              iVar27 = iVar27 + local_d8;
              iVar17 = iVar17 + local_d4;
              iVar18 = iVar18 + 1;
            } while (iVar18 < param_3);
          }
          piVar26 = (int *)(iVar23 + iVar29 * 0x20 + -0x2307c1c0);
          iVar28 = iVar28 + 1;
          *piVar26 = iVar27;
          piVar26[1] = iVar17;
        } while (iVar28 < param_3);
      }
      iVar29 = iVar29 + 1;
    } while (iVar29 < param_3);
  }
  iVar29 = 0;
  if (0 < param_3) {
    do {
      iVar28 = 0;
      if (0 < param_3) {
        iVar27 = iVar29 * 0x20;
        do {
          iVar23 = iVar28 * 8;
          iVar18 = *(int *)(iVar27 + -0x2307c0c0 + iVar23 + 4);
          iVar17 = *(int *)(iVar27 + -0x2307c1c0 + iVar23 + 4);
          piVar26 = (int *)(iVar23 + iVar27 + -0x2307c140);
          iVar28 = iVar28 + 1;
          *piVar26 = *(int *)(iVar27 + -0x2307c0c0 + iVar23) -
                     *(int *)(iVar27 + -0x2307c1c0 + iVar23);
          piVar26[1] = iVar18 - iVar17;
        } while (iVar28 < param_3);
      }
      iVar29 = iVar29 + 1;
    } while (iVar29 < param_3);
  }
  iVar29 = 0;
  if (0 < param_3) {
    do {
      iVar28 = 0;
      if (0 < param_3) {
        do {
          iVar18 = 0;
          iVar23 = iVar28 * 8;
          iVar27 = 0;
          iVar17 = 0;
          if (0 < param_3) {
            iVar13 = param_1 + iVar29 * 0x20;
            uVar7 = param_6 + param_4;
            do {
              uVar11 = *(uint *)(iVar13 + iVar18 * 8);
              uVar8 = *(uint *)(iVar18 * 8 + iVar13 + 4);
              iVar15 = iVar18 * 0x20 + -0x2307c140;
              uVar19 = *(uint *)(iVar15 + iVar23);
              uVar6 = *(uint *)(iVar15 + iVar23 + 4);
              uVar1 = (ulonglong)uVar19 * (ulonglong)(uVar11 & 0xffff);
              uVar2 = (longlong)(int)uVar19 * (longlong)(int)(uVar11 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar6 * (ulonglong)(uVar8 & 0xffff);
              uVar2 = (longlong)(int)uVar6 * (longlong)(int)(uVar8 & 0xffff0000);
              uVar4 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
                uVar4 = 0x7fffffffffffffff;
              }
              local_d8 = (int)uVar3 - (int)uVar4;
              if (0 < (int)uVar7) {
                local_d8 = (1 << (uVar7 - 1 & 0x1f)) + local_d8 >> (uVar7 & 0x1f);
              }
              uVar1 = (ulonglong)uVar6 * (ulonglong)(uVar11 & 0xffff);
              uVar2 = (longlong)(int)uVar6 * (longlong)(int)(uVar11 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar8 * (ulonglong)(uVar19 & 0xffff);
              uVar2 = (longlong)(int)uVar8 * (longlong)(int)(uVar19 & 0xffff0000);
              uVar4 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
                uVar4 = 0x7fffffffffffffff;
              }
              local_d4 = (int)uVar3 + (int)uVar4;
              if (0 < (int)uVar7) {
                local_d4 = (1 << (uVar7 - 1 & 0x1f)) + local_d4 >> (uVar7 & 0x1f);
              }
              iVar27 = iVar27 + local_d8;
              iVar17 = iVar17 + local_d4;
              iVar18 = iVar18 + 1;
            } while (iVar18 < param_3);
          }
          piVar26 = (int *)(iVar23 + iVar29 * 0x20 + -0x2307c1c0);
          iVar28 = iVar28 + 1;
          *piVar26 = iVar27;
          piVar26[1] = iVar17;
        } while (iVar28 < param_3);
      }
      iVar29 = iVar29 + 1;
    } while (iVar29 < param_3);
  }
  iVar29 = 0;
  if (0 < param_3) {
    do {
      iVar28 = 0;
      if (0 < param_3) {
        iVar23 = param_1 + iVar29 * 0x20;
        iVar27 = iVar29 * 0x20 + -0x2307c1c0;
        do {
          iVar18 = iVar28 * 8;
          iVar17 = *(int *)(iVar23 + iVar18 + 4);
          iVar13 = *(int *)(iVar18 + iVar27 + 4);
          iVar28 = iVar28 + 1;
          *(int *)(iVar23 + iVar18) = *(int *)(iVar23 + iVar18) + *(int *)(iVar27 + iVar18);
          ((int *)(iVar23 + iVar18))[1] = iVar17 + iVar13;
        } while (iVar28 < param_3);
      }
      iVar29 = iVar29 + 1;
    } while (iVar29 < param_3);
  }
  return 1;
}


