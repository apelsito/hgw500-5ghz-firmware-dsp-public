/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00028f74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 dsp_vector_target_10(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar4 = AUX_MACMODE;
  uVar5 = AUX_XMAC0;
  uVar6 = AUX_XMAC1;
  uVar7 = AUX_XMAC2;
  uVar8 = AUX_XMACLW_H;
  uVar9 = AUX_XMACLW_L;
  uVar1 = LP_START;
  uVar2 = LP_END;
  uVar3 = STATUS32;
  *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1090) = 10;
  FUN_ram_000208bc();
  *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1084) =
       *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1084) + 1;
  if (_DAT_ram_e0000024 >> 0x10 != 0) {
    _DAT_ram_e0000024 = _DAT_ram_e0000024 & 0xffff0000;
  }
  STATUS32 = uVar3;
  LP_END = uVar2;
  LP_START = uVar1;
  AUX_XMACLW_L = uVar9;
  AUX_XMACLW_H = uVar8;
  AUX_XMAC2 = uVar7;
  AUX_XMAC1 = uVar6;
  AUX_XMAC0 = uVar5;
  AUX_MACMODE = uVar4;
  uVar1 = STATUS32_L2;
  STATUS32 = uVar1;
  return CONCAT44(param_2,param_1);
}


