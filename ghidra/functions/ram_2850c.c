/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002850c */

undefined4 FUN_ram_0002850c(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 0xdcf80000) || (param_2 + param_1 != DAT_ram_0005596c)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    DAT_ram_0005596c = param_1;
  }
  return uVar1;
}


