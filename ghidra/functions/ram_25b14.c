/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00025b14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00025b14(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(_DAT_ram_e00000bc + 0x54);
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = 4;
    *param_1 = 4;
    FUN_ram_00022b58(uVar1,param_1[0x17]);
    *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1068) =
         *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1068) + 1;
    DAT_ram_0005bf00 = DAT_ram_0005bf00 + 1;
  }
  return;
}


