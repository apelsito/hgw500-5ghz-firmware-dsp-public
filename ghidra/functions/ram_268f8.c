/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000268f8 */

/* WARNING: Removing unreachable block (ram,0x00026950) */
/* WARNING: Removing unreachable block (ram,0x000269c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_000268f8(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = param_1 * 0x18;
  if ((&DAT_ram_000622dd)[iVar3] == '\0') {
    FUN_ram_00026870();
    if (((&DAT_ram_000622dc)[iVar3] == '\x01') &&
       (*(int *)(&DAT_ram_000622e0 + iVar3) != *(int *)(param_3 + 0x20))) {
      FUN_ram_0003cd1c();
      FUN_ram_0002673c(param_1);
      iVar4 = FUN_ram_000267c8(param_1,0);
      if (iVar4 != 0) {
LAB_ram_00026a56:
        *(undefined4 *)(&DAT_ram_000622e0 + iVar3) = *(undefined4 *)(param_3 + 0x20);
LAB_ram_000269f4:
        *(undefined4 *)(param_2 + 4) = 5;
        *(int *)(iVar4 + 0x3c) = param_2;
        FUN_ram_0003ec60(iVar4 + 4,param_3,0x38);
        FUN_ram_000266a0(param_1,1);
        return iVar4;
      }
      iVar3 = *(int *)(_DAT_ram_e00000bc + 0x54) + 0xff8;
      iVar4 = ((uint)*(ushort *)(param_3 + 0x24) % 10) * 4;
      *(int *)(iVar3 + iVar4 + -0x58) = *(int *)(iVar3 + iVar4 + -0x58) + 1;
    }
    else {
      iVar4 = FUN_ram_00026acc(param_1,*(undefined2 *)(param_2 + 0x60));
      if (iVar4 != 0) {
        FUN_ram_00025b14(*(undefined4 *)(iVar4 + 0x3c));
        goto LAB_ram_000269f4;
      }
      bVar2 = false;
      do {
        uVar5 = 0;
        do {
          iVar4 = FUN_ram_000267c8(param_1,uVar5 & 0xff);
          if (iVar4 != 0) goto LAB_ram_00026a56;
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < 0xc);
        if ((param_1 != 0) || (bVar2)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          FUN_ram_0002673c(1);
        }
        bVar2 = true;
      } while (bVar1);
    }
  }
  else {
    iVar3 = ((uint)*(ushort *)(param_2 + 0x60) % 10) * 4;
    iVar4 = *(int *)(_DAT_ram_e00000bc + 0x54) + 0xff8;
    *(int *)(iVar3 + iVar4 + -0x30) = *(int *)(iVar4 + iVar3 + -0x30) + 1;
  }
  FUN_ram_00025b14(param_2);
  return 0;
}


