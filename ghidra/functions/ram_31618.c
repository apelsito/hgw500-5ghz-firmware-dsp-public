/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00031618 */

undefined4 FUN_ram_00031618(int param_1,int param_2)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  char *pcVar21;
  char *pcVar22;
  bool bVar23;
  uint uStack_a8;
  uint local_a4;
  uint local_88;
  int local_84;
  undefined1 *local_80;
  uint local_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  undefined *puStack_6c;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  undefined *puStack_54;
  undefined *puStack_50;
  undefined *puStack_4c;
  undefined *puStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined1 local_3b;
  
  uVar15 = (uint)*(byte *)(param_1 + 0x89);
  bVar7 = false;
  uVar20 = *(int *)(param_1 + 0x34) + 1;
  uVar19 = *(int *)(param_1 + 0x38) + 1;
  uStack_a8 = *(uint *)(param_2 + 4) >> 3 & 1;
  local_a4 = (uint)*(byte *)(param_1 + 0x88);
  bVar8 = false;
  uVar9 = *(uint *)(param_1 + 0x3c) & 3;
  uVar18 = 2;
  if (uVar9 < 2) {
    uVar18 = uVar9;
  }
  uVar2 = (ulonglong)(uVar19 * 2) * (ulonglong)(uVar20 & 0xffff);
  uVar3 = (longlong)(int)(uVar19 * 2) * (longlong)(int)(uVar20 & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  if ((int)uVar20 < 3) {
    if (uVar20 == 2) {
      bVar7 = true;
    }
  }
  else {
    uStack_a8 = 0;
  }
  if (*(int *)(param_1 + 8) == 1) {
    uVar15 = 2;
    local_a4 = 2;
  }
  else if (((*(int *)(param_1 + 8) == 4) && (local_a4 == 2)) && (uVar15 == 0)) {
    bVar8 = true;
    uStack_a8 = 0;
  }
  if (local_a4 + uVar15 < 5) {
    if ((uVar15 == 3) || (local_a4 == 3)) {
      iVar12 = 5;
    }
    else {
      iVar12 = 4;
    }
    iVar13 = *(int *)(param_1 + 0x2c);
    cVar1 = *(char *)(param_1 + 0x7c);
    iVar11 = iVar12 * 0x400;
    iVar16 = iVar13 + iVar12 * 0x200;
    if (*(char *)(param_1 + 0x7c) == '\0') {
      local_88 = 0xffffffe0;
      local_84 = 0x1f;
      local_80 = &DAT_ram_000b24e0;
      local_7c = 0x3f;
      iStack_78 = iVar13 + iVar12 * 0x100;
      local_70 = iVar12 * 0x300 + iVar13;
      uVar10 = 0x40;
      iStack_74 = iVar16;
      if (uVar18 == 1) {
        pcVar21 = &DAT_ram_0005ad14;
        puStack_6c = &DAT_ram_0005af0c;
      }
      else if (uVar18 == 2) {
        pcVar21 = (char *)0x5ad34;
        puStack_6c = &DAT_ram_0005af2c;
      }
      else {
        pcVar21 = &DAT_ram_0005acdc;
        puStack_6c = &DAT_ram_0005aed4;
      }
    }
    else {
      local_88 = 0xffffffc0;
      local_84 = 0x3f;
      iStack_74 = iVar13 + iVar11;
      local_80 = &DAT_ram_000b2460;
      local_7c = 0x7f;
      local_70 = iVar13 + iVar12 * 0x600;
      uVar10 = 0x80;
      iVar11 = iVar12 << 0xb;
      iStack_78 = iVar16;
      if (uVar18 == 1) {
        pcVar21 = (char *)0x5adb8;
        puStack_6c = &DAT_ram_0005afb0;
      }
      else if (uVar18 == 2) {
        pcVar21 = (char *)0x5adf4;
        puStack_6c = &DAT_ram_0005afec;
      }
      else {
        puStack_6c = &DAT_ram_0005af3c;
        pcVar21 = (char *)0x5ad44;
      }
    }
    FUN_ram_0004070c(&DAT_ram_000b2680,iVar11 >> 2);
    iVar11 = 0;
    iVar16 = 0;
    for (uVar9 = local_88; (int)uVar9 <= local_84; uVar9 = uVar9 + 1) {
      pcVar22 = pcVar21;
      if ((int)(char)puStack_6c[iVar11] == uVar9) {
        uVar2 = (ulonglong)uVar19 * (ulonglong)(uVar20 & 0xffff);
        uVar3 = (longlong)(int)uVar19 * (longlong)(int)(uVar20 & 0xffff0000);
        uVar5 = uVar2 + uVar3;
        if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
          uVar5 = 0x7fffffffffffffff;
        }
        iStack_5c = (uint)(byte)local_80[local_7c & uVar9] * 4;
        iStack_64 = iVar13 + iStack_5c;
        iStack_60 = iStack_78 + iStack_5c;
        iStack_58 = local_70 + iStack_5c;
        iStack_5c = iStack_74 + iStack_5c;
        if (uStack_a8 == 0) {
          if (*(int *)(param_1 + 8) == 1) {
            puStack_54 = &DAT_ram_000b2680 + iVar11 * 0x10;
            puStack_50 = &DAT_ram_000b2688 + iVar11 * 0x10;
            puStack_4c = puStack_54;
            puStack_48 = puStack_50;
          }
          else {
            uVar2 = (ulonglong)(uint)(iVar11 << 1) * (ulonglong)(uVar20 & 0xffff);
            uVar3 = (longlong)(iVar11 << 1) * (longlong)(int)(uVar20 & 0xffff0000);
            uVar6 = uVar2 + uVar3;
            if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
              uVar6 = 0x7fffffffffffffff;
            }
            uVar2 = (uVar6 & 0xffffffff) * (ulonglong)(uVar19 & 0xffff);
            uVar3 = (longlong)(int)uVar6 * (longlong)(int)(uVar19 & 0xffff0000);
            uVar6 = uVar2 + uVar3;
            if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar6) < 0) {
              uVar6 = 0x7fffffffffffffff;
            }
            puStack_54 = &DAT_ram_000b2680 + (int)uVar6;
            iVar17 = uVar20 * 2;
            puStack_50 = puStack_54 + iVar17;
            puStack_4c = puStack_50 + iVar17;
            puStack_48 = puStack_4c + iVar17;
          }
        }
        pcVar22 = pcVar21 + 1;
        if (bVar8) {
          FUN_ram_00030c84();
        }
        else {
          FUN_ram_000303a8(&iStack_64,&DAT_ram_000b2520,uVar9,uVar10,local_a4,iVar12,(int)*pcVar21);
        }
        bVar23 = ((int)uVar9 % 2 & (uint)(uVar18 < 2 && cVar1 != '\0')) == 0;
        if (bVar23) {
          if (bVar8) {
            FUN_ram_0002b370(&DAT_ram_000b2520,0,&DAT_ram_000b25a0,&DAT_ram_000b3680 + iVar11 * 4);
          }
          else {
            FUN_ram_00029948(&DAT_ram_000b2520,3,*(undefined4 *)(param_2 + 4),&DAT_ram_000b25a0,
                             &DAT_ram_000b3680 + iVar11 * 4,uVar20);
          }
        }
        else {
          (&DAT_ram_000b3680)[iVar11 * 4] = (&DAT_ram_000b3670)[iVar11 * 4];
          (&DAT_ram_000b3684)[iVar11 * 4] = (&DAT_ram_000b3674)[iVar11 * 4];
          (&DAT_ram_000b3688)[iVar11 * 4] = (&DAT_ram_000b3678)[iVar11 * 4];
          (&DAT_ram_000b368c)[iVar11 * 4] = (&DAT_ram_000b367c)[iVar11 * 4];
        }
        if (bVar23) {
          if (bVar8) {
            FUN_ram_0003ec60(&DAT_ram_000b25e0,&DAT_ram_000b25a0,0x40);
          }
          else {
            FUN_ram_0003ec60(&DAT_ram_000b25e0,&DAT_ram_000b25a0,(int)uVar4 << 1);
          }
        }
        iVar11 = iVar11 + 1;
        if (uStack_a8 == 0) {
          if (*(int *)(param_1 + 8) == 1) {
            if (bVar7) {
              uVar14 = 2;
            }
            else {
              uVar14 = 1;
            }
            FUN_ram_00030e4c(&puStack_54,&DAT_ram_000b25e0,uVar14);
          }
          else {
            FUN_ram_00030df4(&puStack_54,&DAT_ram_000b25e0,uVar20,uVar19);
          }
        }
        else {
          FUN_ram_00031010(&iStack_64,&DAT_ram_000b25e0,uVar10);
        }
        iVar16 = iVar16 + ((uint)uVar5 & 0x3fffffff) * 2;
      }
      pcVar21 = pcVar22;
    }
    if (uStack_a8 != 0) {
      iVar11 = FUN_ram_0002af30(&DAT_ram_000b3680,iVar11,&uStack_44,&uStack_40);
      uStack_3c = FUN_ram_0002aa98(uStack_44,uStack_40,*(undefined1 *)(param_1 + 0x7e),
                                   *(undefined1 *)(param_1 + 0x7f),*(undefined1 *)(param_1 + 0x7d),
                                   *(undefined1 *)(param_1 + 0x80));
      local_3b = 0xdd;
      iVar12 = 0;
      iVar16 = 0;
      for (; (int)local_88 <= local_84; local_88 = local_88 + 1) {
        if ((int)(char)puStack_6c[iVar12] == local_88) {
          uVar2 = (ulonglong)uVar19 * (ulonglong)(uVar20 & 0xffff);
          uVar3 = (longlong)(int)uVar19 * (longlong)(int)(uVar20 & 0xffff0000);
          uVar4 = uVar2 + uVar3;
          if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
            uVar4 = 0x7fffffffffffffff;
          }
          iStack_58 = (uint)(byte)local_80[local_7c & local_88] * 4;
          iStack_60 = iStack_78 + iStack_58;
          iStack_5c = iStack_74 + iStack_58;
          iStack_64 = iVar13 + iStack_58;
          iStack_58 = iStack_58 + local_70;
          if (*(int *)(param_1 + 8) == 1) {
            puStack_54 = &DAT_ram_000b2680 + iVar12 * 0x10;
            puStack_50 = &DAT_ram_000b2688 + iVar12 * 0x10;
            puStack_4c = puStack_54;
            puStack_48 = puStack_50;
          }
          else {
            uVar2 = (ulonglong)(uint)(iVar12 << 1) * (ulonglong)(uVar20 & 0xffff);
            uVar3 = (longlong)(iVar12 << 1) * (longlong)(int)(uVar20 & 0xffff0000);
            uVar5 = uVar2 + uVar3;
            if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
              uVar5 = 0x7fffffffffffffff;
            }
            uVar2 = (uVar5 & 0xffffffff) * (ulonglong)(uVar19 & 0xffff);
            uVar3 = (longlong)(int)uVar5 * (longlong)(int)(uVar19 & 0xffff0000);
            uVar5 = uVar2 + uVar3;
            if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
              uVar5 = 0x7fffffffffffffff;
            }
            puStack_54 = &DAT_ram_000b2680 + (int)uVar5;
            iVar17 = uVar20 * 2;
            puStack_50 = puStack_54 + iVar17;
            puStack_4c = puStack_50 + iVar17;
            puStack_48 = puStack_4c + iVar17;
          }
          FUN_ram_00031040(&iStack_64,&DAT_ram_000b25a0,uVar10);
          if (uStack_a8 != 0) {
            if (((*(uint *)(param_2 + 4) & 1) == 0) || (uVar20 != 1)) {
              uVar18 = *(uint *)(param_2 + 4) & 1;
            }
            else {
              uVar18 = 0;
            }
            FUN_ram_0002a7f8(&DAT_ram_000b25a0,&DAT_ram_000b3680 + iVar12 * 4,iVar11,uVar18);
          }
          iVar12 = iVar12 + 1;
          if (*(int *)(param_1 + 8) == 1) {
            if (iVar11 == 0) {
              uVar14 = 1;
            }
            else {
              uVar14 = 2;
            }
            FUN_ram_00030e4c(&puStack_54,&DAT_ram_000b25a0,uVar14);
          }
          else {
            if (iVar11 == 0) {
              uVar14 = 1;
            }
            else {
              uVar14 = 2;
            }
            FUN_ram_00030df4(&puStack_54,&DAT_ram_000b25a0,uVar14,uVar19);
          }
          iVar16 = iVar16 + ((uint)uVar4 & 0x3fffffff) * 2;
        }
      }
    }
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar20;
    FUN_ram_0003ea50(*(undefined4 *)(param_1 + 0x10),&uStack_3c,uVar20);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar16;
    FUN_ram_0003ea50(*(int *)(param_1 + 0x10) + uVar20,&DAT_ram_000b2680,iVar16);
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  return uVar10;
}


