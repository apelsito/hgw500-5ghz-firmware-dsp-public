/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000405f8 */

void FUN_ram_000405f8(uint param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0x20;
  if ((param_2 != 0) && (param_1 = param_3, param_4 != 0)) {
    LP_START = 0x4061e;
    LP_END = 0x40634;
    do {
      iVar1 = iVar1 + -1;
      param_1 = param_2;
    } while (iVar1 != 0);
  }
  iVar1 = 0x20;
  LP_START = 0x4063c;
  LP_END = 0x40658;
  do {
    param_1 = param_1 >> 1;
    if (param_1 == 0) {
      iVar1 = 1;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


