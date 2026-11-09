/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000397d0 */

undefined4 FUN_ram_000397d0(int param_1,int param_2,uint *param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int local_70;
  
  iVar11 = 0;
  do {
    iVar13 = 0;
    if (0 < param_4) {
      do {
        iVar19 = iVar13 * 8;
        uVar7 = param_3[iVar13 * 8 + iVar11 * 2 + 1];
        iVar17 = iVar13 * 8;
        iVar13 = iVar13 + 1;
        *(uint *)(&DAT_ram_dcf83c20 + iVar17 + iVar11 * 0x20) = param_3[iVar19 + iVar11 * 2];
        *(uint *)((int)(&DAT_ram_dcf83c20 + iVar17 + iVar11 * 0x20) + 4) = -uVar7;
      } while (iVar13 < param_4);
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 1);
  iVar11 = 0;
  do {
    iVar13 = 0;
    if (0 < param_5) {
      iVar19 = iVar11 * 0x20;
      do {
        iVar18 = 0;
        iVar15 = iVar13 * 8;
        iVar14 = 0;
        iVar17 = 0;
        if (0 < param_4) {
          do {
            uVar16 = *(uint *)(&DAT_ram_dcf83c20 + iVar18 * 8 + iVar19);
            uVar20 = *(uint *)(&DAT_ram_dcf83c20 + iVar18 * 8 + iVar19 + 4);
            iVar8 = iVar18 * 0x20 + param_2;
            uVar7 = *(uint *)(iVar8 + iVar15);
            uVar12 = *(uint *)(iVar8 + iVar15 + 4);
            uVar1 = (ulonglong)uVar7 * (ulonglong)(uVar16 & 0xffff);
            uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar16 & 0xffff0000);
            uVar3 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
              uVar3 = 0x7fffffffffffffff;
            }
            uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar20 & 0xffff);
            uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar20 & 0xffff0000);
            uVar4 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
              uVar4 = 0x7fffffffffffffff;
            }
            uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar16 & 0xffff);
            uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar16 & 0xffff0000);
            uVar5 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
              uVar5 = 0x7fffffffffffffff;
            }
            uVar1 = (ulonglong)uVar20 * (ulonglong)(uVar7 & 0xffff);
            uVar2 = (longlong)(int)uVar20 * (longlong)(int)(uVar7 & 0xffff0000);
            uVar6 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
              uVar6 = 0x7fffffffffffffff;
            }
            iVar14 = iVar14 + (((int)uVar3 - (int)uVar4) + 0x200 >> 10);
            iVar17 = iVar17 + ((int)uVar5 + (int)uVar6 + 0x200 >> 10);
            iVar18 = iVar18 + 1;
          } while (iVar18 < param_4);
        }
        iVar13 = iVar13 + 1;
        *(int *)(&DAT_ram_dcf83aa0 + iVar15 + iVar19) = iVar14;
        *(int *)((int)(&DAT_ram_dcf83aa0 + iVar15 + iVar19) + 4) = iVar17;
      } while (iVar13 < param_5);
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 1);
  uVar12 = *param_3;
  uVar7 = param_3[1];
  uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar12 & 0xffff);
  uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar12 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  uVar1 = (ulonglong)uVar7 * (ulonglong)(uVar7 & 0xffff);
  uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar7 & 0xffff0000);
  uVar4 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  local_70 = (int)uVar4 + (int)uVar3 + 0x200 >> 10;
  iVar11 = 1;
  if (1 < param_4) {
    do {
      uVar12 = param_3[iVar11 * 8];
      uVar7 = param_3[iVar11 * 8 + 1];
      uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar12 & 0xffff);
      uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar12 & 0xffff0000);
      uVar3 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
        uVar3 = 0x7fffffffffffffff;
      }
      uVar1 = (ulonglong)uVar7 * (ulonglong)(uVar7 & 0xffff);
      uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar7 & 0xffff0000);
      uVar4 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
        uVar4 = 0x7fffffffffffffff;
      }
      iVar11 = iVar11 + 1;
      local_70 = local_70 + ((int)uVar3 + (int)uVar4 + 0x200 >> 10);
    } while (iVar11 < param_4);
  }
  iVar11 = 0;
  if (0 < param_4) {
    do {
      iVar13 = 0;
      if (0 < param_5) {
        do {
          iVar15 = 0;
          iVar19 = iVar13 * 8;
          iVar17 = 0;
          iVar14 = 0;
          do {
            uVar12 = param_3[iVar11 * 8 + iVar15 * 2];
            uVar7 = param_3[iVar11 * 8 + iVar15 * 2 + 1];
            uVar16 = *(uint *)(&DAT_ram_dcf83aa0 + iVar19 + iVar15 * 0x20);
            uVar20 = *(uint *)(&DAT_ram_dcf83aa0 + iVar19 + iVar15 * 0x20 + 4);
            uVar1 = (ulonglong)uVar16 * (ulonglong)(uVar12 & 0xffff);
            uVar2 = (longlong)(int)uVar16 * (longlong)(int)(uVar12 & 0xffff0000);
            uVar3 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
              uVar3 = 0x7fffffffffffffff;
            }
            uVar1 = (ulonglong)uVar20 * (ulonglong)(uVar7 & 0xffff);
            uVar2 = (longlong)(int)uVar20 * (longlong)(int)(uVar7 & 0xffff0000);
            uVar4 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
              uVar4 = 0x7fffffffffffffff;
            }
            uVar1 = (ulonglong)uVar20 * (ulonglong)(uVar12 & 0xffff);
            uVar2 = (longlong)(int)uVar20 * (longlong)(int)(uVar12 & 0xffff0000);
            uVar5 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
              uVar5 = 0x7fffffffffffffff;
            }
            uVar1 = (ulonglong)uVar7 * (ulonglong)(uVar16 & 0xffff);
            uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar16 & 0xffff0000);
            uVar6 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
              uVar6 = 0x7fffffffffffffff;
            }
            iVar17 = iVar17 + (((int)uVar3 - (int)uVar4) + 0x200 >> 10);
            iVar14 = iVar14 + ((int)uVar5 + (int)uVar6 + 0x200 >> 10);
            iVar15 = iVar15 + 1;
          } while (iVar15 < 1);
          piVar10 = (int *)(iVar19 + iVar11 * 0x20 + -0x2307c2e0);
          iVar13 = iVar13 + 1;
          *piVar10 = iVar17;
          piVar10[1] = iVar14;
        } while (iVar13 < param_5);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_4);
  }
  uVar7 = FUN_ram_0003b948(local_70,10,0,0);
  iVar11 = 0;
  if (0 < param_4) {
    do {
      iVar13 = 0;
      if (0 < param_5) {
        iVar19 = iVar11 * 0x20 + -0x2307c2e0;
        do {
          iVar17 = iVar13 * 8;
          uVar16 = *(uint *)(iVar19 + iVar17);
          uVar12 = *(uint *)(iVar19 + iVar17 + 4);
          iVar13 = iVar13 + 1;
          uVar1 = (ulonglong)uVar16 * (ulonglong)(uVar7 & 0xffff);
          uVar2 = (longlong)(int)uVar16 * (longlong)(int)(uVar7 & 0xffff0000);
          uVar3 = uVar1 + uVar2;
          if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
            uVar3 = 0x7fffffffffffffff;
          }
          uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar7 & 0xffff);
          uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar7 & 0xffff0000);
          uVar4 = uVar1 + uVar2;
          if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
            uVar4 = 0x7fffffffffffffff;
          }
          piVar10 = (int *)(iVar17 + iVar11 * 0x20 + -0x2307c2e0);
          *piVar10 = (int)uVar3 + 0x200 >> 10;
          piVar10[1] = (int)uVar4 + 0x200 >> 10;
        } while (iVar13 < param_5);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_4);
  }
  iVar11 = 0;
  if (0 < param_4) {
    do {
      iVar13 = 0;
      if (0 < param_5) {
        iVar19 = iVar11 * 0x20;
        do {
          iVar15 = iVar13 * 8;
          iVar14 = *(int *)(param_2 + iVar19 + iVar15 + 4);
          iVar17 = *(int *)(iVar19 + -0x2307c2e0 + iVar15 + 4);
          piVar10 = (int *)(iVar15 + iVar19 + -0x2307c360);
          iVar13 = iVar13 + 1;
          *piVar10 = *(int *)(param_2 + iVar19 + iVar15) - *(int *)(iVar19 + -0x2307c2e0 + iVar15);
          piVar10[1] = iVar14 - iVar17;
        } while (iVar13 < param_5);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_4);
  }
  iVar11 = 0;
  if (0 < param_5) {
    do {
      iVar13 = 0;
      if (0 < param_4) {
        do {
          iVar17 = iVar13 * 0x20 + param_2;
          iVar19 = *(int *)(iVar17 + iVar11 * 8 + 4);
          puVar9 = (undefined4 *)(iVar13 * 8 + iVar11 * 0x20 + -0x2307c460);
          iVar13 = iVar13 + 1;
          *puVar9 = *(undefined4 *)(iVar17 + iVar11 * 8);
          puVar9[1] = -iVar19;
        } while (iVar13 < param_4);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_5);
  }
  iVar11 = 0;
  if (0 < param_5) {
    do {
      iVar13 = 0;
      if (0 < param_5) {
        do {
          iVar15 = 0;
          iVar17 = iVar13 * 8;
          iVar19 = 0;
          iVar14 = 0;
          if (0 < param_4) {
            iVar18 = iVar11 * 0x20 + -0x2307c460;
            do {
              uVar7 = *(uint *)(iVar18 + iVar15 * 8);
              iVar8 = iVar15 * 0x20 + -0x2307c360;
              uVar20 = *(uint *)(iVar8 + iVar17);
              uVar12 = *(uint *)(iVar15 * 8 + iVar18 + 4);
              uVar16 = *(uint *)(iVar8 + iVar17 + 4);
              uVar1 = (ulonglong)uVar20 * (ulonglong)(uVar7 & 0xffff);
              uVar2 = (longlong)(int)uVar20 * (longlong)(int)(uVar7 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar16 * (ulonglong)(uVar12 & 0xffff);
              uVar2 = (longlong)(int)uVar16 * (longlong)(int)(uVar12 & 0xffff0000);
              uVar4 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
                uVar4 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar16 * (ulonglong)(uVar7 & 0xffff);
              uVar2 = (longlong)(int)uVar16 * (longlong)(int)(uVar7 & 0xffff0000);
              uVar5 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
                uVar5 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar20 & 0xffff);
              uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar20 & 0xffff0000);
              uVar6 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
                uVar6 = 0x7fffffffffffffff;
              }
              iVar19 = iVar19 + (((int)uVar3 - (int)uVar4) + 0x200 >> 10);
              iVar14 = iVar14 + ((int)uVar5 + (int)uVar6 + 0x200 >> 10);
              iVar15 = iVar15 + 1;
            } while (iVar15 < param_4);
          }
          iVar13 = iVar13 + 1;
          *(int *)(&DAT_ram_dcf83aa0 + iVar17 + iVar11 * 0x20) = iVar19;
          *(int *)((int)(&DAT_ram_dcf83aa0 + iVar17 + iVar11 * 0x20) + 4) = iVar14;
        } while (iVar13 < param_5);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_5);
  }
  FUN_ram_0003a930(0xdcf83b20,&DAT_ram_dcf83aa0,param_5,10,0,0);
  iVar11 = 0;
  if (0 < param_4) {
    do {
      iVar13 = 0;
      if (0 < param_5) {
        do {
          iVar15 = 0;
          iVar17 = iVar13 * 8;
          iVar14 = 0;
          iVar19 = 0;
          if (0 < param_5) {
            iVar18 = iVar11 * 0x20 + -0x2307c360;
            do {
              uVar12 = *(uint *)(iVar18 + iVar15 * 8);
              iVar8 = iVar15 * 0x20 + -0x2307c4e0;
              uVar20 = *(uint *)(iVar8 + iVar17);
              uVar7 = *(uint *)(iVar15 * 8 + iVar18 + 4);
              uVar16 = *(uint *)(iVar8 + iVar17 + 4);
              uVar1 = (ulonglong)uVar20 * (ulonglong)(uVar12 & 0xffff);
              uVar2 = (longlong)(int)uVar20 * (longlong)(int)(uVar12 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar16 * (ulonglong)(uVar7 & 0xffff);
              uVar2 = (longlong)(int)uVar16 * (longlong)(int)(uVar7 & 0xffff0000);
              uVar4 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
                uVar4 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar16 * (ulonglong)(uVar12 & 0xffff);
              uVar2 = (longlong)(int)uVar16 * (longlong)(int)(uVar12 & 0xffff0000);
              uVar5 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
                uVar5 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar7 * (ulonglong)(uVar20 & 0xffff);
              uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar20 & 0xffff0000);
              uVar6 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
                uVar6 = 0x7fffffffffffffff;
              }
              iVar14 = iVar14 + (((int)uVar3 - (int)uVar4) + 0x200 >> 10);
              iVar19 = iVar19 + ((int)uVar5 + (int)uVar6 + 0x200 >> 10);
              iVar15 = iVar15 + 1;
            } while (iVar15 < param_5);
          }
          piVar10 = (int *)(iVar17 + param_1 + iVar11 * 0x20);
          iVar13 = iVar13 + 1;
          *piVar10 = iVar14;
          piVar10[1] = iVar19;
        } while (iVar13 < param_5);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_4);
  }
  return 1;
}


