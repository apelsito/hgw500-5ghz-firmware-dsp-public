/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00031c04 */

/* WARNING: Removing unreachable block (ram,0x00032276) */

undefined4 FUN_ram_00031c04(int param_1,int param_2)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  char *pcVar19;
  int iVar20;
  bool bVar21;
  uint local_c4;
  int local_b8;
  uint local_a8;
  int iStack_a4;
  undefined1 *puStack_a0;
  uint uStack_9c;
  int iStack_98;
  int local_94;
  int iStack_90;
  undefined4 uStack_8c;
  int local_88;
  undefined1 *local_84;
  undefined *local_80;
  undefined *puStack_6c;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  undefined *puStack_54;
  undefined *puStack_50;
  undefined *puStack_4c;
  undefined *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  
  bVar6 = false;
  local_c4 = *(uint *)(param_2 + 4) >> 3 & 1;
  uVar16 = *(int *)(param_1 + 0x38) + 1;
  uVar17 = *(int *)(param_1 + 0x34) + 1;
  uVar11 = *(uint *)(param_1 + 0x3c) & 3;
  uVar14 = 2;
  if (uVar11 < 2) {
    uVar14 = uVar11;
  }
  uVar2 = (ulonglong)(uVar16 * 2) * (ulonglong)(uVar17 & 0xffff);
  uVar3 = (longlong)(int)(uVar16 * 2) * (longlong)(int)(uVar17 & 0xffff0000);
  uVar4 = uVar2 + uVar3;
  if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  if ((int)uVar17 < 3) {
    if (uVar17 == 2) {
      bVar6 = true;
    }
  }
  else {
    local_c4 = 0;
  }
  if (*(int *)(param_1 + 8) == 1) {
    iVar7 = 2;
    local_b8 = 2;
  }
  else {
    local_b8 = 4;
    iVar7 = 0;
  }
  if (local_b8 + iVar7 == 4) {
    if ((iVar7 == 3) || (local_b8 == 3)) {
      iVar7 = 5;
    }
    else {
      iVar7 = 4;
    }
    iVar12 = *(int *)(param_1 + 0x2c);
    if (*(int *)(param_1 + 0xc) == 1) {
      if (*(int *)(param_1 + 0x58) == 0) {
        iVar20 = 1;
      }
      else {
        iVar20 = 3;
      }
    }
    else {
      iVar20 = *(int *)(param_1 + 0x58);
    }
    puStack_6c = &DAT_ram_000b2680;
    local_68 = 0;
    if (*(int *)(param_1 + 0x54) != 0) {
      DAT_ram_00055970 = DAT_ram_00054a68;
      DAT_ram_00055971 = DAT_ram_00054a69;
      DAT_ram_00055972 = DAT_ram_00054a6a;
      DAT_ram_00055973 = DAT_ram_00054a6b;
      DAT_ram_00055974 = DAT_ram_00054a6c;
      DAT_ram_00055976 = DAT_ram_00054a6e;
      DAT_ram_00055978 = DAT_ram_00054a70;
      DAT_ram_0005597a = DAT_ram_00054a72;
      DAT_ram_0005597c = DAT_ram_00054a74;
      DAT_ram_0005597d = DAT_ram_00054a75;
      DAT_ram_0005597e = DAT_ram_00054a76;
      DAT_ram_0005597f = DAT_ram_00054a77;
      DAT_ram_00055980 = DAT_ram_00054a78;
      DAT_ram_00055981 = DAT_ram_00054a79;
      DAT_ram_00055982 = DAT_ram_00054a7a;
      DAT_ram_00055983 = DAT_ram_00054a7b;
    }
    cVar1 = *(char *)(param_1 + 0x7c);
    iVar15 = iVar7 * 0x400;
    iVar9 = iVar12 + iVar7 * 0x200;
    if (*(char *)(param_1 + 0x7c) == '\0') {
      iStack_a4 = 0x1f;
      local_a8 = 0xffffffe0;
      puStack_a0 = &DAT_ram_000b24e0;
      uStack_9c = 0x3f;
      iStack_98 = iVar12 + iVar7 * 0x100;
      local_88 = 0x20;
      iStack_90 = iVar12 + iVar7 * 0x300;
      uStack_8c = 0x40;
      local_84 = &DAT_ram_0005ae14;
      local_94 = iVar9;
      if (uVar14 == 2) {
        local_80 = &DAT_ram_0005af2c;
      }
      else if (uVar14 == 1) {
        local_80 = &DAT_ram_0005af0c;
      }
      else {
        local_80 = &DAT_ram_0005aed4;
      }
    }
    else {
      local_a8 = 0xffffffc0;
      iStack_a4 = 0x3f;
      puStack_a0 = &DAT_ram_000b2460;
      uStack_9c = 0x7f;
      local_94 = iVar15 + iVar12;
      iStack_90 = iVar12 + iVar7 * 0x600;
      uStack_8c = 0x80;
      iVar15 = iVar7 << 0xb;
      local_88 = 0x40;
      local_84 = &DAT_ram_0005ae54;
      iStack_98 = iVar9;
      if (uVar14 == 2) {
        local_80 = &DAT_ram_0005afec;
      }
      else if (uVar14 == 1) {
        local_80 = &DAT_ram_0005afb0;
      }
      else {
        local_80 = &DAT_ram_0005af3c;
      }
    }
    FUN_ram_0004070c(&DAT_ram_000b2680,iVar15 >> 2);
    FUN_ram_0004070c(&DAT_ram_000b2560,0x40);
    iVar15 = 0;
    iVar9 = 0;
    if ((int)local_a8 <= iStack_a4) {
      uVar11 = local_a8;
      do {
        pcVar19 = local_80 + iVar15;
        local_58 = (uint)(byte)puStack_a0[uStack_9c & uVar11] * 4;
        iStack_64 = iVar12 + local_58;
        iStack_60 = iStack_98 + local_58;
        iStack_5c = local_94 + local_58;
        local_58 = local_58 + iStack_90;
        uVar18 = local_88 + uVar11;
        if (local_c4 == 0) {
          if (*(int *)(param_1 + 8) == 1) {
            puStack_54 = &DAT_ram_000b2680 + iVar15 * 0x10;
            puStack_50 = &DAT_ram_000b2688 + iVar15 * 0x10;
            puStack_4c = puStack_54;
            local_48 = puStack_50;
          }
          else {
            uVar2 = (ulonglong)(uint)(iVar15 << 1) * (ulonglong)(uVar17 & 0xffff);
            uVar3 = (longlong)(iVar15 << 1) * (longlong)(int)(uVar17 & 0xffff0000);
            uVar5 = uVar2 + uVar3;
            if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
              uVar5 = 0x7fffffffffffffff;
            }
            uVar2 = (uVar5 & 0xffffffff) * (ulonglong)(uVar16 & 0xffff);
            uVar3 = (longlong)(int)uVar5 * (longlong)(int)(uVar16 & 0xffff0000);
            uVar5 = uVar2 + uVar3;
            if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
              uVar5 = 0x7fffffffffffffff;
            }
            puStack_54 = &DAT_ram_000b2680 + (int)uVar5;
            iVar13 = uVar17 * 2;
            puStack_50 = puStack_54 + iVar13;
            puStack_4c = puStack_50 + iVar13;
            local_48 = puStack_4c + iVar13;
          }
        }
        if (local_84[uVar18] == '\0') {
          FUN_ram_0004070c(&DAT_ram_000b2520,0x40);
        }
        else {
          FUN_ram_000303a8(&iStack_64,&DAT_ram_000b2520,uVar11,uStack_8c,local_b8,iVar7);
        }
        if (((uint)(iStack_a4 + local_88) < uVar18 + 4) || (local_84[uVar18 + 4] != '\0')) {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
        uVar10 = (uint)*pcVar19;
        if (uVar10 - 2 == uVar11) {
          FUN_ram_00031184(&DAT_ram_000b2560,&DAT_ram_000b2520,DAT_ram_0005ac88,uVar8,0);
          uVar10 = (uint)*pcVar19;
        }
        if (((uint)(iStack_a4 + local_88) < uVar18 + 2) || (local_84[uVar18 + 2] != '\0')) {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
        if (uVar10 - 1 == uVar11) {
          FUN_ram_00031184(&DAT_ram_000b2560,&DAT_ram_000b2520,DAT_ram_0005ac8c,uVar8,0);
          uVar10 = (uint)*pcVar19;
        }
        if (uVar10 == uVar11) {
          FUN_ram_00031184(&DAT_ram_000b2560,&DAT_ram_000b2520,DAT_ram_0005ac90,0,0);
          uVar10 = (uint)*pcVar19;
        }
        if ((uVar18 < local_88 + local_a8 + 2) || (local_84[uVar18 - 2] != '\0')) {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
        if (uVar10 + 1 == uVar11) {
          FUN_ram_00031184(&DAT_ram_000b2560,&DAT_ram_000b2520,DAT_ram_0005ac94,uVar8,0);
          uVar10 = (uint)*pcVar19;
        }
        if ((uVar18 < local_88 + local_a8 + 4) || (local_84[uVar18 - 4] != '\0')) {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
        uVar10 = uVar10 + 2;
        if (uVar10 == uVar11) {
          FUN_ram_00031184(&DAT_ram_000b2560,&DAT_ram_000b2520,DAT_ram_0005ac98,uVar8,0);
          uVar10 = (int)*pcVar19 + 2;
        }
        if (uVar10 == uVar11) {
          uVar10 = (uint)((int)uVar11 >> 1) >> 0x1e;
          bVar21 = ((uVar10 + uVar11 & 3) - uVar10 & (uint)(uVar14 < 2 && cVar1 != '\0')) == 0;
          if (bVar21) {
            FUN_ram_00029948(&DAT_ram_000b2560,3,*(undefined4 *)(param_2 + 4),&DAT_ram_000b25a0,
                             &DAT_ram_000b3680 + iVar15 * 4,uVar17);
            FUN_ram_00031184(&DAT_ram_000b2560,&DAT_ram_000b2520,DAT_ram_0005ac88,
                             local_84[uVar18 + 4] == '\0',1);
            if ((local_c4 == 0) && (*(int *)(param_1 + 0x54) != 0)) {
              if (*(int *)(param_1 + 0x38) == 2) {
                FUN_ram_0002d564();
              }
              else {
                FUN_ram_0002c648(&DAT_ram_000b25a0,&DAT_ram_000b2640);
              }
            }
          }
          else {
            (&DAT_ram_000b3680)[iVar15 * 4] = (&DAT_ram_000b3670)[iVar15 * 4];
            (&DAT_ram_000b3684)[iVar15 * 4] = (&DAT_ram_000b3674)[iVar15 * 4];
            (&DAT_ram_000b3688)[iVar15 * 4] = (&DAT_ram_000b3678)[iVar15 * 4];
            (&DAT_ram_000b368c)[iVar15 * 4] = (&DAT_ram_000b367c)[iVar15 * 4];
          }
          if ((bVar21) &&
             (FUN_ram_0003ec60(&DAT_ram_000b25e0,&DAT_ram_000b25a0,(int)uVar4 << 1),
             *(int *)(param_1 + 0x54) != 0)) {
            FUN_ram_0003ec60(&DAT_ram_000b2660,&DAT_ram_000b2640,0x20);
          }
          iVar15 = iVar15 + 1;
          if (local_c4 == 0) {
            if (*(int *)(param_1 + 8) == 1) {
              if (bVar6) {
                uVar8 = 2;
              }
              else {
                uVar8 = 1;
              }
              FUN_ram_00030e4c(&puStack_54,&DAT_ram_000b25e0,uVar8);
            }
            else if (*(int *)(param_1 + 0x54) == 0) {
              FUN_ram_00030df4(&puStack_54,&DAT_ram_000b25e0,uVar17,uVar16);
            }
            else {
              FUN_ram_0002fa3c(&DAT_ram_000b2620,&DAT_ram_000b2660,iVar20,
                               *(undefined1 *)(uVar17 + *(int *)(param_1 + 0x38) * 4 + 0x54a57),
                               local_68,*(undefined4 *)(param_1 + 0x38));
              FUN_ram_0002c580(&puStack_6c,&DAT_ram_000b2620,&local_68,iVar20,uVar17,uVar16);
            }
          }
          else {
            FUN_ram_00031010(&iStack_64,&DAT_ram_000b25e0,uStack_8c);
          }
          if (*(int *)(param_1 + 0x54) == 0) {
            uVar2 = (ulonglong)uVar16 * (ulonglong)(uVar17 & 0xffff);
            uVar3 = (longlong)(int)uVar16 * (longlong)(int)(uVar17 & 0xffff0000);
            uVar5 = uVar2 + uVar3;
            if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar5) < 0) {
              uVar5 = 0x7fffffffffffffff;
            }
            iVar9 = iVar9 + ((uint)uVar5 & 0x3fffffff) * 2;
          }
          else {
            iVar9 = iVar9 + ((byte)(&DAT_ram_00055970)[iVar20] - 1) *
                            (uint)*(byte *)(uVar17 + *(int *)(param_1 + 0x38) * 4 + 0x54a57);
          }
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 <= iStack_a4);
    }
    if (local_c4 != 0) {
      iVar15 = FUN_ram_0002af30(&DAT_ram_000b3680,iVar15,&local_44,&local_40);
      local_3c = FUN_ram_0002aa98(local_44,local_40,*(undefined1 *)(param_1 + 0x7e),
                                  *(undefined1 *)(param_1 + 0x7f),*(undefined1 *)(param_1 + 0x7d),
                                  *(undefined1 *)(param_1 + 0x80));
      local_3b = 0xdd;
      iVar7 = 0;
      iVar9 = 0;
      local_68 = 0;
      for (; (int)local_a8 <= iStack_a4; local_a8 = local_a8 + 1) {
        if ((int)(char)local_80[iVar7] == local_a8) {
          local_58 = (uint)(byte)puStack_a0[uStack_9c & local_a8] * 4;
          iStack_60 = iStack_98 + local_58;
          iStack_64 = iVar12 + local_58;
          iStack_5c = local_94 + local_58;
          local_58 = local_58 + iStack_90;
          if (*(int *)(param_1 + 8) == 1) {
            puStack_54 = &DAT_ram_000b2680 + iVar7 * 0x10;
            puStack_50 = &DAT_ram_000b2688 + iVar7 * 0x10;
            puStack_4c = puStack_54;
            local_48 = puStack_50;
          }
          else {
            uVar2 = (ulonglong)(uint)(iVar7 << 1) * (ulonglong)(uVar17 & 0xffff);
            uVar3 = (longlong)(iVar7 << 1) * (longlong)(int)(uVar17 & 0xffff0000);
            uVar4 = uVar2 + uVar3;
            if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
              uVar4 = 0x7fffffffffffffff;
            }
            uVar2 = (uVar4 & 0xffffffff) * (ulonglong)(uVar16 & 0xffff);
            uVar3 = (longlong)(int)uVar4 * (longlong)(int)(uVar16 & 0xffff0000);
            uVar4 = uVar2 + uVar3;
            if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
              uVar4 = 0x7fffffffffffffff;
            }
            puStack_54 = &DAT_ram_000b2680 + (int)uVar4;
            iVar13 = uVar17 * 2;
            puStack_50 = puStack_54 + iVar13;
            puStack_4c = puStack_50 + iVar13;
            local_48 = puStack_4c + iVar13;
          }
          FUN_ram_00031040(&iStack_64,&DAT_ram_000b25a0,uStack_8c);
          if (local_c4 != 0) {
            if (((*(uint *)(param_2 + 4) & 1) == 0) || (uVar17 != 1)) {
              uVar14 = *(uint *)(param_2 + 4) & 1;
            }
            else {
              uVar14 = 0;
            }
            FUN_ram_0002a7f8(&DAT_ram_000b25a0,&DAT_ram_000b3680 + iVar7 * 4,iVar15,uVar14);
          }
          if (*(int *)(param_1 + 0x54) != 0) {
            if (*(int *)(param_1 + 0x38) == 2) {
              FUN_ram_0002d564();
            }
            else {
              FUN_ram_0002c648(&DAT_ram_000b25a0,&DAT_ram_000b2640);
            }
          }
          iVar7 = iVar7 + 1;
          if (*(int *)(param_1 + 8) == 1) {
            if (iVar15 == 0) {
              uVar8 = 1;
            }
            else {
              uVar8 = 2;
            }
            FUN_ram_00030e4c(&puStack_54,&DAT_ram_000b25a0,uVar8);
          }
          else if (*(int *)(param_1 + 0x54) == 0) {
            if (iVar15 == 0) {
              uVar8 = 1;
            }
            else {
              uVar8 = 2;
            }
            FUN_ram_00030df4(&puStack_54,&DAT_ram_000b25a0,uVar8,uVar16);
          }
          else {
            FUN_ram_0002fa3c(&DAT_ram_000b2620,&DAT_ram_000b2640,iVar20,
                             *(undefined1 *)(uVar17 + *(int *)(param_1 + 0x38) * 4 + 0x54a57),
                             local_68,*(undefined4 *)(param_1 + 0x38));
            FUN_ram_0002c580(&puStack_6c,&DAT_ram_000b2620,&local_68,iVar20,uVar17,uVar16);
          }
          if (*(int *)(param_1 + 0x54) == 0) {
            uVar2 = (ulonglong)uVar16 * (ulonglong)(uVar17 & 0xffff);
            uVar3 = (longlong)(int)uVar16 * (longlong)(int)(uVar17 & 0xffff0000);
            uVar4 = uVar2 + uVar3;
            if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
              uVar4 = 0x7fffffffffffffff;
            }
            iVar9 = iVar9 + ((uint)uVar4 & 0x3fffffff) * 2;
          }
          else {
            uVar14 = (uint)*(byte *)(uVar17 + *(int *)(param_1 + 0x38) * 4 + 0x54a57);
            uVar2 = (ulonglong)uVar14 * (ulonglong)((byte)(&DAT_ram_00055970)[iVar20] - 1 & 0xffff);
            uVar3 = (longlong)(int)uVar14 *
                    (longlong)(int)((byte)(&DAT_ram_00055970)[iVar20] - 1 & 0xffff0000);
            uVar4 = uVar2 + uVar3;
            if (-1 < (longlong)(uVar2 ^ uVar3) && (longlong)(uVar2 ^ uVar4) < 0) {
              uVar4 = 0x7fffffffffffffff;
            }
            iVar9 = iVar9 + (int)uVar4;
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      iVar9 = iVar9 + 7 >> 3;
    }
    if (*(int *)(param_1 + 0xc) == 1) {
      *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar17 + iVar9;
      iVar7 = *(int *)(param_1 + 0x10);
    }
    else {
      *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar17;
      FUN_ram_0003ea50(*(undefined4 *)(param_1 + 0x10),&local_3c,uVar17);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar9;
      iVar7 = *(int *)(param_1 + 0x10) + uVar17;
    }
    FUN_ram_0003ea50(iVar7,&DAT_ram_000b2680,iVar9);
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  return uVar8;
}


