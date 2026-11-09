/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003ff0c */

undefined8 FUN_ram_0003ff0c(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = 0;
    if (param_1 < 0x10000) {
      iVar2 = 0x10;
      uVar1 = param_1;
    }
    else {
      uVar1 = param_1 >> 0x10;
    }
    if (uVar1 < 0x100) {
      iVar2 = iVar2 + 8;
    }
    else {
      uVar1 = uVar1 >> 8;
    }
    if (uVar1 < 0x10) {
      iVar2 = iVar2 + 4;
    }
    else {
      uVar1 = uVar1 >> 4;
    }
    if (uVar1 < 4) {
      iVar2 = iVar2 + 2;
    }
    else {
      uVar1 = uVar1 >> 2;
    }
    if (uVar1 < 2) {
      iVar2 = iVar2 + 1;
    }
    return CONCAT44(((int)(param_1 << iVar2) >> 0xb) + ((0x1f - iVar2) * 0x100000 | 0x40000000U),
                    (param_1 << iVar2) << 0x15);
  }
  return 0;
}


