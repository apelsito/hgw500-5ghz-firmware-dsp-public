/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00033610 */

undefined4
FUN_ram_00033610(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (((*(int *)(param_2 + 0x18) == 1) && (param_1 != 0)) &&
     (iVar1 = FUN_ram_00033480(param_1,param_2,param_4,param_5), iVar1 != 0)) {
    iVar1 = FUN_ram_00034568(*(int *)(param_2 + 0xc) + *(int *)(param_1 + 0x10) + 0x1e,param_1,
                             param_2);
    DAT_ram_000b3e90 = COUNT0;
    if (iVar1 != 0) {
      FUN_ram_000342ac(iVar1,param_4,param_3,param_2);
      DAT_ram_000b3e94 = COUNT0;
      return 1;
    }
  }
  return 0;
}


