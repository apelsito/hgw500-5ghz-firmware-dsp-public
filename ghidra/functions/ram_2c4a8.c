/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002c4a8 */

int FUN_ram_0002c4a8(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0x7f;
  switch(param_1 >> 7 & 3) {
  case 0:
    return *(int *)(&DAT_ram_00054ad8 + uVar1 * 4);
  case 1:
    return -*(int *)(&DAT_ram_00054ad8 + (0x80 - uVar1) * 4);
  case 2:
    return -*(int *)(&DAT_ram_00054ad8 + uVar1 * 4);
  case 3:
    return *(int *)(&DAT_ram_00054ad8 + (0x80 - uVar1) * 4);
  default:
    return 0;
  }
}


