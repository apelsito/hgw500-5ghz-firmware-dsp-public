/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000291f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dsp_vector_target_17(void)

{
  undefined4 uVar1;
  
  uVar1 = AUX_MACMODE;
  uVar1 = AUX_XMAC0;
  uVar1 = AUX_XMAC1;
  uVar1 = AUX_XMAC2;
  uVar1 = AUX_XMACLW_H;
  uVar1 = AUX_XMACLW_L;
  uVar1 = LP_START;
  uVar1 = LP_END;
  uVar1 = STATUS32;
  *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1090) = 0x11;
  FUN_ram_00020a7c();
  return;
}


