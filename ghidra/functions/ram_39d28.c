/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00039d28 */

undefined4 FUN_ram_00039d28(int param_1,int param_2,uint *param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int local_78;
  int local_74;
  
  iVar13 = 0;
  do {
    iVar10 = 0;
    if (0 < param_4) {
      do {
        iVar17 = iVar10 * 8;
        uVar7 = param_3[iVar10 * 8 + iVar13 * 2 + 1];
        iVar16 = iVar10 * 8;
        iVar10 = iVar10 + 1;
        *(uint *)(&DAT_ram_dcf83c20 + iVar16 + iVar13 * 0x20) = param_3[iVar17 + iVar13 * 2];
        *(uint *)((int)(&DAT_ram_dcf83c20 + iVar16 + iVar13 * 0x20) + 4) = -uVar7;
      } while (iVar10 < param_4);
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 2);
  iVar13 = 0;
  do {
    iVar10 = 0;
    if (0 < param_5) {
      iVar17 = iVar13 * 0x20;
      do {
        iVar19 = 0;
        iVar14 = iVar10 * 8;
        iVar16 = 0;
        iVar15 = 0;
        if (0 < param_4) {
          do {
            uVar8 = *(uint *)(&DAT_ram_dcf83c20 + iVar19 * 8 + iVar17);
            uVar7 = *(uint *)(&DAT_ram_dcf83c20 + iVar19 * 8 + iVar17 + 4);
            iVar9 = iVar19 * 0x20 + param_2;
            uVar11 = *(uint *)(iVar9 + iVar14);
            uVar21 = *(uint *)(iVar9 + iVar14 + 4);
            uVar1 = (ulonglong)uVar11 * (ulonglong)(uVar8 & 0xffff);
            uVar2 = (longlong)(int)uVar11 * (longlong)(int)(uVar8 & 0xffff0000);
            uVar3 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
              uVar3 = 0x7fffffffffffffff;
            }
            uVar1 = (ulonglong)uVar21 * (ulonglong)(uVar7 & 0xffff);
            uVar2 = (longlong)(int)uVar21 * (longlong)(int)(uVar7 & 0xffff0000);
            uVar4 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
              uVar4 = 0x7fffffffffffffff;
            }
            uVar1 = (ulonglong)uVar21 * (ulonglong)(uVar8 & 0xffff);
            uVar2 = (longlong)(int)uVar21 * (longlong)(int)(uVar8 & 0xffff0000);
            uVar5 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
              uVar5 = 0x7fffffffffffffff;
            }
            uVar1 = (ulonglong)uVar7 * (ulonglong)(uVar11 & 0xffff);
            uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar11 & 0xffff0000);
            uVar6 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
              uVar6 = 0x7fffffffffffffff;
            }
            iVar16 = iVar16 + (((int)uVar3 - (int)uVar4) + 0x200 >> 10);
            iVar15 = iVar15 + ((int)uVar5 + (int)uVar6 + 0x200 >> 10);
            iVar19 = iVar19 + 1;
          } while (iVar19 < param_4);
        }
        iVar10 = iVar10 + 1;
        *(int *)(&DAT_ram_dcf83aa0 + iVar14 + iVar17) = iVar16;
        *(int *)((int)(&DAT_ram_dcf83aa0 + iVar14 + iVar17) + 4) = iVar15;
      } while (iVar10 < param_5);
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 2);
  uVar8 = *param_3;
  uVar7 = param_3[1];
  uVar1 = (ulonglong)uVar8 * (ulonglong)(uVar8 & 0xffff);
  uVar2 = (longlong)(int)uVar8 * (longlong)(int)(uVar8 & 0xffff0000);
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
  local_78 = (int)uVar3 + (int)uVar4 + 0x200 >> 10;
  iVar13 = 1;
  if (1 < param_4) {
    do {
      uVar7 = param_3[iVar13 * 8];
      uVar8 = param_3[iVar13 * 8 + 1];
      uVar1 = (ulonglong)uVar7 * (ulonglong)(uVar7 & 0xffff);
      uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar7 & 0xffff0000);
      uVar3 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
        uVar3 = 0x7fffffffffffffff;
      }
      uVar1 = (ulonglong)uVar8 * (ulonglong)(uVar8 & 0xffff);
      uVar2 = (longlong)(int)uVar8 * (longlong)(int)(uVar8 & 0xffff0000);
      uVar4 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
        uVar4 = 0x7fffffffffffffff;
      }
      iVar13 = iVar13 + 1;
      local_78 = local_78 + ((int)uVar3 + (int)uVar4 + 0x200 >> 10);
    } while (iVar13 < param_4);
  }
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  uVar1 = (ulonglong)uVar7 * (ulonglong)(uVar7 & 0xffff);
  uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar7 & 0xffff0000);
  uVar3 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
    uVar3 = 0x7fffffffffffffff;
  }
  uVar1 = (ulonglong)uVar8 * (ulonglong)(uVar8 & 0xffff);
  uVar2 = (longlong)(int)uVar8 * (longlong)(int)(uVar8 & 0xffff0000);
  uVar4 = uVar1 + uVar2;
  if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  local_74 = (int)uVar4 + (int)uVar3 + 0x200 >> 10;
  iVar13 = 1;
  if (1 < param_4) {
    do {
      uVar8 = param_3[iVar13 * 8 + 2];
      uVar7 = param_3[iVar13 * 8 + 3];
      uVar1 = (ulonglong)uVar8 * (ulonglong)(uVar8 & 0xffff);
      uVar2 = (longlong)(int)uVar8 * (longlong)(int)(uVar8 & 0xffff0000);
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
      local_74 = ((int)uVar3 + (int)uVar4 + 0x200 >> 10) + local_74;
      iVar13 = iVar13 + 1;
    } while (iVar13 < param_4);
  }
  uVar7 = FUN_ram_0003b948(local_78,10,0,0);
  uVar8 = FUN_ram_0003b948(local_74,10,0,0);
  iVar13 = 0;
  if (0 < param_4) {
    do {
      iVar10 = 0;
      if (0 < param_5) {
        do {
          iVar15 = 0;
          iVar17 = iVar10 * 8;
          iVar14 = 0;
          iVar16 = 0;
          do {
            uVar11 = param_3[iVar13 * 8 + iVar15 * 2];
            uVar20 = param_3[iVar13 * 8 + iVar15 * 2 + 1];
            uVar21 = *(uint *)(&DAT_ram_dcf83aa0 + iVar17 + iVar15 * 0x20);
            uVar22 = *(uint *)(&DAT_ram_dcf83aa0 + iVar17 + iVar15 * 0x20 + 4);
            uVar1 = (ulonglong)uVar21 * (ulonglong)(uVar11 & 0xffff);
            uVar2 = (longlong)(int)uVar21 * (longlong)(int)(uVar11 & 0xffff0000);
            uVar3 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
              uVar3 = 0x7fffffffffffffff;
            }
            uVar1 = (ulonglong)uVar22 * (ulonglong)(uVar20 & 0xffff);
            uVar2 = (longlong)(int)uVar22 * (longlong)(int)(uVar20 & 0xffff0000);
            uVar4 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
              uVar4 = 0x7fffffffffffffff;
            }
            uVar1 = (ulonglong)uVar22 * (ulonglong)(uVar11 & 0xffff);
            uVar2 = (longlong)(int)uVar22 * (longlong)(int)(uVar11 & 0xffff0000);
            uVar5 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
              uVar5 = 0x7fffffffffffffff;
            }
            uVar1 = (ulonglong)uVar20 * (ulonglong)(uVar21 & 0xffff);
            uVar2 = (longlong)(int)uVar20 * (longlong)(int)(uVar21 & 0xffff0000);
            uVar6 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
              uVar6 = 0x7fffffffffffffff;
            }
            iVar14 = iVar14 + (((int)uVar3 - (int)uVar4) + 0x200 >> 10);
            iVar16 = iVar16 + ((int)uVar5 + (int)uVar6 + 0x200 >> 10);
            iVar15 = iVar15 + 1;
          } while (iVar15 < 2);
          piVar12 = (int *)(iVar17 + iVar13 * 0x20 + -0x2307c2e0);
          iVar10 = iVar10 + 1;
          *piVar12 = iVar14;
          piVar12[1] = iVar16;
        } while (iVar10 < param_5);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < param_4);
  }
  iVar13 = 0;
  if (0 < param_4) {
    do {
      iVar10 = iVar13 * 0x20;
      uVar1 = (ulonglong)*(uint *)(iVar10 + -0x2307c2e0) * (ulonglong)(uVar7 & 0xffff);
      uVar2 = (longlong)(int)*(uint *)(iVar10 + -0x2307c2e0) * (longlong)(int)(uVar7 & 0xffff0000);
      uVar3 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
        uVar3 = 0x7fffffffffffffff;
      }
      uVar1 = (ulonglong)*(uint *)(iVar10 + -0x2307c2dc) * (ulonglong)(uVar7 & 0xffff);
      uVar2 = (longlong)(int)*(uint *)(iVar10 + -0x2307c2dc) * (longlong)(int)(uVar7 & 0xffff0000);
      uVar4 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
        uVar4 = 0x7fffffffffffffff;
      }
      *(int *)(iVar10 + -0x2307c2e0) = (int)uVar3 + 0x200 >> 10;
      *(int *)(iVar10 + -0x2307c2dc) = (int)uVar4 + 0x200 >> 10;
      iVar13 = iVar13 + 1;
      uVar1 = (ulonglong)*(uint *)(iVar10 + -0x2307c2d8) * (ulonglong)(uVar8 & 0xffff);
      uVar2 = (longlong)(int)*(uint *)(iVar10 + -0x2307c2d8) * (longlong)(int)(uVar8 & 0xffff0000);
      uVar3 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
        uVar3 = 0x7fffffffffffffff;
      }
      uVar1 = (ulonglong)*(uint *)(iVar10 + -0x2307c2d4) * (ulonglong)(uVar8 & 0xffff);
      uVar2 = (longlong)(int)*(uint *)(iVar10 + -0x2307c2d4) * (longlong)(int)(uVar8 & 0xffff0000);
      uVar4 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
        uVar4 = 0x7fffffffffffffff;
      }
      *(int *)(iVar10 + -0x2307c2d8) = (int)uVar3 + 0x200 >> 10;
      *(int *)(iVar10 + -0x2307c2d4) = (int)uVar4 + 0x200 >> 10;
    } while (iVar13 < param_4);
  }
  iVar13 = 0;
  if (0 < param_4) {
    do {
      iVar10 = 0;
      if (0 < param_5) {
        iVar17 = iVar13 * 0x20;
        do {
          iVar14 = iVar10 * 8;
          iVar16 = *(int *)(param_2 + iVar17 + iVar14 + 4);
          iVar15 = *(int *)(iVar17 + -0x2307c2e0 + iVar14 + 4);
          piVar12 = (int *)(iVar14 + iVar17 + -0x2307c360);
          iVar10 = iVar10 + 1;
          *piVar12 = *(int *)(param_2 + iVar17 + iVar14) - *(int *)(iVar17 + -0x2307c2e0 + iVar14);
          piVar12[1] = iVar16 - iVar15;
        } while (iVar10 < param_5);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < param_4);
  }
  iVar13 = 0;
  if (0 < param_5) {
    do {
      iVar10 = 0;
      if (0 < param_4) {
        do {
          iVar17 = iVar10 * 0x20 + param_2;
          iVar16 = *(int *)(iVar17 + iVar13 * 8 + 4);
          puVar18 = (undefined4 *)(iVar10 * 8 + iVar13 * 0x20 + -0x2307c460);
          iVar10 = iVar10 + 1;
          *puVar18 = *(undefined4 *)(iVar17 + iVar13 * 8);
          puVar18[1] = -iVar16;
        } while (iVar10 < param_4);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < param_5);
  }
  iVar13 = 0;
  if (0 < param_5) {
    do {
      iVar10 = 0;
      if (0 < param_5) {
        do {
          iVar15 = 0;
          iVar17 = iVar10 * 8;
          iVar16 = 0;
          iVar14 = 0;
          if (0 < param_4) {
            iVar19 = iVar13 * 0x20 + -0x2307c460;
            do {
              uVar7 = *(uint *)(iVar19 + iVar15 * 8);
              uVar11 = *(uint *)(iVar15 * 8 + iVar19 + 4);
              iVar9 = iVar15 * 0x20 + -0x2307c360;
              uVar8 = *(uint *)(iVar9 + iVar17);
              uVar21 = *(uint *)(iVar9 + iVar17 + 4);
              uVar1 = (ulonglong)uVar8 * (ulonglong)(uVar7 & 0xffff);
              uVar2 = (longlong)(int)uVar8 * (longlong)(int)(uVar7 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar21 * (ulonglong)(uVar11 & 0xffff);
              uVar2 = (longlong)(int)uVar21 * (longlong)(int)(uVar11 & 0xffff0000);
              uVar4 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
                uVar4 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar21 * (ulonglong)(uVar7 & 0xffff);
              uVar2 = (longlong)(int)uVar21 * (longlong)(int)(uVar7 & 0xffff0000);
              uVar5 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
                uVar5 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar11 * (ulonglong)(uVar8 & 0xffff);
              uVar2 = (longlong)(int)uVar11 * (longlong)(int)(uVar8 & 0xffff0000);
              uVar6 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
                uVar6 = 0x7fffffffffffffff;
              }
              iVar16 = iVar16 + (((int)uVar3 - (int)uVar4) + 0x200 >> 10);
              iVar14 = iVar14 + ((int)uVar5 + (int)uVar6 + 0x200 >> 10);
              iVar15 = iVar15 + 1;
            } while (iVar15 < param_4);
          }
          iVar10 = iVar10 + 1;
          *(int *)(&DAT_ram_dcf83aa0 + iVar17 + iVar13 * 0x20) = iVar16;
          *(int *)((int)(&DAT_ram_dcf83aa0 + iVar17 + iVar13 * 0x20) + 4) = iVar14;
        } while (iVar10 < param_5);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < param_5);
  }
  FUN_ram_0003a930(0xdcf83b20,&DAT_ram_dcf83aa0,param_5,10,0,0);
  iVar13 = 0;
  if (0 < param_4) {
    do {
      iVar10 = 0;
      if (0 < param_5) {
        do {
          iVar15 = 0;
          iVar16 = iVar10 * 8;
          iVar14 = 0;
          iVar17 = 0;
          if (0 < param_5) {
            iVar19 = iVar13 * 0x20 + -0x2307c360;
            do {
              uVar7 = *(uint *)(iVar19 + iVar15 * 8);
              uVar8 = *(uint *)(iVar15 * 8 + iVar19 + 4);
              iVar9 = iVar15 * 0x20 + -0x2307c4e0;
              uVar21 = *(uint *)(iVar9 + iVar16);
              uVar11 = *(uint *)(iVar9 + iVar16 + 4);
              uVar1 = (ulonglong)uVar21 * (ulonglong)(uVar7 & 0xffff);
              uVar2 = (longlong)(int)uVar21 * (longlong)(int)(uVar7 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar11 * (ulonglong)(uVar8 & 0xffff);
              uVar2 = (longlong)(int)uVar11 * (longlong)(int)(uVar8 & 0xffff0000);
              uVar4 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
                uVar4 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar11 * (ulonglong)(uVar7 & 0xffff);
              uVar2 = (longlong)(int)uVar11 * (longlong)(int)(uVar7 & 0xffff0000);
              uVar5 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
                uVar5 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar8 * (ulonglong)(uVar21 & 0xffff);
              uVar2 = (longlong)(int)uVar8 * (longlong)(int)(uVar21 & 0xffff0000);
              uVar6 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
                uVar6 = 0x7fffffffffffffff;
              }
              iVar14 = iVar14 + (((int)uVar3 - (int)uVar4) + 0x200 >> 10);
              iVar17 = iVar17 + ((int)uVar5 + (int)uVar6 + 0x200 >> 10);
              iVar15 = iVar15 + 1;
            } while (iVar15 < param_5);
          }
          piVar12 = (int *)(iVar16 + param_1 + iVar13 * 0x20);
          iVar10 = iVar10 + 1;
          *piVar12 = iVar14;
          piVar12[1] = iVar17;
        } while (iVar10 < param_5);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < param_4);
  }
  return 1;
}


