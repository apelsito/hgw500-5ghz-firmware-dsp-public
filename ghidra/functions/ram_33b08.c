/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00033b08 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00033b08(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_60 [11];
  
  iVar9 = *(int *)(param_2 + 0x10);
  iVar8 = *(int *)(param_1 + 0x10);
  iVar7 = param_1 + 0x6044;
  iVar6 = param_2 + 0x6044;
  local_60[0] = DAT_ram_00054e0c;
  local_60[1] = DAT_ram_00054e10;
  local_60[2] = DAT_ram_00054e14;
  local_60[3] = DAT_ram_00054e18;
  local_60[4] = DAT_ram_00054e1c;
  local_60[5] = DAT_ram_00054e20;
  if (*(int *)(param_1 + 0xc) == 2) {
    puVar4 = &DAT_ram_0005b7d0;
  }
  else {
    puVar4 = (undefined1 *)0x5b670;
  }
  FUN_ram_0004070c(param_3,0x5c);
  *(undefined4 *)(param_3 + 0x58) = 5;
  if ((iVar8 < 1) || (iVar9 < 1)) {
    *(uint *)(param_3 + 0x58) = (uint)(byte)(&DAT_ram_0005b8ac)[iVar8 * 4 + iVar9];
  }
  iVar2 = *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1198);
  if (iVar2 != 0xf) {
    *(int *)(param_3 + 0x58) = iVar2;
  }
  uVar5 = 1;
  do {
    iVar7 = iVar7 + 0x100;
    iVar6 = iVar6 + 0x100;
    if (puVar4[uVar5 * 0x10] != '\0') {
      FUN_ram_00033694(uVar5 * 0x800 + param_1 + 0x2044,uVar5 * 0x800 + param_2 + 0x2044,iVar7,iVar6
                       ,puVar4,uVar5 * 0x10 & 0xffff,0,local_60,&DAT_ram_000b43dc);
    }
    uVar3 = 0;
    do {
      iVar2 = uVar3 * 4;
      piVar1 = local_60 + uVar3;
      uVar3 = uVar3 + 1 & 0xffff;
      *(int *)(iVar2 + param_3) = *piVar1 + *(int *)(param_3 + iVar2);
    } while (uVar3 < 6);
    uVar5 = uVar5 + 1 & 0xffff;
  } while (uVar5 < 8);
  FUN_ram_00033868(param_3,local_60,param_1 + 0x6844,param_2 + 0x6844,iVar8,iVar9,8);
  return 1;
}


