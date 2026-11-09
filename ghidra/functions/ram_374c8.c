/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000374c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000374c8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                     int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_ram_0004070c(0xdcf83900,0x80);
  FUN_ram_0004070c(0xdcf83980,0x80);
  FUN_ram_0004070c(0xdcf83800,0x80);
  FUN_ram_0004070c(0xdcf83880,0x80);
  iVar3 = 0;
  do {
    iVar4 = 0;
    if (-1 < param_5) {
      do {
        iVar1 = (iVar3 * 4 + iVar4) * 4;
        iVar2 = iVar4 * 8 + iVar3 * 0x20;
        *(int *)(iVar2 + -0x2307c700) = (int)*(short *)(param_1 + iVar1);
        iVar4 = iVar4 + 1;
        *(int *)(iVar2 + -0x2307c6fc) = (int)*(short *)(iVar1 + param_1 + 2);
      } while (iVar4 <= param_5);
    }
    iVar4 = 0;
    if (-1 < param_6) {
      do {
        iVar1 = (iVar3 * 4 + iVar4) * 4;
        iVar2 = iVar4 * 8 + iVar3 * 0x20;
        *(int *)(iVar2 + -0x2307c680) = (int)*(short *)(param_2 + iVar1);
        iVar4 = iVar4 + 1;
        *(int *)(iVar2 + -0x2307c67c) = (int)*(short *)(iVar1 + param_2 + 2);
      } while (iVar4 <= param_6);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  if ((*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0x100) != 0) {
    FUN_ram_0003cc80(0xdcf83900);
    FUN_ram_0003cc80(0xdcf83980);
  }
  iVar4 = param_6 + 1;
  iVar3 = param_5 + 1;
  if (iVar4 == 1) {
    FUN_ram_000397d0(0xdcf83800,0xdcf83900,0xdcf83980,4,iVar3);
  }
  else if (iVar4 == 2) {
    FUN_ram_00039d28();
  }
  else if (iVar4 == 3) {
    FUN_ram_0003a2dc();
  }
  if (iVar3 == 1) {
    FUN_ram_000397d0(0xdcf83880,0xdcf83980,0xdcf83900,4,iVar4);
  }
  else if (iVar3 == 2) {
    FUN_ram_00039d28();
  }
  else if (iVar3 == 3) {
    FUN_ram_0003a2dc();
  }
  FUN_ram_000388c8(0xdcf83800,0xdcf83880,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                   param_8,param_9);
  return;
}


