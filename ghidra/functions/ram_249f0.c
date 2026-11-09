/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000249f0 */

/* WARNING: Removing unreachable block (ram,0x00024a3a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000249f0(undefined4 param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  short sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_80 [84];
  undefined4 uStack_2c;
  int iVar4;
  
  iVar3 = FUN_ram_000268f8(0,param_1,param_2);
  if (iVar3 == 0) {
    iVar6 = ((uint)*(ushort *)(param_2 + 0x24) % 10) * 4;
    iVar3 = *(int *)(_DAT_ram_e00000bc + 0x54) + 0xff8;
    *(int *)(iVar6 + iVar3 + -0x80) = *(int *)(iVar3 + iVar6 + -0x80) + 1;
    return;
  }
  uVar8 = 0;
  if (1 < DAT_ram_000622f0) {
    do {
      iVar3 = FUN_ram_00026a8c(0,uVar8 & 0xff);
      uVar7 = (uint)(char)((char)uVar8 + '\x01');
      uVar1 = uVar7;
      if (iVar3 != 0) {
        for (; (int)uVar1 < 0xc; uVar1 = (int)(char)((char)uVar1 + '\x01')) {
          iVar6 = FUN_ram_00026a8c(0,uVar1 & 0xff);
          if (iVar6 != 0) {
            sVar5 = *(short *)(iVar6 + 0x28);
            sVar2 = *(short *)(iVar3 + 0x28);
            if (sVar2 == sVar5) {
              FUN_ram_00027a28();
              sVar2 = *(short *)(iVar3 + 0x28);
              sVar5 = *(short *)(iVar6 + 0x28);
            }
            iVar4 = FUN_ram_000279f0(sVar2,sVar5);
            if (((iVar4 == 0) || ((*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 2) != 0))
               && (*(char *)(iVar3 + 0x38) == *(char *)(iVar6 + 0x38))) {
              if ((*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 2) == 0) {
                iVar4 = FUN_ram_00036978(iVar3,iVar6,auStack_80);
              }
              else {
                iVar4 = FUN_ram_00028478();
              }
              FUN_ram_0002495c(iVar3,iVar6,uStack_2c,uVar8,uVar1);
              if (iVar4 == 0) {
                *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x10e0) =
                     *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x10e0) + 1;
              }
              else {
                *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x10dc) =
                     *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x10dc) + 1;
                if (*(int *)(iVar6 + 0x6844) < *(int *)(iVar3 + 0x6844)) {
                  FUN_ram_000274f8(iVar6,iVar3,auStack_80);
                }
                else {
                  FUN_ram_000274f8(iVar3,iVar6,auStack_80);
                }
              }
            }
          }
        }
      }
      uVar8 = uVar7;
    } while ((int)uVar7 < 0xc);
    FUN_ram_00027d34();
    return;
  }
  return;
}


