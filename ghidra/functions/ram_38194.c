/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00038194 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_00038194(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_50 [28];
  
  iVar8 = param_1 + 0x42;
  iVar5 = param_2 + 0x42;
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar7 = *(uint *)(param_2 + 0x10);
  iVar11 = param_1 + 0x6044;
  iVar12 = param_2 + 0x6044;
  uVar2 = *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18);
  uVar3 = *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18);
  if (*(int *)(param_1 + 0xc) == 2) {
    puVar10 = &DAT_ram_0005b7d0;
  }
  else {
    puVar10 = (undefined1 *)0x5b670;
  }
  iVar1 = FUN_ram_00025e54(*(undefined2 *)(param_1 + 0x28),*(undefined2 *)(param_2 + 0x28));
  iVar6 = iVar5;
  iVar9 = iVar11;
  if ((iVar1 == 0) &&
     (iVar1 = FUN_ram_00025e54(*(undefined2 *)(param_2 + 0x28),*(undefined2 *)(param_1 + 0x28)),
     iVar1 != 0)) {
    uVar4 = *(uint *)(param_2 + 0x10);
    uVar7 = *(uint *)(param_1 + 0x10);
    iVar6 = iVar8;
    iVar8 = iVar5;
    iVar9 = iVar12;
    iVar12 = iVar11;
  }
  if (4 < (int)(uVar7 + uVar4 + 2)) {
    if (1 < (int)uVar4) {
      uVar4 = 1;
    }
    if (1 < (int)uVar7) {
      uVar7 = 1;
    }
  }
  if ((iVar1 == 0) &&
     (iVar1 = FUN_ram_00025dd0(*(undefined2 *)(param_1 + 0x28),*(undefined2 *)(param_2 + 0x28)),
     iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    if ((*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0xf0000) != 0) {
      DAT_ram_000559b4 = 1;
      uVar4 = ((uVar2 & 0x30000) >> 0x10) - 1 & 0xff;
      uVar7 = ((uVar3 & 0xc0000) >> 0x12) - 1 & 0xff;
    }
    DAT_ram_000b3eb4 = COUNT0;
    uVar2 = 0;
    do {
      if (puVar10[uVar2] == '\x01') {
        FUN_ram_0004070c(auStack_50,0x18);
        if (DAT_ram_000559b4 == 1) {
          FUN_ram_000374c8();
        }
        else {
          FUN_ram_000376ac(iVar8,iVar6,iVar9,iVar12,uVar4,uVar7,uVar2,auStack_50,0xdcf83a00);
        }
      }
      else {
        FUN_ram_0004070c(&DAT_ram_000b607c + uVar2 * 0x40,0x40);
      }
      iVar8 = iVar8 + 0x40;
      iVar6 = iVar6 + 0x40;
      uVar2 = uVar2 + 1;
      iVar9 = iVar9 + 0x10;
      iVar12 = iVar12 + 0x10;
    } while (uVar2 < 0x80);
    FUN_ram_00037f30(&DAT_ram_000b607c,uVar4 & 0xff,uVar7 & 0xff,param_3);
    DAT_ram_000b3eb8 = COUNT0;
  }
  return iVar1;
}


