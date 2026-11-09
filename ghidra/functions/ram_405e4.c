/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000405e4 */

undefined8 FUN_ram_000405e4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  
  bVar1 = param_2 < param_4;
  if (param_2 == param_4) {
    bVar1 = param_1 < param_3;
  }
  if (!bVar1 && (param_2 != param_4 || param_1 != param_3)) {
    param_1 = param_3;
    param_2 = param_4;
  }
  return CONCAT44(param_2,param_1);
}


