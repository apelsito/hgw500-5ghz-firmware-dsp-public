/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00031214 */

/* WARNING: Removing unreachable block (ram,0x000315c2) */

undefined4 FUN_ram_00031214(int param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  undefined4 local_90;
  int local_8c;
  undefined1 *puStack_84;
  uint uStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_6c;
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
  
  uVar13 = *(uint *)(param_1 + 0x30);
  uVar10 = *(uint *)(param_2 + 4) >> 3 & 1;
  local_90 = 0;
  if (2 < (int)uVar13) {
    uVar10 = 0;
  }
  if (*(int *)(param_1 + 8) == 1) {
    iVar4 = 2;
    local_8c = 2;
  }
  else {
    local_8c = 4;
    iVar4 = 0;
  }
  if (local_8c + iVar4 == 4) {
    if ((iVar4 == 3) || (local_8c == 3)) {
      iVar4 = 5;
    }
    else {
      iVar4 = 4;
    }
    iVar17 = *(int *)(param_1 + 0x2c);
    iVar8 = iVar4 * 0x400;
    iVar5 = iVar4 * 0x200 + iVar17;
    if (*(char *)(param_1 + 0x7c) == '\0') {
      uStack_80 = 0x3f;
      puStack_84 = &DAT_ram_000b24e0;
      uVar12 = 1;
      iVar16 = 0x1c;
      iStack_74 = iVar4 * 0x300;
      pcVar15 = &DAT_ram_0005acdc;
      uVar14 = 0x40;
      iStack_7c = iVar4 * 0x100 + iVar17;
      iStack_78 = iVar5;
    }
    else {
      iStack_78 = iVar8 + iVar17;
      iStack_74 = iVar4 * 0x600;
      puStack_84 = &DAT_ram_000b2460;
      uVar12 = 2;
      iVar16 = 0x3a;
      uVar14 = 0x80;
      iVar8 = iVar4 << 0xb;
      uStack_80 = 0x7f;
      pcVar15 = (char *)0x5ad44;
      iStack_7c = iVar5;
    }
    iStack_74 = iStack_74 + iVar17;
    FUN_ram_0004070c(&DAT_ram_000b2680,iVar8 >> 2);
    iVar5 = 0;
    iStack_6c = 0;
    do {
      uVar11 = -iVar16;
      iVar16 = -uVar12;
      for (uVar12 = uVar11; (int)uVar12 <= iVar16; uVar12 = uVar12 + 1) {
        uVar9 = uStack_80 & uVar12;
        iStack_58 = (uint)(byte)puStack_84[uVar9] * 4;
        iStack_64 = iStack_58 + iVar17;
        iStack_5c = iStack_78 + iStack_58;
        iStack_60 = iStack_7c + iStack_58;
        iStack_58 = iStack_58 + iStack_74;
        if (uVar10 == 0) {
          if (*(int *)(param_1 + 8) == 1) {
            puStack_54 = &DAT_ram_000b2680 + uVar9 * 0x10;
            puStack_50 = &DAT_ram_000b2688 + uVar9 * 0x10;
            puStack_4c = puStack_54;
            puStack_48 = puStack_50;
          }
          else {
            uVar1 = (ulonglong)(uVar9 << 1) * (ulonglong)(uVar13 & 0xffff);
            uVar2 = (longlong)(int)(uVar9 << 1) * (longlong)(int)(uVar13 & 0xffff0000);
            uVar3 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
              uVar3 = 0x7fffffffffffffff;
            }
            puStack_54 = &DAT_ram_000b2680 + (int)uVar3 * 4;
            iVar6 = uVar13 * 2;
            puStack_50 = puStack_54 + iVar6;
            puStack_4c = puStack_50 + iVar6;
            puStack_48 = puStack_4c + iVar6;
          }
        }
        FUN_ram_000303a8(&iStack_64,&DAT_ram_000b2520,uVar12,uVar14,local_8c,iVar4,(int)*pcVar15);
        FUN_ram_00029948(&DAT_ram_000b2520,3,*(undefined4 *)(param_2 + 4),&DAT_ram_000b25a0,
                         &DAT_ram_000b3680 + iVar5 * 4,uVar13);
        iVar5 = iVar5 + 1;
        if (uVar10 == 0) {
          if (*(int *)(param_1 + 8) == 1) {
            if (uVar13 == 2) {
              uVar7 = 2;
            }
            else {
              uVar7 = 1;
            }
            FUN_ram_00030e4c(&puStack_54,&DAT_ram_000b25a0,uVar7);
          }
          else {
            FUN_ram_00030df4(&puStack_54,&DAT_ram_000b25a0,uVar13,4);
          }
        }
        else {
          FUN_ram_00031010(&iStack_64,&DAT_ram_000b25a0,uVar14);
        }
        pcVar15 = pcVar15 + 1;
      }
      iStack_6c = iStack_6c + 1;
      uVar12 = uVar11;
    } while (iStack_6c < 2);
    if (uVar10 != 0) {
      iVar5 = FUN_ram_0002af30(&DAT_ram_000b3680,iVar5,&uStack_44,&uStack_40);
      uStack_3c = FUN_ram_0002aa98(uStack_44,uStack_40,*(undefined1 *)(param_1 + 0x7e),
                                   *(undefined1 *)(param_1 + 0x7f),*(undefined1 *)(param_1 + 0x7d),
                                   *(undefined1 *)(param_1 + 0x80));
      local_3b = 0xdd;
      iVar4 = 0;
      iStack_6c = 0;
      do {
        uVar9 = -iVar16;
        iVar16 = -uVar11;
        for (uVar12 = uVar9; (int)uVar12 <= iVar16; uVar12 = uVar12 + 1) {
          uVar11 = uStack_80 & uVar12;
          iStack_58 = (uint)(byte)puStack_84[uVar11] * 4;
          iStack_64 = iStack_58 + iVar17;
          iStack_60 = iStack_7c + iStack_58;
          iStack_5c = iStack_78 + iStack_58;
          iStack_58 = iStack_58 + iStack_74;
          if (*(int *)(param_1 + 8) == 1) {
            puStack_54 = &DAT_ram_000b2680 + uVar11 * 0x10;
            puStack_50 = &DAT_ram_000b2688 + uVar11 * 0x10;
            puStack_4c = puStack_54;
            puStack_48 = puStack_50;
          }
          else {
            uVar1 = (ulonglong)(uVar11 << 1) * (ulonglong)(uVar13 & 0xffff);
            uVar2 = (longlong)(int)(uVar11 << 1) * (longlong)(int)(uVar13 & 0xffff0000);
            uVar3 = uVar1 + uVar2;
            if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
              uVar3 = 0x7fffffffffffffff;
            }
            puStack_54 = &DAT_ram_000b2680 + (int)uVar3 * 4;
            iVar6 = uVar13 * 2;
            puStack_50 = puStack_54 + iVar6;
            puStack_4c = puStack_50 + iVar6;
            puStack_48 = puStack_4c + iVar6;
          }
          FUN_ram_00031040(&iStack_64,&DAT_ram_000b25a0,uVar14);
          if (uVar10 != 0) {
            iVar6 = iVar4 * 4;
            if (((*(uint *)(param_2 + 4) & 1) == 0) || (uVar13 != 1)) {
              uVar11 = *(uint *)(param_2 + 4) & 1;
            }
            else {
              uVar11 = 0;
            }
            iVar4 = iVar4 + 1;
            FUN_ram_0002a7f8(&DAT_ram_000b25a0,&DAT_ram_000b3680 + iVar6,iVar5,uVar11);
          }
          if (*(int *)(param_1 + 8) == 1) {
            if (iVar5 == 0) {
              uVar7 = 1;
            }
            else {
              uVar7 = 2;
            }
            FUN_ram_00030e4c(&puStack_54,&DAT_ram_000b25a0,uVar7);
          }
          else {
            if (iVar5 == 0) {
              uVar7 = 1;
            }
            else {
              uVar7 = 2;
            }
            FUN_ram_00030df4(&puStack_54,&DAT_ram_000b25a0,uVar7,4);
          }
        }
        iStack_6c = iStack_6c + 1;
        uVar11 = uVar9;
      } while (iStack_6c < 2);
    }
    FUN_ram_0003ea50(*(undefined4 *)(param_1 + 0x10),&uStack_3c,2);
    iVar4 = ((int)uVar13 / 2) * (iVar8 >> 2);
    FUN_ram_0003ea50(*(int *)(param_1 + 0x10) + 2,&DAT_ram_000b2680,iVar4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar4 + 2;
  }
  else {
    local_90 = 1;
  }
  return local_90;
}


