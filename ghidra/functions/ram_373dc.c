/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000373dc */

undefined4
FUN_ram_000373dc(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  short sVar5;
  
  if ((((*(int *)(param_2 + 0x18) == 1) && ((*(uint *)(param_2 + 0x20) & 0x20) == 0)) &&
      (param_1 != 0)) && (iVar1 = FUN_ram_00033480(param_1,param_2,param_4,param_5), iVar1 != 0)) {
    iVar1 = FUN_ram_00034568(*(int *)(param_2 + 0xc) + *(int *)(param_1 + 0x10) + 0x1e,param_1,
                             param_2);
    DAT_ram_000b3e90 = COUNT0;
    if (iVar1 != 0) {
      sVar5 = 0;
      do {
        iVar4 = 0;
        do {
          iVar2 = iVar4 * 2;
          uVar3 = (ushort)*(byte *)(iVar1 + iVar4);
          if (0x7f < uVar3) {
            uVar3 = uVar3 - 0x100;
          }
          iVar4 = (int)(short)((short)iVar4 + 1);
          *(ushort *)(iVar2 + param_3) = uVar3 << 3;
        } while (iVar4 < 0x20);
        sVar5 = sVar5 + 1;
        iVar1 = iVar1 + 0x20;
        param_3 = param_3 + 0x40;
      } while (sVar5 < 0x80);
      DAT_ram_000b3e94 = COUNT0;
      return 1;
    }
  }
  return 0;
}


