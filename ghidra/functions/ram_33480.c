/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00033480 */

/* WARNING: Removing unreachable block (ram,0x00033566) */
/* WARNING: Removing unreachable block (ram,0x00033580) */

undefined4 FUN_ram_00033480(int param_1,int param_2,undefined4 param_3,int param_4)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  short local_2c [4];
  
  iVar3 = *(int *)(param_2 + 0x14);
  FUN_ram_0004070c(local_2c,8);
  FUN_ram_0004070c(&DAT_ram_000b555c,0x3d0);
  FUN_ram_0004070c(param_4,0x10);
  iVar9 = *(int *)(param_1 + 0x10) + 0x1d;
  DAT_ram_000b3e84 = COUNT0;
  FUN_ram_00033e48(iVar9,local_2c,param_2);
  uVar6 = *(uint *)(param_2 + 0xc);
  if ((uVar6 < 4) && (*(uint *)(param_2 + 0x10) < 4)) {
    bVar2 = (&DAT_ram_0005b8bc)[*(uint *)(param_2 + 0x10) * 4 + uVar6];
    uVar7 = 0;
    do {
      psVar1 = local_2c + uVar7;
      iVar4 = uVar7 * 4;
      uVar7 = uVar7 + 1 & 0xff;
      *(undefined4 *)(iVar4 + param_4) = *(undefined4 *)(&DAT_ram_0005b9ec + *psVar1 * 4);
    } while (uVar7 <= uVar6);
    if (*(int *)(param_2 + 0x1c) == 0) {
      iVar8 = 5;
      iVar4 = 7;
    }
    else {
      iVar8 = 7;
      iVar4 = 9;
    }
    FUN_ram_00033f88(uVar6 + 1 + iVar9 +
                     (uint)*(byte *)(param_2 + 0x26) *
                     ((int)((iVar8 + iVar4 >> 1) * (uint)bVar2) >> 3),&DAT_ram_000b555c,param_2);
    DAT_ram_000b3e88 = COUNT0;
    if (iVar3 == 0) {
      FUN_ram_0004070c(&DAT_ram_000b44bc,0x10a0);
      FUN_ram_00034014(local_2c,&DAT_ram_000b555c,&DAT_ram_000b44bc,param_2);
      FUN_ram_00033374(&DAT_ram_000b44bc,param_3,*(undefined4 *)(param_2 + 0x14),1,
                       *(undefined4 *)(param_2 + 8));
    }
    else {
      FUN_ram_0004070c(param_3,0x800);
      FUN_ram_00034014(local_2c,&DAT_ram_000b555c,param_3,param_2);
    }
    DAT_ram_000b3e8c = COUNT0;
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


