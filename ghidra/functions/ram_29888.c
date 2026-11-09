/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00029888 */

undefined8 FUN_ram_00029888(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_3 & 0x3f;
  if (uVar2 == 0) {
    return CONCAT44(param_2,param_1);
  }
  uVar1 = 0x20 - uVar2;
  if (uVar1 != 0 && uVar2 < 0x21) {
    return CONCAT44(param_2 >> (param_3 & 0x1f),
                    param_1 >> (param_3 & 0x1f) | param_2 << (uVar1 & 0x1f));
  }
  return CONCAT44(param_2 >> 0x1f,param_2 >> (-uVar1 & 0x1f));
}


