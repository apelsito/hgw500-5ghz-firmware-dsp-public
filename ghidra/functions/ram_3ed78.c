/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003ed78 */

void FUN_ram_0003ed78(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  undefined1 *puVar1;
  
  if ((param_2 < param_1) && (param_1 < param_2 + param_3)) {
    while (param_3 = param_3 - 1, param_3 != 0xffffffff) {
      param_1[param_3] = param_2[param_3];
    }
  }
  else {
    puVar1 = param_1;
    if (param_3 < 9) {
      while (param_3 = param_3 - 1, param_3 != 0xffffffff) {
        *puVar1 = *param_2;
        param_2 = param_2 + 1;
        puVar1 = puVar1 + 1;
      }
    }
    else {
      FUN_ram_0003ec60(param_1);
    }
  }
  FUN_ram_00029848(param_1);
  return;
}


