/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00024f6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_00024f6c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  int *local_3c;
  int *local_38;
  int local_34;
  
  uVar9 = 0;
  uVar7 = 0;
  iVar1 = FUN_ram_000273ac();
  if (0 < iVar1) {
    do {
      local_3c = (int *)0x0;
      local_38 = (int *)0x0;
      local_34 = 0;
      uVar8 = uVar9 & 0xff;
      iVar1 = FUN_ram_00027670(uVar8,&local_3c,&local_38,&local_34);
      if ((iVar1 != 0) && (iVar2 = FUN_ram_00027e1c(uVar8), iVar2 != 0)) {
        if (((local_3c == (int *)0x0) || (local_38 == (int *)0x0)) && (iVar1 == 0)) {
          *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1168) =
               *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1168) + 1;
        }
        else if (((local_3c == (int *)0x0) || (local_38 == (int *)0x0)) ||
                ((*local_3c != 0 && (*local_38 != 0)))) {
          if ((local_3c != (int *)0x0) && (local_38 != (int *)0x0)) {
            if ((short)local_38[10] == (short)local_3c[10]) {
              FUN_ram_00027a28();
              goto LAB_ram_00025170;
            }
          }
          iVar2 = COUNT0;
          if (local_34 == 0) {
            local_34 = FUN_ram_00036a4c(local_3c,local_38,&DAT_ram_0005ab88);
            if (local_34 != 0) {
              FUN_ram_00036c20(local_34,&DAT_ram_0005ab88);
            }
          }
          if (local_34 == 0) {
            *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x10e4) =
                 *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x10e4) + 1;
          }
          else {
            iVar5 = COUNT0;
            iVar6 = *(int *)(_DAT_ram_e00000bc + 0x54);
            uVar10 = FUN_ram_0004065c(iVar5 - iVar2,0,2);
            uVar10 = FUN_ram_0004046c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000000,0);
            uVar10 = FUN_ram_0004046c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),6,0);
            iVar2 = FUN_ram_000405e4((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),7,0);
            iVar6 = iVar6 + 0xff8;
            *(int *)(iVar2 * 4 + iVar6 + 0x14c) = *(int *)(iVar6 + iVar2 * 4 + 0x14c) + 1;
            iVar2 = *(int *)(_DAT_ram_e00000bc + 0x54) + 0xff8;
            iVar5 = (*(byte *)(local_34 + 1) - 1) * 4;
            *(int *)(iVar2 + iVar5 + 0xf0) = *(int *)(iVar2 + iVar5 + 0xf0) + 1;
            *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + iVar5 + 0x110c) =
                 (uint)*(ushort *)(local_34 + 4);
            *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + iVar5 + 0x1118) =
                 (uint)*(ushort *)(local_34 + 6);
            uVar4 = *(undefined4 *)(iVar1 + 0x54);
            *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + iVar5 + 0x1124) = uVar4;
            *(undefined4 *)(local_34 + 8) = uVar4;
            uVar3 = 1 - uVar7;
            if (1 < uVar7) {
              uVar3 = 0;
            }
            FUN_ram_000248b4(local_34,uVar3 & 0xff);
            FUN_ram_00027828(uVar8,local_34);
            uVar7 = uVar7 + 1;
          }
          FUN_ram_000277b8(uVar8);
        }
      }
LAB_ram_00025170:
      uVar9 = uVar9 + 1;
      iVar1 = FUN_ram_000273ac();
    } while (((int)uVar9 < iVar1) && ((int)uVar7 < 3));
  }
  if (uVar7 != 0) {
    FUN_ram_00022b58(*(undefined4 *)(_DAT_ram_e00000bc + 0x54),0x17);
    *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x106c) =
         *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x106c) + uVar7;
  }
  return uVar7 & 0xff;
}


