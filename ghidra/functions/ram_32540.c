/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00032540 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00032540(int *param_1,int param_2,undefined2 *param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int local_58;
  undefined *puStack_54;
  undefined4 uStack_40;
  int aiStack_3c [2];
  ulonglong uVar3;
  
  uVar17 = param_1[3] + 1;
  uVar20 = param_1[2];
  uVar16 = param_1[4] + 1;
  local_58 = param_1[7];
  if (*param_1 == 1) {
    DAT_ram_00055970 = DAT_ram_00054a7c;
    DAT_ram_00055971 = DAT_ram_00054a7d;
    DAT_ram_00055972 = DAT_ram_00054a7e;
    DAT_ram_00055973 = DAT_ram_00054a7f;
    DAT_ram_00055974 = DAT_ram_00054a80;
    DAT_ram_00055976 = DAT_ram_00054a82;
    DAT_ram_00055978 = DAT_ram_00054a84;
    DAT_ram_0005597a = DAT_ram_00054a86;
    DAT_ram_0005597c = DAT_ram_00054a88;
    DAT_ram_0005597d = DAT_ram_00054a89;
    DAT_ram_0005597e = DAT_ram_00054a8a;
    DAT_ram_0005597f = DAT_ram_00054a8b;
    DAT_ram_00055980 = DAT_ram_00054a8c;
    DAT_ram_00055981 = DAT_ram_00054a8d;
    DAT_ram_00055982 = DAT_ram_00054a8e;
    DAT_ram_00055983 = DAT_ram_00054a8f;
    if (((local_58 == 1) && (param_1[6] == 1)) && ((param_1[8] & 0x20U) == 0)) {
      local_58 = 3;
    }
    else if (((local_58 == 0) && (param_1[6] == 1)) && ((param_1[8] & 0x20U) == 0)) {
      local_58 = 2;
    }
    else if (((local_58 == 1) && (param_1[6] == 0)) && ((param_1[8] & 0x20U) != 0)) {
      local_58 = 1;
    }
    else {
      local_58 = 0;
    }
    if (param_1[5] == 0) {
      if ((int)uVar20 < 2) {
        if (uVar20 == 0) {
          puStack_54 = &DAT_ram_0005b00c;
        }
        else {
          puStack_54 = &DAT_ram_0005b070;
        }
      }
      else {
        puStack_54 = &DAT_ram_0005b138;
      }
    }
    else if (param_1[5] == 1) {
      if ((int)uVar20 < 2) {
        if (uVar20 == 0) {
          puStack_54 = &DAT_ram_0005b040;
        }
        else {
          puStack_54 = &DAT_ram_0005b0dc;
        }
      }
      else {
        puStack_54 = &DAT_ram_0005b224;
      }
    }
    else if ((int)uVar20 < 2) {
      if (uVar20 == 0) {
        puStack_54 = &DAT_ram_0005b060;
      }
      else {
        puStack_54 = &DAT_ram_0005b118;
      }
    }
    else {
      puStack_54 = &DAT_ram_0005b2a0;
    }
  }
  else {
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
    if (param_1[5] == 0) {
      if (uVar20 == 0) {
        puStack_54 = &DAT_ram_0005aed4;
      }
      else {
        puStack_54 = &DAT_ram_0005af3c;
      }
    }
    else if (param_1[5] == 1) {
      if (uVar20 == 0) {
        puStack_54 = &DAT_ram_0005af0c;
      }
      else {
        puStack_54 = &DAT_ram_0005afb0;
      }
    }
    else if (uVar20 == 0) {
      puStack_54 = &DAT_ram_0005af2c;
    }
    else {
      puStack_54 = &DAT_ram_0005afec;
    }
  }
  uVar19 = uVar17 * 2;
  uVar1 = (ulonglong)uVar19 * (ulonglong)(uVar16 & 0xffff);
  uVar3 = (longlong)(int)uVar19 * (longlong)(int)(uVar16 & 0xffff0000);
  uVar4 = uVar1 + uVar3;
  if (-1 < (longlong)(uVar1 ^ uVar3) && (longlong)(uVar1 ^ uVar4) < 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  iVar2 = (int)uVar4;
  FUN_ram_0004070c(&DAT_ram_000b2620,0x20);
  FUN_ram_0004070c(param_2,((1 << (uVar20 & 0x1f)) << 0xb) >> (param_1[5] & 0x1fU));
  uVar18 = 0;
  uStack_40 = 0;
  if ((int)uVar20 < 2) {
    if (uVar20 == 0) {
      uVar12 = 0x3f;
    }
    else {
      uVar12 = 0x7f;
    }
  }
  else {
    uVar12 = 0xff;
  }
  if ((int)uVar20 < 2) {
    if (uVar20 == 0) {
      uVar13 = 0x40;
    }
    else {
      uVar13 = 0x80;
    }
  }
  else {
    uVar13 = 0x100;
  }
  uVar10 = param_1[5];
  *param_3 = (short)(uVar13 >> (uVar10 & 0x1f));
  if ((int)uVar20 < 2) {
    if (uVar20 == 0) {
      iVar6 = 0x1f;
    }
    else {
      iVar6 = 0x3f;
    }
  }
  else {
    iVar6 = 0x7f;
  }
  if ((int)uVar20 < 2) {
    if (uVar20 == 0) {
      uVar13 = 0xffffffe0;
    }
    else {
      uVar13 = 0xffffffc0;
    }
  }
  else {
    uVar13 = 0xffffff80;
  }
  uVar7 = *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0x8000;
  aiStack_3c[0] = param_4;
  if ((int)uVar13 <= iVar6) {
    while( true ) {
      uVar10 = (uVar12 & uVar13) >> (uVar10 & 0x1f);
      if (((uVar20 == 0) && (0 < (int)uVar13)) && (*param_1 != 1)) {
        uVar10 = uVar10 + 1;
      }
      if (*(int *)(param_5 + 0x74) == 0) {
        uVar1 = (ulonglong)(uVar10 & 0xffff) * 0x20;
        uVar3 = (longlong)(int)(uVar10 & 0xffff0000) * 0x20;
        uVar5 = uVar1 + uVar3;
        if (-1 < (longlong)(uVar1 ^ uVar3) && (longlong)(uVar1 ^ uVar5) < 0) {
          uVar5 = 0x7fffffffffffffff;
        }
        iVar15 = (int)uVar5;
      }
      else {
        uVar1 = (ulonglong)(uint)(iVar2 << 1) * (ulonglong)(uVar10 & 0xffff);
        uVar3 = (longlong)(iVar2 << 1) * (longlong)(int)(uVar10 & 0xffff0000);
        uVar5 = uVar1 + uVar3;
        if (-1 < (longlong)(uVar1 ^ uVar3) && (longlong)(uVar1 ^ uVar5) < 0) {
          uVar5 = 0x7fffffffffffffff;
        }
        iVar15 = (int)uVar5;
      }
      iVar15 = param_2 + iVar15;
      if (uVar13 == (int)(char)puStack_54[uVar18]) {
        if (param_1[1] == 0) {
          uVar1 = (uVar4 & 0xffffffff) * (ulonglong)(uVar18 & 0xffff);
          uVar3 = (longlong)iVar2 * (longlong)(int)(uVar18 & 0xffff0000);
          uVar5 = uVar1 + uVar3;
          if (-1 < (longlong)(uVar1 ^ uVar3) && (longlong)(uVar1 ^ uVar5) < 0) {
            uVar5 = 0x7fffffffffffffff;
          }
          FUN_ram_0003ec60(iVar15,param_4 + (int)uVar5,iVar2);
        }
        else {
          FUN_ram_0002fba0(&DAT_ram_000b2640,aiStack_3c,local_58,
                           *(undefined1 *)(param_1[4] * 4 + uVar17 + 0x54a57),&uStack_40);
          if (((uVar7 != 0) && (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) &&
             (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
            FUN_ram_0002086c(s__d__d__d__d__d__d__d__d__d__d__d_ram_000556b0,(int)DAT_ram_000b2640,
                             (int)DAT_ram_000b2642,(int)DAT_ram_000b2644,(int)DAT_ram_000b2646,
                             (int)DAT_ram_000b2648,(int)DAT_ram_000b264a,(int)DAT_ram_000b264c,
                             (int)DAT_ram_000b264e,(int)DAT_ram_000b2650,(int)DAT_ram_000b2652,
                             (int)DAT_ram_000b2654,(int)DAT_ram_000b2656);
          }
          FUN_ram_0002dc34(&DAT_ram_000b2620,&DAT_ram_000b2640,param_1[4],param_1[3]);
          if (*(int *)(param_5 + 0x74) == 0) {
            FUN_ram_0003ec60(iVar15,&DAT_ram_000b2620,0x20);
          }
          else {
            iVar14 = 0;
            if (0 < (int)uVar16) {
              do {
                iVar11 = 0;
                if (0 < (int)uVar19) {
                  uVar1 = (ulonglong)(uint)(iVar14 << 1) * (ulonglong)(uVar17 & 0xffff);
                  uVar3 = (longlong)(iVar14 << 1) * (longlong)(int)(uVar17 & 0xffff0000);
                  uVar5 = uVar1 + uVar3;
                  if (-1 < (longlong)(uVar1 ^ uVar3) && (longlong)(uVar1 ^ uVar5) < 0) {
                    uVar5 = 0x7fffffffffffffff;
                  }
                  do {
                    iVar9 = iVar14 * 8 + iVar11;
                    iVar8 = (int)uVar5 + iVar11;
                    iVar11 = iVar11 + 1;
                    *(undefined1 *)(iVar8 + iVar15) = (&DAT_ram_000b2620)[iVar9];
                  } while (iVar11 < (int)uVar19);
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar16);
            }
          }
        }
        uVar18 = uVar18 + 1;
      }
      uVar13 = uVar13 + 1;
      if (iVar6 < (int)uVar13) break;
      uVar10 = param_1[5];
    }
  }
  if (uVar7 != 0) {
    if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
       (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
      FUN_ram_0002086c(s_tk____d__aid____d__nr____d__nc___ram_000556d8,param_1[8],(short)param_1[9],
                       param_1[4],param_1[3],param_1[6],param_1[7],
                       *(undefined1 *)(param_1[4] * 4 + uVar17 + 0x54a57));
    }
    *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) =
         *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0xffff7fff;
  }
  return;
}


