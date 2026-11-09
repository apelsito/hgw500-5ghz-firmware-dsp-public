/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000293c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 dsp_vector_target_20(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  DAT_ram_0005c000 = DAT_ram_0005c000 + 1;
  _DAT_ram_e0000060 = _DAT_ram_e0000060 & 0xff7fffff;
  uVar1 = STATUS32_L2;
  STATUS32 = uVar1;
  return CONCAT44(param_2,param_1);
}


