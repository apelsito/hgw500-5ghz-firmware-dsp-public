/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003a2dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0003a2dc(int param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  
  iVar14 = 0;
  do {
    iVar16 = 0;
    do {
      iVar9 = iVar16 * 0x20 + param_3;
      iVar10 = *(int *)(iVar9 + iVar14 * 8 + 4);
      iVar11 = iVar16 * 8;
      iVar16 = iVar16 + 1;
      *(undefined4 *)(&DAT_ram_dcf83c20 + iVar11 + iVar14 * 0x20) =
           *(undefined4 *)(iVar9 + iVar14 * 8);
      *(int *)((int)(&DAT_ram_dcf83c20 + iVar11 + iVar14 * 0x20) + 4) = -iVar10;
    } while (iVar16 < 4);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 3);
  iVar14 = 0;
  do {
    FUN_ram_0004070c(&DAT_ram_dcf83aa0,0x80);
    *(undefined4 *)(&DAT_ram_dcf83aa0 + iVar14 * 0x20) = 0x400;
    iVar16 = 0;
    do {
      iVar9 = 0;
      iVar10 = param_3 + iVar16 * 0x20;
      do {
        iVar20 = 0;
        iVar17 = iVar9 * 8;
        iVar15 = 0;
        iVar11 = 0;
        do {
          uVar19 = *(uint *)(iVar10 + iVar20 * 8);
          uVar21 = *(uint *)(iVar20 * 8 + iVar10 + 4);
          uVar12 = *(uint *)(&DAT_ram_dcf83c20 + iVar17 + iVar20 * 0x20);
          uVar7 = *(uint *)(&DAT_ram_dcf83c20 + iVar17 + iVar20 * 0x20 + 4);
          uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar19 & 0xffff);
          uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar19 & 0xffff0000);
          uVar3 = uVar1 + uVar2;
          if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
            uVar3 = 0x7fffffffffffffff;
          }
          uVar1 = (ulonglong)uVar7 * (ulonglong)(uVar21 & 0xffff);
          uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar21 & 0xffff0000);
          uVar4 = uVar1 + uVar2;
          if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
            uVar4 = 0x7fffffffffffffff;
          }
          uVar1 = (ulonglong)uVar7 * (ulonglong)(uVar19 & 0xffff);
          uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar19 & 0xffff0000);
          uVar5 = uVar1 + uVar2;
          if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
            uVar5 = 0x7fffffffffffffff;
          }
          uVar1 = (ulonglong)uVar21 * (ulonglong)(uVar12 & 0xffff);
          uVar2 = (longlong)(int)uVar21 * (longlong)(int)(uVar12 & 0xffff0000);
          uVar6 = uVar1 + uVar2;
          if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
            uVar6 = 0x7fffffffffffffff;
          }
          iVar15 = iVar15 + (((int)uVar3 - (int)uVar4) + 0x200 >> 10);
          iVar11 = iVar11 + ((int)uVar5 + (int)uVar6 + 0x200 >> 10);
          iVar20 = iVar20 + 1;
        } while (iVar20 < 3);
        piVar18 = (int *)(iVar17 + iVar16 * 0x20 + -0x2307c4e0);
        iVar9 = iVar9 + 1;
        *piVar18 = iVar15;
        piVar18[1] = iVar11;
      } while (iVar9 < 1);
      iVar16 = iVar16 + 1;
    } while (iVar16 < 4);
    iVar16 = 0;
    do {
      iVar10 = 0;
      iVar9 = iVar16 * 0x20;
      do {
        iVar17 = iVar10 * 8;
        iVar15 = *(int *)(&DAT_ram_dcf83aa0 + iVar17 + iVar9 + 4);
        iVar11 = *(int *)(iVar9 + -0x2307c4e0 + iVar17 + 4);
        iVar10 = iVar10 + 1;
        *(int *)(&DAT_ram_dcf83aa0 + iVar17 + iVar9) =
             *(int *)(&DAT_ram_dcf83aa0 + iVar17 + iVar9) - *(int *)(iVar9 + -0x2307c4e0 + iVar17);
        *(int *)((int)(&DAT_ram_dcf83aa0 + iVar17 + iVar9) + 4) = iVar15 - iVar11;
      } while (iVar10 < 1);
      iVar16 = iVar16 + 1;
    } while (iVar16 < 4);
    uVar1 = (ulonglong)_DAT_ram_dcf83aa0 * (ulonglong)(_DAT_ram_dcf83aa0 & 0xffff);
    uVar2 = (longlong)(int)_DAT_ram_dcf83aa0 * (longlong)(int)(_DAT_ram_dcf83aa0 & 0xffff0000);
    uVar3 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
      uVar3 = 0x7fffffffffffffff;
    }
    uVar1 = (ulonglong)_DAT_ram_dcf83aa4 * (ulonglong)(_DAT_ram_dcf83aa4 & 0xffff);
    uVar2 = (longlong)(int)_DAT_ram_dcf83aa4 * (longlong)(int)(_DAT_ram_dcf83aa4 & 0xffff0000);
    uVar4 = uVar1 + uVar2;
    if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
      uVar4 = 0x7fffffffffffffff;
    }
    iVar16 = (int)uVar4 + (int)uVar3 + 0x200 >> 10;
    iVar9 = 1;
    do {
      uVar7 = *(uint *)(&DAT_ram_dcf83aa0 + iVar9 * 0x20);
      uVar12 = *(uint *)(&DAT_ram_dcf83aa4 + iVar9 * 0x20);
      uVar1 = (ulonglong)uVar7 * (ulonglong)(uVar7 & 0xffff);
      uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar7 & 0xffff0000);
      uVar3 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
        uVar3 = 0x7fffffffffffffff;
      }
      uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar12 & 0xffff);
      uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar12 & 0xffff0000);
      uVar4 = uVar1 + uVar2;
      if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
        uVar4 = 0x7fffffffffffffff;
      }
      iVar16 = ((int)uVar3 + (int)uVar4 + 0x200 >> 10) + iVar16;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 4);
    if (10 < iVar16) break;
    iVar9 = iVar14 * 8;
    _DAT_ram_dcf83c20 = *(undefined4 *)(iVar9 + -0x2307c3d8);
    _DAT_ram_dcf83c24 = *(undefined4 *)(iVar9 + -0x2307c3d4);
    iVar14 = iVar14 + 1;
    _DAT_ram_dcf83c40 = *(undefined4 *)(iVar9 + -0x2307c3d8);
    _DAT_ram_dcf83c44 = *(undefined4 *)(iVar9 + -0x2307c3d4);
    _DAT_ram_dcf83c60 = _DAT_ram_dcf83c40;
    _DAT_ram_dcf83c64 = _DAT_ram_dcf83c44;
  } while (iVar14 < 4);
  iVar14 = 0;
  do {
    iVar9 = 0;
    do {
      iVar10 = iVar9 * 0x20;
      iVar11 = *(int *)(&DAT_ram_dcf83aa0 + iVar14 * 8 + iVar9 * 0x20 + 4);
      puVar13 = (undefined4 *)(iVar9 * 8 + iVar14 * 0x20 + -0x2307c4e0);
      iVar9 = iVar9 + 1;
      *puVar13 = *(undefined4 *)(&DAT_ram_dcf83aa0 + iVar14 * 8 + iVar10);
      puVar13[1] = -iVar11;
    } while (iVar9 < 4);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 1);
  iVar14 = 0;
  do {
    iVar9 = 0;
    iVar10 = iVar14 * 0x20 + -0x2307c4e0;
    do {
      iVar20 = 0;
      iVar11 = iVar9 * 8;
      iVar15 = 0;
      iVar17 = 0;
      do {
        uVar12 = *(uint *)(iVar10 + iVar20 * 8);
        uVar21 = *(uint *)(iVar20 * 8 + iVar10 + 4);
        iVar8 = iVar20 * 0x20 + param_2;
        uVar7 = *(uint *)(iVar8 + iVar11);
        uVar19 = *(uint *)(iVar8 + iVar11 + 4);
        uVar1 = (ulonglong)uVar7 * (ulonglong)(uVar12 & 0xffff);
        uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar12 & 0xffff0000);
        uVar3 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
          uVar3 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar19 * (ulonglong)(uVar21 & 0xffff);
        uVar2 = (longlong)(int)uVar19 * (longlong)(int)(uVar21 & 0xffff0000);
        uVar4 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
          uVar4 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar19 * (ulonglong)(uVar12 & 0xffff);
        uVar2 = (longlong)(int)uVar19 * (longlong)(int)(uVar12 & 0xffff0000);
        uVar5 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
          uVar5 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar21 * (ulonglong)(uVar7 & 0xffff);
        uVar2 = (longlong)(int)uVar21 * (longlong)(int)(uVar7 & 0xffff0000);
        uVar6 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
          uVar6 = 0x7fffffffffffffff;
        }
        iVar15 = iVar15 + (((int)uVar3 - (int)uVar4) + 0x200 >> 10);
        iVar17 = iVar17 + ((int)uVar5 + (int)uVar6 + 0x200 >> 10);
        iVar20 = iVar20 + 1;
      } while (iVar20 < 4);
      piVar18 = (int *)(iVar11 + iVar14 * 0x20 + -0x2307c2e0);
      iVar9 = iVar9 + 1;
      *piVar18 = iVar15;
      piVar18[1] = iVar17;
    } while (iVar9 < 1);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 1);
  uVar7 = FUN_ram_0003b948(iVar16,10,0,0);
  iVar14 = 0;
  do {
    iVar9 = 0;
    iVar16 = iVar14 * 0x20 + -0x2307c2e0;
    do {
      iVar10 = iVar9 * 8;
      uVar19 = *(uint *)(iVar16 + iVar10);
      uVar12 = *(uint *)(iVar16 + iVar10 + 4);
      iVar9 = iVar9 + 1;
      uVar1 = (ulonglong)uVar19 * (ulonglong)(uVar7 & 0xffff);
      uVar2 = (longlong)(int)uVar19 * (longlong)(int)(uVar7 & 0xffff0000);
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
      piVar18 = (int *)(iVar10 + iVar14 * 0x20 + -0x2307c2e0);
      *piVar18 = (int)uVar3 + 0x200 >> 10;
      piVar18[1] = (int)uVar4 + 0x200 >> 10;
    } while (iVar9 < 1);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 1);
  iVar14 = 0;
  do {
    iVar9 = 0;
    iVar16 = iVar14 * 0x20;
    do {
      iVar17 = 0;
      iVar15 = iVar9 * 8;
      iVar10 = 0;
      iVar11 = 0;
      do {
        uVar7 = *(uint *)(&DAT_ram_dcf83aa0 + iVar17 * 8 + iVar16);
        uVar21 = *(uint *)(&DAT_ram_dcf83aa0 + iVar17 * 8 + iVar16 + 4);
        iVar20 = iVar17 * 0x20 + -0x2307c2e0;
        uVar12 = *(uint *)(iVar20 + iVar15);
        uVar19 = *(uint *)(iVar20 + iVar15 + 4);
        uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar7 & 0xffff);
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar7 & 0xffff0000);
        uVar3 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
          uVar3 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar19 * (ulonglong)(uVar21 & 0xffff);
        uVar2 = (longlong)(int)uVar19 * (longlong)(int)(uVar21 & 0xffff0000);
        uVar4 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
          uVar4 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar19 * (ulonglong)(uVar7 & 0xffff);
        uVar2 = (longlong)(int)uVar19 * (longlong)(int)(uVar7 & 0xffff0000);
        uVar5 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
          uVar5 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar21 * (ulonglong)(uVar12 & 0xffff);
        uVar2 = (longlong)(int)uVar21 * (longlong)(int)(uVar12 & 0xffff0000);
        uVar6 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
          uVar6 = 0x7fffffffffffffff;
        }
        iVar10 = iVar10 + (((int)uVar3 - (int)uVar4) + 0x200 >> 10);
        iVar11 = iVar11 + ((int)uVar5 + (int)uVar6 + 0x200 >> 10);
        iVar17 = iVar17 + 1;
      } while (iVar17 < 1);
      piVar18 = (int *)(iVar15 + iVar16 + -0x2307c360);
      iVar9 = iVar9 + 1;
      *piVar18 = iVar10;
      piVar18[1] = iVar11;
    } while (iVar9 < 1);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 4);
  iVar14 = 0;
  do {
    iVar16 = 0;
    do {
      iVar9 = iVar16 * 0x20 + param_2;
      iVar10 = *(int *)(iVar9 + iVar14 * 8 + 4);
      puVar13 = (undefined4 *)(iVar16 * 8 + iVar14 * 0x20 + -0x2307c460);
      iVar16 = iVar16 + 1;
      *puVar13 = *(undefined4 *)(iVar9 + iVar14 * 8);
      puVar13[1] = -iVar10;
    } while (iVar16 < 4);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 1);
  iVar14 = 0;
  do {
    iVar16 = 0;
    iVar9 = iVar14 * 0x20 + -0x2307c460;
    do {
      iVar17 = 0;
      iVar11 = iVar16 * 8;
      iVar10 = 0;
      iVar15 = 0;
      do {
        uVar19 = *(uint *)(iVar9 + iVar17 * 8);
        uVar7 = *(uint *)(iVar17 * 8 + iVar9 + 4);
        iVar20 = iVar17 * 0x20 + -0x2307c360;
        uVar21 = *(uint *)(iVar20 + iVar11);
        uVar12 = *(uint *)(iVar20 + iVar11 + 4);
        uVar1 = (ulonglong)uVar21 * (ulonglong)(uVar19 & 0xffff);
        uVar2 = (longlong)(int)uVar21 * (longlong)(int)(uVar19 & 0xffff0000);
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
        uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar19 & 0xffff);
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar19 & 0xffff0000);
        uVar5 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
          uVar5 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar7 * (ulonglong)(uVar21 & 0xffff);
        uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar21 & 0xffff0000);
        uVar6 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
          uVar6 = 0x7fffffffffffffff;
        }
        iVar10 = iVar10 + (((int)uVar3 - (int)uVar4) + 0x200 >> 10);
        iVar15 = iVar15 + ((int)uVar5 + (int)uVar6 + 0x200 >> 10);
        iVar17 = iVar17 + 1;
      } while (iVar17 < 4);
      iVar16 = iVar16 + 1;
      *(int *)(&DAT_ram_dcf83aa0 + iVar11 + iVar14 * 0x20) = iVar10;
      *(int *)((int)(&DAT_ram_dcf83aa0 + iVar11 + iVar14 * 0x20) + 4) = iVar15;
    } while (iVar16 < 1);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 1);
  FUN_ram_0003a930(0xdcf83b20,&DAT_ram_dcf83aa0,1,10,0,0);
  iVar14 = 0;
  do {
    iVar9 = 0;
    iVar16 = iVar14 * 0x20 + -0x2307c360;
    do {
      iVar11 = 0;
      iVar10 = iVar9 * 8;
      iVar17 = 0;
      iVar15 = 0;
      do {
        uVar21 = *(uint *)(iVar16 + iVar11 * 8);
        uVar19 = *(uint *)(iVar11 * 8 + iVar16 + 4);
        iVar20 = iVar11 * 0x20 + -0x2307c4e0;
        uVar12 = *(uint *)(iVar20 + iVar10);
        uVar7 = *(uint *)(iVar20 + iVar10 + 4);
        uVar1 = (ulonglong)uVar12 * (ulonglong)(uVar21 & 0xffff);
        uVar2 = (longlong)(int)uVar12 * (longlong)(int)(uVar21 & 0xffff0000);
        uVar3 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
          uVar3 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar7 * (ulonglong)(uVar19 & 0xffff);
        uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar19 & 0xffff0000);
        uVar4 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar4) < 0) {
          uVar4 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar7 * (ulonglong)(uVar21 & 0xffff);
        uVar2 = (longlong)(int)uVar7 * (longlong)(int)(uVar21 & 0xffff0000);
        uVar5 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar5) < 0) {
          uVar5 = 0x7fffffffffffffff;
        }
        uVar1 = (ulonglong)uVar19 * (ulonglong)(uVar12 & 0xffff);
        uVar2 = (longlong)(int)uVar19 * (longlong)(int)(uVar12 & 0xffff0000);
        uVar6 = uVar1 + uVar2;
        if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar6) < 0) {
          uVar6 = 0x7fffffffffffffff;
        }
        iVar17 = iVar17 + (((int)uVar3 - (int)uVar4) + 0x200 >> 10);
        iVar15 = iVar15 + ((int)uVar5 + (int)uVar6 + 0x200 >> 10);
        iVar11 = iVar11 + 1;
      } while (iVar11 < 1);
      piVar18 = (int *)(iVar10 + iVar14 * 0x20 + param_1);
      iVar9 = iVar9 + 1;
      *piVar18 = iVar17;
      piVar18[1] = iVar15;
    } while (iVar9 < 1);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 4);
  return 1;
}


