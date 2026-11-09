/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00033cd4 */

int FUN_ram_00033cd4(int param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_50 [28];
  
  iVar7 = param_1 + 0x2044;
  iVar9 = param_2 + 0x2044;
  iVar10 = param_1 + 0x6044;
  iVar11 = param_2 + 0x6044;
  uVar1 = *(undefined2 *)(param_1 + 0x28);
  uVar2 = *(undefined2 *)(param_2 + 0x28);
  if (*(int *)(param_1 + 0xc) == 2) {
    puVar4 = &DAT_ram_0005b7d0;
  }
  else {
    puVar4 = (undefined1 *)0x5b670;
  }
  iVar3 = FUN_ram_00025e54(uVar1,uVar2);
  iVar5 = iVar11;
  iVar6 = iVar9;
  if ((iVar3 == 0) && (iVar3 = FUN_ram_00025e54(uVar2,uVar1), iVar3 != 0)) {
    iVar5 = iVar10;
    iVar10 = iVar11;
    iVar6 = iVar7;
    iVar7 = iVar9;
  }
  if ((iVar3 == 0) && (iVar3 = FUN_ram_00025dd0(uVar1,uVar2), iVar3 == 0)) {
    iVar3 = 0;
  }
  else {
    DAT_ram_000b3e98 = 0;
    DAT_ram_000b3ea4 = 0;
    DAT_ram_000b3ea8 = 0xf;
    DAT_ram_000b3ebc = 0;
    uVar8 = 0;
    do {
      FUN_ram_00033694(iVar7,iVar6,iVar10,iVar5,puVar4,uVar8 & 0xffff,1,auStack_50,&DAT_ram_000b43dc
                      );
      FUN_ram_0003553c(&DAT_ram_000b43dc,uVar8,param_3);
      iVar7 = iVar7 + 0x80;
      iVar6 = iVar6 + 0x80;
      uVar8 = uVar8 + 1;
      iVar10 = iVar10 + 0x10;
      iVar5 = iVar5 + 0x10;
    } while (uVar8 < 0x80);
  }
  return iVar3;
}


