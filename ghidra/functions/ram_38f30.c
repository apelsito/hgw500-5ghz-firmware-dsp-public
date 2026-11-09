/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00038f30 */

undefined4 FUN_ram_00038f30(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  
  iVar17 = 0;
  FUN_ram_0004070c(&DAT_ram_dcf83aa0,0x80);
  FUN_ram_0004070c(0xdcf83b20,0x80);
  FUN_ram_0004070c(&DAT_ram_000b807c,0x80);
  if (0 < param_6) {
    do {
      iVar13 = 0;
      if (0 < param_4) {
        do {
          iVar8 = iVar13 * 0x20 + param_3;
          iVar9 = *(int *)(iVar8 + iVar17 * 8 + 4);
          iVar7 = iVar13 * 2;
          iVar13 = iVar13 + 1;
          (&DAT_ram_000b807c)[iVar17 * 8 + iVar7] = *(undefined4 *)(iVar8 + iVar17 * 8);
          (&DAT_ram_000b807c + iVar17 * 8 + iVar7)[1] = -iVar9;
        } while (iVar13 < param_4);
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < param_6);
  }
  iVar17 = 0;
  if (0 < param_6) {
    do {
      iVar13 = 0;
      if (0 < param_6) {
        do {
          iVar18 = 0;
          iVar7 = iVar13 * 8;
          iVar9 = 0;
          iVar8 = 0;
          if (0 < param_4) {
            do {
              uVar15 = (&DAT_ram_000b807c)[iVar17 * 8 + iVar18 * 2];
              iVar14 = iVar18 * 0x20 + param_3;
              uVar16 = *(uint *)(iVar14 + iVar7);
              uVar19 = (&DAT_ram_000b807c)[iVar17 * 8 + iVar18 * 2 + 1];
              uVar11 = *(uint *)(iVar14 + iVar7 + 4);
              uVar1 = (ulonglong)uVar16 * (ulonglong)(uVar15 & 0xffff);
              uVar2 = (longlong)(int)uVar16 * (longlong)(int)(uVar15 & 0xffff0000);
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
              uVar1 = (ulonglong)uVar11 * (ulonglong)(uVar15 & 0xffff);
              uVar2 = (longlong)(int)uVar11 * (longlong)(int)(uVar15 & 0xffff0000);
              uVar5 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
                uVar5 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar19 * (ulonglong)(uVar16 & 0xffff);
              uVar2 = (longlong)(int)uVar19 * (longlong)(int)(uVar16 & 0xffff0000);
              uVar6 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
                uVar6 = 0x7fffffffffffffff;
              }
              iVar9 = iVar9 + (((int)uVar3 - (int)uVar4) + 0x200 >> 10);
              iVar8 = iVar8 + ((int)uVar5 + (int)uVar6 + 0x200 >> 10);
              iVar18 = iVar18 + 1;
            } while (iVar18 < param_4);
          }
          iVar13 = iVar13 + 1;
          *(int *)(&DAT_ram_dcf83aa0 + iVar7 + iVar17 * 0x20) = iVar9;
          *(int *)((int)(&DAT_ram_dcf83aa0 + iVar7 + iVar17 * 0x20) + 4) = iVar8;
        } while (iVar13 < param_6);
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < param_6);
  }
  FUN_ram_0003a930(0xdcf83b20,&DAT_ram_dcf83aa0,param_6,10,0,0);
  iVar17 = 0;
  if (0 < param_4) {
    do {
      iVar13 = 0;
      if (0 < param_6) {
        do {
          iVar18 = 0;
          iVar8 = iVar13 * 8;
          iVar7 = 0;
          iVar9 = 0;
          if (0 < param_6) {
            iVar14 = param_3 + iVar17 * 0x20;
            do {
              uVar15 = *(uint *)(iVar14 + iVar18 * 8);
              uVar19 = *(uint *)(iVar18 * 8 + iVar14 + 4);
              iVar10 = iVar18 * 0x20 + -0x2307c4e0;
              uVar16 = *(uint *)(iVar10 + iVar8);
              uVar11 = *(uint *)(iVar10 + iVar8 + 4);
              uVar1 = (ulonglong)uVar16 * (ulonglong)(uVar15 & 0xffff);
              uVar2 = (longlong)(int)uVar16 * (longlong)(int)(uVar15 & 0xffff0000);
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
              uVar1 = (ulonglong)uVar11 * (ulonglong)(uVar15 & 0xffff);
              uVar2 = (longlong)(int)uVar11 * (longlong)(int)(uVar15 & 0xffff0000);
              uVar5 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
                uVar5 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar19 * (ulonglong)(uVar16 & 0xffff);
              uVar2 = (longlong)(int)uVar19 * (longlong)(int)(uVar16 & 0xffff0000);
              uVar6 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
                uVar6 = 0x7fffffffffffffff;
              }
              iVar7 = iVar7 + (((int)uVar3 - (int)uVar4) + 0x200 >> 10);
              iVar9 = iVar9 + ((int)uVar5 + (int)uVar6 + 0x200 >> 10);
              iVar18 = iVar18 + 1;
            } while (iVar18 < param_6);
          }
          iVar13 = iVar13 + 1;
          *(int *)(&DAT_ram_dcf83aa0 + iVar8 + iVar17 * 0x20) = iVar7;
          *(int *)((int)(&DAT_ram_dcf83aa0 + iVar8 + iVar17 * 0x20) + 4) = iVar9;
        } while (iVar13 < param_6);
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < param_4);
  }
  iVar17 = 0;
  if (0 < param_4) {
    do {
      iVar13 = 0;
      if (0 < param_4) {
        iVar7 = iVar17 * 0x20;
        do {
          iVar18 = 0;
          iVar9 = 0;
          iVar8 = 0;
          if (0 < param_6) {
            do {
              uVar11 = (&DAT_ram_000b807c)[iVar18 * 8 + iVar13 * 2];
              uVar16 = *(uint *)(&DAT_ram_dcf83aa0 + iVar18 * 8 + iVar7);
              uVar19 = (&DAT_ram_000b807c)[iVar18 * 8 + iVar13 * 2 + 1];
              uVar15 = *(uint *)(&DAT_ram_dcf83aa0 + iVar18 * 8 + iVar7 + 4);
              uVar1 = (ulonglong)uVar11 * (ulonglong)(uVar16 & 0xffff);
              uVar2 = (longlong)(int)uVar11 * (longlong)(int)(uVar16 & 0xffff0000);
              uVar3 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
                uVar3 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar19 * (ulonglong)(uVar15 & 0xffff);
              uVar2 = (longlong)(int)uVar19 * (longlong)(int)(uVar15 & 0xffff0000);
              uVar4 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
                uVar4 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar19 * (ulonglong)(uVar16 & 0xffff);
              uVar2 = (longlong)(int)uVar19 * (longlong)(int)(uVar16 & 0xffff0000);
              uVar5 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
                uVar5 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar15 * (ulonglong)(uVar11 & 0xffff);
              uVar2 = (longlong)(int)uVar15 * (longlong)(int)(uVar11 & 0xffff0000);
              uVar6 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
                uVar6 = 0x7fffffffffffffff;
              }
              iVar9 = iVar9 + (((int)uVar3 - (int)uVar4) + 0x200 >> 10);
              iVar8 = iVar8 + ((int)uVar5 + (int)uVar6 + 0x200 >> 10);
              iVar18 = iVar18 + 1;
            } while (iVar18 < param_6);
          }
          piVar12 = (int *)(iVar13 * 8 + iVar7 + -0x2307c4e0);
          iVar13 = iVar13 + 1;
          *piVar12 = iVar9;
          piVar12[1] = iVar8;
        } while (iVar13 < param_4);
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < param_4);
  }
  iVar17 = 0;
  if (0 < param_4) {
    do {
      iVar13 = 0;
      if (0 < param_5) {
        do {
          iVar18 = 0;
          iVar9 = iVar13 * 8;
          iVar8 = 0;
          iVar7 = 0;
          if (0 < param_4) {
            iVar14 = iVar17 * 0x20 + -0x2307c4e0;
            do {
              uVar16 = *(uint *)(iVar14 + iVar18 * 8);
              uVar19 = *(uint *)(iVar18 * 8 + iVar14 + 4);
              iVar10 = iVar18 * 0x20 + param_2;
              uVar15 = *(uint *)(iVar10 + iVar9);
              uVar11 = *(uint *)(iVar10 + iVar9 + 4);
              uVar1 = (ulonglong)uVar15 * (ulonglong)(uVar16 & 0xffff);
              uVar2 = (longlong)(int)uVar15 * (longlong)(int)(uVar16 & 0xffff0000);
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
              uVar1 = (ulonglong)uVar11 * (ulonglong)(uVar16 & 0xffff);
              uVar2 = (longlong)(int)uVar11 * (longlong)(int)(uVar16 & 0xffff0000);
              uVar5 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
                uVar5 = 0x7fffffffffffffff;
              }
              uVar1 = (ulonglong)uVar19 * (ulonglong)(uVar15 & 0xffff);
              uVar2 = (longlong)(int)uVar19 * (longlong)(int)(uVar15 & 0xffff0000);
              uVar6 = uVar1 + uVar2;
              if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
                uVar6 = 0x7fffffffffffffff;
              }
              iVar8 = iVar8 + (((int)uVar3 - (int)uVar4) + 0x200 >> 10);
              iVar7 = iVar7 + ((int)uVar5 + (int)uVar6 + 0x200 >> 10);
              iVar18 = iVar18 + 1;
            } while (iVar18 < param_4);
          }
          iVar13 = iVar13 + 1;
          *(int *)(&DAT_ram_dcf83aa0 + iVar9 + iVar17 * 0x20) = iVar8;
          *(int *)((int)(&DAT_ram_dcf83aa0 + iVar9 + iVar17 * 0x20) + 4) = iVar7;
        } while (iVar13 < param_5);
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < param_4);
  }
  iVar17 = 0;
  if (0 < param_4) {
    do {
      iVar13 = 0;
      if (0 < param_5) {
        iVar7 = iVar17 * 0x20;
        do {
          iVar9 = iVar13 * 8;
          iVar18 = *(int *)(param_2 + iVar7 + iVar9 + 4);
          iVar8 = *(int *)(&DAT_ram_dcf83aa0 + iVar9 + iVar7 + 4);
          piVar12 = (int *)(iVar9 + param_1 + iVar7);
          iVar13 = iVar13 + 1;
          *piVar12 = *(int *)(param_2 + iVar7 + iVar9) - *(int *)(&DAT_ram_dcf83aa0 + iVar9 + iVar7)
          ;
          piVar12[1] = iVar18 - iVar8;
        } while (iVar13 < param_5);
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < param_4);
  }
  return 1;
}


