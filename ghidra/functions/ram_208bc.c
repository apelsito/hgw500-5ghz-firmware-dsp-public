/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000208bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000208bc(void)

{
  undefined4 uVar1;
  undefined4 in_ilink1;
  undefined4 in_ilink2;
  undefined4 in_blink;
  
  uVar1 = COUNT0;
  *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x10b4) = uVar1;
  *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x10a4) = in_ilink1;
  *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x10a8) = in_ilink2;
  *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x10ac) = in_blink;
  uVar1 = STATUS32_L1;
  *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x109c) = uVar1;
  uVar1 = STATUS32_L2;
  *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x10a0) = uVar1;
  *(undefined1 **)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x10b0) = &stack0xfffffff8;
  uVar1 = STATUS32;
  *(undefined4 *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1098) = uVar1;
  return;
}


