/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000291bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 dsp_vector_target_16(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1090) = 0x10;
  uVar1 = STATUS32_L1;
  STATUS32 = uVar1;
  return CONCAT44(param_2,param_1);
}


