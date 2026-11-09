/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00028e2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 dsp_vector_target_05(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  CONTROL1 = 0;
  COUNT1 = 0;
  *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1090) = 5;
  *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x108c) =
       *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x108c) + 1;
  LIMIT1 = 25000;
  CONTROL1 = 3;
  COUNT1 = 0;
  uVar1 = STATUS32_L2;
  STATUS32 = uVar1;
  return CONCAT44(param_2,param_1);
}


