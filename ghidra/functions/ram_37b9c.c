/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00037b9c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00037b9c(int param_1,uint param_2,undefined1 *param_3,int param_4,int param_5,
                     int param_6,int param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int iStack_c4;
  short asStack_b8 [32];
  short local_78 [4];
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  
  FUN_ram_0004070c(local_78,0x40,*(int *)(_DAT_ram_e00000bc + 0x54),
                   *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18));
  iStack_c4 = 0;
  do {
    iVar8 = 0;
    do {
      iVar6 = param_1 + iStack_c4 * 0x40 + iVar8 * 0x10;
      FUN_ram_0003ec60(asStack_b8 + iVar8 * 8,iVar6,param_6 * 4);
      FUN_ram_0003ec60(asStack_b8 + iVar8 * 8 + param_6 * 2,iVar6 + param_4 * 4 + 4,param_7 << 2);
      if ((*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0x10) != 0) {
        FUN_ram_0004070c(asStack_b8 + iVar8 * 8,param_6 * 4);
      }
      if ((*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0x20) != 0) {
        FUN_ram_0004070c(asStack_b8 + iVar8 * 8 + param_6 * 2,param_7 << 2);
      }
      iVar6 = 0;
      if (0 < param_6 + param_7) {
        do {
          uVar1 = (ulonglong)(uint)(int)asStack_b8[iVar8 * 8 + iVar6 * 2] *
                  (ulonglong)(param_2 & 0xffff);
          uVar2 = (longlong)(int)asStack_b8[iVar8 * 8 + iVar6 * 2] *
                  (longlong)(int)(param_2 & 0xffff0000);
          uVar3 = uVar1 + uVar2;
          if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
            uVar3 = 0x7fffffffffffffff;
          }
          sVar4 = asStack_b8[iVar8 * 8 + iVar6 * 2 + 1];
          local_78[iVar8 * 8 + iVar6 * 2] = (short)((int)uVar3 + 0x20000 >> 0x12);
          uVar1 = (ulonglong)(uint)(int)sVar4 * (ulonglong)(param_2 & 0xffff);
          uVar2 = (longlong)(int)sVar4 * (longlong)(int)(param_2 & 0xffff0000);
          uVar3 = uVar1 + uVar2;
          if (-1 < (longlong)(uVar1 ^ uVar2) && (longlong)(uVar1 ^ uVar3) < 0) {
            uVar3 = 0x7fffffffffffffff;
          }
          local_78[iVar8 * 8 + iVar6 * 2 + 1] = (short)((int)uVar3 + 0x20000 >> 0x12);
          iVar5 = iVar6 + 1;
          puVar7 = param_3 + 1;
          *param_3 = (char)local_78[iVar8 * 8 + iVar6 * 2];
          param_3 = param_3 + 2;
          *puVar7 = (char)local_78[iVar8 * 8 + iVar6 * 2 + 1];
          iVar6 = iVar5;
        } while (iVar5 < param_6 + param_7);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 4);
    if (((param_6 == param_4 + 1) && (param_7 == param_5 + 1)) &&
       ((*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0x4000) != 0)) {
      if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
         (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
        FUN_ram_0002086c(&LAB_ram_0005581c);
      }
      if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
         (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
        FUN_ram_0002086c(&PTR_DAT_ram_000a6425_ram_00055820,iStack_c4);
      }
      if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
         (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
        FUN_ram_0002086c(s__d__d__d__d__d__d__d__d_ram_00055824,(int)local_78[0],(int)local_78[1],
                         (int)local_78[2],(int)local_78[3],(int)local_70,(int)local_6e,(int)local_6c
                         ,(int)local_6a);
      }
      if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
         (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
        FUN_ram_0002086c(s__d__d__d__d__d__d__d__d_ram_00055824,(int)local_68,(int)local_66,
                         (int)local_64,(int)local_62,(int)local_60,(int)local_5e,(int)local_5c,
                         (int)local_5a);
      }
      if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
         (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
        FUN_ram_0002086c(s__d__d__d__d__d__d__d__d_ram_00055824,(int)local_58,(int)local_56,
                         (int)local_54,(int)local_52,(int)local_50,(int)local_4e,(int)local_4c,
                         (int)local_4a);
      }
      if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
         (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
        FUN_ram_0002086c(s__d__d__d__d__d__d__d__d_ram_00055824,(int)local_48,(int)local_46,
                         (int)local_44,(int)local_42,(int)local_40,(int)local_3e,(int)local_3c,
                         (int)local_3a);
      }
      if (iStack_c4 == 0x7f) {
        *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) =
             *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0xffffbfff;
      }
    }
    iStack_c4 = iStack_c4 + 1;
  } while (iStack_c4 < 0x80);
  return;
}


