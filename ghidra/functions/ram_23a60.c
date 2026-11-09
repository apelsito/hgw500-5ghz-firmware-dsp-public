/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00023a60 */

undefined4 FUN_ram_00023a60(int param_1,uint param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 1;
  iVar2 = 0;
  if (((undefined1 *)0xdcf7ffff < param_3) && (param_3 < &DAT_ram_dcfa0000)) {
    iVar2 = 1;
  }
  if (iVar2 == 0) {
    param_3 = param_3 + 0x23060000;
  }
  else {
    param_3 = param_3 + 0x23080000;
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_ram_000212d0(4,s_os_dsp_scheduler_c_ram_00055270,0x3ea);
    if ((param_2 & 3) != 0) {
      param_2 = param_2 & 0xfffffffc;
    }
    FUN_ram_00020c00(param_1 + -0x19f00000,param_3,param_2,iVar2,0);
    FUN_ram_00021650(4,s_os_dsp_scheduler_c_ram_00055270,0x3ff);
  }
  return uVar1;
}


