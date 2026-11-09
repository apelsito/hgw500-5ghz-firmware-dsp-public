/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003f308 */

uint FUN_ram_0003f308(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  if ((int)(param_2 ^ param_4) < 0) {
    uVar1 = 0;
    if (((param_1 != 0 || (param_2 & 0x7fffffff) != 0) || param_3 != 0) ||
        (param_4 & 0x7fffffff) != 0) {
      uVar1 = param_2 | 1;
    }
  }
  else if (((param_2 ^ param_4) == 0) && (param_1 == param_3)) {
    uVar1 = 0xffe00000;
    if ((param_4 << 1 < 0xffe00001) && (uVar1 = param_3, param_4 << 1 < 0xffe00000)) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = (param_2 - param_4) - (uint)(param_1 < param_3) ^ param_4;
    if (uVar1 == 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


