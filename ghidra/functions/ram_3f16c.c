/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003f16c */

undefined *
FUN_ram_0003f16c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                uint *param_5)

{
  undefined *puVar1;
  
  if (((uint)param_1[1] >> 0x14 & 0x7ff) == 0x7ff) {
    *param_4 = 0;
    *param_5 = (uint)param_1[1] >> 0x1f;
    if (((param_1[1] & 0xfffffU) == 0) && (*param_1 == 0)) {
      puVar1 = *(undefined **)(PTR_DAT_ram_000559d4_ram_0003f2bc + 0xc);
    }
    else {
      puVar1 = *(undefined **)(PTR_DAT_ram_000559d4_ram_0003f2bc + 8);
    }
  }
  else if (((param_1[1] & 0x7fffffffU) == 0) && (*param_1 == 0)) {
    *param_4 = 1;
    *param_5 = (uint)param_1[1] >> 0x1f;
    puVar1 = PTR_DAT_ram_00055224_ram_0003f2c0;
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}


