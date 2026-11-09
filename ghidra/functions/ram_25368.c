/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00025368 */

/* WARNING: Removing unreachable block (ram,0x00025484) */
/* WARNING: Removing unreachable block (ram,0x000253d4) */
/* WARNING: Removing unreachable block (ram,0x000254f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00025368(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_58;
  undefined1 auStack_54 [12];
  uint uStack_48;
  uint uStack_44;
  int iStack_3c;
  uint uStack_34;
  ushort local_30;
  
  iVar3 = *(int *)(_DAT_ram_e00000bc + 0x54);
  DAT_ram_00055944 = COUNT0;
  iVar1 = FUN_ram_00023b14(param_1,auStack_54,&local_58);
  if (iVar1 == 0) {
    *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x117c) =
         *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x117c) + 1;
    FUN_ram_00025b14(param_1);
  }
  else {
    if ((iStack_3c == 0) && ((uStack_34 & 0x20) != 0)) {
      iVar1 = ((uint)*(ushort *)(param_1 + 0x60) % 10) * 4;
      iVar2 = *(int *)(_DAT_ram_e00000bc + 0x54) + 0xff8;
      *(int *)(iVar1 + iVar2 + -0x120) = *(int *)(iVar2 + iVar1 + -0x120) + 1;
      FUN_ram_00023fc8(param_1,auStack_54,iVar3 + 0xe08,local_58);
    }
    else {
      if ((iStack_3c == 1) && ((((uStack_34 & 0x20) == 0 && (uStack_48 < 4)) && (uStack_44 < 4)))) {
        *(short *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x10d4) =
             (short)*(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1198);
        iVar1 = FUN_ram_00025994(param_1,auStack_54);
        if (iVar1 == 0) {
          FUN_ram_00025b14();
          return;
        }
        FUN_ram_00024e14(param_1,auStack_54);
        goto LAB_ram_000254da;
      }
      iVar1 = ((uint)*(ushort *)(param_1 + 0x60) % 10) * 4;
      iVar3 = *(int *)(_DAT_ram_e00000bc + 0x54) + 0xff8;
      *(int *)(iVar1 + iVar3 + -0xa8) = *(int *)(iVar3 + iVar1 + -0xa8) + 1;
    }
    FUN_ram_00025b14(param_1);
  }
LAB_ram_000254da:
  DAT_ram_00055948 = COUNT0;
  iVar1 = *(int *)(_DAT_ram_e00000bc + 0x54) + 0xff8;
  iVar3 = ((uint)local_30 % 10) * 4;
  *(int *)(iVar1 + iVar3 + -0x148) = *(int *)(iVar1 + iVar3 + -0x148) + 1;
  return;
}


