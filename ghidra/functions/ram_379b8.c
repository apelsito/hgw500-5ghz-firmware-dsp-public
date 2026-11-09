/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000379b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_000379b8(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_50 [7];
  
  iVar8 = param_2 + 0x6044;
  iVar7 = param_1 + 0x6044;
  iVar10 = *(int *)(param_1 + 0x10);
  iVar9 = *(int *)(param_2 + 0x10);
  local_50[0] = DAT_ram_00054fa4;
  local_50[1] = DAT_ram_00054fa8;
  local_50[2] = DAT_ram_00054fac;
  local_50[3] = DAT_ram_00054fb0;
  local_50[4] = DAT_ram_00054fb4;
  local_50[5] = DAT_ram_00054fb8;
  if (*(int *)(param_1 + 0xc) == 2) {
    puVar6 = &DAT_ram_0005b7d0;
  }
  else {
    puVar6 = (undefined1 *)0x5b670;
  }
  if (iVar9 + iVar10 < 5) {
    FUN_ram_0004070c(param_3,0x5c);
    *(undefined4 *)(param_3 + 0x58) = 5;
    if ((iVar10 < 1) || (iVar9 < 1)) {
      *(uint *)(param_3 + 0x58) = (uint)(byte)(&DAT_ram_0005b8ac)[iVar10 * 4 + iVar9];
    }
    iVar5 = *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1198);
    if (iVar5 != 0xf) {
      *(int *)(param_3 + 0x58) = iVar5;
    }
    iVar5 = 1;
    do {
      iVar7 = iVar7 + 0x100;
      iVar8 = iVar8 + 0x100;
      if (puVar6[iVar5 * 0x10] != '\0') {
        if (DAT_ram_000559b4 == 1) {
          FUN_ram_000374c8();
        }
        else {
          FUN_ram_000376ac(iVar5 * 0x400 + param_1 + 0x42,iVar5 * 0x400 + param_2 + 0x42,iVar7,iVar8
                           ,iVar10,iVar9,iVar5 * 0x10,local_50,0xdcf83a00);
        }
      }
      uVar4 = 0;
      do {
        iVar3 = uVar4 * 4;
        piVar1 = local_50 + uVar4;
        uVar4 = uVar4 + 1;
        *(int *)(iVar3 + param_3) = *piVar1 + *(int *)(param_3 + iVar3);
      } while (uVar4 < 6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
    FUN_ram_00033868(param_3,local_50,param_1 + 0x6844,param_2 + 0x6844,iVar10,iVar9,8);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


